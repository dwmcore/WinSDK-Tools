/**************************************************************************

Copyright (c) 2001-2019, Intel Corporation
All rights reserved.

Source code in this module is released to Microsoft per agreement INTC093053_DA
solely for the purpose of supporting Intel Ethernet hardware in the Ethernet
transport layer of Microsoft's Kernel Debugger.

***************************************************************************/

/**************************************************************************

Copyright (c) 2001-2014, Intel Corporation
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 3. Neither the name of the Intel Corporation nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

***************************************************************************/

#include "i40e_status.h"
#include "i40e_type.h"
#include "i40e_register.h"
#include "i40e_adminq.h"
#include "i40e_prototype.h"
#ifdef INTEL_KDNET
#include "i40e.h"
#endif

#ifdef INTEL_KDNET
struct i40e_asq_cmd_details gAsqCmdBuffer[I40E_NUM_AQ_DESCRIPTORS] = { 0 };
struct i40e_dma_mem gAsqDmaMemory[I40E_NUM_AQ_DESCRIPTORS] = { 0 };
struct i40e_dma_mem gArqDmaMemory[I40E_NUM_AQ_DESCRIPTORS] = { 0 };
#endif

/**
 *  i40e_adminq_init_regs - Initialize AdminQ registers
 *  @hw: pointer to the hardware structure
 *
 *  This assumes the alloc_asq and alloc_arq functions have already been called
 **/
STATIC void i40e_adminq_init_regs(struct i40e_hw *hw)
{
    /* set head and tail registers in our local struct */
    if (i40e_is_vf(hw)) {
        hw->aq.asq.tail = I40E_VF_ATQT1;
        hw->aq.asq.head = I40E_VF_ATQH1;
        hw->aq.asq.len = I40E_VF_ATQLEN1;
        hw->aq.asq.bal = I40E_VF_ATQBAL1;
        hw->aq.asq.bah = I40E_VF_ATQBAH1;
        hw->aq.arq.tail = I40E_VF_ARQT1;
        hw->aq.arq.head = I40E_VF_ARQH1;
        hw->aq.arq.len = I40E_VF_ARQLEN1;
        hw->aq.arq.bal = I40E_VF_ARQBAL1;
        hw->aq.arq.bah = I40E_VF_ARQBAH1;
#ifdef I40E_QV
    }
    else if (hw->aq_dbg_ena) {
        hw->aq.asq.tail = I40E_GL_ATQT;
        hw->aq.asq.head = I40E_GL_ATQH;
        hw->aq.asq.len = I40E_GL_ATQLEN;
        hw->aq.asq.bal = I40E_GL_ATQBAL;
        hw->aq.asq.bah = I40E_GL_ATQBAH;
        hw->aq.arq.tail = I40E_GL_ARQT;
        hw->aq.arq.head = I40E_GL_ARQH;
        hw->aq.arq.len = I40E_GL_ARQLEN;
        hw->aq.arq.bal = I40E_GL_ARQBAL;
        hw->aq.arq.bah = I40E_GL_ARQBAH;
#endif
#ifdef PF_DRIVER
    }
    else {
        hw->aq.asq.tail = I40E_PF_ATQT;
        hw->aq.asq.head = I40E_PF_ATQH;
        hw->aq.asq.len = I40E_PF_ATQLEN;
        hw->aq.asq.bal = I40E_PF_ATQBAL;
        hw->aq.asq.bah = I40E_PF_ATQBAH;
        hw->aq.arq.tail = I40E_PF_ARQT;
        hw->aq.arq.head = I40E_PF_ARQH;
        hw->aq.arq.len = I40E_PF_ARQLEN;
        hw->aq.arq.bal = I40E_PF_ARQBAL;
        hw->aq.arq.bah = I40E_PF_ARQBAH;
#endif
    }
}

/**
 *  i40e_alloc_adminq_asq_ring - Allocate Admin Queue send rings
 *  @hw: pointer to the hardware structure
 **/
enum i40e_status_code i40e_alloc_adminq_asq_ring(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code;

    ret_code = i40e_allocate_dma_mem(hw, &hw->aq.asq.desc_buf,
        i40e_mem_atq_ring,
        (hw->aq.num_asq_entries *
            sizeof(struct i40e_aq_desc)),
        I40E_ADMINQ_DESC_ALIGNMENT);

    if (ret_code)
        return ret_code;

#ifndef INTEL_KDNET
    ret_code = i40e_allocate_virt_mem(hw, &hw->aq.asq.cmd_buf,
        (hw->aq.num_asq_entries *
            sizeof(struct i40e_asq_cmd_details)));

    if (ret_code) {
        i40e_free_dma_mem(hw, &hw->aq.asq.desc_buf);
        return ret_code;
    }
#else
    hw->aq.asq.cmd_buf.va = gAsqCmdBuffer;
    hw->aq.asq.cmd_buf.size = (hw->aq.num_asq_entries *
        sizeof(struct i40e_asq_cmd_details));
    ret_code = I40E_SUCCESS;
#endif
    return ret_code;
}

/**
 *  i40e_alloc_adminq_arq_ring - Allocate Admin Queue receive rings
 *  @hw: pointer to the hardware structure
 **/
enum i40e_status_code i40e_alloc_adminq_arq_ring(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code;

    ret_code = i40e_allocate_dma_mem(hw, &hw->aq.arq.desc_buf,
        i40e_mem_arq_ring,
        (hw->aq.num_arq_entries *
            sizeof(struct i40e_aq_desc)),
        I40E_ADMINQ_DESC_ALIGNMENT);

    return ret_code;
}

/**
 *  i40e_free_adminq_asq - Free Admin Queue send rings
 *  @hw: pointer to the hardware structure
 *
 *  This assumes the posted send buffers have already been cleaned
 *  and de-allocated
 **/
void i40e_free_adminq_asq(struct i40e_hw *hw)
{
    i40e_free_dma_mem(hw, &hw->aq.asq.desc_buf);
}

/**
 *  i40e_free_adminq_arq - Free Admin Queue receive rings
 *  @hw: pointer to the hardware structure
 *
 *  This assumes the posted receive buffers have already been cleaned
 *  and de-allocated
 **/
void i40e_free_adminq_arq(struct i40e_hw *hw)
{
    i40e_free_dma_mem(hw, &hw->aq.arq.desc_buf);
}

/**
 *  i40e_alloc_arq_bufs - Allocate pre-posted buffers for the receive queue
 *  @hw: pointer to the hardware structure
 **/
