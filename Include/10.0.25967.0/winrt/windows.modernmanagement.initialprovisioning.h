
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Emodernmanagement2Einitialprovisioning_h__
#define __windows2Emodernmanagement2Einitialprovisioning_h__
#ifndef __windows2Emodernmanagement2Einitialprovisioning_p_h__
#define __windows2Emodernmanagement2Einitialprovisioning_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x110000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IAgentProvisioningProgress;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress ABI::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IBatchProgress;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress ABI::Windows::ModernManagement::InitialProvisioning::IBatchProgress

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IConnectionChangedEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs ABI::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IConnectionHeartbeatEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs ABI::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IDeploymentProgressStateChangedEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs ABI::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IMachineProvisioningProgressReporter;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IMachineProvisioningProgressReporterFactory;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IProgressUpdateEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs ABI::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IProvisioningConfigurationServiceProviderContext;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext ABI::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                interface IWorkload;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload ABI::Windows::ModernManagement::InitialProvisioning::IWorkload

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class ProvisioningConfigurationServiceProviderContext;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE
#define DEF___FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3f3d1ca3-625a-5bf9-991f-81587a7ce687"))
IAsyncOperation<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*, ABI::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*> __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_t;
#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf692e52-0825-54dc-a31a-847dacbeec20"))
IAsyncOperationCompletedHandler<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*, ABI::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext*> __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class BatchProgress;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#define DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b82a66e7-68d3-5f02-bcd4-b44c51e51419"))
IIterator<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*, ABI::Windows::ModernManagement::InitialProvisioning::IBatchProgress*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ModernManagement.InitialProvisioning.BatchProgress>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t;
#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#define DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a853e7da-fab2-5e72-9bea-4726fcb16d7e"))
IIterable<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*, ABI::Windows::ModernManagement::InitialProvisioning::IBatchProgress*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ModernManagement.InitialProvisioning.BatchProgress>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t;
#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class Workload;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#define DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("929a298f-bdb4-5b8f-88f7-4616b9c21c88"))
IIterator<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::Workload*, ABI::Windows::ModernManagement::InitialProvisioning::IWorkload*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ModernManagement.InitialProvisioning.Workload>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t;
#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#define DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4e28f34e-bde8-57eb-9bd5-f86eabb89923"))
IIterable<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::Workload*, ABI::Windows::ModernManagement::InitialProvisioning::IWorkload*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ModernManagement.InitialProvisioning.Workload>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t;
#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#define DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6d7bfe2a-0e03-50aa-98b1-6523d9a45dc3"))
IVectorView<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*, ABI::Windows::ModernManagement::InitialProvisioning::IBatchProgress*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ModernManagement.InitialProvisioning.BatchProgress>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t;
#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#define DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe5048b3-531e-5c08-a53b-8545074b5b2b"))
IVectorView<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::Workload*, ABI::Windows::ModernManagement::InitialProvisioning::IWorkload*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ModernManagement.InitialProvisioning.Workload>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t;
#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#define DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("87e9eb9e-8171-5e4b-9fdd-da90ad519dc7"))
IVector<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*, ABI::Windows::ModernManagement::InitialProvisioning::IBatchProgress*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ModernManagement.InitialProvisioning.BatchProgress>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ModernManagement::InitialProvisioning::BatchProgress*> __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t;
#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#define DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("804e4b9a-00b6-56ae-a82a-526835761ea6"))
IVector<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::Workload*, ABI::Windows::ModernManagement::InitialProvisioning::IWorkload*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ModernManagement.InitialProvisioning.Workload>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ModernManagement::InitialProvisioning::Workload*> __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t;
#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000


