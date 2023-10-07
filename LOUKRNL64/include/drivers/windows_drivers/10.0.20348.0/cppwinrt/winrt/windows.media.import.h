// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Import_H
#define WINRT_Windows_Media_Import_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Import.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSession) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_Session(&value));
        return Windows::Media::Import::PhotoImportSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::HasSucceeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_HasSucceeded(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::DeletedItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_DeletedItems(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_PhotosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_PhotosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_VideosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_VideosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SidecarsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SidecarsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SiblingsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SiblingsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_TotalCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_TotalSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSession) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_Session(&value));
        return Windows::Media::Import::PhotoImportSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::HasSucceeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_HasSucceeded(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::FoundItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_FoundItems(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::PhotosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_PhotosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::PhotosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_PhotosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::VideosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_VideosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::VideosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_VideosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SidecarsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SidecarsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SidecarsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SidecarsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SiblingsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SiblingsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SiblingsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SiblingsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::TotalCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_TotalCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::TotalSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_TotalSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectAll() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectAll());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectNone() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectNone());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectNewAsync() const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectNewAsync(&action));
        return Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SetImportMode(Windows::Media::Import::PhotoImportImportMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SetImportMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportImportMode) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ImportMode() const
    {
        Windows::Media::Import::PhotoImportImportMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_ImportMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedPhotosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedPhotosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedPhotosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedPhotosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedVideosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedVideosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedVideosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedVideosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSidecarsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSidecarsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSidecarsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSidecarsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSiblingsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSiblingsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSiblingsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSiblingsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedTotalCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedTotalCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedTotalSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedTotalSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->add_SelectionChanged(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged_revoker consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, SelectionChanged_revoker>(this, SelectionChanged(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->remove_SelectionChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ImportItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->ImportItemsAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->add_ItemImported(*(void**)(&value), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported_revoker consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const
    {
        return impl::make_event_revoker<D, ItemImported_revoker>(this, ItemImported(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->remove_ItemImported(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportFindItemsResult2<D>::AddItemsInDateRangeToSelection(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult2)->AddItemsInDateRangeToSelection(impl::bind_in(rangeStart), impl::bind_in(rangeLength)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSession) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_Session(&value));
        return Windows::Media::Import::PhotoImportSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::HasSucceeded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_HasSucceeded(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::ImportedItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_ImportedItems(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::PhotosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_PhotosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::PhotosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_PhotosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::VideosCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_VideosCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::VideosSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_VideosSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SidecarsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SidecarsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SidecarsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SidecarsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SiblingsCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SiblingsCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SiblingsSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SiblingsSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::TotalCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_TotalCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::TotalSizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_TotalSizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>) consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::DeleteImportedItemsFromSourceAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->DeleteImportedItemsFromSourceAsync(&result));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportItem<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportItem<D>::ItemKey() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ItemKey(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportContentType) consume_Windows_Media_Import_IPhotoImportItem<D>::ContentType() const
    {
        Windows::Media::Import::PhotoImportContentType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ContentType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportItem<D>::SizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_SizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_Media_Import_IPhotoImportItem<D>::Date() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Date(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSidecar) consume_Windows_Media_Import_IPhotoImportItem<D>::Sibling() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Sibling(&value));
        return Windows::Media::Import::PhotoImportSidecar{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>) consume_Windows_Media_Import_IPhotoImportItem<D>::Sidecars() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Sidecars(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment>) consume_Windows_Media_Import_IPhotoImportItem<D>::VideoSegments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_VideoSegments(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportItem<D>::IsSelected() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_IsSelected(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportItem<D>::IsSelected(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->put_IsSelected(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) consume_Windows_Media_Import_IPhotoImportItem<D>::Thumbnail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Thumbnail(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Media_Import_IPhotoImportItem<D>::ImportedFileNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ImportedFileNames(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Media_Import_IPhotoImportItem<D>::DeletedFileNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem)->get_DeletedFileNames(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportItem2<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItem2)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportItem) consume_Windows_Media_Import_IPhotoImportItemImportedEventArgs<D>::ImportedItem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportItemImportedEventArgs)->get_ImportedItem(&value));
        return Windows::Media::Import::PhotoImportItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::IsSupportedAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->IsSupportedAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>>) consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::FindAllSourcesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->FindAllSourcesAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation>) consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::GetPendingOperations() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->GetPendingOperations(&result));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportStage) consume_Windows_Media_Import_IPhotoImportOperation<D>::Stage() const
    {
        Windows::Media::Import::PhotoImportStage value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_Stage(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSession) consume_Windows_Media_Import_IPhotoImportOperation<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_Session(&value));
        return Windows::Media::Import::PhotoImportSession{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>) consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueFindingItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueFindingItemsAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>) consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueImportingItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueImportingItemsAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>) consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueDeletingImportedItemsFromSourceAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueDeletingImportedItemsFromSourceAsync(&operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs<D>::IsSelectionEmpty() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSelectionChangedEventArgs)->get_IsSelectionEmpty(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSource) consume_Windows_Media_Import_IPhotoImportSession<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_Source(&value));
        return Windows::Media::Import::PhotoImportSource{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Media_Import_IPhotoImportSession<D>::SessionId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_SessionId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFolder(Windows::Storage::IStorageFolder const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->put_DestinationFolder(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::IStorageFolder) consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFolder() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_DestinationFolder(&value));
        return Windows::Storage::IStorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->put_AppendSessionDateToDestinationFolder(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_AppendSessionDateToDestinationFolder(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession<D>::SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->put_SubfolderCreationMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSubfolderCreationMode) consume_Windows_Media_Import_IPhotoImportSession<D>::SubfolderCreationMode() const
    {
        Windows::Media::Import::PhotoImportSubfolderCreationMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_SubfolderCreationMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFileNamePrefix(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->put_DestinationFileNamePrefix(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFileNamePrefix() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->get_DestinationFileNamePrefix(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>) consume_Windows_Media_Import_IPhotoImportSession<D>::FindItemsAsync(Windows::Media::Import::PhotoImportContentTypeFilter const& contentTypeFilter, Windows::Media::Import::PhotoImportItemSelectionMode const& itemSelectionMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession)->FindItemsAsync(static_cast<int32_t>(contentTypeFilter), static_cast<int32_t>(itemSelectionMode), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession2<D>::SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession2)->put_SubfolderDateFormat(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSubfolderDateFormat) consume_Windows_Media_Import_IPhotoImportSession2<D>::SubfolderDateFormat() const
    {
        Windows::Media::Import::PhotoImportSubfolderDateFormat value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession2)->get_SubfolderDateFormat(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportSession2<D>::RememberDeselectedItems(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession2)->put_RememberDeselectedItems(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportSession2<D>::RememberDeselectedItems() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSession2)->get_RememberDeselectedItems(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSidecar<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportSidecar<D>::SizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_SizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_Media_Import_IPhotoImportSidecar<D>::Date() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_Date(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::Manufacturer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Manufacturer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::Model() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Model(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::SerialNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_SerialNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportSource<D>::ConnectionProtocol() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_ConnectionProtocol(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportConnectionTransport) consume_Windows_Media_Import_IPhotoImportSource<D>::ConnectionTransport() const
    {
        Windows::Media::Import::PhotoImportConnectionTransport value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_ConnectionTransport(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSourceType) consume_Windows_Media_Import_IPhotoImportSource<D>::Type() const
    {
        Windows::Media::Import::PhotoImportSourceType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportPowerSource) consume_Windows_Media_Import_IPhotoImportSource<D>::PowerSource() const
    {
        Windows::Media::Import::PhotoImportPowerSource value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_PowerSource(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) consume_Windows_Media_Import_IPhotoImportSource<D>::BatteryLevelPercent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_BatteryLevelPercent(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) consume_Windows_Media_Import_IPhotoImportSource<D>::DateTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_DateTime(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium>) consume_Windows_Media_Import_IPhotoImportSource<D>::StorageMedia() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_StorageMedia(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) consume_Windows_Media_Import_IPhotoImportSource<D>::IsLocked() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_IsLocked(&value));
        return Windows::Foundation::IReference<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Media_Import_IPhotoImportSource<D>::IsMassStorage() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_IsMassStorage(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) consume_Windows_Media_Import_IPhotoImportSource<D>::Thumbnail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Thumbnail(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSession) consume_Windows_Media_Import_IPhotoImportSource<D>::CreateImportSession() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSource)->CreateImportSession(&result));
        return Windows::Media::Import::PhotoImportSession{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>) consume_Windows_Media_Import_IPhotoImportSourceStatics<D>::FromIdAsync(param::hstring const& sourceId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSourceStatics)->FromIdAsync(*(void**)(&sourceId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>) consume_Windows_Media_Import_IPhotoImportSourceStatics<D>::FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportSourceStatics)->FromFolderAsync(*(void**)(&sourceRootFolder), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::SerialNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_SerialNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportStorageMediumType) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::StorageMediumType() const
    {
        Windows::Media::Import::PhotoImportStorageMediumType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_StorageMediumType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportAccessMode) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::SupportedAccessMode() const
    {
        Windows::Media::Import::PhotoImportAccessMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_SupportedAccessMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::CapacityInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_CapacityInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::AvailableSpaceInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_AvailableSpaceInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Refresh() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->Refresh());
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::SizeInBytes() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_SizeInBytes(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Date() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Date(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::Import::PhotoImportSidecar) consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Sibling() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Sibling(&value));
        return Windows::Media::Import::PhotoImportSidecar{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>) consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Sidecars() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Sidecars(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> : produce_base<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasSucceeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasSucceeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeletedItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>>(this->shim().DeletedItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PhotosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PhotosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().VideosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SidecarsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SidecarsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SiblingsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SiblingsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TotalCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasSucceeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasSucceeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FoundItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>>(this->shim().FoundItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PhotosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PhotosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().VideosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SidecarsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SidecarsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SiblingsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SiblingsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TotalCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectAll() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectAll();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectNone() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectNone();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectNewAsync(void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SelectNewAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetImportMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImportMode(*reinterpret_cast<Windows::Media::Import::PhotoImportImportMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImportMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportImportMode>(this->shim().ImportMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedPhotosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedPhotosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedPhotosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SelectedPhotosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedVideosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedVideosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedVideosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SelectedVideosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedSidecarsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedSidecarsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedSidecarsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SelectedSidecarsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedSiblingsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedSiblingsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedSiblingsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SelectedSiblingsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedTotalCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedTotalCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedTotalSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SelectedTotalSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SelectionChanged(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SelectionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SelectionChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall ImportItemsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>>(this->shim().ImportItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ItemImported(void* value, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ItemImported(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ItemImported(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemImported(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult2> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult2>
    {
        int32_t __stdcall AddItemsInDateRangeToSelection(int64_t rangeStart, int64_t rangeLength) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddItemsInDateRangeToSelection(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportImportItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportImportItemsResult>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasSucceeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasSucceeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImportedItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem>>(this->shim().ImportedItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PhotosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PhotosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideosCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().VideosSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SidecarsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SidecarsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SiblingsCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SiblingsSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TotalCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalSizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteImportedItemsFromSourceAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>>(this->shim().DeleteImportedItemsFromSourceAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportItem> : produce_base<D, Windows::Media::Import::IPhotoImportItem>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemKey(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ItemKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportContentType>(this->shim().ContentType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sibling(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSidecar>(this->shim().Sibling());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sidecars(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>>(this->shim().Sidecars());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoSegments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment>>(this->shim().VideoSegments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSelected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelected());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsSelected(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Thumbnail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImportedFileNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().ImportedFileNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeletedFileNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DeletedFileNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportItem2> : produce_base<D, Windows::Media::Import::IPhotoImportItem2>
    {
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs>
    {
        int32_t __stdcall get_ImportedItem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportItem>(this->shim().ImportedItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportManagerStatics> : produce_base<D, Windows::Media::Import::IPhotoImportManagerStatics>
    {
        int32_t __stdcall IsSupportedAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsSupportedAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllSourcesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>>>(this->shim().FindAllSourcesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPendingOperations(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation>>(this->shim().GetPendingOperations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportOperation> : produce_base<D, Windows::Media::Import::IPhotoImportOperation>
    {
        int32_t __stdcall get_Stage(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportStage>(this->shim().Stage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContinueFindingItemsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>>(this->shim().ContinueFindingItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContinueImportingItemsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress>>(this->shim().ContinueImportingItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContinueDeletingImportedItemsFromSourceAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double>>(this->shim().ContinueDeletingImportedItemsFromSourceAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
    {
        int32_t __stdcall get_IsSelectionEmpty(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelectionEmpty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSession> : produce_base<D, Windows::Media::Import::IPhotoImportSession>
    {
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DestinationFolder(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationFolder(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DestinationFolder(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFolder>(this->shim().DestinationFolder());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AppendSessionDateToDestinationFolder(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendSessionDateToDestinationFolder(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppendSessionDateToDestinationFolder(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AppendSessionDateToDestinationFolder());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SubfolderCreationMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubfolderCreationMode(*reinterpret_cast<Windows::Media::Import::PhotoImportSubfolderCreationMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubfolderCreationMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSubfolderCreationMode>(this->shim().SubfolderCreationMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DestinationFileNamePrefix(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationFileNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DestinationFileNamePrefix(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DestinationFileNamePrefix());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindItemsAsync(int32_t contentTypeFilter, int32_t itemSelectionMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t>>(this->shim().FindItemsAsync(*reinterpret_cast<Windows::Media::Import::PhotoImportContentTypeFilter const*>(&contentTypeFilter), *reinterpret_cast<Windows::Media::Import::PhotoImportItemSelectionMode const*>(&itemSelectionMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSession2> : produce_base<D, Windows::Media::Import::IPhotoImportSession2>
    {
        int32_t __stdcall put_SubfolderDateFormat(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubfolderDateFormat(*reinterpret_cast<Windows::Media::Import::PhotoImportSubfolderDateFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubfolderDateFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSubfolderDateFormat>(this->shim().SubfolderDateFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RememberDeselectedItems(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RememberDeselectedItems(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RememberDeselectedItems(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RememberDeselectedItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSidecar> : produce_base<D, Windows::Media::Import::IPhotoImportSidecar>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSource> : produce_base<D, Windows::Media::Import::IPhotoImportSource>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Manufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Manufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Model(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Model());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SerialNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SerialNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionProtocol(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConnectionProtocol());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionTransport(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportConnectionTransport>(this->shim().ConnectionTransport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSourceType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerSource(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportPowerSource>(this->shim().PowerSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatteryLevelPercent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().BatteryLevelPercent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DateTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().DateTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StorageMedia(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium>>(this->shim().StorageMedia());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsLocked(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsLocked());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsMassStorage(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMassStorage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Thumbnail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Thumbnail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateImportSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Import::PhotoImportSession>(this->shim().CreateImportSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportSourceStatics> : produce_base<D, Windows::Media::Import::IPhotoImportSourceStatics>
    {
        int32_t __stdcall FromIdAsync(void* sourceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&sourceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromFolderAsync(void* sourceRootFolder, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource>>(this->shim().FromFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&sourceRootFolder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportStorageMedium> : produce_base<D, Windows::Media::Import::IPhotoImportStorageMedium>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SerialNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SerialNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StorageMediumType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportStorageMediumType>(this->shim().StorageMediumType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedAccessMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportAccessMode>(this->shim().SupportedAccessMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapacityInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().CapacityInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableSpaceInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().AvailableSpaceInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Refresh() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Refresh();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::Import::IPhotoImportVideoSegment> : produce_base<D, Windows::Media::Import::IPhotoImportVideoSegment>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeInBytes(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().SizeInBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Date(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Date());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sibling(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Import::PhotoImportSidecar>(this->shim().Sibling());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sidecars(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar>>(this->shim().Sidecars());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::Import
{
    inline auto PhotoImportManager::IsSupportedAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<bool>(*)(IPhotoImportManagerStatics const&), PhotoImportManager, IPhotoImportManagerStatics>([](IPhotoImportManagerStatics const& f) { return f.IsSupportedAsync(); });
    }
    inline auto PhotoImportManager::FindAllSourcesAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>>(*)(IPhotoImportManagerStatics const&), PhotoImportManager, IPhotoImportManagerStatics>([](IPhotoImportManagerStatics const& f) { return f.FindAllSourcesAsync(); });
    }
    inline auto PhotoImportManager::GetPendingOperations()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation>(*)(IPhotoImportManagerStatics const&), PhotoImportManager, IPhotoImportManagerStatics>([](IPhotoImportManagerStatics const& f) { return f.GetPendingOperations(); });
    }
    inline auto PhotoImportSource::FromIdAsync(param::hstring const& sourceId)
    {
        return impl::call_factory<PhotoImportSource, IPhotoImportSourceStatics>([&](IPhotoImportSourceStatics const& f) { return f.FromIdAsync(sourceId); });
    }
    inline auto PhotoImportSource::FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder)
    {
        return impl::call_factory<PhotoImportSource, IPhotoImportSourceStatics>([&](IPhotoImportSourceStatics const& f) { return f.FromFolderAsync(sourceRootFolder); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportFindItemsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportFindItemsResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportImportItemsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportItem2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportItemImportedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSession2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSidecar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSourceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportStorageMedium> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::IPhotoImportVideoSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportFindItemsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportImportItemsResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportItemImportedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportSelectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportSidecar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportStorageMedium> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Import::PhotoImportVideoSegment> : winrt::impl::hash_base {};
#endif
}
#endif