STATIC enum i40e_status_code i40e_alloc_arq_bufs(struct i40e_hw *hw)
{
#ifdef I40E_QV
    struct i40e_aq_desc     qv_desc;
    struct i40e_aq_desc     *qv_desc_on_ring;
#endif
    enum i40e_status_code   ret_code = I40E_SUCCESS;
    struct i40e_aq_desc     *desc;
    struct i40e_dma_mem     *bi;
    int                     i;

    /* We'll be allocating the buffer info memory first, then we can
     * allocate the mapped buffers for the event processing
     */

#ifndef INTEL_KDNET
     /* buffer_info structures do not need alignment */
    ret_code = i40e_allocate_virt_mem(hw, &hw->aq.arq.dma_head,
        (hw->aq.num_arq_entries * sizeof(struct i40e_dma_mem)));
    if (ret_code)
        goto alloc_arq_bufs;
#else
    hw->aq.arq.dma_head.va = gArqDmaMemory;
    hw->aq.arq.dma_head.size = (hw->aq.num_arq_entries *
        sizeof(struct i40e_dma_mem));
#endif
    hw->aq.arq.r.arq_bi = (struct i40e_dma_mem *)hw->aq.arq.dma_head.va;

    /* allocate the mapped buffers */
    for (i = 0; i < hw->aq.num_arq_entries; i++) {
        bi = &hw->aq.arq.r.arq_bi[i];
        ret_code = i40e_allocate_dma_mem(hw, bi,
            i40e_mem_arq_buf,
            hw->aq.arq_buf_size,
            I40E_ADMINQ_DESC_ALIGNMENT);
        if (ret_code)
            goto unwind_alloc_arq_bufs;

        /* now configure the descriptors for use */
        desc = I40E_ADMINQ_DESC(hw->aq.arq, i);
#ifdef I40E_QV
        /* swap the descriptor with userspace version */
        i40e_memcpy(&qv_desc, desc, sizeof(struct i40e_aq_desc),
            I40E_DMA_TO_NONDMA);
        qv_desc_on_ring = desc;
        desc = &qv_desc;
#endif
        desc->flags = CPU_TO_LE16(I40E_AQ_FLAG_BUF);
        if (hw->aq.arq_buf_size > I40E_AQ_LARGE_BUF)
            desc->flags |= CPU_TO_LE16(I40E_AQ_FLAG_LB);
        desc->opcode = 0;
        /* This is in accordance with Admin queue design, there is no
         * register for buffer size configuration
         */
        desc->datalen = CPU_TO_LE16((u16)bi->size);
        desc->retval = 0;
        desc->cookie_high = 0;
        desc->cookie_low = 0;
        desc->params.external.addr_high =
            CPU_TO_LE32(I40E_HI_DWORD(bi->pa));
        desc->params.external.addr_low =
            CPU_TO_LE32(I40E_LO_DWORD(bi->pa));
        desc->params.external.param0 = 0;
        desc->params.external.param1 = 0;
#ifdef I40E_QV
        /* put the initialized descriptor back to the ring */
        i40e_memcpy(qv_desc_on_ring, desc, sizeof(struct i40e_aq_desc),
            I40E_NONDMA_TO_DMA);
#endif
    }

#ifndef INTEL_KDNET
alloc_arq_bufs:
#endif
    return ret_code;

unwind_alloc_arq_bufs:
    /* don't try to free the one that failed... */
    i--;
    for (; i >= 0; i--)
        i40e_free_dma_mem(hw, &hw->aq.arq.r.arq_bi[i]);
    i40e_free_virt_mem(hw, &hw->aq.arq.dma_head);

    return ret_code;
}

/**
 *  i40e_alloc_asq_bufs - Allocate empty buffer structs for the send queue
 *  @hw: pointer to the hardware structure
 **/
STATIC enum i40e_status_code i40e_alloc_asq_bufs(struct i40e_hw *hw)
{
    enum i40e_status_code   ret_code = I40E_SUCCESS;
    struct i40e_dma_mem     *bi;
    int                     i;

#ifndef INTEL_KDNET
    /* No mapped memory needed yet, just the buffer info structures */
    ret_code = i40e_allocate_virt_mem(hw, &hw->aq.asq.dma_head,
        (hw->aq.num_asq_entries * sizeof(struct i40e_dma_mem)));
    if (ret_code)
        goto alloc_asq_bufs;
#else
    hw->aq.asq.dma_head.va = gAsqDmaMemory;
    hw->aq.asq.dma_head.size = (hw->aq.num_asq_entries *
        sizeof(struct i40e_dma_mem));
#endif
    hw->aq.asq.r.asq_bi = (struct i40e_dma_mem *)hw->aq.asq.dma_head.va;
    /* allocate the mapped buffers */
    for (i = 0; i < hw->aq.num_asq_entries; i++) {
        bi = &hw->aq.asq.r.asq_bi[i];
        ret_code = i40e_allocate_dma_mem(hw, bi,
            i40e_mem_asq_buf,
            hw->aq.asq_buf_size,
            I40E_ADMINQ_DESC_ALIGNMENT);
        if (ret_code)
            goto unwind_alloc_asq_bufs;
    }
#ifndef INTEL_KDNET
    alloc_asq_bufs:
#endif
    return ret_code;

unwind_alloc_asq_bufs:
    /* don't try to free the one that failed... */
    i--;
    for (; i >= 0; i--)
        i40e_free_dma_mem(hw, &hw->aq.asq.r.asq_bi[i]);
    i40e_free_virt_mem(hw, &hw->aq.asq.dma_head);

    return ret_code;
}

/**
 *  i40e_free_arq_bufs - Free receive queue buffer info elements
 *  @hw: pointer to the hardware structure
 **/
STATIC void i40e_free_arq_bufs(struct i40e_hw *hw)
{
    int i;

    /* free descriptors */
    for (i = 0; i < hw->aq.num_arq_entries; i++)
        i40e_free_dma_mem(hw, &hw->aq.arq.r.arq_bi[i]);

    /* free the descriptor memory */
    i40e_free_dma_mem(hw, &hw->aq.arq.desc_buf);

    /* free the dma header */
    i40e_free_virt_mem(hw, &hw->aq.arq.dma_head);
}

/**
 *  i40e_free_asq_bufs - Free send queue buffer info elements
 *  @hw: pointer to the hardware structure
 **/
STATIC void i40e_free_asq_bufs(struct i40e_hw *hw)
{
    int i;

    /* only unmap if the address is non-NULL */
    for (i = 0; i < hw->aq.num_asq_entries; i++)
        if (hw->aq.asq.r.asq_bi[i].pa)
            i40e_free_dma_mem(hw, &hw->aq.asq.r.asq_bi[i]);

    /* free the buffer info list */
    i40e_free_virt_mem(hw, &hw->aq.asq.cmd_buf);

    /* free the descriptor memory */
    i40e_free_dma_mem(hw, &hw->aq.asq.desc_buf);

    /* free the dma header */
    i40e_free_virt_mem(hw, &hw->aq.asq.dma_head);
}

