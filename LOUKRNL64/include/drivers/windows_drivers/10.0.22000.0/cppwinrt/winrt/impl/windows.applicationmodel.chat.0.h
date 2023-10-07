// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Chat_0_H
#define WINRT_Windows_ApplicationModel_Chat_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct MediaEncodingProfile;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat
{
    enum class ChatConversationThreadingKind : int32_t
    {
        Participants = 0,
        ContactId = 1,
        ConversationId = 2,
        Custom = 3,
    };
    enum class ChatItemKind : int32_t
    {
        Message = 0,
        Conversation = 1,
    };
    enum class ChatMessageChangeType : int32_t
    {
        MessageCreated = 0,
        MessageModified = 1,
        MessageDeleted = 2,
        ChangeTrackingLost = 3,
    };
    enum class ChatMessageKind : int32_t
    {
        Standard = 0,
        FileTransferRequest = 1,
        TransportCustom = 2,
        JoinedConversation = 3,
        LeftConversation = 4,
        OtherParticipantJoinedConversation = 5,
        OtherParticipantLeftConversation = 6,
    };
    enum class ChatMessageOperatorKind : int32_t
    {
        Unspecified = 0,
        Sms = 1,
        Mms = 2,
        Rcs = 3,
    };
    enum class ChatMessageStatus : int32_t
    {
        Draft = 0,
        Sending = 1,
        Sent = 2,
        SendRetryNeeded = 3,
        SendFailed = 4,
        Received = 5,
        ReceiveDownloadNeeded = 6,
        ReceiveDownloadFailed = 7,
        ReceiveDownloading = 8,
        Deleted = 9,
        Declined = 10,
        Cancelled = 11,
        Recalled = 12,
        ReceiveRetryNeeded = 13,
    };
    enum class ChatMessageTransportKind : int32_t
    {
        Text = 0,
        Untriaged = 1,
        Blocked = 2,
        Custom = 3,
    };
    enum class ChatMessageValidationStatus : int32_t
    {
        Valid = 0,
        NoRecipients = 1,
        InvalidData = 2,
        MessageTooLarge = 3,
        TooManyRecipients = 4,
        TransportInactive = 5,
        TransportNotFound = 6,
        TooManyAttachments = 7,
        InvalidRecipients = 8,
        InvalidBody = 9,
        InvalidOther = 10,
        ValidWithLargeMessage = 11,
        VoiceRoamingRestriction = 12,
        DataRoamingRestriction = 13,
    };
    enum class ChatRestoreHistorySpan : int32_t
    {
        LastMonth = 0,
        LastYear = 1,
        AnyTime = 2,
    };
    enum class ChatStoreChangedEventKind : int32_t
    {
        NotificationsMissed = 0,
        StoreModified = 1,
        MessageCreated = 2,
        MessageModified = 3,
        MessageDeleted = 4,
        ConversationModified = 5,
        ConversationDeleted = 6,
        ConversationTransportDeleted = 7,
    };
    enum class ChatTransportErrorCodeCategory : int32_t
    {
        None = 0,
        Http = 1,
        Network = 2,
        MmsServer = 3,
    };
    enum class ChatTransportInterpretedErrorCode : int32_t
    {
        None = 0,
        Unknown = 1,
        InvalidRecipientAddress = 2,
        NetworkConnectivity = 3,
        ServiceDenied = 4,
        Timeout = 5,
    };
    enum class RcsServiceKind : int32_t
    {
        Chat = 0,
        GroupChat = 1,
        FileTransfer = 2,
        Capability = 3,
    };
    struct IChatCapabilities;
    struct IChatCapabilitiesManagerStatics;
    struct IChatCapabilitiesManagerStatics2;
    struct IChatConversation;
    struct IChatConversation2;
    struct IChatConversationReader;
    struct IChatConversationThreadingInfo;
    struct IChatItem;
    struct IChatMessage;
    struct IChatMessage2;
    struct IChatMessage3;
    struct IChatMessage4;
    struct IChatMessageAttachment;
    struct IChatMessageAttachment2;
    struct IChatMessageAttachmentFactory;
    struct IChatMessageBlockingStatic;
    struct IChatMessageChange;
    struct IChatMessageChangeReader;
    struct IChatMessageChangeTracker;
    struct IChatMessageChangedDeferral;
    struct IChatMessageChangedEventArgs;
    struct IChatMessageManager2Statics;
    struct IChatMessageManagerStatic;
    struct IChatMessageManagerStatics3;
    struct IChatMessageNotificationTriggerDetails;
    struct IChatMessageNotificationTriggerDetails2;
    struct IChatMessageReader;
    struct IChatMessageReader2;
    struct IChatMessageStore;
    struct IChatMessageStore2;
    struct IChatMessageStore3;
    struct IChatMessageStoreChangedEventArgs;
    struct IChatMessageTransport;
    struct IChatMessageTransport2;
    struct IChatMessageTransportConfiguration;
    struct IChatMessageValidationResult;
    struct IChatQueryOptions;
    struct IChatRecipientDeliveryInfo;
    struct IChatSearchReader;
    struct IChatSyncConfiguration;
    struct IChatSyncManager;
    struct IRcsEndUserMessage;
    struct IRcsEndUserMessageAction;
    struct IRcsEndUserMessageAvailableEventArgs;
    struct IRcsEndUserMessageAvailableTriggerDetails;
    struct IRcsEndUserMessageManager;
    struct IRcsManagerStatics;
    struct IRcsManagerStatics2;
    struct IRcsServiceKindSupportedChangedEventArgs;
    struct IRcsTransport;
    struct IRcsTransportConfiguration;
    struct IRemoteParticipantComposingChangedEventArgs;
    struct ChatCapabilities;
    struct ChatCapabilitiesManager;
    struct ChatConversation;
    struct ChatConversationReader;
    struct ChatConversationThreadingInfo;
    struct ChatMessage;
    struct ChatMessageAttachment;
    struct ChatMessageBlocking;
    struct ChatMessageChange;
    struct ChatMessageChangeReader;
    struct ChatMessageChangeTracker;
    struct ChatMessageChangedDeferral;
    struct ChatMessageChangedEventArgs;
    struct ChatMessageManager;
    struct ChatMessageNotificationTriggerDetails;
    struct ChatMessageReader;
    struct ChatMessageStore;
    struct ChatMessageStoreChangedEventArgs;
    struct ChatMessageTransport;
    struct ChatMessageTransportConfiguration;
    struct ChatMessageValidationResult;
    struct ChatQueryOptions;
    struct ChatRecipientDeliveryInfo;
    struct ChatSearchReader;
    struct ChatSyncConfiguration;
    struct ChatSyncManager;
    struct RcsEndUserMessage;
    struct RcsEndUserMessageAction;
    struct RcsEndUserMessageAvailableEventArgs;
    struct RcsEndUserMessageAvailableTriggerDetails;
    struct RcsEndUserMessageManager;
    struct RcsManager;
    struct RcsServiceKindSupportedChangedEventArgs;
    struct RcsTransport;
    struct RcsTransportConfiguration;
    struct RemoteParticipantComposingChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Chat::IChatCapabilities>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatConversation>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatConversation2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatConversationReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatItem>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessage>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessage2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessage3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessage4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChange>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageReader2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransport>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatQueryOptions>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatSearchReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IChatSyncManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsTransport>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatCapabilities>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatCapabilitiesManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatConversation>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatConversationReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessage>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageAttachment>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageBlocking>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChange>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeTracker>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStore>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransport>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageValidationResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatQueryOptions>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatSearchReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatSyncConfiguration>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatSyncManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessage>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsTransport>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsTransportConfiguration>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatConversationThreadingKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatItemKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageOperatorKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransportKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatMessageValidationStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Chat::RcsServiceKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatCapabilities> = L"Windows.ApplicationModel.Chat.ChatCapabilities";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatCapabilitiesManager> = L"Windows.ApplicationModel.Chat.ChatCapabilitiesManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatConversation> = L"Windows.ApplicationModel.Chat.ChatConversation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatConversationReader> = L"Windows.ApplicationModel.Chat.ChatConversationReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo> = L"Windows.ApplicationModel.Chat.ChatConversationThreadingInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessage> = L"Windows.ApplicationModel.Chat.ChatMessage";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageAttachment> = L"Windows.ApplicationModel.Chat.ChatMessageAttachment";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageBlocking> = L"Windows.ApplicationModel.Chat.ChatMessageBlocking";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChange> = L"Windows.ApplicationModel.Chat.ChatMessageChange";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChangeReader> = L"Windows.ApplicationModel.Chat.ChatMessageChangeReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChangeTracker> = L"Windows.ApplicationModel.Chat.ChatMessageChangeTracker";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral> = L"Windows.ApplicationModel.Chat.ChatMessageChangedDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> = L"Windows.ApplicationModel.Chat.ChatMessageChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageManager> = L"Windows.ApplicationModel.Chat.ChatMessageManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails> = L"Windows.ApplicationModel.Chat.ChatMessageNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageReader> = L"Windows.ApplicationModel.Chat.ChatMessageReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageStore> = L"Windows.ApplicationModel.Chat.ChatMessageStore";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> = L"Windows.ApplicationModel.Chat.ChatMessageStoreChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageTransport> = L"Windows.ApplicationModel.Chat.ChatMessageTransport";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration> = L"Windows.ApplicationModel.Chat.ChatMessageTransportConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageValidationResult> = L"Windows.ApplicationModel.Chat.ChatMessageValidationResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatQueryOptions> = L"Windows.ApplicationModel.Chat.ChatQueryOptions";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> = L"Windows.ApplicationModel.Chat.ChatRecipientDeliveryInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatSearchReader> = L"Windows.ApplicationModel.Chat.ChatSearchReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatSyncConfiguration> = L"Windows.ApplicationModel.Chat.ChatSyncConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatSyncManager> = L"Windows.ApplicationModel.Chat.ChatSyncManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsEndUserMessage> = L"Windows.ApplicationModel.Chat.RcsEndUserMessage";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAction";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails> = L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsEndUserMessageManager> = L"Windows.ApplicationModel.Chat.RcsEndUserMessageManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsManager> = L"Windows.ApplicationModel.Chat.RcsManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> = L"Windows.ApplicationModel.Chat.RcsServiceKindSupportedChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsTransport> = L"Windows.ApplicationModel.Chat.RcsTransport";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsTransportConfiguration> = L"Windows.ApplicationModel.Chat.RcsTransportConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> = L"Windows.ApplicationModel.Chat.RemoteParticipantComposingChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatConversationThreadingKind> = L"Windows.ApplicationModel.Chat.ChatConversationThreadingKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatItemKind> = L"Windows.ApplicationModel.Chat.ChatItemKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageChangeType> = L"Windows.ApplicationModel.Chat.ChatMessageChangeType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageKind> = L"Windows.ApplicationModel.Chat.ChatMessageKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageOperatorKind> = L"Windows.ApplicationModel.Chat.ChatMessageOperatorKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageStatus> = L"Windows.ApplicationModel.Chat.ChatMessageStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageTransportKind> = L"Windows.ApplicationModel.Chat.ChatMessageTransportKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatMessageValidationStatus> = L"Windows.ApplicationModel.Chat.ChatMessageValidationStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan> = L"Windows.ApplicationModel.Chat.ChatRestoreHistorySpan";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind> = L"Windows.ApplicationModel.Chat.ChatStoreChangedEventKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory> = L"Windows.ApplicationModel.Chat.ChatTransportErrorCodeCategory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode> = L"Windows.ApplicationModel.Chat.ChatTransportInterpretedErrorCode";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::RcsServiceKind> = L"Windows.ApplicationModel.Chat.RcsServiceKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatCapabilities> = L"Windows.ApplicationModel.Chat.IChatCapabilities";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics> = L"Windows.ApplicationModel.Chat.IChatCapabilitiesManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics2> = L"Windows.ApplicationModel.Chat.IChatCapabilitiesManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatConversation> = L"Windows.ApplicationModel.Chat.IChatConversation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatConversation2> = L"Windows.ApplicationModel.Chat.IChatConversation2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatConversationReader> = L"Windows.ApplicationModel.Chat.IChatConversationReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> = L"Windows.ApplicationModel.Chat.IChatConversationThreadingInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatItem> = L"Windows.ApplicationModel.Chat.IChatItem";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessage> = L"Windows.ApplicationModel.Chat.IChatMessage";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessage2> = L"Windows.ApplicationModel.Chat.IChatMessage2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessage3> = L"Windows.ApplicationModel.Chat.IChatMessage3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessage4> = L"Windows.ApplicationModel.Chat.IChatMessage4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageAttachment> = L"Windows.ApplicationModel.Chat.IChatMessageAttachment";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageAttachment2> = L"Windows.ApplicationModel.Chat.IChatMessageAttachment2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory> = L"Windows.ApplicationModel.Chat.IChatMessageAttachmentFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic> = L"Windows.ApplicationModel.Chat.IChatMessageBlockingStatic";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageChange> = L"Windows.ApplicationModel.Chat.IChatMessageChange";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageChangeReader> = L"Windows.ApplicationModel.Chat.IChatMessageChangeReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageChangeTracker> = L"Windows.ApplicationModel.Chat.IChatMessageChangeTracker";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> = L"Windows.ApplicationModel.Chat.IChatMessageChangedDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs> = L"Windows.ApplicationModel.Chat.IChatMessageChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageManager2Statics> = L"Windows.ApplicationModel.Chat.IChatMessageManager2Statics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageManagerStatic> = L"Windows.ApplicationModel.Chat.IChatMessageManagerStatic";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3> = L"Windows.ApplicationModel.Chat.IChatMessageManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails> = L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2> = L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageReader> = L"Windows.ApplicationModel.Chat.IChatMessageReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageReader2> = L"Windows.ApplicationModel.Chat.IChatMessageReader2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageStore> = L"Windows.ApplicationModel.Chat.IChatMessageStore";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageStore2> = L"Windows.ApplicationModel.Chat.IChatMessageStore2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageStore3> = L"Windows.ApplicationModel.Chat.IChatMessageStore3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs> = L"Windows.ApplicationModel.Chat.IChatMessageStoreChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageTransport> = L"Windows.ApplicationModel.Chat.IChatMessageTransport";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageTransport2> = L"Windows.ApplicationModel.Chat.IChatMessageTransport2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> = L"Windows.ApplicationModel.Chat.IChatMessageTransportConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatMessageValidationResult> = L"Windows.ApplicationModel.Chat.IChatMessageValidationResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatQueryOptions> = L"Windows.ApplicationModel.Chat.IChatQueryOptions";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo> = L"Windows.ApplicationModel.Chat.IChatRecipientDeliveryInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatSearchReader> = L"Windows.ApplicationModel.Chat.IChatSearchReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatSyncConfiguration> = L"Windows.ApplicationModel.Chat.IChatSyncConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IChatSyncManager> = L"Windows.ApplicationModel.Chat.IChatSyncManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsEndUserMessage> = L"Windows.ApplicationModel.Chat.IRcsEndUserMessage";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAction";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs> = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails> = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> = L"Windows.ApplicationModel.Chat.IRcsEndUserMessageManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsManagerStatics> = L"Windows.ApplicationModel.Chat.IRcsManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsManagerStatics2> = L"Windows.ApplicationModel.Chat.IRcsManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs> = L"Windows.ApplicationModel.Chat.IRcsServiceKindSupportedChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsTransport> = L"Windows.ApplicationModel.Chat.IRcsTransport";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRcsTransportConfiguration> = L"Windows.ApplicationModel.Chat.IRcsTransportConfiguration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs> = L"Windows.ApplicationModel.Chat.IRemoteParticipantComposingChangedEventArgs";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatCapabilities>{ 0x3AFF77BC,0x39C9,0x4DD1,{ 0xAD,0x2D,0x39,0x64,0xDD,0x9D,0x40,0x3F } }; // 3AFF77BC-39C9-4DD1-AD2D-3964DD9D403F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ 0xB57A2F30,0x7041,0x458E,{ 0xB0,0xCF,0x7C,0x0D,0x9F,0xEA,0x33,0x3A } }; // B57A2F30-7041-458E-B0CF-7C0D9FEA333A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics2>{ 0xE30D4274,0xD5C1,0x4AC9,{ 0x9F,0xFC,0x40,0xE6,0x91,0x84,0xFE,0xC8 } }; // E30D4274-D5C1-4AC9-9FFC-40E69184FEC8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatConversation>{ 0xA58C080D,0x1A6F,0x46DC,{ 0x8F,0x3D,0xF5,0x02,0x86,0x60,0xB6,0xEE } }; // A58C080D-1A6F-46DC-8F3D-F5028660B6EE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatConversation2>{ 0x0A030CD1,0x983A,0x47AA,{ 0x9A,0x90,0xEE,0x48,0xEE,0x99,0x7B,0x59 } }; // 0A030CD1-983A-47AA-9A90-EE48EE997B59
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatConversationReader>{ 0x055136D2,0xDE32,0x4A47,{ 0xA9,0x3A,0xB3,0xDC,0x08,0x33,0x85,0x2B } }; // 055136D2-DE32-4A47-A93A-B3DC0833852B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ 0x331C21DC,0x7A07,0x4422,{ 0xA3,0x2C,0x24,0xBE,0x7C,0x6D,0xAB,0x24 } }; // 331C21DC-7A07-4422-A32C-24BE7C6DAB24
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatItem>{ 0x8751D000,0xCEB1,0x4243,{ 0xB8,0x03,0x15,0xD4,0x5A,0x1D,0xD4,0x28 } }; // 8751D000-CEB1-4243-B803-15D45A1DD428
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessage>{ 0x4B39052A,0x1142,0x5089,{ 0x76,0xDA,0xF2,0xDB,0x3D,0x17,0xCD,0x05 } }; // 4B39052A-1142-5089-76DA-F2DB3D17CD05
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessage2>{ 0x86668332,0x543F,0x49F5,{ 0xAC,0x71,0x6C,0x2A,0xFC,0x65,0x65,0xFD } }; // 86668332-543F-49F5-AC71-6C2AFC6565FD
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessage3>{ 0x74EB2FB0,0x3BA7,0x459F,{ 0x8E,0x0B,0xE8,0xAF,0x0F,0xEB,0xD9,0xAD } }; // 74EB2FB0-3BA7-459F-8E0B-E8AF0FEBD9AD
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessage4>{ 0x2D144B0F,0xD2BF,0x460C,{ 0xAA,0x68,0x6D,0x3F,0x84,0x83,0xC9,0xBF } }; // 2D144B0F-D2BF-460C-AA68-6D3F8483C9BF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ 0xC7C4FD74,0xBF63,0x58EB,{ 0x50,0x8C,0x8B,0x86,0x3F,0xF1,0x6B,0x67 } }; // C7C4FD74-BF63-58EB-508C-8B863FF16B67
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ 0x5ED99270,0x7DD1,0x4A87,{ 0xA8,0xCE,0xAC,0xDD,0x87,0xD8,0x0D,0xC8 } }; // 5ED99270-7DD1-4A87-A8CE-ACDD87D80DC8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ 0x205852A2,0xA356,0x5B71,{ 0x6C,0xA9,0x66,0xC9,0x85,0xB7,0xD0,0xD5 } }; // 205852A2-A356-5B71-6CA9-66C985B7D0D5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ 0xF6B9A380,0xCDEA,0x11E4,{ 0x88,0x30,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; // F6B9A380-CDEA-11E4-8830-0800200C9A66
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageChange>{ 0x1C18C355,0x421E,0x54B8,{ 0x6D,0x38,0x6B,0x3A,0x6C,0x82,0xFC,0xCC } }; // 1C18C355-421E-54B8-6D38-6B3A6C82FCCC
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ 0x14267020,0x28CE,0x5F26,{ 0x7B,0x05,0x9A,0x5C,0x7C,0xCE,0x87,0xCA } }; // 14267020-28CE-5F26-7B05-9A5C7CCE87CA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ 0x60B7F066,0x70A0,0x5224,{ 0x50,0x8C,0x24,0x2E,0xF7,0xC1,0xD0,0x6F } }; // 60B7F066-70A0-5224-508C-242EF7C1D06F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ 0xFBC6B30C,0x788C,0x4DCC,{ 0xAC,0xE7,0x62,0x82,0x38,0x29,0x68,0xCF } }; // FBC6B30C-788C-4DCC-ACE7-6282382968CF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ 0xB6B73E2D,0x691C,0x4EDF,{ 0x86,0x60,0x6E,0xB9,0x89,0x68,0x92,0xE3 } }; // B6B73E2D-691C-4EDF-8660-6EB9896892E3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ 0x1D45390F,0x9F4F,0x4E35,{ 0x96,0x4E,0x1B,0x9C,0xA6,0x1A,0xC0,0x44 } }; // 1D45390F-9F4F-4E35-964E-1B9CA61AC044
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ 0xF15C60F7,0xD5E8,0x5E92,{ 0x55,0x6D,0xE0,0x3B,0x60,0x25,0x31,0x04 } }; // F15C60F7-D5E8-5E92-556D-E03B60253104
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ 0x208B830D,0x6755,0x48CC,{ 0x9A,0xB3,0xFD,0x03,0xC4,0x63,0xFC,0x92 } }; // 208B830D-6755-48CC-9AB3-FD03C463FC92
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ 0xFD344DFB,0x3063,0x4E17,{ 0x85,0x86,0xC6,0xC0,0x82,0x62,0xE6,0xC0 } }; // FD344DFB-3063-4E17-8586-C6C08262E6C0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ 0x6BB522E0,0xAA07,0x4FD1,{ 0x94,0x71,0x77,0x93,0x4F,0xB7,0x5E,0xE6 } }; // 6BB522E0-AA07-4FD1-9471-77934FB75EE6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageReader>{ 0xB6EA78CE,0x4489,0x56F9,{ 0x76,0xAA,0xE2,0x04,0x68,0x25,0x14,0xCF } }; // B6EA78CE-4489-56F9-76AA-E204682514CF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageReader2>{ 0x89643683,0x64BB,0x470D,{ 0x9D,0xF4,0x0D,0xE8,0xBE,0x1A,0x05,0xBF } }; // 89643683-64BB-470D-9DF4-0DE8BE1A05BF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageStore>{ 0x31F2FD01,0xCCF6,0x580B,{ 0x49,0x76,0x0A,0x07,0xDD,0x5D,0x3B,0x47 } }; // 31F2FD01-CCF6-580B-4976-0A07DD5D3B47
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageStore2>{ 0xAD4DC4EE,0x3AD4,0x491B,{ 0xB3,0x11,0xAB,0xDF,0x9B,0xB2,0x27,0x68 } }; // AD4DC4EE-3AD4-491B-B311-ABDF9BB22768
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageStore3>{ 0x9ADBBB09,0x4345,0x4EC1,{ 0x8B,0x74,0xB7,0x33,0x82,0x43,0x71,0x9C } }; // 9ADBBB09-4345-4EC1-8B74-B7338243719C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ 0x65C66FAC,0xFE8C,0x46D4,{ 0x91,0x19,0x57,0xB8,0x41,0x03,0x11,0xD5 } }; // 65C66FAC-FE8C-46D4-9119-57B8410311D5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageTransport>{ 0x63A9DBF8,0xE6B3,0x5C9A,{ 0x5F,0x85,0xD4,0x79,0x25,0xB9,0xBD,0x18 } }; // 63A9DBF8-E6B3-5C9A-5F85-D47925B9BD18
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ 0x90A75622,0xD84A,0x4C22,{ 0xA9,0x4D,0x54,0x44,0x44,0xED,0xC8,0xA1 } }; // 90A75622-D84A-4C22-A94D-544444EDC8A1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ 0x879FF725,0x1A08,0x4ACA,{ 0xA0,0x75,0x33,0x55,0x12,0x63,0x12,0xE6 } }; // 879FF725-1A08-4ACA-A075-3355126312E6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ 0x25E93A03,0x28EC,0x5889,{ 0x56,0x9B,0x7E,0x48,0x6B,0x12,0x6F,0x18 } }; // 25E93A03-28EC-5889-569B-7E486B126F18
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatQueryOptions>{ 0x2FD364A6,0xBF36,0x42F7,{ 0xB7,0xE7,0x92,0x3C,0x0A,0xAB,0xFE,0x16 } }; // 2FD364A6-BF36-42F7-B7E7-923C0AABFE16
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ 0xFFC7B2A2,0x283C,0x4C0A,{ 0x8A,0x0E,0x8C,0x33,0xBD,0xBF,0x05,0x45 } }; // FFC7B2A2-283C-4C0A-8A0E-8C33BDBF0545
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatSearchReader>{ 0x4665FE49,0x9020,0x4752,{ 0x98,0x0D,0x39,0x61,0x23,0x25,0xF5,0x89 } }; // 4665FE49-9020-4752-980D-39612325F589
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ 0x09F869B2,0x69F4,0x4AFF,{ 0x82,0xB6,0x06,0x99,0x2F,0xF4,0x02,0xD2 } }; // 09F869B2-69F4-4AFF-82B6-06992FF402D2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IChatSyncManager>{ 0x7BA52C63,0x2650,0x486F,{ 0xB4,0xB4,0x6B,0xD9,0xD3,0xD6,0x3C,0x84 } }; // 7BA52C63-2650-486F-B4B4-6BD9D3D63C84
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ 0xD7CDA5EB,0xCBD7,0x4F3B,{ 0x85,0x26,0xB5,0x06,0xDE,0xC3,0x5C,0x53 } }; // D7CDA5EB-CBD7-4F3B-8526-B506DEC35C53
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ 0x92378737,0x9B42,0x46D3,{ 0x9D,0x5E,0x3C,0x1B,0x2D,0xAE,0x7C,0xB8 } }; // 92378737-9B42-46D3-9D5E-3C1B2DAE7CB8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ 0x2D45AE01,0x3F89,0x41EA,{ 0x97,0x02,0x9E,0x9E,0xD4,0x11,0xAA,0x98 } }; // 2D45AE01-3F89-41EA-9702-9E9ED411AA98
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ 0x5B97742D,0x351F,0x4692,{ 0xB4,0x1E,0x1B,0x03,0x5D,0xC1,0x89,0x86 } }; // 5B97742D-351F-4692-B41E-1B035DC18986
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ 0x3054AE5A,0x4D1F,0x4B59,{ 0x94,0x33,0x12,0x6C,0x73,0x4E,0x86,0xA6 } }; // 3054AE5A-4D1F-4B59-9433-126C734E86A6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ 0x7D270AC5,0x0ABD,0x4F31,{ 0x9B,0x99,0xA5,0x9E,0x71,0xA7,0xB7,0x31 } }; // 7D270AC5-0ABD-4F31-9B99-A59E71A7B731
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsManagerStatics2>{ 0xCD49AD18,0xAD8A,0x42AA,{ 0x8E,0xEB,0xA7,0x98,0xA8,0x80,0x89,0x59 } }; // CD49AD18-AD8A-42AA-8EEB-A798A8808959
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ 0xF47EA244,0xE783,0x4866,{ 0xB3,0xA7,0x4E,0x5C,0xCF,0x02,0x30,0x70 } }; // F47EA244-E783-4866-B3A7-4E5CCF023070
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsTransport>{ 0xFEA34759,0xF37C,0x4319,{ 0x85,0x46,0xEC,0x84,0xD2,0x1D,0x30,0xFF } }; // FEA34759-F37C-4319-8546-EC84D21D30FF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ 0x1FCCB102,0x2472,0x4BB9,{ 0x99,0x88,0xC1,0x21,0x1C,0x83,0xE8,0xA9 } }; // 1FCCB102-2472-4BB9-9988-C1211C83E8A9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ 0x1EC045A7,0xCFC9,0x45C9,{ 0x98,0x76,0x44,0x9F,0x2B,0xC1,0x80,0xF5 } }; // 1EC045A7-CFC9-45C9-9876-449F2BC180F5
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatCapabilities>{ using type = Windows::ApplicationModel::Chat::IChatCapabilities; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversation>{ using type = Windows::ApplicationModel::Chat::IChatConversation; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversationReader>{ using type = Windows::ApplicationModel::Chat::IChatConversationReader; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo>{ using type = Windows::ApplicationModel::Chat::IChatConversationThreadingInfo; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessage>{ using type = Windows::ApplicationModel::Chat::IChatMessage; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageAttachment>{ using type = Windows::ApplicationModel::Chat::IChatMessageAttachment; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChange>{ using type = Windows::ApplicationModel::Chat::IChatMessageChange; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangeReader>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangeReader; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangeTracker>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangeTracker; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangedDeferral; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageReader>{ using type = Windows::ApplicationModel::Chat::IChatMessageReader; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageStore>{ using type = Windows::ApplicationModel::Chat::IChatMessageStore; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageTransport>{ using type = Windows::ApplicationModel::Chat::IChatMessageTransport; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration>{ using type = Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageValidationResult>{ using type = Windows::ApplicationModel::Chat::IChatMessageValidationResult; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatQueryOptions>{ using type = Windows::ApplicationModel::Chat::IChatQueryOptions; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>{ using type = Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSearchReader>{ using type = Windows::ApplicationModel::Chat::IChatSearchReader; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSyncConfiguration>{ using type = Windows::ApplicationModel::Chat::IChatSyncConfiguration; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSyncManager>{ using type = Windows::ApplicationModel::Chat::IChatSyncManager; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessage>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessage; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAction; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageManager>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageManager; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsTransport>{ using type = Windows::ApplicationModel::Chat::IRcsTransport; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RcsTransportConfiguration>{ using type = Windows::ApplicationModel::Chat::IRcsTransportConfiguration; };
    template <> struct default_interface<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs; };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsOnline(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsChatCapable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsFileTransferCapable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsGeoLocationPushCapable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsIntegratedMessagingCapable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCachedCapabilitiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitiesFromNetworkAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCachedCapabilitiesForTransportAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitiesFromNetworkForTransportAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatConversation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasUnreadMessages(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsConversationMuted(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsConversationMuted(bool) noexcept = 0;
            virtual int32_t __stdcall get_MostRecentMessageId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Participants(void**) noexcept = 0;
            virtual int32_t __stdcall get_ThreadingInfo(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader(void**) noexcept = 0;
            virtual int32_t __stdcall MarkAllMessagesAsReadAsync(void**) noexcept = 0;
            virtual int32_t __stdcall MarkMessagesAsReadAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall NotifyLocalParticipantComposing(void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall NotifyRemoteParticipantComposing(void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall add_RemoteParticipantComposingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemoteParticipantComposingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatConversation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanModifyParticipants(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanModifyParticipants(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatConversationReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadBatchWithCountAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Custom(void**) noexcept = 0;
            virtual int32_t __stdcall put_Custom(void*) noexcept = 0;
            virtual int32_t __stdcall get_ConversationId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ConversationId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Participants(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Attachments(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall put_Body(void*) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsForwardingDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsIncoming(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRead(bool*) noexcept = 0;
            virtual int32_t __stdcall get_LocalTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Recipients(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecipientSendStatuses(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransportFriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransportId(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransportId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EstimatedDownloadSize(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_EstimatedDownloadSize(uint64_t) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsAutoReply(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAutoReply(bool) noexcept = 0;
            virtual int32_t __stdcall put_IsForwardingDisabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsReplyDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIncoming(bool) noexcept = 0;
            virtual int32_t __stdcall put_IsRead(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSeen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSeen(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSimMessage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LocalTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MessageKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MessageKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MessageOperatorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MessageOperatorKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_NetworkTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_IsReceivedDuringQuietHours(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsReceivedDuringQuietHours(bool) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldSuppressNotification(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldSuppressNotification(bool) noexcept = 0;
            virtual int32_t __stdcall get_ThreadingInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_ThreadingInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_RecipientsDeliveryInfos(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SyncId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SyncId(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataStreamReference(void**) noexcept = 0;
            virtual int32_t __stdcall put_DataStreamReference(void*) noexcept = 0;
            virtual int32_t __stdcall get_GroupId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GroupId(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MimeType(void**) noexcept = 0;
            virtual int32_t __stdcall put_MimeType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachment2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransferProgress(double*) noexcept = 0;
            virtual int32_t __stdcall put_TransferProgress(double) noexcept = 0;
            virtual int32_t __stdcall get_OriginalFileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_OriginalFileName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateChatMessageAttachment(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MarkMessageAsBlockedAsync(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangeReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcceptChanges() noexcept = 0;
            virtual int32_t __stdcall AcceptChangesThrough(void*) noexcept = 0;
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall GetChangeReader(void**) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterTransportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetTransportAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTransportsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ShowComposeSmsMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowSmsSettings() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestSyncManagerAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChatMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldDisplayToast(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldUpdateDetailText(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldUpdateBadge(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ShouldUpdateActionCenter(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageReader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchWithCountAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader1(void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageReader2(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall MarkMessageReadAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RetrySendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ValidateMessage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_MessageChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ForwardMessageAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationForTransportsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationFromThreadingInfoAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversationForTransportsReader(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageByRemoteIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUnseenCountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetUnseenCountForTransportsReaderAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkAsSeenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall MarkAsSeenForTransportsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSearchReader(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCancelDownloadMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCancelSendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_StoreChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StoreChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMessageBySyncIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAppSetAsNotificationProvider(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TransportFriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransportId(void**) noexcept = 0;
            virtual int32_t __stdcall RequestSetAsNotificationProviderAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransport2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransportKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxAttachmentCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxMessageSizeInKilobytes(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxRecipientCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVideoFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageValidationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPartCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_PartCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemainingCharacterCountInPart(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SearchString(void**) noexcept = 0;
            virtual int32_t __stdcall put_SearchString(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransportAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransportAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeliveryTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_DeliveryTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_ReadTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReadTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransportErrorCodeCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TransportInterpretedErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TransportErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsErrorPermanent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatSearchReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadBatchWithCountAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatSyncConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSyncEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSyncEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RestoreHistorySpan(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RestoreHistorySpan(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IChatSyncManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall AssociateAccountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnassociateAccountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsAccountAssociated(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall StartSync() noexcept = 0;
            virtual int32_t __stdcall SetConfigurationAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransportId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPinRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Actions(void**) noexcept = 0;
            virtual int32_t __stdcall SendResponseAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendResponseWithPinAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMessageAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MessageAvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageAvailableChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetEndUserMessageManager(void**) noexcept = 0;
            virtual int32_t __stdcall GetTransportsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetTransportAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LeaveConversationAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_TransportListChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransportListChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsTransport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TransportFriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransportId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall IsStoreAndForwardEnabled(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsServiceKindSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall add_ServiceKindSupportedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServiceKindSupportedChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxAttachmentCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxMessageSizeInKilobytes(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxGroupMessageSizeInKilobytes(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxRecipientCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxFileSizeInKilobytes(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WarningFileSizeInKilobytes(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TransportId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParticipantAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsComposing(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatCapabilities
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOnline() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsChatCapable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFileTransferCapable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGeoLocationPushCapable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsIntegratedMessagingCapable() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatCapabilities>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>) GetCachedCapabilitiesAsync(param::hstring const& address) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>) GetCapabilitiesFromNetworkAsync(param::hstring const& address) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>) GetCachedCapabilitiesAsync(param::hstring const& address, param::hstring const& transportId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>) GetCapabilitiesFromNetworkAsync(param::hstring const& address, param::hstring const& transportId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatConversation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasUnreadMessages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        WINRT_IMPL_AUTO(void) Subject(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConversationMuted() const;
        WINRT_IMPL_AUTO(void) IsConversationMuted(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MostRecentMessageId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Participants() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo) ThreadingInfo() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteAsync() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageReader) GetMessageReader() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkMessagesAsReadAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkMessagesAsReadAsync(Windows::Foundation::DateTime const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveAsync() const;
        WINRT_IMPL_AUTO(void) NotifyLocalParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const;
        WINRT_IMPL_AUTO(void) NotifyRemoteParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const;
        WINRT_IMPL_AUTO(winrt::event_token) RemoteParticipantComposingChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const;
        using RemoteParticipantComposingChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IChatConversation, &impl::abi_t<Windows::ApplicationModel::Chat::IChatConversation>::remove_RemoteParticipantComposingChanged>;
        [[nodiscard]] RemoteParticipantComposingChanged_revoker RemoteParticipantComposingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) RemoteParticipantComposingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatConversation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatConversation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanModifyParticipants() const;
        WINRT_IMPL_AUTO(void) CanModifyParticipants(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatConversation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatConversationReader
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>>) ReadBatchAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>>) ReadBatchAsync(int32_t count) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatConversationReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversationReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContactId() const;
        WINRT_IMPL_AUTO(void) ContactId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Custom() const;
        WINRT_IMPL_AUTO(void) Custom(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ConversationId() const;
        WINRT_IMPL_AUTO(void) ConversationId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Participants() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatConversationThreadingKind) Kind() const;
        WINRT_IMPL_AUTO(void) Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatItem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatItemKind) ItemKind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment>) Attachments() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        WINRT_IMPL_AUTO(void) Body(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsForwardingDisabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsIncoming() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRead() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) LocalTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) NetworkTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Recipients() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Chat::ChatMessageStatus>) RecipientSendStatuses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportFriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportId() const;
        WINRT_IMPL_AUTO(void) TransportId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessage2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) EstimatedDownloadSize() const;
        WINRT_IMPL_AUTO(void) EstimatedDownloadSize(uint64_t value) const;
        WINRT_IMPL_AUTO(void) From(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAutoReply() const;
        WINRT_IMPL_AUTO(void) IsAutoReply(bool value) const;
        WINRT_IMPL_AUTO(void) IsForwardingDisabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReplyDisabled() const;
        WINRT_IMPL_AUTO(void) IsIncoming(bool value) const;
        WINRT_IMPL_AUTO(void) IsRead(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSeen() const;
        WINRT_IMPL_AUTO(void) IsSeen(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSimMessage() const;
        WINRT_IMPL_AUTO(void) LocalTimestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageKind) MessageKind() const;
        WINRT_IMPL_AUTO(void) MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageOperatorKind) MessageOperatorKind() const;
        WINRT_IMPL_AUTO(void) MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind const& value) const;
        WINRT_IMPL_AUTO(void) NetworkTimestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReceivedDuringQuietHours() const;
        WINRT_IMPL_AUTO(void) IsReceivedDuringQuietHours(bool value) const;
        WINRT_IMPL_AUTO(void) RemoteId(param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) Status(Windows::ApplicationModel::Chat::ChatMessageStatus const& value) const;
        WINRT_IMPL_AUTO(void) Subject(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldSuppressNotification() const;
        WINRT_IMPL_AUTO(void) ShouldSuppressNotification(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo) ThreadingInfo() const;
        WINRT_IMPL_AUTO(void) ThreadingInfo(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>) RecipientsDeliveryInfos() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessage3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RemoteId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessage4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SyncId() const;
        WINRT_IMPL_AUTO(void) SyncId(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) DataStreamReference() const;
        WINRT_IMPL_AUTO(void) DataStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) GroupId() const;
        WINRT_IMPL_AUTO(void) GroupId(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MimeType() const;
        WINRT_IMPL_AUTO(void) MimeType(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachment>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Thumbnail() const;
        WINRT_IMPL_AUTO(void) Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TransferProgress() const;
        WINRT_IMPL_AUTO(void) TransferProgress(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OriginalFileName() const;
        WINRT_IMPL_AUTO(void) OriginalFileName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachment2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageAttachment) CreateChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageChange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageChangeType) ChangeType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessage) Message() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChange>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChange<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader
    {
        WINRT_IMPL_AUTO(void) AcceptChanges() const;
        WINRT_IMPL_AUTO(void) AcceptChangesThrough(Windows::ApplicationModel::Chat::ChatMessageChange const& lastChangeToAcknowledge) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>>) ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangeReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker
    {
        WINRT_IMPL_AUTO(void) Enable() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageChangeReader) GetChangeReader() const;
        WINRT_IMPL_AUTO(void) Reset() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageChangedDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) RegisterTransportAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport>) GetTransportAsync(param::hstring const& transportId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>>) GetTransportsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore>) RequestStoreAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message) const;
        WINRT_IMPL_AUTO(void) ShowSmsSettings() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager>) RequestSyncManagerAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessage) ChatMessage() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldDisplayToast() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldUpdateDetailText() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldUpdateBadge() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldUpdateActionCenter() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageReader
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>>) ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageReader2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>>) ReadBatchAsync(int32_t count) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageReader2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageReader2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageStore
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageChangeTracker) ChangeTracker() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteMessageAsync(param::hstring const& localMessageId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DownloadMessageAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>) GetMessageAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageReader) GetMessageReader() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageReader) GetMessageReader(Windows::Foundation::TimeSpan const& recentTimeLimit) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkMessageReadAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RetrySendMessageAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SendMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageValidationResult) ValidateMessage(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
        WINRT_IMPL_AUTO(winrt::event_token) MessageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const;
        using MessageChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore, &impl::abi_t<Windows::ApplicationModel::Chat::IChatMessageStore>::remove_MessageChanged>;
        [[nodiscard]] MessageChanged_revoker MessageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MessageChanged(winrt::event_token const& value) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageStore2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>) ForwardMessageAsync(param::hstring const& localChatMessageId, param::async_iterable<hstring> const& addresses) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>) GetConversationAsync(param::hstring const& conversationId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>) GetConversationAsync(param::hstring const& conversationId, param::async_iterable<hstring> const& transportIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>) GetConversationFromThreadingInfoAsync(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& threadingInfo) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatConversationReader) GetConversationReader() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatConversationReader) GetConversationReader(param::iterable<hstring> const& transportIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>) GetMessageByRemoteIdAsync(param::hstring const& transportId, param::hstring const& remoteId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<int32_t>) GetUnseenCountAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<int32_t>) GetUnseenCountAsync(param::async_iterable<hstring> const& transportIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkAsSeenAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MarkAsSeenAsync(param::async_iterable<hstring> const& transportIds) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatSearchReader) GetSearchReader(Windows::ApplicationModel::Chat::ChatQueryOptions const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryCancelDownloadMessageAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryCancelSendMessageAsync(param::hstring const& localChatMessageId) const;
        WINRT_IMPL_AUTO(winrt::event_token) StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const;
        using StoreChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore2, &impl::abi_t<Windows::ApplicationModel::Chat::IChatMessageStore2>::remove_StoreChanged>;
        [[nodiscard]] StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StoreChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageStore3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>) GetMessageBySyncIdAsync(param::hstring const& syncId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatStoreChangedEventKind) Kind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageTransport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAppSetAsNotificationProvider() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportFriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RequestSetAsNotificationProviderAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransport>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageTransport2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration) Configuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageTransportKind) TransportKind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransport2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransport2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxAttachmentCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxMessageSizeInKilobytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxRecipientCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::MediaProperties::MediaEncodingProfile) SupportedVideoFormat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) ExtendedProperties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) MaxPartCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) PartCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<uint32_t>) RemainingCharacterCountInPart() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageValidationStatus) Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageValidationResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatQueryOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SearchString() const;
        WINRT_IMPL_AUTO(void) SearchString(param::hstring const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportAddress() const;
        WINRT_IMPL_AUTO(void) TransportAddress(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) DeliveryTime() const;
        WINRT_IMPL_AUTO(void) DeliveryTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) ReadTime() const;
        WINRT_IMPL_AUTO(void) ReadTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory) TransportErrorCodeCategory() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode) TransportInterpretedErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TransportErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsErrorPermanent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatMessageStatus) Status() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatSearchReader
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>>) ReadBatchAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>>) ReadBatchAsync(int32_t count) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatSearchReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSearchReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSyncEnabled() const;
        WINRT_IMPL_AUTO(void) IsSyncEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan) RestoreHistorySpan() const;
        WINRT_IMPL_AUTO(void) RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatSyncConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IChatSyncManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::ChatSyncConfiguration) Configuration() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) AssociateAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) UnassociateAccountAsync() const;
        WINRT_IMPL_AUTO(bool) IsAccountAssociated(Windows::Security::Credentials::WebAccount const& webAccount) const;
        WINRT_IMPL_AUTO(void) StartSync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetConfigurationAsync(Windows::ApplicationModel::Chat::ChatSyncConfiguration const& configuration) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IChatSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPinRequired() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>) Actions() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SendResponseAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SendResponseWithPinAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action, param::hstring const& pin) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMessageAvailable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::RcsEndUserMessage) Message() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) MessageAvailableChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const;
        using MessageAvailableChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager, &impl::abi_t<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>::remove_MessageAvailableChanged>;
        [[nodiscard]] MessageAvailableChanged_revoker MessageAvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MessageAvailableChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::RcsEndUserMessageManager) GetEndUserMessageManager() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>>) GetTransportsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport>) GetTransportAsync(param::hstring const& transportId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation) const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsManagerStatics2
    {
        WINRT_IMPL_AUTO(winrt::event_token) TransportListChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using TransportListChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IRcsManagerStatics2, &impl::abi_t<Windows::ApplicationModel::Chat::IRcsManagerStatics2>::remove_TransportListChanged>;
        [[nodiscard]] TransportListChanged_revoker TransportListChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) TransportListChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::RcsServiceKind) ServiceKind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsTransport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) ExtendedProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportFriendlyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Chat::RcsTransportConfiguration) Configuration() const;
        WINRT_IMPL_AUTO(bool) IsStoreAndForwardEnabled(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const;
        WINRT_IMPL_AUTO(bool) IsServiceKindSupported(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const;
        WINRT_IMPL_AUTO(winrt::event_token) ServiceKindSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const;
        using ServiceKindSupportedChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Chat::IRcsTransport, &impl::abi_t<Windows::ApplicationModel::Chat::IRcsTransport>::remove_ServiceKindSupportedChanged>;
        [[nodiscard]] ServiceKindSupportedChanged_revoker ServiceKindSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ServiceKindSupportedChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsTransport>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsTransport<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxAttachmentCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxMessageSizeInKilobytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxGroupMessageSizeInKilobytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxRecipientCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxFileSizeInKilobytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) WarningFileSizeInKilobytes() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransportId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ParticipantAddress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComposing() const;
    };
    template <> struct consume<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs<D>;
    };
}
#endif