#ifndef DEF___FIReference_1_int_USE
#define DEF___FIReference_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4"))
IReference<int> : IReference_impl<int>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IReference`1<Int32>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<int> __FIReference_1_int_t;
#define __FIReference_1_int ABI::Windows::Foundation::__FIReference_1_int_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_int_USE */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            typedef struct DateTime DateTime;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */

#endif // WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class MachineProvisioningProgressReporter;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class ConnectionChangedEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("05f65bdf-05f7-54d8-b1e1-8a77a069447d"))
ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs*, ABI::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter, Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs*> __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class ConnectionHeartbeatEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("66effaca-abea-5804-a50e-3e6ae7ff742d"))
ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs*, ABI::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter, Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs*> __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_t;
#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class DeploymentProgressStateChangedEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e34695c-942a-5292-b154-565c2cdeb8fc"))
ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs*, ABI::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter, Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter*, ABI::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs*> __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_USE */

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IPropertyValue;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIPropertyValue ABI::Windows::Foundation::IPropertyValue

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                typedef enum AgentProgressState : int AgentProgressState;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                typedef enum ProgressConnectionChange : int ProgressConnectionChange;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                typedef enum ProgressState : int ProgressState;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                typedef enum WorkloadState : int WorkloadState;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class AgentProvisioningProgress;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                class ProgressUpdateEventArgs;
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.AgentProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                enum AgentProgressState : int
                {
                    AgentProgressState_NotStarted = 0,
                    AgentProgressState_Initializing = 1,
                    AgentProgressState_InProgress = 2,
                    AgentProgressState_Complete = 3,
                    AgentProgressState_ErrorOccurred = 4,
                    AgentProgressState_RebootRequired = 5,
                    AgentProgressState_Cancelled = 6,
                };
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.ProgressConnectionChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                enum ProgressConnectionChange : int
                {
                    ProgressConnectionChange_NoChange = 0,
                    ProgressConnectionChange_HostConnectionLost = 1,
                    ProgressConnectionChange_HostReinitialized = 2,
                    ProgressConnectionChange_AgentConnectionLost = 3,
                    ProgressConnectionChange_AgentReinitialized = 4,
                    ProgressConnectionChange_InternetConnectionLost = 5,
                    ProgressConnectionChange_InternetConnectionRestored = 6,
                };
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.ProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                enum ProgressState : int
                {
                    ProgressState_NoChange = 0,
                    ProgressState_UserCancel = 1,
                    ProgressState_UserRequestedRetry = 2,
                };
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.WorkloadState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                enum WorkloadState : int
                {
                    WorkloadState_NotStarted = 0,
                    WorkloadState_InProgress = 1,
                    WorkloadState_Completed = 2,
                    WorkloadState_Failed = 3,
                    WorkloadState_Cancelled = 4,
                    WorkloadState_Skipped = 5,
                    WorkloadState_Uninstalled = 6,
                    WorkloadState_RebootRequired = 7,
                };
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress[] = L"Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("acde6947-0064-5f34-aa94-68775bfe459c")
                IAgentProvisioningProgress : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ProgressPercentage(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ProgressPercentage(
                        INT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_CompletionEtaInSeconds(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CompletionEtaInSeconds(
                        INT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ProgressText(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ProgressText(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ProgressSubtext(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ProgressSubtext(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_KnownBatches(
                        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_KnownBatches(
                        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_CurrentBatchIndex(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CurrentBatchIndex(
                        INT32 value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IAgentProvisioningProgress = __uuidof(IAgentProvisioningProgress);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IBatchProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.BatchProgress
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IBatchProgress[] = L"Windows.ModernManagement.InitialProvisioning.IBatchProgress";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("4ae1176d-e0fa-51a8-8a46-e7885465f2e9")
                IBatchProgress : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CategoryTitle(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CategoryTitle(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_BatchWorkloads(
                        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_BatchWorkloads(
                        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IBatchProgress = __uuidof(IBatchProgress);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("054064b9-bc73-5ed5-a406-51095e32e713")
                IConnectionChangedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ProgressConnectionChange(
                        ABI::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ProgressConnectionChange(
                        ABI::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Context(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Context(
                        HSTRING value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IConnectionChangedEventArgs = __uuidof(IConnectionChangedEventArgs);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("26edf06d-8597-5ad8-ab76-64f617c308e2")
                IConnectionHeartbeatEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Context(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Context(
                        HSTRING value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IConnectionHeartbeatEventArgs = __uuidof(IConnectionHeartbeatEventArgs);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("868b7c8f-f295-5da1-ab3f-e49f00d28042")
                IDeploymentProgressStateChangedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ProgressState(
                        ABI::Windows::ModernManagement::InitialProvisioning::ProgressState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ProgressState(
                        ABI::Windows::ModernManagement::InitialProvisioning::ProgressState value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Context(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Context(
                        HSTRING value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IDeploymentProgressStateChangedEventArgs = __uuidof(IDeploymentProgressStateChangedEventArgs);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter[] = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("00692de5-5f16-5608-a931-ea73bb96ad83")
                IMachineProvisioningProgressReporter : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ContextId(
                        GUID* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_DeploymentProgressStateChanged(
                        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_DeploymentProgressStateChanged(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ConnectionHeartbeat(
                        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ConnectionHeartbeat(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ConnectionChanged(
                        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ConnectionChanged(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportProgress(
                        ABI::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs* progressUpdateEventArgs
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProvisioningConfigurationServiceProviderContextAsync(
                        __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext** operation
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IMachineProvisioningProgressReporter = __uuidof(IMachineProvisioningProgressReporter);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporterFactory[] = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("43bc4baf-7308-57c8-9af7-74f6c2000e84")
                IMachineProvisioningProgressReporterFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        ABI::Windows::Foundation::IUriRuntimeClass* launchUri,
                        ABI::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter** value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IMachineProvisioningProgressReporterFactory = __uuidof(IMachineProvisioningProgressReporterFactory);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("9d603965-ac6f-5ba4-9708-627bb98b23cc")
                IProgressUpdateEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_overallState(
                        ABI::Windows::ModernManagement::InitialProvisioning::AgentProgressState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_overallState(
                        ABI::Windows::ModernManagement::InitialProvisioning::AgentProgressState value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_provisioningStatus(
                        ABI::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_provisioningStatus(
                        ABI::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress* value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IProgressUpdateEventArgs = __uuidof(IProgressUpdateEventArgs);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext[] = L"Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("03003737-bb93-55c7-b433-7a697ab261df")
                IProvisioningConfigurationServiceProviderContext : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Context(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Context(
                        HSTRING value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IProvisioningConfigurationServiceProviderContext = __uuidof(IProvisioningConfigurationServiceProviderContext);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IWorkload
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.Workload
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IWorkload[] = L"Windows.ModernManagement.InitialProvisioning.IWorkload";
namespace ABI {
    namespace Windows {
        namespace ModernManagement {
            namespace InitialProvisioning {
                MIDL_INTERFACE("d39d0d77-4ae0-5d71-9b23-4a7b73d47209")
                IWorkload : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_WorkloadId(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_WorkloadId(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_FriendlyName(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                        __FIReference_1_Windows__CFoundation__CDateTime** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_StartTime(
                        __FIReference_1_Windows__CFoundation__CDateTime* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_EndTime(
                        __FIReference_1_Windows__CFoundation__CDateTime** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_EndTime(
                        __FIReference_1_Windows__CFoundation__CDateTime* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                        __FIReference_1_int** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ErrorCode(
                        __FIReference_1_int* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ErrorMessage(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ErrorMessage(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PossibleCause(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PossibleCause(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PossibleResolution(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PossibleResolution(
                        HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_WorkloadState(
                        ABI::Windows::ModernManagement::InitialProvisioning::WorkloadState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_WorkloadState(
                        ABI::Windows::ModernManagement::InitialProvisioning::WorkloadState value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_WorkloadStateDetails(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_WorkloadStateDetails(
                        HSTRING value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IWorkload = __uuidof(IWorkload);
            } /* InitialProvisioning */
        } /* ModernManagement */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress[] = L"Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.BatchProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IBatchProgress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_BatchProgress_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_BatchProgress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_BatchProgress[] = L"Windows.ModernManagement.InitialProvisioning.BatchProgress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory interface starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter[] = L"Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext[] = L"Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.Workload
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IWorkload ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_Workload_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_Workload_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_Workload[] = L"Windows.ModernManagement.InitialProvisioning.Workload";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload;

#endif // ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext;

typedef struct __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext** result);

    END_INTERFACE
} __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl;

interface __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_put_Completed(This, handler) \
    ((This)->lpVtbl->put_Completed(This, handler))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_get_Completed(This, result) \
    ((This)->lpVtbl->get_Completed(This, result))

#define __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_GetResults(This, result) \
    ((This)->lpVtbl->GetResults(This, result))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* This,
        __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext* asyncInfo,
        AsyncStatus asyncStatus);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_Invoke(This, asyncInfo, asyncStatus) \
    ((This)->lpVtbl->Invoke(This, asyncInfo, asyncStatus))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

typedef struct __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl;

interface __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress
{
    CONST_VTBL struct __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

typedef struct __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress** result);

    END_INTERFACE
} __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl;

interface __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress
{
    CONST_VTBL struct __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

typedef struct __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl;

interface __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload
{
    CONST_VTBL struct __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

typedef struct __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __FIIterator_1_Windows__CModernManagement__CInitialProvisioning__CWorkload** result);

    END_INTERFACE
} __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl;

interface __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload
{
    CONST_VTBL struct __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

typedef struct __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl;

interface __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress
{
    CONST_VTBL struct __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

typedef struct __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl;

interface __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload
{
    CONST_VTBL struct __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress;

typedef struct __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress** result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* SetAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* value);
    HRESULT (STDMETHODCALLTYPE* InsertAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 index);
    HRESULT (STDMETHODCALLTYPE* Append)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAtEnd)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* Clear)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** items,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* ReplaceAll)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress** items);

    END_INTERFACE
} __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl;

interface __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress
{
    CONST_VTBL struct __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetView(This, result) \
    ((This)->lpVtbl->GetView(This, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_SetAt(This, index, value) \
    ((This)->lpVtbl->SetAt(This, index, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_InsertAt(This, index, value) \
    ((This)->lpVtbl->InsertAt(This, index, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_RemoveAt(This, index) \
    ((This)->lpVtbl->RemoveAt(This, index))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Append(This, value) \
    ((This)->lpVtbl->Append(This, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_RemoveAtEnd(This) \
    ((This)->lpVtbl->RemoveAtEnd(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_Clear(This) \
    ((This)->lpVtbl->Clear(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_ReplaceAll(This, itemsLength, items) \
    ((This)->lpVtbl->ReplaceAll(This, itemsLength, items))

#endif /* COBJMACROS */

#endif // ____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload;

typedef struct __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __FIVectorView_1_Windows__CModernManagement__CInitialProvisioning__CWorkload** result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* SetAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* value);
    HRESULT (STDMETHODCALLTYPE* InsertAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 index,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAt)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 index);
    HRESULT (STDMETHODCALLTYPE* Append)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAtEnd)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* Clear)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** items,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* ReplaceAll)(__FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload** items);

    END_INTERFACE
} __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl;

interface __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload
{
    CONST_VTBL struct __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkloadVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetView(This, result) \
    ((This)->lpVtbl->GetView(This, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_SetAt(This, index, value) \
    ((This)->lpVtbl->SetAt(This, index, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_InsertAt(This, index, value) \
    ((This)->lpVtbl->InsertAt(This, index, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_RemoveAt(This, index) \
    ((This)->lpVtbl->RemoveAt(This, index))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Append(This, value) \
    ((This)->lpVtbl->Append(This, value))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_RemoveAtEnd(This) \
    ((This)->lpVtbl->RemoveAtEnd(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_Clear(This) \
    ((This)->lpVtbl->Clear(This))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#define __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_ReplaceAll(This, itemsLength, items) \
    ((This)->lpVtbl->ReplaceAll(This, itemsLength, items))

#endif /* COBJMACROS */

#endif // ____FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if !defined(____FIReference_1_int_INTERFACE_DEFINED__)
#define ____FIReference_1_int_INTERFACE_DEFINED__

typedef interface __FIReference_1_int __FIReference_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_int;

typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIReference_1_int* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIReference_1_int* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIReference_1_int* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIReference_1_int* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIReference_1_int* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIReference_1_int* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIReference_1_int* This,
        INT32* result);

    END_INTERFACE
} __FIReference_1_intVtbl;

interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIReference_1_int_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIReference_1_int_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIReference_1_int_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIReference_1_int_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIReference_1_int_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIReference_1_int_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIReference_1_int_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIReference_1_int_INTERFACE_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#if WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIReference_1_Windows__CFoundation__CDateTime* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIReference_1_Windows__CFoundation__CDateTime* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIReference_1_Windows__CFoundation__CDateTime* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIReference_1_Windows__CFoundation__CDateTime* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIReference_1_Windows__CFoundation__CDateTime* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIReference_1_Windows__CFoundation__CDateTime* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIReference_1_Windows__CFoundation__CDateTime* This,
        struct __x_ABI_CWindows_CFoundation_CDateTime* result);

    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* sender,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* sender,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* sender,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIPropertyValue __x_ABI_CWindows_CFoundation_CIPropertyValue;

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CAgentProgressState __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CAgentProgressState;

typedef enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressConnectionChange __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressConnectionChange;

typedef enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressState __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressState;

typedef enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CWorkloadState __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CWorkloadState;

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.AgentProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CAgentProgressState
{
    AgentProgressState_NotStarted = 0,
    AgentProgressState_Initializing = 1,
    AgentProgressState_InProgress = 2,
    AgentProgressState_Complete = 3,
    AgentProgressState_ErrorOccurred = 4,
    AgentProgressState_RebootRequired = 5,
    AgentProgressState_Cancelled = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.ProgressConnectionChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressConnectionChange
{
    ProgressConnectionChange_NoChange = 0,
    ProgressConnectionChange_HostConnectionLost = 1,
    ProgressConnectionChange_HostReinitialized = 2,
    ProgressConnectionChange_AgentConnectionLost = 3,
    ProgressConnectionChange_AgentReinitialized = 4,
    ProgressConnectionChange_InternetConnectionLost = 5,
    ProgressConnectionChange_InternetConnectionRestored = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.ProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressState
{
    ProgressState_NoChange = 0,
    ProgressState_UserCancel = 1,
    ProgressState_UserRequestedRetry = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Struct Windows.ModernManagement.InitialProvisioning.WorkloadState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CWorkloadState
{
    WorkloadState_NotStarted = 0,
    WorkloadState_InProgress = 1,
    WorkloadState_Completed = 2,
    WorkloadState_Failed = 3,
    WorkloadState_Cancelled = 4,
    WorkloadState_Skipped = 5,
    WorkloadState_Uninstalled = 6,
    WorkloadState_RebootRequired = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress[] = L"Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ProgressPercentage)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* put_ProgressPercentage)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32 value);
    HRESULT (STDMETHODCALLTYPE* get_CompletionEtaInSeconds)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* put_CompletionEtaInSeconds)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32 value);
    HRESULT (STDMETHODCALLTYPE* get_ProgressText)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_ProgressText)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_ProgressSubtext)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_ProgressSubtext)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_KnownBatches)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress** value);
    HRESULT (STDMETHODCALLTYPE* put_KnownBatches)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CBatchProgress* value);
    HRESULT (STDMETHODCALLTYPE* get_CurrentBatchIndex)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* put_CurrentBatchIndex)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* This,
        INT32 value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgressVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_ProgressPercentage(This, value) \
    ((This)->lpVtbl->get_ProgressPercentage(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_ProgressPercentage(This, value) \
    ((This)->lpVtbl->put_ProgressPercentage(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_CompletionEtaInSeconds(This, value) \
    ((This)->lpVtbl->get_CompletionEtaInSeconds(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_CompletionEtaInSeconds(This, value) \
    ((This)->lpVtbl->put_CompletionEtaInSeconds(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_ProgressText(This, value) \
    ((This)->lpVtbl->get_ProgressText(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_ProgressText(This, value) \
    ((This)->lpVtbl->put_ProgressText(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_ProgressSubtext(This, value) \
    ((This)->lpVtbl->get_ProgressSubtext(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_ProgressSubtext(This, value) \
    ((This)->lpVtbl->put_ProgressSubtext(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_KnownBatches(This, value) \
    ((This)->lpVtbl->get_KnownBatches(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_KnownBatches(This, value) \
    ((This)->lpVtbl->put_KnownBatches(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_get_CurrentBatchIndex(This, value) \
    ((This)->lpVtbl->get_CurrentBatchIndex(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_put_CurrentBatchIndex(This, value) \
    ((This)->lpVtbl->put_CurrentBatchIndex(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IBatchProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.BatchProgress
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IBatchProgress[] = L"Windows.ModernManagement.InitialProvisioning.IBatchProgress";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CategoryTitle)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_CategoryTitle)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_BatchWorkloads)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload** value);
    HRESULT (STDMETHODCALLTYPE* put_BatchWorkloads)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress* This,
        __FIVector_1_Windows__CModernManagement__CInitialProvisioning__CWorkload* value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgressVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_get_CategoryTitle(This, value) \
    ((This)->lpVtbl->get_CategoryTitle(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_put_CategoryTitle(This, value) \
    ((This)->lpVtbl->put_CategoryTitle(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_get_BatchWorkloads(This, value) \
    ((This)->lpVtbl->get_BatchWorkloads(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_put_BatchWorkloads(This, value) \
    ((This)->lpVtbl->put_BatchWorkloads(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIBatchProgress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ProgressConnectionChange)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressConnectionChange* value);
    HRESULT (STDMETHODCALLTYPE* put_ProgressConnectionChange)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressConnectionChange value);
    HRESULT (STDMETHODCALLTYPE* get_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgsVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_get_ProgressConnectionChange(This, value) \
    ((This)->lpVtbl->get_ProgressConnectionChange(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_put_ProgressConnectionChange(This, value) \
    ((This)->lpVtbl->put_ProgressConnectionChange(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_get_Context(This, value) \
    ((This)->lpVtbl->get_Context(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_put_Context(This, value) \
    ((This)->lpVtbl->put_Context(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgsVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_get_Context(This, value) \
    ((This)->lpVtbl->get_Context(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_put_Context(This, value) \
    ((This)->lpVtbl->put_Context(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIConnectionHeartbeatEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ProgressState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressState* value);
    HRESULT (STDMETHODCALLTYPE* put_ProgressState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CProgressState value);
    HRESULT (STDMETHODCALLTYPE* get_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_get_ProgressState(This, value) \
    ((This)->lpVtbl->get_ProgressState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_put_ProgressState(This, value) \
    ((This)->lpVtbl->put_ProgressState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_get_Context(This, value) \
    ((This)->lpVtbl->get_Context(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_put_Context(This, value) \
    ((This)->lpVtbl->put_Context(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIDeploymentProgressStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter[] = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ContextId)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        GUID* value);
    HRESULT (STDMETHODCALLTYPE* add_DeploymentProgressStateChanged)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CDeploymentProgressStateChangedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_DeploymentProgressStateChanged)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ConnectionHeartbeat)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionHeartbeatEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ConnectionHeartbeat)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ConnectionChanged)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        __FITypedEventHandler_2_Windows__CModernManagement__CInitialProvisioning__CMachineProvisioningProgressReporter_Windows__CModernManagement__CInitialProvisioning__CConnectionChangedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ConnectionChanged)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* ReportProgress)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* progressUpdateEventArgs);
    HRESULT (STDMETHODCALLTYPE* GetProvisioningConfigurationServiceProviderContextAsync)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter* This,
        __FIAsyncOperation_1_Windows__CModernManagement__CInitialProvisioning__CProvisioningConfigurationServiceProviderContext** operation);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_get_ContextId(This, value) \
    ((This)->lpVtbl->get_ContextId(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_add_DeploymentProgressStateChanged(This, handler, token) \
    ((This)->lpVtbl->add_DeploymentProgressStateChanged(This, handler, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_remove_DeploymentProgressStateChanged(This, token) \
    ((This)->lpVtbl->remove_DeploymentProgressStateChanged(This, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_add_ConnectionHeartbeat(This, handler, token) \
    ((This)->lpVtbl->add_ConnectionHeartbeat(This, handler, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_remove_ConnectionHeartbeat(This, token) \
    ((This)->lpVtbl->remove_ConnectionHeartbeat(This, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_add_ConnectionChanged(This, handler, token) \
    ((This)->lpVtbl->add_ConnectionChanged(This, handler, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_remove_ConnectionChanged(This, token) \
    ((This)->lpVtbl->remove_ConnectionChanged(This, token))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_ReportProgress(This, progressUpdateEventArgs) \
    ((This)->lpVtbl->ReportProgress(This, progressUpdateEventArgs))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_GetProvisioningConfigurationServiceProviderContextAsync(This, operation) \
    ((This)->lpVtbl->GetProvisioningConfigurationServiceProviderContextAsync(This, operation))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporterFactory[] = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateInstance)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* launchUri,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporter** value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactoryVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_CreateInstance(This, launchUri, value) \
    ((This)->lpVtbl->CreateInstance(This, launchUri, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIMachineProvisioningProgressReporterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_overallState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CAgentProgressState* value);
    HRESULT (STDMETHODCALLTYPE* put_overallState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CAgentProgressState value);
    HRESULT (STDMETHODCALLTYPE* get_provisioningStatus)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress** value);
    HRESULT (STDMETHODCALLTYPE* put_provisioningStatus)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs* This,
        __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIAgentProvisioningProgress* value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgsVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_get_overallState(This, value) \
    ((This)->lpVtbl->get_overallState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_put_overallState(This, value) \
    ((This)->lpVtbl->put_overallState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_get_provisioningStatus(This, value) \
    ((This)->lpVtbl->get_provisioningStatus(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_put_provisioningStatus(This, value) \
    ((This)->lpVtbl->put_provisioningStatus(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProgressUpdateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext[] = L"Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Context)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContextVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_get_Context(This, value) \
    ((This)->lpVtbl->get_Context(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_put_Context(This, value) \
    ((This)->lpVtbl->put_Context(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIProvisioningConfigurationServiceProviderContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Interface Windows.ModernManagement.InitialProvisioning.IWorkload
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * Interface is a part of the implementation of type Windows.ModernManagement.InitialProvisioning.Workload
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#if !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ModernManagement_InitialProvisioning_IWorkload[] = L"Windows.ModernManagement.InitialProvisioning.IWorkload";
typedef struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkloadVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_WorkloadId)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_WorkloadId)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_FriendlyName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_FriendlyName)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_StartTime)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_Windows__CFoundation__CDateTime** value);
    HRESULT (STDMETHODCALLTYPE* put_StartTime)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_Windows__CFoundation__CDateTime* value);
    HRESULT (STDMETHODCALLTYPE* get_EndTime)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_Windows__CFoundation__CDateTime** value);
    HRESULT (STDMETHODCALLTYPE* put_EndTime)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_Windows__CFoundation__CDateTime* value);
    HRESULT (STDMETHODCALLTYPE* get_ErrorCode)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_int** value);
    HRESULT (STDMETHODCALLTYPE* put_ErrorCode)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        __FIReference_1_int* value);
    HRESULT (STDMETHODCALLTYPE* get_ErrorMessage)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_ErrorMessage)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_PossibleCause)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_PossibleCause)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_PossibleResolution)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_PossibleResolution)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_WorkloadState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CWorkloadState* value);
    HRESULT (STDMETHODCALLTYPE* put_WorkloadState)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        enum __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CWorkloadState value);
    HRESULT (STDMETHODCALLTYPE* get_WorkloadStateDetails)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_WorkloadStateDetails)(__x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkloadVtbl;

interface __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload
{
    CONST_VTBL struct __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkloadVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_WorkloadId(This, value) \
    ((This)->lpVtbl->get_WorkloadId(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_WorkloadId(This, value) \
    ((This)->lpVtbl->put_WorkloadId(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_FriendlyName(This, value) \
    ((This)->lpVtbl->get_FriendlyName(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_FriendlyName(This, value) \
    ((This)->lpVtbl->put_FriendlyName(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_StartTime(This, value) \
    ((This)->lpVtbl->get_StartTime(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_StartTime(This, value) \
    ((This)->lpVtbl->put_StartTime(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_EndTime(This, value) \
    ((This)->lpVtbl->get_EndTime(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_EndTime(This, value) \
    ((This)->lpVtbl->put_EndTime(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_ErrorCode(This, value) \
    ((This)->lpVtbl->get_ErrorCode(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_ErrorCode(This, value) \
    ((This)->lpVtbl->put_ErrorCode(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_ErrorMessage(This, value) \
    ((This)->lpVtbl->get_ErrorMessage(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_ErrorMessage(This, value) \
    ((This)->lpVtbl->put_ErrorMessage(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_PossibleCause(This, value) \
    ((This)->lpVtbl->get_PossibleCause(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_PossibleCause(This, value) \
    ((This)->lpVtbl->put_PossibleCause(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_PossibleResolution(This, value) \
    ((This)->lpVtbl->get_PossibleResolution(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_PossibleResolution(This, value) \
    ((This)->lpVtbl->put_PossibleResolution(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_WorkloadState(This, value) \
    ((This)->lpVtbl->get_WorkloadState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_WorkloadState(This, value) \
    ((This)->lpVtbl->put_WorkloadState(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_get_WorkloadStateDetails(This, value) \
    ((This)->lpVtbl->get_WorkloadStateDetails(This, value))

#define __x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_put_WorkloadStateDetails(This, value) \
    ((This)->lpVtbl->put_WorkloadStateDetails(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload;
#endif /* !defined(____x_ABI_CWindows_CModernManagement_CInitialProvisioning_CIWorkload_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_AgentProvisioningProgress[] = L"Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.BatchProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IBatchProgress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_BatchProgress_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_BatchProgress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_BatchProgress[] = L"Windows.ModernManagement.InitialProvisioning.BatchProgress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ConnectionChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ConnectionHeartbeatEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_DeploymentProgressStateChangedEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory interface starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_MachineProvisioningProgressReporter[] = L"Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ProgressUpdateEventArgs[] = L"Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_ProvisioningConfigurationServiceProviderContext[] = L"Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

/*
 *
 * Class Windows.ModernManagement.InitialProvisioning.Workload
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 16.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 16.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ModernManagement.InitialProvisioning.IWorkload ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000
#ifndef RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_Workload_DEFINED
#define RUNTIMECLASS_Windows_ModernManagement_InitialProvisioning_Workload_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ModernManagement_InitialProvisioning_Workload[] = L"Windows.ModernManagement.InitialProvisioning.Workload";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x100000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emodernmanagement2Einitialprovisioning_p_h__

#endif // __windows2Emodernmanagement2Einitialprovisioning_h__