/**
 *  i40e_config_asq_regs - configure ASQ registers
 *  @hw: pointer to the hardware structure
 *
 *  Configure base address and length registers for the transmit queue
 **/
STATIC enum i40e_status_code i40e_config_asq_regs(struct i40e_hw *hw)
{
    enum i40e_status_code   ret_code = I40E_SUCCESS;
    u32                     reg = 0;

    /* Clear Head and Tail */
    wr32(hw, hw->aq.asq.head, 0);
    wr32(hw, hw->aq.asq.tail, 0);

    /* set starting point */
#ifdef PF_DRIVER
#ifdef INTEGRATED_VF
    if (!i40e_is_vf(hw))
        wr32(hw, hw->aq.asq.len, (hw->aq.num_asq_entries |
            I40E_PF_ATQLEN_ATQENABLE_MASK));
#else
    wr32(hw, hw->aq.asq.len, (hw->aq.num_asq_entries |
        I40E_PF_ATQLEN_ATQENABLE_MASK));
#endif /* INTEGRATED_VF */
#endif /* PF_DRIVER */
#ifdef VF_DRIVER
#ifdef INTEGRATED_VF
    if (i40e_is_vf(hw))
        wr32(hw, hw->aq.asq.len, (hw->aq.num_asq_entries |
            I40E_VF_ATQLEN1_ATQENABLE_MASK));
#else
    wr32(hw, hw->aq.asq.len, (hw->aq.num_asq_entries |
        I40E_VF_ATQLEN1_ATQENABLE_MASK));
#endif /* INTEGRATED_VF */
#endif /* VF_DRIVER */
    wr32(hw, hw->aq.asq.bal, I40E_LO_DWORD(hw->aq.asq.desc_buf.pa));
    wr32(hw, hw->aq.asq.bah, I40E_HI_DWORD(hw->aq.asq.desc_buf.pa));

    /* Check one register to verify that config was applied */
    reg = rd32(hw, hw->aq.asq.bal);
    if (reg != I40E_LO_DWORD(hw->aq.asq.desc_buf.pa))
        ret_code = I40E_ERR_ADMIN_QUEUE_ERROR;

    return ret_code;
}

/**
 *  i40e_config_arq_regs - ARQ register configuration
 *  @hw: pointer to the hardware structure
 *
 * Configure base address and length registers for the receive (event queue)
 **/
STATIC enum i40e_status_code i40e_config_arq_regs(struct i40e_hw *hw)
{
    enum i40e_status_code   ret_code = I40E_SUCCESS;
    u32                     reg = 0;

    /* Clear Head and Tail */
    wr32(hw, hw->aq.arq.head, 0);
    wr32(hw, hw->aq.arq.tail, 0);

    /* set starting point */
#ifdef PF_DRIVER
#ifdef INTEGRATED_VF
    if (!i40e_is_vf(hw))
        wr32(hw, hw->aq.arq.len, (hw->aq.num_arq_entries |
            I40E_PF_ARQLEN_ARQENABLE_MASK));
#else
    wr32(hw, hw->aq.arq.len, (hw->aq.num_arq_entries |
        I40E_PF_ARQLEN_ARQENABLE_MASK));
#endif /* INTEGRATED_VF */
#endif /* PF_DRIVER */
#ifdef VF_DRIVER
#ifdef INTEGRATED_VF
    if (i40e_is_vf(hw))
        wr32(hw, hw->aq.arq.len, (hw->aq.num_arq_entries |
            I40E_VF_ARQLEN1_ARQENABLE_MASK));
#else
    wr32(hw, hw->aq.arq.len, (hw->aq.num_arq_entries |
        I40E_VF_ARQLEN1_ARQENABLE_MASK));
#endif /* INTEGRATED_VF */
#endif /* VF_DRIVER */
    wr32(hw, hw->aq.arq.bal, I40E_LO_DWORD(hw->aq.arq.desc_buf.pa));
    wr32(hw, hw->aq.arq.bah, I40E_HI_DWORD(hw->aq.arq.desc_buf.pa));

    /* Update tail in the HW to post pre-allocated buffers */
    wr32(hw, hw->aq.arq.tail, hw->aq.num_arq_entries - 1);

    /* Check one register to verify that config was applied */
    reg = rd32(hw, hw->aq.arq.bal);
    if (reg != I40E_LO_DWORD(hw->aq.arq.desc_buf.pa))
        ret_code = I40E_ERR_ADMIN_QUEUE_ERROR;

    return ret_code;
}

/**
 *  i40e_init_asq - main initialization routine for ASQ
 *  @hw: pointer to the hardware structure
 *
 *  This is the main initialization routine for the Admin Send Queue
 *  Prior to calling this function, drivers *MUST* set the following fields
 *  in the hw->aq structure:
 *     - hw->aq.num_asq_entries
 *     - hw->aq.arq_buf_size
 *
 *  Do *NOT* hold the lock when calling this as the memory allocation routines
 *  called are not going to be atomic context safe
 **/
