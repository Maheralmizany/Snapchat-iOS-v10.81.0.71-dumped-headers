//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLogging-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCAGalleryPageView, SCAttachmentsLogger, SCGalleryLoggerGallerySessionCounter, SCGalleryLoggerSessionCounter, SCLazy, SCScopedAccess, SCUserSession;
@protocol SCGallerySnap, SCPerforming;

@interface SCGalleryLogger : NSObject <SCGalleryLogging>
{
    SCUserSession *_userSession;
    SCLazy *_dataObjectContext;
    id <SCPerforming> _performer;
    _Bool _isOnboarding;
    long long _serverEntryCount;
    _Bool _performEntryCountCheck;
    SCGalleryLoggerSessionCounter *_gallerySessionCounter;
    NSString *_initialSyncToken;
    unsigned long long _initialSyncRequestCount;
    unsigned long long _initialSyncEntryCount;
    SCGalleryLoggerSessionCounter *_initialLoadingViewingSessionCounter;
    SCGalleryLoggerSessionCounter *_initialLoadingSyncSessionCounter;
    SCGalleryLoggerSessionCounter *_selectionModeSessionCounter;
    NSMutableDictionary *_urlStringToUploadGCSInfo;
    NSMutableDictionary *_uniqueTokenToDownloadE2EInfo;
    SCAGalleryPageView *_galleryPageViewEvent;
    SCGalleryLoggerSessionCounter *_storyViewSessionCounter;
    NSMutableSet *_viewedSnapIds;
    unsigned long long _requestCount;
    unsigned long long _cacheMissCount;
    unsigned long long _imageLevel0WrittenToDiskCount;
    double _imageLevel0TotalSizeInMbs;
    unsigned long long _imageHighLevelWrittenToDiskCount;
    double _imageHighLevelTotalSizeInMbs;
    unsigned long long _searchResultNum;
    NSString *_searchText;
    NSString *_searchTextLocale;
    _Bool _selected;
    NSDate *_userLastTypingTimeStamp;
    unsigned long long _indexedSnapCount;
    unsigned long long _indexedSnapWithGeoFailed;
    unsigned long long _indexedSnapWithVisualFailed;
    unsigned long long _reindexedSnapCount;
    long long _numberOfTotalProcessedSnaps;
    long long _numberOfSuccessSavedSnaps;
    SCAttachmentsLogger *_attachmentsLogger;
    CDUnknownBlockType _initialLoadingViewTimerBlock;
    NSMutableDictionary *_sendingEventsToFire;
    NSMutableDictionary *_sendingStartTime;
    NSMutableArray *_resyncSteps;
    NSMutableArray *_resyncParams;
    NSMutableArray *_resyncStepTimeStamps;
    NSMutableSet *_snapIdsToPresent;
    id <SCGallerySnap> _currentFullScreenDisplaySnap;
    SCScopedAccess *_scopedUnlockableViewTracker;
    _Bool _isInGallerySearch;
    SCGalleryLoggerGallerySessionCounter *_gallerySessionCounter_dont_change_ivar_properties;
    long long _galleryOpenSource;
    double _memoriesAllTabLoadLatency;
    double _memoriesStoriesTabLoadLatency;
    double _memoriesCameraRollTabLoadLatency;
    unsigned long long _currentGalleryTab;
}

