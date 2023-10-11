// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Web_Http_H
#define WINRT_Windows_Web_Http_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.Web.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
#include "winrt/impl/Windows.Web.Http.Headers.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Web_Http_IHttpBufferContentFactory<D>::CreateFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& content) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpBufferContentFactory)->CreateFromBuffer(*(void**)(&content), &value));
        return winrt::Windows::Web::Http::HttpBufferContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpBufferContentFactory<D>::CreateFromBufferWithOffset(winrt::Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpBufferContentFactory)->CreateFromBufferWithOffset(*(void**)(&content), offset, count, &value));
        return winrt::Windows::Web::Http::HttpBufferContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::DeleteAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->DeleteAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::GetAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->GetAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::GetAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::HttpCompletionOption const& completionOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->GetWithOptionAsync(*(void**)(&uri), static_cast<int32_t>(completionOption), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::GetBufferAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->GetBufferAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::GetInputStreamAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->GetInputStreamAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IInputStream, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::GetStringAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->GetStringAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<hstring, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::PostAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->PostAsync(*(void**)(&uri), *(void**)(&content), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::PutAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->PutAsync(*(void**)(&uri), *(void**)(&content), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::SendRequestAsync(winrt::Windows::Web::Http::HttpRequestMessage const& request) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->SendRequestAsync(*(void**)(&request), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::SendRequestAsync(winrt::Windows::Web::Http::HttpRequestMessage const& request, winrt::Windows::Web::Http::HttpCompletionOption const& completionOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->SendRequestWithOptionAsync(*(void**)(&request), static_cast<int32_t>(completionOption), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient<D>::DefaultRequestHeaders() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient)->get_DefaultRequestHeaders(&value));
        return winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryDeleteAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryDeleteAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryGetAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryGetAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryGetAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::HttpCompletionOption const& completionOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryGetAsync2(*(void**)(&uri), static_cast<int32_t>(completionOption), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryGetBufferAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryGetBufferAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetBufferResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryGetInputStreamAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryGetInputStreamAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetInputStreamResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryGetStringAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryGetStringAsync(*(void**)(&uri), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetStringResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryPostAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryPostAsync(*(void**)(&uri), *(void**)(&content), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TryPutAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TryPutAsync(*(void**)(&uri), *(void**)(&content), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TrySendRequestAsync(winrt::Windows::Web::Http::HttpRequestMessage const& request) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TrySendRequestAsync(*(void**)(&request), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient2<D>::TrySendRequestAsync(winrt::Windows::Web::Http::HttpRequestMessage const& request, winrt::Windows::Web::Http::HttpCompletionOption const& completionOption) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient2)->TrySendRequestAsync2(*(void**)(&request), static_cast<int32_t>(completionOption), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient3<D>::DefaultPrivacyAnnotation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient3)->get_DefaultPrivacyAnnotation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClient3<D>::DefaultPrivacyAnnotation(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClient3)->put_DefaultPrivacyAnnotation(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpClientFactory<D>::Create(winrt::Windows::Web::Http::Filters::IHttpFilter const& filter) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpClientFactory)->Create(*(void**)(&filter), &value));
        return winrt::Windows::Web::Http::HttpClient{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::Headers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->get_Headers(&value));
        return winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::BufferAllAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->BufferAllAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::ReadAsBufferAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->ReadAsBufferAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer, uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::ReadAsInputStreamAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->ReadAsInputStreamAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IInputStream, uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::ReadAsStringAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->ReadAsStringAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::TryComputeLength(uint64_t& length) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->TryComputeLength(&length, &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpContent<D>::WriteToStreamAsync(winrt::Windows::Storage::Streams::IOutputStream const& outputStream) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpContent)->WriteToStreamAsync(*(void**)(&outputStream), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Domain() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Domain(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Expires() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Expires(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Expires(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->put_Expires(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::HttpOnly() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_HttpOnly(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::HttpOnly(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->put_HttpOnly(value));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Secure() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Secure(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Secure(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->put_Secure(value));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookie<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookie)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookieFactory<D>::Create(param::hstring const& name, param::hstring const& domain, param::hstring const& path) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookieFactory)->Create(*(void**)(&name), *(void**)(&domain), *(void**)(&path), &value));
        return winrt::Windows::Web::Http::HttpCookie{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookieManager<D>::SetCookie(winrt::Windows::Web::Http::HttpCookie const& cookie) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookieManager)->SetCookie(*(void**)(&cookie), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookieManager<D>::SetCookie(winrt::Windows::Web::Http::HttpCookie const& cookie, bool thirdParty) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookieManager)->SetCookieWithThirdParty(*(void**)(&cookie), thirdParty, &result));
        return result;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookieManager<D>::DeleteCookie(winrt::Windows::Web::Http::HttpCookie const& cookie) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookieManager)->DeleteCookie(*(void**)(&cookie)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpCookieManager<D>::GetCookies(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpCookieManager)->GetCookies(*(void**)(&uri), &result));
        return winrt::Windows::Web::Http::HttpCookieCollection{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<D>::Create(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory)->Create(*(void**)(&content), &value));
        return winrt::Windows::Web::Http::HttpFormUrlEncodedContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetBufferResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetBufferResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetBufferResult<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetBufferResult)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetBufferResult<D>::ResponseMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetBufferResult)->get_ResponseMessage(&value));
        return winrt::Windows::Web::Http::HttpResponseMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetBufferResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetBufferResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetBufferResult<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetBufferResult)->get_Value(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetInputStreamResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetInputStreamResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetInputStreamResult<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetInputStreamResult)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetInputStreamResult<D>::ResponseMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetInputStreamResult)->get_ResponseMessage(&value));
        return winrt::Windows::Web::Http::HttpResponseMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetInputStreamResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetInputStreamResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetInputStreamResult<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetInputStreamResult)->get_Value(&value));
        return winrt::Windows::Storage::Streams::IInputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetStringResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetStringResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetStringResult<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetStringResult)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetStringResult<D>::ResponseMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetStringResult)->get_ResponseMessage(&value));
        return winrt::Windows::Web::Http::HttpResponseMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetStringResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetStringResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpGetStringResult<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpGetStringResult)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethod<D>::Method() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethod)->get_Method(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodFactory<D>::Create(param::hstring const& method) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodFactory)->Create(*(void**)(&method), &value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Delete() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Delete(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Get() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Get(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Head() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Head(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Options() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Options(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Patch() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Patch(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Post() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Post(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMethodStatics<D>::Put() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMethodStatics)->get_Put(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartContent<D>::Add(winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartContent)->Add(*(void**)(&content)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartContentFactory<D>::CreateWithSubtype(param::hstring const& subtype) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartContentFactory)->CreateWithSubtype(*(void**)(&subtype), &value));
        return winrt::Windows::Web::Http::HttpMultipartContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartContentFactory<D>::CreateWithSubtypeAndBoundary(param::hstring const& subtype, param::hstring const& boundary) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartContentFactory)->CreateWithSubtypeAndBoundary(*(void**)(&subtype), *(void**)(&boundary), &value));
        return winrt::Windows::Web::Http::HttpMultipartContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(winrt::Windows::Web::Http::IHttpContent const& content) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartFormDataContent)->Add(*(void**)(&content)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(winrt::Windows::Web::Http::IHttpContent const& content, param::hstring const& name) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartFormDataContent)->AddWithName(*(void**)(&content), *(void**)(&name)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(winrt::Windows::Web::Http::IHttpContent const& content, param::hstring const& name, param::hstring const& fileName) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartFormDataContent)->AddWithNameAndFileName(*(void**)(&content), *(void**)(&name), *(void**)(&fileName)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory<D>::CreateWithBoundary(param::hstring const& boundary) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory)->CreateWithBoundary(*(void**)(&boundary), &value));
        return winrt::Windows::Web::Http::HttpMultipartFormDataContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_Content(&value));
        return winrt::Windows::Web::Http::IHttpContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Content(winrt::Windows::Web::Http::IHttpContent const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->put_Content(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Headers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_Headers(&value));
        return winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Method() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_Method(&value));
        return winrt::Windows::Web::Http::HttpMethod{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Method(winrt::Windows::Web::Http::HttpMethod const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->put_Method(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_Properties(&value));
        return winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::RequestUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_RequestUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::RequestUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->put_RequestUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage<D>::TransportInformation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage)->get_TransportInformation(&value));
        return winrt::Windows::Web::Http::HttpTransportInformation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage2<D>::PrivacyAnnotation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage2)->get_PrivacyAnnotation(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessage2<D>::PrivacyAnnotation(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessage2)->put_PrivacyAnnotation(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestMessageFactory<D>::Create(winrt::Windows::Web::Http::HttpMethod const& method, winrt::Windows::Foundation::Uri const& uri) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestMessageFactory)->Create(*(void**)(&method), *(void**)(&uri), &value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestResult<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestResult)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestResult<D>::ResponseMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestResult)->get_ResponseMessage(&value));
        return winrt::Windows::Web::Http::HttpResponseMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpRequestResult<D>::Succeeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpRequestResult)->get_Succeeded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_Content(&value));
        return winrt::Windows::Web::Http::IHttpContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Content(winrt::Windows::Web::Http::IHttpContent const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_Content(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Headers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_Headers(&value));
        return winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::IsSuccessStatusCode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_IsSuccessStatusCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::ReasonPhrase() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_ReasonPhrase(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::ReasonPhrase(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_ReasonPhrase(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::RequestMessage(winrt::Windows::Web::Http::HttpRequestMessage const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_RequestMessage(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Source() const
    {
        winrt::Windows::Web::Http::HttpResponseMessageSource value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_Source(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Source(winrt::Windows::Web::Http::HttpResponseMessageSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_Source(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::StatusCode() const
    {
        winrt::Windows::Web::Http::HttpStatusCode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_StatusCode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::StatusCode(winrt::Windows::Web::Http::HttpStatusCode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_StatusCode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Version() const
    {
        winrt::Windows::Web::Http::HttpVersion value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->get_Version(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::Version(winrt::Windows::Web::Http::HttpVersion const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->put_Version(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessage<D>::EnsureSuccessStatusCode() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessage)->EnsureSuccessStatusCode(&result));
        return winrt::Windows::Web::Http::HttpResponseMessage{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpResponseMessageFactory<D>::Create(winrt::Windows::Web::Http::HttpStatusCode const& statusCode) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpResponseMessageFactory)->Create(static_cast<int32_t>(statusCode), &value));
        return winrt::Windows::Web::Http::HttpResponseMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpStreamContentFactory<D>::CreateFromInputStream(winrt::Windows::Storage::Streams::IInputStream const& content) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpStreamContentFactory)->CreateFromInputStream(*(void**)(&content), &value));
        return winrt::Windows::Web::Http::HttpStreamContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromString(param::hstring const& content) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpStringContentFactory)->CreateFromString(*(void**)(&content), &value));
        return winrt::Windows::Web::Http::HttpStringContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromStringWithEncoding(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpStringContentFactory)->CreateFromStringWithEncoding(*(void**)(&content), static_cast<int32_t>(encoding), &value));
        return winrt::Windows::Web::Http::HttpStringContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromStringWithEncodingAndMediaType(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpStringContentFactory)->CreateFromStringWithEncodingAndMediaType(*(void**)(&content), static_cast<int32_t>(encoding), *(void**)(&mediaType), &value));
        return winrt::Windows::Web::Http::HttpStringContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificate(&value));
        return winrt::Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificateErrorSeverity() const
    {
        winrt::Windows::Networking::Sockets::SocketSslErrorSeverity value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificateErrorSeverity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificateErrors(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerIntermediateCertificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::IHttpTransportInformation)->get_ServerIntermediateCertificates(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpBufferContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpBufferContentFactory>
    {
        int32_t __stdcall CreateFromBuffer(void* content, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpBufferContent>(this->shim().CreateFromBuffer(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromBufferWithOffset(void* content, uint32_t offset, uint32_t count, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpBufferContent>(this->shim().CreateFromBufferWithOffset(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&content), offset, count));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpClient> : produce_base<D, winrt::Windows::Web::Http::IHttpClient>
    {
        int32_t __stdcall DeleteAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().DeleteAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().GetAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetWithOptionAsync(void* uri, int32_t completionOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().GetAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBufferAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer, winrt::Windows::Web::Http::HttpProgress>>(this->shim().GetBufferAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInputStreamAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IInputStream, winrt::Windows::Web::Http::HttpProgress>>(this->shim().GetInputStreamAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStringAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<hstring, winrt::Windows::Web::Http::HttpProgress>>(this->shim().GetStringAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PostAsync(void* uri, void* content, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().PostAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PutAsync(void* uri, void* content, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().PutAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendRequestAsync(void* request, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().SendRequestAsync(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendRequestWithOptionAsync(void* request, int32_t completionOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().SendRequestAsync(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<winrt::Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultRequestHeaders(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection>(this->shim().DefaultRequestHeaders());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpClient2> : produce_base<D, winrt::Windows::Web::Http::IHttpClient2>
    {
        int32_t __stdcall TryDeleteAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryDeleteAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryGetAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetAsync2(void* uri, int32_t completionOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryGetAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetBufferAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetBufferResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryGetBufferAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetInputStreamAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetInputStreamResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryGetInputStreamAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetStringAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpGetStringResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryGetStringAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryPostAsync(void* uri, void* content, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryPostAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryPutAsync(void* uri, void* content, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TryPutAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySendRequestAsync(void* request, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TrySendRequestAsync(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySendRequestAsync2(void* request, int32_t completionOption, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpRequestResult, winrt::Windows::Web::Http::HttpProgress>>(this->shim().TrySendRequestAsync(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<winrt::Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpClient3> : produce_base<D, winrt::Windows::Web::Http::IHttpClient3>
    {
        int32_t __stdcall get_DefaultPrivacyAnnotation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultPrivacyAnnotation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultPrivacyAnnotation(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultPrivacyAnnotation(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpClientFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpClientFactory>
    {
        int32_t __stdcall Create(void* filter, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpClient>(this->shim().Create(*reinterpret_cast<winrt::Windows::Web::Http::Filters::IHttpFilter const*>(&filter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpContent> : produce_base<D, winrt::Windows::Web::Http::IHttpContent>
    {
        int32_t __stdcall get_Headers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection>(this->shim().Headers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall BufferAllAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>>(this->shim().BufferAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadAsBufferAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer, uint64_t>>(this->shim().ReadAsBufferAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadAsInputStreamAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IInputStream, uint64_t>>(this->shim().ReadAsInputStreamAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadAsStringAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t>>(this->shim().ReadAsStringAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryComputeLength(uint64_t* length, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryComputeLength(*length));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall WriteToStreamAsync(void* outputStream, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>>(this->shim().WriteToStreamAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IOutputStream const*>(&outputStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpCookie> : produce_base<D, winrt::Windows::Web::Http::IHttpCookie>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Domain(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Domain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Expires(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().Expires());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Expires(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expires(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HttpOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HttpOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HttpOnly(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HttpOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Secure(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Secure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Secure(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Secure(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpCookieFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpCookieFactory>
    {
        int32_t __stdcall Create(void* name, void* domain, void* path, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpCookie>(this->shim().Create(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&domain), *reinterpret_cast<hstring const*>(&path)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpCookieManager> : produce_base<D, winrt::Windows::Web::Http::IHttpCookieManager>
    {
        int32_t __stdcall SetCookie(void* cookie, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SetCookie(*reinterpret_cast<winrt::Windows::Web::Http::HttpCookie const*>(&cookie)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetCookieWithThirdParty(void* cookie, bool thirdParty, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SetCookie(*reinterpret_cast<winrt::Windows::Web::Http::HttpCookie const*>(&cookie), thirdParty));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteCookie(void* cookie) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteCookie(*reinterpret_cast<winrt::Windows::Web::Http::HttpCookie const*>(&cookie));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCookies(void* uri, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Web::Http::HttpCookieCollection>(this->shim().GetCookies(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>
    {
        int32_t __stdcall Create(void* content, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpFormUrlEncodedContent>(this->shim().Create(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpGetBufferResult> : produce_base<D, winrt::Windows::Web::Http::IHttpGetBufferResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResponseMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().ResponseMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpGetInputStreamResult> : produce_base<D, winrt::Windows::Web::Http::IHttpGetInputStreamResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResponseMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().ResponseMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IInputStream>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpGetStringResult> : produce_base<D, winrt::Windows::Web::Http::IHttpGetStringResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResponseMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().ResponseMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMethod> : produce_base<D, winrt::Windows::Web::Http::IHttpMethod>
    {
        int32_t __stdcall get_Method(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Method());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMethodFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpMethodFactory>
    {
        int32_t __stdcall Create(void* method, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Create(*reinterpret_cast<hstring const*>(&method)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMethodStatics> : produce_base<D, winrt::Windows::Web::Http::IHttpMethodStatics>
    {
        int32_t __stdcall get_Delete(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Delete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Get(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Get());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Head(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Head());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Options(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Patch(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Patch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Post(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Post());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Put(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Put());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMultipartContent> : produce_base<D, winrt::Windows::Web::Http::IHttpMultipartContent>
    {
        int32_t __stdcall Add(void* content) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMultipartContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpMultipartContentFactory>
    {
        int32_t __stdcall CreateWithSubtype(void* subtype, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMultipartContent>(this->shim().CreateWithSubtype(*reinterpret_cast<hstring const*>(&subtype)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithSubtypeAndBoundary(void* subtype, void* boundary, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMultipartContent>(this->shim().CreateWithSubtypeAndBoundary(*reinterpret_cast<hstring const*>(&subtype), *reinterpret_cast<hstring const*>(&boundary)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMultipartFormDataContent> : produce_base<D, winrt::Windows::Web::Http::IHttpMultipartFormDataContent>
    {
        int32_t __stdcall Add(void* content) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWithName(void* content, void* name) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content), *reinterpret_cast<hstring const*>(&name));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddWithNameAndFileName(void* content, void* name, void* fileName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&content), *reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&fileName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory>
    {
        int32_t __stdcall CreateWithBoundary(void* boundary, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMultipartFormDataContent>(this->shim().CreateWithBoundary(*reinterpret_cast<hstring const*>(&boundary)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpRequestMessage> : produce_base<D, winrt::Windows::Web::Http::IHttpRequestMessage>
    {
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::IHttpContent>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Content(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Headers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection>(this->shim().Headers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Method(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpMethod>(this->shim().Method());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Method(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Method(*reinterpret_cast<winrt::Windows::Web::Http::HttpMethod const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().RequestUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransportInformation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpTransportInformation>(this->shim().TransportInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpRequestMessage2> : produce_base<D, winrt::Windows::Web::Http::IHttpRequestMessage2>
    {
        int32_t __stdcall get_PrivacyAnnotation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrivacyAnnotation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrivacyAnnotation(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrivacyAnnotation(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpRequestMessageFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpRequestMessageFactory>
    {
        int32_t __stdcall Create(void* method, void* uri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().Create(*reinterpret_cast<winrt::Windows::Web::Http::HttpMethod const*>(&method), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpRequestResult> : produce_base<D, winrt::Windows::Web::Http::IHttpRequestResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResponseMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().ResponseMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpResponseMessage> : produce_base<D, winrt::Windows::Web::Http::IHttpResponseMessage>
    {
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::IHttpContent>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Content(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<winrt::Windows::Web::Http::IHttpContent const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Headers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection>(this->shim().Headers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSuccessStatusCode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSuccessStatusCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReasonPhrase(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ReasonPhrase());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReasonPhrase(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReasonPhrase(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestMessage(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestMessage(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessageSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Source(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<winrt::Windows::Web::Http::HttpResponseMessageSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StatusCode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpStatusCode>(this->shim().StatusCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StatusCode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusCode(*reinterpret_cast<winrt::Windows::Web::Http::HttpStatusCode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpVersion>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Version(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<winrt::Windows::Web::Http::HttpVersion const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EnsureSuccessStatusCode(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().EnsureSuccessStatusCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpResponseMessageFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpResponseMessageFactory>
    {
        int32_t __stdcall Create(int32_t statusCode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpResponseMessage>(this->shim().Create(*reinterpret_cast<winrt::Windows::Web::Http::HttpStatusCode const*>(&statusCode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpStreamContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpStreamContentFactory>
    {
        int32_t __stdcall CreateFromInputStream(void* content, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpStreamContent>(this->shim().CreateFromInputStream(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpStringContentFactory> : produce_base<D, winrt::Windows::Web::Http::IHttpStringContentFactory>
    {
        int32_t __stdcall CreateFromString(void* content, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpStringContent>(this->shim().CreateFromString(*reinterpret_cast<hstring const*>(&content)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromStringWithEncoding(void* content, int32_t encoding, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpStringContent>(this->shim().CreateFromStringWithEncoding(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<winrt::Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromStringWithEncodingAndMediaType(void* content, int32_t encoding, void* mediaType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpStringContent>(this->shim().CreateFromStringWithEncodingAndMediaType(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<winrt::Windows::Storage::Streams::UnicodeEncoding const*>(&encoding), *reinterpret_cast<hstring const*>(&mediaType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::IHttpTransportInformation> : produce_base<D, winrt::Windows::Web::Http::IHttpTransportInformation>
    {
        int32_t __stdcall get_ServerCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerIntermediateCertificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    inline HttpBufferContent::HttpBufferContent(winrt::Windows::Storage::Streams::IBuffer const& content) :
        HttpBufferContent(impl::call_factory<HttpBufferContent, IHttpBufferContentFactory>([&](IHttpBufferContentFactory const& f) { return f.CreateFromBuffer(content); }))
    {
    }
    inline HttpBufferContent::HttpBufferContent(winrt::Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) :
        HttpBufferContent(impl::call_factory<HttpBufferContent, IHttpBufferContentFactory>([&](IHttpBufferContentFactory const& f) { return f.CreateFromBufferWithOffset(content, offset, count); }))
    {
    }
    inline HttpClient::HttpClient() :
        HttpClient(impl::call_factory_cast<HttpClient(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpClient>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpClient>(); }))
    {
    }
    inline HttpClient::HttpClient(winrt::Windows::Web::Http::Filters::IHttpFilter const& filter) :
        HttpClient(impl::call_factory<HttpClient, IHttpClientFactory>([&](IHttpClientFactory const& f) { return f.Create(filter); }))
    {
    }
    inline HttpCookie::HttpCookie(param::hstring const& name, param::hstring const& domain, param::hstring const& path) :
        HttpCookie(impl::call_factory<HttpCookie, IHttpCookieFactory>([&](IHttpCookieFactory const& f) { return f.Create(name, domain, path); }))
    {
    }
    inline HttpFormUrlEncodedContent::HttpFormUrlEncodedContent(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) :
        HttpFormUrlEncodedContent(impl::call_factory<HttpFormUrlEncodedContent, IHttpFormUrlEncodedContentFactory>([&](IHttpFormUrlEncodedContentFactory const& f) { return f.Create(content); }))
    {
    }
    inline HttpMethod::HttpMethod(param::hstring const& method) :
        HttpMethod(impl::call_factory<HttpMethod, IHttpMethodFactory>([&](IHttpMethodFactory const& f) { return f.Create(method); }))
    {
    }
    inline auto HttpMethod::Delete()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Delete(); });
    }
    inline auto HttpMethod::Get()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Get(); });
    }
    inline auto HttpMethod::Head()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Head(); });
    }
    inline auto HttpMethod::Options()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Options(); });
    }
    inline auto HttpMethod::Patch()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Patch(); });
    }
    inline auto HttpMethod::Post()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Post(); });
    }
    inline auto HttpMethod::Put()
    {
        return impl::call_factory_cast<winrt::Windows::Web::Http::HttpMethod(*)(IHttpMethodStatics const&), HttpMethod, IHttpMethodStatics>([](IHttpMethodStatics const& f) { return f.Put(); });
    }
    inline HttpMultipartContent::HttpMultipartContent() :
        HttpMultipartContent(impl::call_factory_cast<HttpMultipartContent(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpMultipartContent>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpMultipartContent>(); }))
    {
    }
    inline HttpMultipartContent::HttpMultipartContent(param::hstring const& subtype) :
        HttpMultipartContent(impl::call_factory<HttpMultipartContent, IHttpMultipartContentFactory>([&](IHttpMultipartContentFactory const& f) { return f.CreateWithSubtype(subtype); }))
    {
    }
    inline HttpMultipartContent::HttpMultipartContent(param::hstring const& subtype, param::hstring const& boundary) :
        HttpMultipartContent(impl::call_factory<HttpMultipartContent, IHttpMultipartContentFactory>([&](IHttpMultipartContentFactory const& f) { return f.CreateWithSubtypeAndBoundary(subtype, boundary); }))
    {
    }
    inline HttpMultipartFormDataContent::HttpMultipartFormDataContent() :
        HttpMultipartFormDataContent(impl::call_factory_cast<HttpMultipartFormDataContent(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpMultipartFormDataContent>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpMultipartFormDataContent>(); }))
    {
    }
    inline HttpMultipartFormDataContent::HttpMultipartFormDataContent(param::hstring const& boundary) :
        HttpMultipartFormDataContent(impl::call_factory<HttpMultipartFormDataContent, IHttpMultipartFormDataContentFactory>([&](IHttpMultipartFormDataContentFactory const& f) { return f.CreateWithBoundary(boundary); }))
    {
    }
    inline HttpRequestMessage::HttpRequestMessage() :
        HttpRequestMessage(impl::call_factory_cast<HttpRequestMessage(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpRequestMessage>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpRequestMessage>(); }))
    {
    }
    inline HttpRequestMessage::HttpRequestMessage(winrt::Windows::Web::Http::HttpMethod const& method, winrt::Windows::Foundation::Uri const& uri) :
        HttpRequestMessage(impl::call_factory<HttpRequestMessage, IHttpRequestMessageFactory>([&](IHttpRequestMessageFactory const& f) { return f.Create(method, uri); }))
    {
    }
    inline HttpResponseMessage::HttpResponseMessage() :
        HttpResponseMessage(impl::call_factory_cast<HttpResponseMessage(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpResponseMessage>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpResponseMessage>(); }))
    {
    }
    inline HttpResponseMessage::HttpResponseMessage(winrt::Windows::Web::Http::HttpStatusCode const& statusCode) :
        HttpResponseMessage(impl::call_factory<HttpResponseMessage, IHttpResponseMessageFactory>([&](IHttpResponseMessageFactory const& f) { return f.Create(statusCode); }))
    {
    }
    inline HttpStreamContent::HttpStreamContent(winrt::Windows::Storage::Streams::IInputStream const& content) :
        HttpStreamContent(impl::call_factory<HttpStreamContent, IHttpStreamContentFactory>([&](IHttpStreamContentFactory const& f) { return f.CreateFromInputStream(content); }))
    {
    }
    inline HttpStringContent::HttpStringContent(param::hstring const& content) :
        HttpStringContent(impl::call_factory<HttpStringContent, IHttpStringContentFactory>([&](IHttpStringContentFactory const& f) { return f.CreateFromString(content); }))
    {
    }
    inline HttpStringContent::HttpStringContent(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding) :
        HttpStringContent(impl::call_factory<HttpStringContent, IHttpStringContentFactory>([&](IHttpStringContentFactory const& f) { return f.CreateFromStringWithEncoding(content, encoding); }))
    {
    }
    inline HttpStringContent::HttpStringContent(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) :
        HttpStringContent(impl::call_factory<HttpStringContent, IHttpStringContentFactory>([&](IHttpStringContentFactory const& f) { return f.CreateFromStringWithEncodingAndMediaType(content, encoding, mediaType); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Web::Http::IHttpBufferContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpClient2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpClient3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpClientFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpCookie> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpCookieFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpCookieManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpGetBufferResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpGetInputStreamResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpGetStringResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMethod> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMethodFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMethodStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartFormDataContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpRequestMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpRequestMessage2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpRequestMessageFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpRequestResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpResponseMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpResponseMessageFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpStreamContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpStringContentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::IHttpTransportInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpBufferContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpClient> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpCookie> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpCookieCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpCookieManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpFormUrlEncodedContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpGetBufferResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpGetInputStreamResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpGetStringResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpMethod> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpMultipartContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpMultipartFormDataContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpRequestMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpRequestResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpResponseMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpStreamContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpStringContent> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::HttpTransportInformation> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
    template<> struct formatter<winrt::Windows::Web::Http::HttpBufferContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpClient, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpCookie, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpFormUrlEncodedContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpGetBufferResult, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpGetInputStreamResult, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpGetStringResult, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpMethod, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpMultipartContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpMultipartFormDataContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpRequestMessage, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpRequestResult, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpResponseMessage, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpStreamContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpStringContent, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
    template<> struct formatter<winrt::Windows::Web::Http::HttpTransportInformation, wchar_t> : formatter<winrt::Windows::Foundation::IStringable, wchar_t> {};
#endif
}
#endif