enum i40e_status_code i40e_init_asq(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code = I40E_SUCCESS;

    if (hw->aq.asq.count > 0) {
        /* queue already initialized */
        ret_code = I40E_ERR_NOT_READY;
        goto init_adminq_exit;
    }

    /* verify input for valid configuration */
    if ((hw->aq.num_asq_entries == 0) ||
        (hw->aq.asq_buf_size == 0)) {
        ret_code = I40E_ERR_CONFIG;
        goto init_adminq_exit;
    }

    hw->aq.asq.next_to_use = 0;
    hw->aq.asq.next_to_clean = 0;

    /* allocate the ring memory */
    ret_code = i40e_alloc_adminq_asq_ring(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_exit;

    /* allocate buffers in the rings */
    ret_code = i40e_alloc_asq_bufs(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_free_rings;

    /* initialize base registers */
    ret_code = i40e_config_asq_regs(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_config_regs;

    /* success! */
    hw->aq.asq.count = hw->aq.num_asq_entries;
    goto init_adminq_exit;

init_adminq_free_rings:
    i40e_free_adminq_asq(hw);
    return ret_code;
init_config_regs:
    i40e_free_asq_bufs(hw);

init_adminq_exit:
    return ret_code;
}

/**
 *  i40e_init_arq - initialize ARQ
 *  @hw: pointer to the hardware structure
 *
 *  The main initialization routine for the Admin Receive (Event) Queue.
 *  Prior to calling this function, drivers *MUST* set the following fields
 *  in the hw->aq structure:
 *     - hw->aq.num_asq_entries
 *     - hw->aq.arq_buf_size
 *
 *  Do *NOT* hold the lock when calling this as the memory allocation routines
 *  called are not going to be atomic context safe
 **/
enum i40e_status_code i40e_init_arq(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code = I40E_SUCCESS;

    if (hw->aq.arq.count > 0) {
        /* queue already initialized */
        ret_code = I40E_ERR_NOT_READY;
        goto init_adminq_exit;
    }

    /* verify input for valid configuration */
    if ((hw->aq.num_arq_entries == 0) ||
        (hw->aq.arq_buf_size == 0)) {
        ret_code = I40E_ERR_CONFIG;
        goto init_adminq_exit;
    }

    hw->aq.arq.next_to_use = 0;
    hw->aq.arq.next_to_clean = 0;

    /* allocate the ring memory */
    ret_code = i40e_alloc_adminq_arq_ring(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_exit;

    /* allocate buffers in the rings */
    ret_code = i40e_alloc_arq_bufs(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_free_rings;

    /* initialize base registers */
    ret_code = i40e_config_arq_regs(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_free_rings;

    /* success! */
    hw->aq.arq.count = hw->aq.num_arq_entries;
    goto init_adminq_exit;

init_adminq_free_rings:
    i40e_free_adminq_arq(hw);

init_adminq_exit:
    return ret_code;
}

/**
 *  i40e_shutdown_asq - shutdown the ASQ
 *  @hw: pointer to the hardware structure
 *
 *  The main shutdown routine for the Admin Send Queue
 **/
enum i40e_status_code i40e_shutdown_asq(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code = I40E_SUCCESS;

    i40e_acquire_spinlock(&hw->aq.asq_spinlock);

    if (hw->aq.asq.count == 0) {
        ret_code = I40E_ERR_NOT_READY;
        goto shutdown_asq_out;
    }

    /* Stop firmware AdminQ processing */
#ifdef I40E_QV
    /* Do not reset registers, as Tools AQ is shared resource for QV */
    if (!hw->aq_dbg_ena) {
        wr32(hw, hw->aq.asq.head, 0);
        wr32(hw, hw->aq.asq.tail, 0);
        wr32(hw, hw->aq.asq.len, 0);
        wr32(hw, hw->aq.asq.bal, 0);
        wr32(hw, hw->aq.asq.bah, 0);
    }
#else
    wr32(hw, hw->aq.asq.head, 0);
    wr32(hw, hw->aq.asq.tail, 0);
    wr32(hw, hw->aq.asq.len, 0);
    wr32(hw, hw->aq.asq.bal, 0);
    wr32(hw, hw->aq.asq.bah, 0);
#endif

    hw->aq.asq.count = 0; /* to indicate uninitialized queue */

    /* free ring buffers */
    i40e_free_asq_bufs(hw);

shutdown_asq_out:
    i40e_release_spinlock(&hw->aq.asq_spinlock);
    return ret_code;
}

/**
 *  i40e_shutdown_arq - shutdown ARQ
 *  @hw: pointer to the hardware structure
 *
 *  The main shutdown routine for the Admin Receive Queue
 **/
enum i40e_status_code i40e_shutdown_arq(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code = I40E_SUCCESS;

    i40e_acquire_spinlock(&hw->aq.arq_spinlock);

    if (hw->aq.arq.count == 0) {
        ret_code = I40E_ERR_NOT_READY;
        goto shutdown_arq_out;
    }

    /* Stop firmware AdminQ processing */
#ifdef I40E_QV
    /* Do not reset registers, as Tools AQ is shared resource for QV */
    if (!hw->aq_dbg_ena) {
        wr32(hw, hw->aq.arq.head, 0);
        wr32(hw, hw->aq.arq.tail, 0);
        wr32(hw, hw->aq.arq.len, 0);
        wr32(hw, hw->aq.arq.bal, 0);
        wr32(hw, hw->aq.arq.bah, 0);
    }
#else
    wr32(hw, hw->aq.arq.head, 0);
    wr32(hw, hw->aq.arq.tail, 0);
    wr32(hw, hw->aq.arq.len, 0);
    wr32(hw, hw->aq.arq.bal, 0);
    wr32(hw, hw->aq.arq.bah, 0);
#endif

    hw->aq.arq.count = 0; /* to indicate uninitialized queue */

    /* free ring buffers */
    i40e_free_arq_bufs(hw);

shutdown_arq_out:
    i40e_release_spinlock(&hw->aq.arq_spinlock);
    return ret_code;
}
#ifdef I40E_MFP_SV

/**
 *  i40e_idle_aq - stop AQ processing momentarily
 *  @hw: pointer to the hardware structure
 **/
void i40e_idle_aq(struct i40e_hw *hw)
{
    wr32(hw, hw->aq.asq.len, 0);
    wr32(hw, hw->aq.arq.len, 0);

    i40e_msec_delay(2);
}
#endif
#ifdef PF_DRIVER

/**
 *  i40e_resume_aq - resume AQ processing from 0
 *  @hw: pointer to the hardware structure
 **/
#ifdef I40E_MFP_SV
void i40e_resume_aq(struct i40e_hw *hw)
#else
STATIC void i40e_resume_aq(struct i40e_hw *hw)
#endif
{
    /* Registers are reset after PF reset */
    hw->aq.asq.next_to_use = 0;
    hw->aq.asq.next_to_clean = 0;

    i40e_config_asq_regs(hw);

    hw->aq.arq.next_to_use = 0;
    hw->aq.arq.next_to_clean = 0;

    i40e_config_arq_regs(hw);
}
#endif /* PF_DRIVER */

/**
 *  i40e_init_adminq - main initialization routine for Admin Queue
 *  @hw: pointer to the hardware structure
 *
 *  Prior to calling this function, drivers *MUST* set the following fields
 *  in the hw->aq structure:
 *     - hw->aq.num_asq_entries
 *     - hw->aq.num_arq_entries
 *     - hw->aq.arq_buf_size
 *     - hw->aq.asq_buf_size
 **/
enum i40e_status_code i40e_init_adminq(struct i40e_hw *hw)
{
#ifdef PF_DRIVER
    u16 cfg_ptr, oem_hi, oem_lo;
    u16 eetrack_lo, eetrack_hi;
#endif
    enum i40e_status_code ret_code;
#ifdef PF_DRIVER
    int retry = 0;

    cfg_ptr = 0;
    oem_hi = 0;
    oem_lo = 0;
    eetrack_lo = 0;
    eetrack_hi = 0;
#endif

    /* verify input for valid configuration */
    if ((hw->aq.num_arq_entries == 0) ||
        (hw->aq.num_asq_entries == 0) ||
        (hw->aq.arq_buf_size == 0) ||
        (hw->aq.asq_buf_size == 0)) {
        ret_code = I40E_ERR_CONFIG;
        goto init_adminq_exit;
    }
    i40e_init_spinlock(&hw->aq.asq_spinlock);
    i40e_init_spinlock(&hw->aq.arq_spinlock);

    /* Set up register offsets */
    i40e_adminq_init_regs(hw);

    /* setup ASQ command write back timeout */
    hw->aq.asq_cmd_timeout = I40E_ASQ_CMD_TIMEOUT;

    /* allocate the ASQ */
    ret_code = i40e_init_asq(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_destroy_spinlocks;

    /* allocate the ARQ */
    ret_code = i40e_init_arq(hw);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_free_asq;

#ifdef PF_DRIVER
#ifdef INTEGRATED_VF
    /* VF has no need of firmware */
    if (i40e_is_vf(hw))
        goto init_adminq_exit;
#endif
    /* There are some cases where the firmware may not be quite ready
     * for AdminQ operations, so we retry the AdminQ setup a few times
     * if we see timeouts in this first AQ call.
     */
    do {
        ret_code = i40e_aq_get_firmware_version(hw,
            &hw->aq.fw_maj_ver,
            &hw->aq.fw_min_ver,
            &hw->aq.fw_build,
            &hw->aq.api_maj_ver,
            &hw->aq.api_min_ver,
            NULL);
        if (ret_code != I40E_ERR_ADMIN_QUEUE_TIMEOUT)
            break;
        retry++;
        i40e_msec_delay(100);
        i40e_resume_aq(hw);
    } while (retry < 100);
    if (ret_code != I40E_SUCCESS)
        goto init_adminq_free_arq;

    /* get the NVM version info */
    i40e_read_nvm_word(hw, I40E_SR_NVM_DEV_STARTER_VERSION,
        &hw->nvm.version);
    i40e_read_nvm_word(hw, I40E_SR_NVM_EETRACK_LO, &eetrack_lo);
    i40e_read_nvm_word(hw, I40E_SR_NVM_EETRACK_HI, &eetrack_hi);
    hw->nvm.eetrack = (eetrack_hi << 16) | eetrack_lo;
    i40e_read_nvm_word(hw, I40E_SR_BOOT_CONFIG_PTR, &cfg_ptr);
    i40e_read_nvm_word(hw, (cfg_ptr + I40E_NVM_OEM_VER_OFF),
        &oem_hi);
    i40e_read_nvm_word(hw, (cfg_ptr + (I40E_NVM_OEM_VER_OFF + 1)),
        &oem_lo);
    hw->nvm.oem_ver = ((u32)oem_hi << 16) | oem_lo;

    /* The ability to RX (not drop) 802.1ad frames was added in API 1.7 */
    if ((hw->aq.api_maj_ver > 1) ||
        ((hw->aq.api_maj_ver == 1) &&
        (hw->aq.api_min_ver >= 7)))
        hw->flags |= I40E_HW_FLAG_802_1AD_CAPABLE;

    if (hw->mac.type == I40E_MAC_XL710 &&
        hw->aq.api_maj_ver == I40E_FW_API_VERSION_MAJOR &&
        hw->aq.api_min_ver >= I40E_MINOR_VER_GET_LINK_INFO_XL710) {
        hw->flags |= I40E_HW_FLAG_AQ_PHY_ACCESS_CAPABLE;
    }
    /* Newer versions of firmware require lock when reading the NVM */
    if ((hw->aq.api_maj_ver > 1) ||
        ((hw->aq.api_maj_ver == 1) &&
        (hw->aq.api_min_ver >= 5)))
        hw->flags |= I40E_HW_FLAG_NVM_READ_REQUIRES_LOCK;
#ifdef I40E_QV
    if (!hw->qv_force_init) {
#ifdef FORTVILLE_A0_SUPPORT
        if (hw->aq.api_maj_ver != I40E_FW_API_VERSION_MAJOR ||
            !((hw->aq.api_min_ver == I40E_FW_API_VERSION_MINOR) ||
            (hw->aq.api_min_ver == I40E_FW_API_VERSION_A0_MINOR))) {
#else
        if (hw->aq.api_maj_ver > I40E_FW_API_VERSION_MAJOR) {
#endif
                ret_code = I40E_ERR_FIRMWARE_API_VERSION;
                goto init_adminq_free_arq;
            }
        }
#else
#ifdef FORTVILLE_A0_SUPPORT
    if (hw->aq.api_maj_ver != I40E_FW_API_VERSION_MAJOR ||
        !((hw->aq.api_min_ver == I40E_FW_API_VERSION_MINOR) ||
        (hw->aq.api_min_ver == I40E_FW_API_VERSION_A0_MINOR))) {
#else
    if (hw->aq.api_maj_ver > I40E_FW_API_VERSION_MAJOR) {
#endif
        ret_code = I40E_ERR_FIRMWARE_API_VERSION;
        goto init_adminq_free_arq;
    }
#endif

    /* pre-emptive resource lock release */
    i40e_aq_release_resource(hw, I40E_NVM_RESOURCE_ID, 0, NULL);
    hw->nvm_release_on_done = false;
    hw->nvmupd_state = I40E_NVMUPD_STATE_INIT;

#endif /* PF_DRIVER */
    ret_code = I40E_SUCCESS;

    /* success! */
    goto init_adminq_exit;

#ifdef PF_DRIVER
    init_adminq_free_arq :
        i40e_shutdown_arq(hw);
#endif
    init_adminq_free_asq:
        i40e_shutdown_asq(hw);
    init_adminq_destroy_spinlocks:
        i40e_destroy_spinlock(&hw->aq.asq_spinlock);
        i40e_destroy_spinlock(&hw->aq.arq_spinlock);
    init_adminq_exit:
    
        return ret_code;
}

/**
 *  i40e_shutdown_adminq - shutdown routine for the Admin Queue
 *  @hw: pointer to the hardware structure
 **/
enum i40e_status_code i40e_shutdown_adminq(struct i40e_hw *hw)
{
    enum i40e_status_code ret_code = I40E_SUCCESS;

#ifdef I40E_QV
    /* This command is not supported for Tools AQ */
    if (!hw->aq_dbg_ena) {
        if (i40e_check_asq_alive(hw))
            i40e_aq_queue_shutdown(hw, true);
    }
#else
    if (i40e_check_asq_alive(hw))
        i40e_aq_queue_shutdown(hw, true);
#endif

    i40e_shutdown_asq(hw);
    i40e_shutdown_arq(hw);
    i40e_destroy_spinlock(&hw->aq.asq_spinlock);
    i40e_destroy_spinlock(&hw->aq.arq_spinlock);

    if (hw->nvm_buff.va)
        i40e_free_virt_mem(hw, &hw->nvm_buff);

    return ret_code;
}

/**
 *  i40e_clean_asq - cleans Admin send queue
 *  @hw: pointer to the hardware structure
 *
 *  returns the number of free desc
 **/
u16 i40e_clean_asq(struct i40e_hw *hw)
{
    struct i40e_adminq_ring *asq = &(hw->aq.asq);
    struct i40e_asq_cmd_details *details;
    u16 ntc = asq->next_to_clean;
    struct i40e_aq_desc desc_cb;
    struct i40e_aq_desc *desc;

    desc = I40E_ADMINQ_DESC(*asq, ntc);
    details = I40E_ADMINQ_DETAILS(*asq, ntc);
#ifdef DMA_SYNC_SUPPORT
    I40E_DMA_SYNC(&hw->aq.asq.desc_buf, I40E_SYNC_FORKERNEL);
#endif /* DMA_SYNC_SUPPORT */
    while (rd32(hw, hw->aq.asq.head) != ntc) {
        i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE,
            "ntc %d head %d.\n", ntc, rd32(hw, hw->aq.asq.head));

        if (details->callback) {
            I40E_ADMINQ_CALLBACK cb_func =
                (I40E_ADMINQ_CALLBACK)details->callback;
#ifdef I40E_QV
            i40e_memcpy(&desc_cb, desc, sizeof(struct i40e_aq_desc),
                I40E_DMA_TO_NONDMA);
#else
            i40e_memcpy(&desc_cb, desc, sizeof(struct i40e_aq_desc),
                I40E_DMA_TO_DMA);
#endif
            cb_func(hw, &desc_cb);
        }
        i40e_memset(desc, 0, sizeof(*desc), I40E_DMA_MEM);
        i40e_memset(details, 0, sizeof(*details), I40E_NONDMA_MEM);
        ntc++;
        if (ntc == asq->count)
            ntc = 0;
        desc = I40E_ADMINQ_DESC(*asq, ntc);
        details = I40E_ADMINQ_DETAILS(*asq, ntc);
    }

    asq->next_to_clean = ntc;

    return I40E_DESC_UNUSED(asq);
}

/**
 *  i40e_asq_done - check if FW has processed the Admin Send Queue
 *  @hw: pointer to the hw struct
 *
 *  Returns true if the firmware has processed all descriptors on the
 *  admin send queue. Returns false if there are still requests pending.
 **/
#ifdef VF_DRIVER
bool i40e_asq_done(struct i40e_hw *hw)
#else
STATIC bool i40e_asq_done(struct i40e_hw *hw)
#endif
{
    /* AQ designers suggest use of head for better
     * timing reliability than DD bit
     */
    return rd32(hw, hw->aq.asq.head) == hw->aq.asq.next_to_use;

}

/**
 *  i40e_asq_send_command - send command to Admin Queue
 *  @hw: pointer to the hw struct
 *  @desc: prefilled descriptor describing the command (non DMA mem)
 *  @buff: buffer to use for indirect commands
 *  @buff_size: size of buffer for indirect commands
 *  @cmd_details: pointer to command details structure
 *
 *  This is the main send command driver routine for the Admin Queue send
 *  queue.  It runs the queue, cleans the queue, etc
 **/
#ifdef I40E_QV
enum i40e_status_code i40e_asq_send_command_sc(struct i40e_hw *hw,
#else
enum i40e_status_code i40e_asq_send_command(struct i40e_hw *hw,
#endif /* I40E_QV */
    struct i40e_aq_desc *desc,
    void *buff, /* can be NULL */
    u16  buff_size,
    struct i40e_asq_cmd_details *cmd_details)
{
#ifdef I40E_QV
    struct i40e_aq_desc             qv_desc = { 0 };
    struct i40e_aq_desc             *qv_desc_on_ring;
#endif /* I40E_QV */
    enum i40e_status_code           status = I40E_SUCCESS;
    struct i40e_dma_mem             *dma_buff = NULL;
    struct i40e_asq_cmd_details     *details;
    struct i40e_aq_desc             *desc_on_ring;
    u32                             val = 0;
    u16                             retval = 0;
    bool                            cmd_completed = false;
    
    i40e_acquire_spinlock(&hw->aq.asq_spinlock);

    hw->aq.asq_last_status = I40E_AQ_RC_OK;

    if (hw->aq.asq.count == 0) {
        i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE,
            "AQTX: Admin queue not initialized.\n");
        status = I40E_ERR_QUEUE_EMPTY;
        goto asq_send_command_error;
    }

    val = rd32(hw, hw->aq.asq.head);
    if (val >= hw->aq.num_asq_entries) {
        i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE,
            "AQTX: head overrun at %d\n", val);
        status = I40E_ERR_QUEUE_EMPTY;
        goto asq_send_command_error;
    }

    details = I40E_ADMINQ_DETAILS(hw->aq.asq, hw->aq.asq.next_to_use);
    if (cmd_details) {
        i40e_memcpy(details,
            cmd_details,
            sizeof(struct i40e_asq_cmd_details),
            I40E_NONDMA_TO_NONDMA);

        /* If the cmd_details are defined copy the cookie.  The
         * CPU_TO_LE32 is not needed here because the data is ignored
         * by the FW, only used by the driver
         */
        if (details->cookie) {
            desc->cookie_high =
                CPU_TO_LE32(I40E_HI_DWORD(details->cookie));
            desc->cookie_low =
                CPU_TO_LE32(I40E_LO_DWORD(details->cookie));
        }
    }
    else {
        i40e_memset(details, 0,
            sizeof(struct i40e_asq_cmd_details),
            I40E_NONDMA_MEM);
    }

    /* clear requested flags and then set additional flags if defined */
    desc->flags &= ~CPU_TO_LE16(details->flags_dis);
    desc->flags |= CPU_TO_LE16(details->flags_ena);

    if (buff_size > hw->aq.asq_buf_size) {
        i40e_debug(hw,
            I40E_DEBUG_AQ_MESSAGE,
            "AQTX: Invalid buffer size: %d.\n",
            buff_size);
        status = I40E_ERR_INVALID_SIZE;
        goto asq_send_command_error;
    }

    if (details->postpone && !details->async) {
        i40e_debug(hw,
            I40E_DEBUG_AQ_MESSAGE,
            "AQTX: Async flag not set along with postpone flag");
        status = I40E_ERR_PARAM;
        goto asq_send_command_error;
    }

    /* call clean and check queue available function to reclaim the
     * descriptors that were processed by FW, the function returns the
     * number of desc available
     */
     /* the clean function called here could be called in a separate thread
      * in case of asynchronous completions
      */
    if (i40e_clean_asq(hw) == 0) {
        i40e_debug(hw,
            I40E_DEBUG_AQ_MESSAGE,
            "AQTX: Error queue is full.\n");
        status = I40E_ERR_ADMIN_QUEUE_FULL;
        goto asq_send_command_error;
    }

    /* initialize the temp desc pointer with the right desc */
    desc_on_ring = I40E_ADMINQ_DESC(hw->aq.asq, hw->aq.asq.next_to_use);

    /* if the desc is available copy the temp desc to the right place */
    i40e_memcpy(desc_on_ring, desc, sizeof(struct i40e_aq_desc),
        I40E_NONDMA_TO_DMA);
#ifdef I40E_QV
    /* copy the descriptor from ring to userspace buffer */
    i40e_memcpy(&qv_desc, desc_on_ring, sizeof(struct i40e_aq_desc),
        I40E_DMA_TO_NONDMA);
    qv_desc_on_ring = desc_on_ring;
    desc_on_ring = &qv_desc;
#endif /* I40E_QV */

    /* if buff is not NULL assume indirect command */
    if (buff != NULL) {
        dma_buff = &(hw->aq.asq.r.asq_bi[hw->aq.asq.next_to_use]);
        /* copy the user buff into the respective DMA buff */
        i40e_memcpy(dma_buff->va, buff, buff_size,
            I40E_NONDMA_TO_DMA);
        desc_on_ring->datalen = CPU_TO_LE16(buff_size);

        /* Update the address values in the desc with the pa value
         * for respective buffer
         */
        desc_on_ring->params.external.addr_high =
            CPU_TO_LE32(I40E_HI_DWORD(dma_buff->pa));
        desc_on_ring->params.external.addr_low =
            CPU_TO_LE32(I40E_LO_DWORD(dma_buff->pa));
#ifdef I40E_QV
        /* copy the descriptor from userspace buffer to ring */
        i40e_memcpy(qv_desc_on_ring, desc_on_ring,
            sizeof(struct i40e_aq_desc), I40E_NONDMA_TO_DMA);
#endif /* I40E_QV */
#ifdef DMA_SYNC_SUPPORT
        I40E_DMA_SYNC(dma_buff, I40E_SYNC_FORDEVICE);
#endif /* DMA_SYNC_SUPPORT */
    }

#ifdef DMA_SYNC_SUPPORT
    I40E_DMA_SYNC(&hw->aq.asq.desc_buf, I40E_SYNC_FORDEVICE);
#endif /* DMA_SYNC_SUPPORT */
    /* bump the tail */
    i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE, "AQTX: desc and buffer:\n");
    i40e_debug_aq(hw, I40E_DEBUG_AQ_COMMAND, (void *)desc_on_ring,
        buff, buff_size);
    (hw->aq.asq.next_to_use)++;
    if (hw->aq.asq.next_to_use == hw->aq.asq.count)
        hw->aq.asq.next_to_use = 0;
    if (!details->postpone)
        wr32(hw, hw->aq.asq.tail, hw->aq.asq.next_to_use);

    /* if cmd_details are not defined or async flag is not set,
     * we need to wait for desc write back
     */
    if (!details->async && !details->postpone) {
        u32 total_delay = 0;

        do {
#ifdef I40E_QV
            /* copy the descriptor from ring to user buffer */
            i40e_memcpy(desc_on_ring, qv_desc_on_ring,
                sizeof(struct i40e_aq_desc), I40E_DMA_TO_NONDMA);
#endif /* I40E_QV */
            /* AQ designers suggest use of head for better
             * timing reliability than DD bit
             */
            if (i40e_asq_done(hw))
                break;
            i40e_msec_delay(1);
            total_delay++;
        } while (total_delay < hw->aq.asq_cmd_timeout);
    }

    /* if ready, copy the desc back to temp */
    if (i40e_asq_done(hw)) {
#ifdef I40E_QV
        /* Swap pointer back */
        desc_on_ring = qv_desc_on_ring;
#endif /* I40E_QV */
#ifdef DMA_SYNC_SUPPORT
        I40E_DMA_SYNC(&hw->aq.asq.desc_buf, I40E_SYNC_FORKERNEL);
#endif /* DMA_SYNC_SUPPORT */
        i40e_memcpy(desc, desc_on_ring, sizeof(struct i40e_aq_desc),
            I40E_DMA_TO_NONDMA);
        if (buff != NULL)
            i40e_memcpy(buff, dma_buff->va, buff_size,
                I40E_DMA_TO_NONDMA);
        retval = LE16_TO_CPU(desc->retval);
        if (retval != 0) {
            i40e_debug(hw,
                I40E_DEBUG_AQ_MESSAGE,
                "AQTX: Command completed with error 0x%X.\n",
                retval);

            /* strip off FW internal code */
            retval &= 0xff;
        }
        cmd_completed = true;
        if ((enum i40e_admin_queue_err)retval == I40E_AQ_RC_OK)
            status = I40E_SUCCESS;
        else
            status = I40E_ERR_ADMIN_QUEUE_ERROR;
        hw->aq.asq_last_status = (enum i40e_admin_queue_err)retval;
    }

    i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE,
        "AQTX: desc and buffer writeback:\n");
    i40e_debug_aq(hw, I40E_DEBUG_AQ_COMMAND, (void *)desc, buff, buff_size);

    /* save writeback aq if requested */
    if (details->wb_desc)
        i40e_memcpy(details->wb_desc, desc_on_ring,
            sizeof(struct i40e_aq_desc), I40E_DMA_TO_NONDMA);

    /* update the error if time out occurred */
    if ((!cmd_completed) &&
        (!details->async && !details->postpone)) {
        i40e_debug(hw,
            I40E_DEBUG_AQ_MESSAGE,
            "AQTX: Writeback timeout.\n");
        status = I40E_ERR_ADMIN_QUEUE_TIMEOUT;
    }

asq_send_command_error:
    i40e_release_spinlock(&hw->aq.asq_spinlock);
    return status;
}

/**
 *  i40e_fill_default_direct_cmd_desc - AQ descriptor helper function
 *  @desc:     pointer to the temp descriptor (non DMA mem)
 *  @opcode:   the opcode can be used to decide which flags to turn off or on
 *
 *  Fill the desc with default values
 **/
void i40e_fill_default_direct_cmd_desc(struct i40e_aq_desc *desc,
    u16 opcode)
{
    /* zero out the desc */
    i40e_memset((void *)desc, 0, sizeof(struct i40e_aq_desc),
        I40E_NONDMA_MEM);
    desc->opcode = CPU_TO_LE16(opcode);
    desc->flags = CPU_TO_LE16(I40E_AQ_FLAG_SI);
}

/**
 *  i40e_clean_arq_element
 *  @hw: pointer to the hw struct
 *  @e: event info from the receive descriptor, includes any buffers
 *  @pending: number of events that could be left to process
 *
 *  This function cleans one Admin Receive Queue element and returns
 *  the contents through e.  It can also return how many events are
 *  left to process through 'pending'
 **/
enum i40e_status_code i40e_clean_arq_element(struct i40e_hw *hw,
    struct i40e_arq_event_info *e,
    u16 *pending)
{
    enum i40e_status_code   ret_code = I40E_SUCCESS;
#ifdef I40E_QV
    struct i40e_aq_desc     qv_desc = { 0 };
    struct i40e_aq_desc     *qv_desc_on_ring;
#endif /* I40E_QV */
    struct i40e_aq_desc     *desc;
    struct i40e_dma_mem     *bi;
    u16                     ntc = hw->aq.arq.next_to_clean;
    u16                     desc_idx;
    u16                     datalen;
    u16                     flags;
    u16                     ntu;
    
#ifdef DMA_SYNC_SUPPORT
    I40E_DMA_SYNC(&hw->aq.arq.desc_buf, I40E_SYNC_FORKERNEL);
#endif /* DMA_SYNC_SUPPORT */

    /* pre-clean the event info */
    i40e_memset(&e->desc, 0, sizeof(e->desc), I40E_NONDMA_MEM);

    /* take the lock before we start messing with the ring */
    i40e_acquire_spinlock(&hw->aq.arq_spinlock);

    if (hw->aq.arq.count == 0) {
        i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE,
            "AQRX: Admin queue not initialized.\n");
        ret_code = I40E_ERR_QUEUE_EMPTY;
        goto clean_arq_element_err;
    }

    /* set next_to_use to head */
#ifdef PF_DRIVER
#ifdef INTEGRATED_VF
    if (!i40e_is_vf(hw))
        ntu = (rd32(hw, hw->aq.arq.head) & I40E_PF_ARQH_ARQH_MASK);
#else
    ntu = (rd32(hw, hw->aq.arq.head) & I40E_PF_ARQH_ARQH_MASK);
#endif /* INTEGRATED_VF */
#endif /* PF_DRIVER */
#ifdef VF_DRIVER
#ifdef INTEGRATED_VF
    if (i40e_is_vf(hw))
        ntu = (rd32(hw, hw->aq.arq.head) & I40E_VF_ARQH1_ARQH_MASK);
#else
    ntu = (rd32(hw, hw->aq.arq.head) & I40E_VF_ARQH1_ARQH_MASK);
#endif /* INTEGRATED_VF */
#endif /* VF_DRIVER */
    if (ntu == ntc) {
        /* nothing to do - shouldn't need to update ring's values */
        ret_code = I40E_ERR_ADMIN_QUEUE_NO_WORK;
        goto clean_arq_element_out;
    }

    /* now clean the next descriptor */
    desc = I40E_ADMINQ_DESC(hw->aq.arq, ntc);
#ifdef I40E_QV
    /* copy the descriptor from ring to userspace buffer */
    i40e_memcpy(&qv_desc, desc, sizeof(struct i40e_aq_desc),
        I40E_DMA_TO_NONDMA);
    qv_desc_on_ring = desc;
    desc = &qv_desc;
#endif /* I40E_QV */
    desc_idx = ntc;
#ifdef DMA_SYNC_SUPPORT
    I40E_DMA_SYNC(&hw->aq.arq.r.arq_bi[desc_idx], I40E_SYNC_FORKERNEL);
#endif /* DMA_SYNC_SUPPORT */

    flags = LE16_TO_CPU(desc->flags);
    if (flags & I40E_AQ_FLAG_ERR) {
        ret_code = I40E_ERR_ADMIN_QUEUE_ERROR;
        hw->aq.arq_last_status =
            (enum i40e_admin_queue_err)LE16_TO_CPU(desc->retval);
        i40e_debug(hw,
            I40E_DEBUG_AQ_MESSAGE,
            "AQRX: Event received with error 0x%X.\n",
            hw->aq.arq_last_status);
    }

#ifdef I40E_QV
    i40e_memcpy(&e->desc, desc, sizeof(struct i40e_aq_desc),
        I40E_NONDMA_TO_NONDMA);
#else
    i40e_memcpy(&e->desc, desc, sizeof(struct i40e_aq_desc),
        I40E_DMA_TO_NONDMA);
#endif
    datalen = LE16_TO_CPU(desc->datalen);
    e->msg_len = (u16)min(datalen, e->buf_len);
    if (e->msg_buf != NULL && (e->msg_len != 0))
        i40e_memcpy(e->msg_buf,
            hw->aq.arq.r.arq_bi[desc_idx].va,
            e->msg_len, I40E_DMA_TO_NONDMA);

    i40e_debug(hw, I40E_DEBUG_AQ_MESSAGE, "AQRX: desc and buffer:\n");
    i40e_debug_aq(hw, I40E_DEBUG_AQ_COMMAND, (void *)desc, e->msg_buf,
        hw->aq.arq_buf_size);

    /* Restore the original datalen and buffer address in the desc,
     * FW updates datalen to indicate the event message
     * size
     */
    bi = &hw->aq.arq.r.arq_bi[ntc];
#ifdef I40E_QV
    i40e_memset((void *)desc, 0, sizeof(struct i40e_aq_desc), I40E_NONDMA_MEM);
#else
    i40e_memset((void *)desc, 0, sizeof(struct i40e_aq_desc), I40E_DMA_MEM);
#endif

    desc->flags = CPU_TO_LE16(I40E_AQ_FLAG_BUF);
    if (hw->aq.arq_buf_size > I40E_AQ_LARGE_BUF)
        desc->flags |= CPU_TO_LE16(I40E_AQ_FLAG_LB);
    desc->datalen = CPU_TO_LE16((u16)bi->size);
    desc->params.external.addr_high = CPU_TO_LE32(I40E_HI_DWORD(bi->pa));
    desc->params.external.addr_low = CPU_TO_LE32(I40E_LO_DWORD(bi->pa));
#ifdef I40E_QV
    /* copy the descriptor from userspace buffer to ring */
    i40e_memcpy(qv_desc_on_ring, desc,
        sizeof(struct i40e_aq_desc), I40E_NONDMA_TO_DMA);
#endif /* I40E_QV */

    /* set tail = the last cleaned desc index. */
    wr32(hw, hw->aq.arq.tail, ntc);
    /* ntc is updated to tail + 1 */
    ntc++;
    if (ntc == hw->aq.num_arq_entries)
        ntc = 0;
    hw->aq.arq.next_to_clean = ntc;
    hw->aq.arq.next_to_use = ntu;

#ifdef PF_DRIVER
#ifdef I40E_NVMUPD_SUPPORT
    i40e_nvmupd_check_wait_event(hw, LE16_TO_CPU(e->desc.opcode));
#endif /* I40E_NVMUPD_SUPPORT */
#endif /* PF_DRIVER */
clean_arq_element_out:
    /* Set pending if needed, unlock and return */
    if (pending != NULL)
        *pending = (ntc > ntu ? hw->aq.arq.count : 0) + (ntu - ntc);
clean_arq_element_err:
    i40e_release_spinlock(&hw->aq.arq_spinlock);

    return ret_code;
}