+ (void)logUserSwitchDataEvictionWithNewUsername:(id)arg1 lostSnapCount:(unsigned long long)arg2;
+ (void)logDataDeleteAttemptWithUserTrigger:(_Bool)arg1 actionTaken:(long long)arg2 context:(long long)arg3 snapPendingBackupCount:(long long)arg4 snapDeleteCount:(long long)arg5 previousUsername:(id)arg6;
@property _Bool isInGallerySearch; // @synthesize isInGallerySearch=_isInGallerySearch;
@property unsigned long long currentGalleryTab; // @synthesize currentGalleryTab=_currentGalleryTab;
@property(readonly, nonatomic) double memoriesCameraRollTabLoadLatency; // @synthesize memoriesCameraRollTabLoadLatency=_memoriesCameraRollTabLoadLatency;
@property(readonly, nonatomic) double memoriesStoriesTabLoadLatency; // @synthesize memoriesStoriesTabLoadLatency=_memoriesStoriesTabLoadLatency;
@property(readonly, nonatomic) double memoriesAllTabLoadLatency; // @synthesize memoriesAllTabLoadLatency=_memoriesAllTabLoadLatency;
@property(nonatomic) long long galleryOpenSource; // @synthesize galleryOpenSource=_galleryOpenSource;
- (void).cxx_destruct;
- (id)_galleryDataObjectContext;
- (_Bool)_shouldReportBlizzardEvent:(double)arg1;
- (long long)_convertCloudSyncOperationType:(unsigned long long)arg1;
- (long long)_snapSourceForSnap:(id)arg1;
- (_Bool)_isFromSearch;
- (long long)_contextMenuSource;
- (long long)_SCAMediaTypeOfBasicItem:(id)arg1;
- (long long)_SCAMediaTypeOfItem:(id)arg1 subItems:(id)arg2;
- (void)_logAndResetCacheCounts;
- (void)galleryCacheDiskUsage:(long long)arg1 currentDiskUsage:(long long)arg2 level0FileSzie:(long long)arg3 highLevelFileSize:(long long)arg4 nonEmptyEntityCount:(unsigned long long)arg5;
- (void)didSaveImagesToDisk:(long long)arg1 imageCount:(unsigned long long)arg2 sourceLevel:(long long)arg3;
- (void)retrieveImageWithStep:(unsigned long long)arg1 generationId:(id)arg2 latency:(double)arg3;
- (void)cacheMissDidHappen;
- (void)didReceiveRequest;
- (void)logBlizzardSnapUpload:(id)arg1 totalTimeInSec:(double)arg2 tempCellularBackupEnabled:(_Bool)arg3 skipOperation:(_Bool)arg4;
- (void)logBlizzardBackupError:(unsigned long long)arg1 fromRetry:(_Bool)arg2 errorMessage:(id)arg3 statusCode:(long long)arg4 detailStatusCode:(long long)arg5;
- (void)logBackupErrorWithMessage:(id)arg1 retryCount:(unsigned long long)arg2 statusCode:(id)arg3 detailStatusCode:(id)arg4 fromRetry:(_Bool)arg5 operationParams:(id)arg6;
- (void)logException:(id)arg1 detail:(id)arg2 params:(id)arg3;
- (void)logResyncOperationTotalTimeInSec:(double)arg1;
- (void)logResyncOperationWithParams:(id)arg1;
- (void)logSkipedOperationsFromOutOfOrderDeletion:(id)arg1 logContexts:(id)arg2 deleteEntryIds:(id)arg3 backupNowEnabled:(_Bool)arg4;
- (void)logFinishedOperationWithOperationType:(unsigned long long)arg1 totalTimeInSec:(double)arg2 networkProcessingTimeInSec:(double)arg3 queueLength:(long long)arg4 logContexts:(id)arg5 tempCellularBackupEnabled:(_Bool)arg6;
- (void)logNewQueuedOperationWithParams:(id)arg1 queueLength:(long long)arg2 blockedDurationInSec:(double)arg3;
- (void)mediaDownloadEntityRequestCompelte:(_Bool)arg1 canceled:(_Bool)arg2 latency:(double)arg3;
- (void)mediaDownloadRedirectRequestCompelte:(_Bool)arg1 canceled:(_Bool)arg2 snapId:(id)arg3 assetType:(long long)arg4 statusCode:(long long)arg5 latency:(double)arg6 urlPath:(id)arg7 contentLengthInByte:(unsigned long long)arg8 error:(id)arg9 assetDescriptor:(id)arg10;
- (void)logGetSnapsError:(id)arg1 getSnapResponse:(id)arg2;
- (void)logDeletionUserActionWithEntryIdsAndTypes:(id)arg1 snapIds:(id)arg2 cameraRollItemCount:(unsigned long long)arg3 cancelled:(_Bool)arg4 context:(id)arg5;
- (void)downloadStartedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)downloadQueuedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)setSceneWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)endUploadForURL:(id)arg1 succeeded:(_Bool)arg2 statusCode:(long long)arg3 parameters:(id)arg4;
- (void)beginUploadForURL:(id)arg1 snapId:(id)arg2 assetType:(long long)arg3 dataSizeInBytes:(unsigned long long)arg4;
- (id)commonLoggingParametersForVideoURL:(id)arg1;
- (id)commonLoggingParametersForPHAsset:(id)arg1;
- (id)lensInfoForSnapOverlay:(id)arg1;
- (id)lensConfigurationsForSnapOverlay:(id)arg1;
- (id)commonLoggingParametersForSnap:(id)arg1 snapOverlay:(id)arg2;
- (void)logCameraRollTabLoadLatency:(double)arg1;
- (void)logStoriesTabLoadLatency:(double)arg1;
- (void)logAllTabLoadLatency:(double)arg1;
- (void)logIncompatibleContentWithMediaId:(id)arg1 entryType:(id)arg2 entrySource:(id)arg3 mediaType:(id)arg4 mediaFormat:(id)arg5 alertType:(id)arg6 unsupportedTools:(id)arg7;
- (void)logIncompatibleContentWithSnap:(id)arg1;
- (void)logIncompatibleContentWithEntry:(id)arg1;
- (void)logNewUserTurnOffAutoSave;
- (void)logNewUserSeenGalleryAutoSaveDialogWithMemoriesEntryCount:(unsigned long long)arg1 visitedSettingPage:(_Bool)arg2;
- (void)logNewUserSeenGalleryAutoSaveTooltip;
- (void)logGalleryLowDiskAlertWithContext:(id)arg1;
- (void)_logGallerySnapShareForExportingItem:(id)arg1;
- (void)_logSpectaclesCustomExportWithContentId:(id)arg1 lensInfo:(id)arg2 activityItemProvider:(id)arg3 contextMenuSource:(long long)arg4 shareChannel:(id)arg5;
- (void)_logSpectaclesCustomExportWithParameters:(id)arg1 activityItemProvider:(id)arg2;
- (void)exportItemWithItemProvider:(id)arg1 shareChannel:(id)arg2;
- (void)importPHAsset:(id)arg1;
- (void)createMemoriesS2RWithDescription:(id)arg1;
- (void)logGalleryCollectionAction:(long long)arg1 entry:(id)arg2;
- (void)logGalleryFeaturedStoryCellView:(id)arg1 itemPosition:(long long)arg2 itemCount:(long long)arg3 userInitiated:(_Bool)arg4;
- (id)_galleryLoadingViewStuckParams:(double)arg1;
- (id)_transformResyncTimeStampsToDiffs:(id)arg1;
- (double)_timeStampDuration:(id)arg1;
- (void)cloudSyncDidPerformStep:(unsigned long long)arg1 consoleParam:(id)arg2 metricParam:(id)arg3;
- (void)shouldStartDismissLoadingView;
- (id)_metricStepLogForResyncStep:(unsigned long long)arg1;
- (void)_consoleStepLogForResyncStep:(unsigned long long)arg1 params:(id)arg2;
- (void)performEntryCountHealthCheck:(long long)arg1;
- (void)setTotalEntryCountFromServer:(long long)arg1;
- (void)logNetworkFailureForEndpoint:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)logCloudSyncerStatus;
- (void)didSyncedSnapsCount:(unsigned long long)arg1 savedSnapsCount:(unsigned long long)arg2;
- (void)logTagUploadServerResponseStatusCode:(long long)arg1 debugInfo:(id)arg2;
- (void)logSearchServiceStatus:(unsigned long long)arg1 numberOfProcessedSnaps:(long long)arg2;
- (void)didIndexedOneSnap:(unsigned long long)arg1;
- (void)logNumberOfSnapsIndexed;
- (void)_logSearchServiceIndexer;
- (void)logSearchLatencyWithSearchType:(long long)arg1 source:(long long)arg2 elapsedTime:(double)arg3 resultCount:(unsigned long long)arg4;
- (void)logQueryUserTypedWithoutSelection:(unsigned long long)arg1 searchText:(id)arg2 searchTextLocale:(id)arg3;
- (void)logQueryUserTypedWithSelectedItem:(id)arg1 resultMatchTypes:(id)arg2 selectedSearchResultTitle:(id)arg3;
- (void)queryUserTyped:(id)arg1 searchText:(id)arg2 searchTextLocale:(id)arg3;
- (void)endQuery;
- (void)renewQuery;
- (void)newQuery;
- (id)logSendingBlizzardEvents:(id)arg1 failureReason:(id)arg2 startTime:(double)arg3;
- (void)logIfSendFromChatDrawerGalleryWithConversationId:(id)arg1 result:(long long)arg2;
- (void)addEvent:(id)arg1 withConversationId:(id)arg2;
- (void)attemptToSendToChatFromPreview;
- (void)attemptToPostToStoriesFromPreview;
- (void)startSendToChatWithSnapSendCount:(long long)arg1 storySendCount:(long long)arg2;
- (void)attemptToPostStoryToStoriesWithMediaGroup:(id)arg1;
- (void)logWhenStartSharingWithSharingType:(unsigned long long)arg1 galleryMedia:(id)arg2 galleryEntry:(id)arg3 sendingFlow:(unsigned long long)arg4;
- (id)successfulSendToChatBlizzardEventsOnGroupLevelWithMediaGroup:(id)arg1 smartSharedSnapCount:(unsigned long long)arg2 userContext:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7;
- (id)successfulSendToChatBlizzardEventsOnSnapLevelWithMedia:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 smartShared:(_Bool)arg8 isInsideStory:(_Bool)arg9 userContext:(id)arg10;
- (id)successfulSendToChatMemoriesSnapMetricInfoOnSnapLevelWithMedia:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 smartShared:(_Bool)arg8 storyCount:(unsigned long long)arg9 isInsideStory:(_Bool)arg10 userContext:(id)arg11;
- (void)logTotalDownloadingBeforeSendingWithTotalImages:(unsigned long long)arg1 totalVideos:(unsigned long long)arg2 totalDownloadedImages:(unsigned long long)arg3 totalDownloadedVideos:(unsigned long long)arg4 totalSmartShareableImages:(unsigned long long)arg5 totalSmartShareableVideos:(unsigned long long)arg6 totalUnSyncedImages:(unsigned long long)arg7 totalUnSyncedVideos:(unsigned long long)arg8;
- (void)logGallerySnapSendForPostToStory:(id)arg1 snapOverlay:(id)arg2 clientId:(id)arg3 smartShared:(_Bool)arg4 userContext:(id)arg5;
- (void)logIfSendFromGalleryWithMessageId:(id)arg1 failureReason:(id)arg2;
- (id)sendToChatBlizzardEventsWithMediaArray:(id)arg1 conversationId:(id)arg2 recipientCount:(long long)arg3 sendToFriend:(_Bool)arg4 mischiefIds:(id)arg5 userContext:(id)arg6;
- (void)setTopSecretPrivateGalleryEnabled:(_Bool)arg1;
- (void)setStoryAutoSaving:(_Bool)arg1;
- (void)setSaveToPrivateGalleryByDefault:(_Bool)arg1;
- (void)setBackupOnCellular:(_Bool)arg1;
- (void)setAutoSaveToCameraRoll:(_Bool)arg1;
- (void)finishPrivateGalleryForgetPasscodeFlow:(unsigned long long)arg1;
- (void)finishPrivateGallerySetup;
- (void)setItemAsPublic:(id)arg1 subItems:(id)arg2;
- (void)setItemAsPrivate:(id)arg1 subItems:(id)arg2;
- (void)logExitPreviewWithCommonLoggingParameters:(id)arg1;
- (void)deleteItems:(id)arg1;
- (void)createStoryWithSnaps:(id)arg1;
- (void)cancelledCreateStory;
- (void)didLongPressSaveToGallery;
- (void)didSaveToGalleryForSnap:(id)arg1 success:(_Bool)arg2 latencyInSec:(double)arg3;
- (void)_logSpectaclesBoomboxSnapView:(id)arg1 snapOverlay:(id)arg2 entryId:(id)arg3 durationSec:(double)arg4 fileType:(long long)arg5 deviceId:(id)arg6 firmwareVersion:(id)arg7 hardwareVersion:(id)arg8 deviceColor:(long long)arg9 sessionId:(id)arg10 viewSource:(long long)arg11;
- (void)logBoomboxBrowseSnapView:(id)arg1 entryId:(id)arg2 viewTimeSec:(double)arg3 fileType:(long long)arg4 deviceId:(id)arg5 firmwareVersion:(id)arg6 hardwareVersion:(id)arg7 deviceColor:(long long)arg8 sessionId:(id)arg9 viewSource:(long long)arg10;
- (void)stopGalleryPageView;
- (void)startGalleryPageView:(id)arg1 contentLoader:(id)arg2;
- (void)_logBrowseStoryView:(id)arg1 viewTimeSec:(double)arg2 itemPosition:(long long)arg3 itemCount:(long long)arg4;
- (void)_logBrowseSnapViewWithSnap:(id)arg1 snapOverlay:(id)arg2 playerVersion:(long long)arg3 timeViewedMillis:(long long)arg4 pinchToZoomMillis:(double)arg5 maxRotationDegree:(double)arg6 minRotationDegree:(double)arg7 loadingLatencyInSec:(double)arg8 isMediaLoaded:(_Bool)arg9;
- (void)_fireGalleryTrackWithSnap:(id)arg1 unlockableSnapInfo:(id)arg2 timeViewedMillis:(long long)arg3;
- (void)didPresentOperaWithSnapId:(id)arg1;
- (void)didTapGallerySnapCellWithSnapId:(id)arg1;
- (void)endStoryViewSession:(id)arg1 itemPosition:(long long)arg2 itemCount:(long long)arg3;
- (void)startStoryViewSession:(id)arg1;
- (void)operaFinishViewingCameraRollItemWithItemId:(id)arg1 isImage:(_Bool)arg2 loadingLatencyInSec:(double)arg3;
- (void)operaFinishViewingSnap:(id)arg1 unlockableSnapInfo:(id)arg2 isPrivate:(_Bool)arg3 timeViewedMillis:(long long)arg4 pinchToZoomMillis:(double)arg5 maxRotationDegree:(double)arg6 minRotationDegree:(double)arg7 loadingLatencyInSec:(double)arg8 isMediaLoaded:(_Bool)arg9 magicMomentCache:(id)arg10;
- (void)operaBrowseSnap:(id)arg1 cacheHit:(_Bool)arg2 isUsingCM:(_Bool)arg3;
- (void)operaViewCanBeProgressiveDownload:(_Bool)arg1;
- (void)operaPlaybackStallCount:(unsigned long long)arg1 firstStallMediaTime:(double)arg2 firstStallDuration:(double)arg3 totalStallDuration:(double)arg4 currentlyStalled:(_Bool)arg5;
- (void)operaViewFinishLoadingForPHAsset:(id)arg1 loadingLatencyInSec:(double)arg2;
- (void)operaViewFinishLoadingForSnap:(id)arg1 loadingLatencyInSec:(double)arg2;
- (void)operaViewFinishLoadingForSnapId:(id)arg1 mediaDidLoad:(_Bool)arg2 isProgressivePlayback:(_Bool)arg3 mediaType:(unsigned long long)arg4;
- (void)operaViewStartLoadingForSnap:(id)arg1 requireNetworkDownload:(_Bool)arg2 isFirstDisplayedSnap:(_Bool)arg3;
- (void)operaViewFullyDismissed:(unsigned long long)arg1 exitedDuringLoading:(_Bool)arg2;
- (void)_resumeTimersForAllSessionCountersWithActionTime:(id)arg1;
- (void)_pauseTimersForAllSessionCountersWithActionTime:(id)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)logBlizzardThumbnailDisplayLatency:(double)arg1 includeDownload:(_Bool)arg2 snap:(id)arg3;
- (void)logLargeDeletionTabEntries:(unsigned long long)arg1 currentEntriesCount:(unsigned long long)arg2;
- (void)setCurrentTab:(unsigned long long)arg1;
- (void)exitSearch;
- (void)enterSearch;
- (void)exitSelectionMode;
- (void)enterSelectionMode;
- (void)initialSyncDidFinishWithToken:(id)arg1;
- (void)initialSyncDidPaginateWithToken:(id)arg1;
- (void)_galleryLoadingViewSessionDidEndPreGalleryViewLoad;
- (void)didStartParsingResponse;
- (void)endGalleryLoadingViewSession;
- (void)resumeGalleryLoadingViewSession;
- (void)pauseGalleryLoadingViewSession;
- (void)logSkippedMediaUpload:(id)arg1 reason:(id)arg2;
- (void)startGalleryLoadingViewSession;
- (void)initialSyncRequestDidFinishWithEntryCount:(unsigned long long)arg1;
- (void)initialSyncDidStartWithSyncToken:(id)arg1;
- (void)exitOnboardingView;
- (void)enterOnboardingView;
- (void)didExitGallery;
- (void)didEnterGallery;
- (void)logGalleryInitialState;
- (void)_logAndResetSnapIdsPresent;
- (void)_logAndNilGallerySessionCounter:(id)arg1;
- (void)_createNewGallerySessionCounter:(id)arg1;
@property(readonly, nonatomic) SCGalleryLoggerGallerySessionCounter *gallerySessionCounter; // @synthesize gallerySessionCounter=_gallerySessionCounter_dont_change_ivar_properties;
- (void)logBlizzardAbandonOperation:(id)arg1 entryId:(id)arg2 snapId:(id)arg3 mediaId:(id)arg4 operationType:(long long)arg5 abandonReason:(long long)arg6 detail:(id)arg7;
- (void)_logGrapheneDirectSnapCreateWithSnapCommonLoggingParameters:(id)arg1;
- (void)logDirectSnapCreateWithGallerySnap:(id)arg1 snapOverlay:(id)arg2 lagunaConnectivity:(long long)arg3;
- (id)initWithUserSession:(id)arg1 dataObjectContext:(id)arg2;
- (id)encryptId:(id)arg1;
- (_Bool)hasGeoFiltersOrGeolensWithSnapOverlay:(id)arg1;
- (id)spectaclesContentIdWithSnap:(id)arg1;
- (long long)SCAMediaFormatWithSnap:(id)arg1;
- (id)destinationsWithSendToFriend:(_Bool)arg1 sendToGroup:(_Bool)arg2 postToStory:(_Bool)arg3;
- (_Bool)hasFramingInStoriesWithSnap:(id)arg1;
- (_Bool)hasReverseFilterWithSnapOverlay:(id)arg1;
- (id)venueIDWithSnapOverlay:(id)arg1;
- (long long)trackingStickCountWithSnapOverlay:(id)arg1;
- (long long)animatedFilterCountWithSnapOverlay:(id)arg1;
- (long long)animatedStickerCountWithSnapOverlay:(id)arg1;
- (long long)motionFilterTypeWithSnapOverlay:(id)arg1;
- (id)_contextFilterSelectedSkyTypeWithSnapOverlay:(id)arg1;
- (long long)visualFilterTypeWithSnapOverlay:(id)arg1;
- (long long)_infoFilterTypeForWeatherFilter:(id)arg1;
- (long long)infoFilterTypeWithSnapOverlay:(id)arg1;
- (id)geoFilterIdWithSnapOverlay:(id)arg1;
- (_Bool)hasCaptionStylingWithSnapOverlay:(id)arg1;
- (_Bool)hasCaptionTrackingWithSnapOverlay:(id)arg1;
- (long long)captionWithSnapOverlay:(id)arg1;
- (_Bool)hasDrawingWithSnapOverlay:(id)arg1;
- (_Bool)hasCroppingWithSnapOverlay:(id)arg1;
- (double)snapTimeSecForPHAsset:(id)arg1;
- (long long)mediaTypeWithPHAsset:(id)arg1;
- (long long)_snapMediaTypeWithSnap:(id)arg1 snapOverlay:(id)arg2;
- (long long)mediaTypeWithSnap:(id)arg1 snapOverlay:(id)arg2;
- (id)galleryStoryShareWithSnaps:(id)arg1 contextMenuSource:(long long)arg2 entry:(id)arg3;
- (void)_fillParametersInBrowseSnapBase:(id)arg1 withSnap:(id)arg2 snapOverlay:(id)arg3;
- (id)geofilterBrowseSnapViewWithGallerySnap:(id)arg1 snapOverlay:(id)arg2;
- (id)browseSnapViewWithGallerySnap:(id)arg1 snapOverlay:(id)arg2;
- (id)createStoryStoryPost:(id)arg1;
- (id)galleryBatchSendWithTotalCount:(unsigned long long)arg1 smartShareCount:(unsigned long long)arg2 meoCount:(unsigned long long)arg3 contextMenuSource:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 retryCount:(unsigned long long)arg8 latencyMs:(double)arg9 failureReason:(id)arg10;
- (id)createDirectStorySend:(id)arg1 recipientCount:(long long)arg2;
- (id)_convertToSnapCommonLoggingFromPHAsset:(id)arg1 recipientCount:(long long)arg2 sendToFriend:(_Bool)arg3 mischiefIds:(id)arg4 postToStory:(_Bool)arg5 storyCount:(unsigned long long)arg6 isInsideStory:(_Bool)arg7 userContext:(id)arg8;
- (id)_convertToSnapCommonLoggingFromSnap:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 isInsideStory:(_Bool)arg8 smartShared:(_Bool)arg9 storyCount:(unsigned long long)arg10 userContext:(id)arg11;
- (id)memoriesSnapMetricInfoWithPHAsset:(id)arg1 recipientCount:(long long)arg2 sendToFriend:(_Bool)arg3 mischiefIds:(id)arg4 postToStory:(_Bool)arg5 isInsideStory:(_Bool)arg6 storyCount:(unsigned long long)arg7 userContext:(id)arg8;
- (id)memoriesSnapMetricInfoWithGallerySnap:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 isInsideStory:(_Bool)arg8 storyCount:(unsigned long long)arg9 smartShared:(_Bool)arg10 userContext:(id)arg11;
- (id)gallerySnapSendWithPHAsset:(id)arg1 recipientCount:(long long)arg2 sendToFriend:(_Bool)arg3 mischiefIds:(id)arg4 postToStory:(_Bool)arg5 isInsideStory:(_Bool)arg6 userContext:(id)arg7;
- (id)geofilterGallerySnapSendWithGallerySnap:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 mischiefIds:(id)arg5 postToStory:(_Bool)arg6 isInsideStory:(_Bool)arg7 smartShared:(_Bool)arg8 playerVersion:(long long)arg9 userContext:(id)arg10;
- (void)populateSnapSend:(id)arg1 withGallerySnap:(id)arg2 snapOverlay:(id)arg3 entry:(id)arg4 recipientCount:(long long)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 isInsideStory:(_Bool)arg8 smartShared:(_Bool)arg9 playerVersion:(long long)arg10 contextMenuSource:(long long)arg11;
- (id)gallerySnapSendWithGallerySnap:(id)arg1 snapOverlay:(id)arg2 entry:(id)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(id)arg6 postToStory:(_Bool)arg7 isInsideStory:(_Bool)arg8 smartShared:(_Bool)arg9 userContext:(id)arg10;
- (id)getLagunaUserAgentWithSnap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

