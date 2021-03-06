//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCDisposableObserverLifecycle, SCLazy;
@protocol SCChatLogger, SCChatRequestManager, SCPerforming;

@interface SCChatMediaRequestManager : NSObject
{
    NSMutableDictionary *_downloadingMediaItemQueue;
    NSMutableDictionary *_mediaDownloadSuccessCompletionHandlers;
    NSMutableDictionary *_mediaDownloadFailureCompletionHandlers;
    id <SCChatRequestManager> _chatRequestManager;
    id <SCPerforming> _downloadingQueue;
    id <SCChatLogger> _logger;
    SCLazy *_loadMessageLogger;
    SCLazy *_mediaContentDownloadHandler;
    SCLazy *_urlMetadataDownloadHandler;
    SCLazy *_urlThumbnailDownloadHandler;
    SCLazy *_addressThumbnailDownloadHandler;
    SCLazy *_snapchatterDownloadHandler;
    SCLazy *_storySnapDownloadHandler;
    SCLazy *_searchStoryDownloadHandler;
    SCLazy *_contributionStoryPublisherDownloadHandler;
    SCLazy *_mapSnapDownloadHandler;
    SCLazy *_mapPoiShareDownloadHandler;
    NSMutableDictionary *_mediaContentFetchBehaviorSubject;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_cleanUpForMediaId:(id)arg1;
- (void)executeBlockAfterMediaContentFetched:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_subjectForMediaId:(id)arg1;
- (void)_markMediaContentFetchCompleted:(id)arg1;
- (void)_dispatchCompletionHandlersWithSuccess:(_Bool)arg1 mediaId:(id)arg2;
- (void)_insertDownloadCompletionHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 mediaId:(id)arg3;
- (void)_insertDownloadableItem:(id)arg1;
- (_Bool)_isDownloadingForMediaId:(id)arg1;
- (void)_removeDownloadableItem:(id)arg1;
- (void)_startDownloadHandler:(id)arg1 downloableItem:(id)arg2;
- (void)_boostDownloadRequestForHandler:(id)arg1 downloableItem:(id)arg2;
- (void)_startDownloadHandler:(id)arg1 downloableItem:(id)arg2 downloadSuccess:(CDUnknownBlockType)arg3 downloadFailure:(CDUnknownBlockType)arg4;
- (void)downloadContributionStoryPublisher:(id)arg1 conversationId:(id)arg2;
- (void)downloadSearchStoryForId:(id)arg1 snapId:(id)arg2 conversationId:(id)arg3 messageId:(id)arg4 type:(long long)arg5 mediaType:(id)arg6 requestContext:(long long)arg7;
- (void)downloadMapPoiShareForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)downloadMapSnapForId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 mediaType:(id)arg4 requestContext:(long long)arg5;
- (void)downloadStorySnapForId:(id)arg1 senderUsername:(id)arg2 sequenceNumber:(id)arg3 conversationId:(id)arg4 messageId:(id)arg5 mediaType:(id)arg6 requestContext:(long long)arg7;
- (void)downloadSnapchatterForId:(id)arg1 conversationId:(id)arg2;
- (void)downloadThumbnailForAddressContent:(id)arg1 conversationId:(id)arg2;
- (void)downloadThumbnailForUrlMediaCardContent:(id)arg1 conversationId:(id)arg2;
- (void)downloadUrlMetadataForUrls:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 needSpamCheck:(_Bool)arg4 downloadSuccess:(CDUnknownBlockType)arg5;
- (void)makeChatMedias:(id)arg1 recipients:(id)arg2 groups:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)uploadChatMediaForMedia:(id)arg1 dataToUpload:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_logDiscreteStepForMessageId:(id)arg1 mediaId:(id)arg2 itemMediaId:(id)arg3 bodyType:(long long)arg4 conversationId:(id)arg5 mediaType:(long long)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8;
- (void)_downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8 downloadSuccess:(CDUnknownBlockType)arg9 downloadFailure:(CDUnknownBlockType)arg10;
- (void)downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8;
- (void)downloadChatMediaForChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUsername:(id)arg5 lensMetadata:(id)arg6 isReplyMedia:(_Bool)arg7 requestContext:(long long)arg8 downloadSuccess:(CDUnknownBlockType)arg9 downloadFailure:(CDUnknownBlockType)arg10;
- (id)initWithMediaRequestAPI:(id)arg1 logger:(id)arg2 loadMessageLogger:(id)arg3 mediaContentDownloadHandler:(id)arg4 urlMetadataDownloadHandler:(id)arg5 urlThumbnailDownloadHandler:(id)arg6 addressThumbnailDownloadHandler:(id)arg7 snapchatterDownloadHandler:(id)arg8 storySnapDownloadHandler:(id)arg9 searchStoryDownloadHandler:(id)arg10 contributionStoryPublisherDownloadHandler:(id)arg11 mapSnapDownloadHandler:(id)arg12 mapPoiShareDownloadHandler:(id)arg13;
- (id)initWithMediaRequestAPI:(id)arg1 metadataStore:(id)arg2 messageStateHandler:(id)arg3 mediaStateManager:(id)arg4 arroyoConversationIdsManager:(id)arg5 experimentManager:(id)arg6 requestManager:(id)arg7 snapTokenProvider:(id)arg8 logger:(id)arg9 loadMessageLogger:(id)arg10;

@end

