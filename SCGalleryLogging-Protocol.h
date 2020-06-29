//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCachingMediaLogger-Protocol.h"
#import "SCChatGalleryLogger-Protocol.h"
#import "SCCloudSyncLogger-Protocol.h"
#import "SCGalleryInChatLogger-Protocol.h"
#import "SCMediaDownloadLogger-Protocol.h"

@class NSArray, NSError, NSHTTPURLResponse, NSString, PHAsset, SCGalleryMediaGroup, SCGalleryUserContext, SCPlatformAnalyticsMemoriesSnapMetricInfo, SOJUGallerySnapOverlay;
@protocol SCActivityItemProviding, SCGalleryEntry, SCGalleryOperaMagicMomentCaching, SCGallerySnap;

@protocol SCGalleryLogging <SCCloudSyncLogger, SCMediaDownloadLogger, SCCachingMediaLogger, SCChatGalleryLogger, SCGalleryInChatLogger>
@property(readonly, nonatomic) double memoriesCameraRollTabLoadLatency;
@property(readonly, nonatomic) double memoriesStoriesTabLoadLatency;
@property(readonly, nonatomic) double memoriesAllTabLoadLatency;
@property(nonatomic) long long galleryOpenSource;
- (NSArray *)lensConfigurationsForSnapOverlay:(SOJUGallerySnapOverlay *)arg1;
- (NSString *)lensInfoForSnapOverlay:(SOJUGallerySnapOverlay *)arg1;
- (void)logCameraRollTabLoadLatency:(double)arg1;
- (void)logStoriesTabLoadLatency:(double)arg1;
- (void)logAllTabLoadLatency:(double)arg1;
- (void)logIncompatibleContentWithSnap:(id <SCGallerySnap>)arg1;
- (void)logIncompatibleContentWithEntry:(id <SCGalleryEntry>)arg1;
- (void)logNewUserTurnOffAutoSave;
- (void)logNewUserSeenGalleryAutoSaveDialogWithMemoriesEntryCount:(unsigned long long)arg1 visitedSettingPage:(_Bool)arg2;
- (void)logNewUserSeenGalleryAutoSaveTooltip;
- (void)logGalleryLowDiskAlertWithContext:(NSString *)arg1;
- (void)logDeletionUserActionWithEntryIdsAndTypes:(NSArray *)arg1 snapIds:(NSArray *)arg2 cameraRollItemCount:(unsigned long long)arg3 cancelled:(_Bool)arg4 context:(NSString *)arg5;
- (void)importPHAsset:(PHAsset *)arg1;
- (void)didPresentOperaWithSnapId:(NSString *)arg1;
- (void)didTapGallerySnapCellWithSnapId:(NSString *)arg1;
- (void)stopGalleryPageView;
- (void)endStoryViewSession:(id <SCGalleryEntry>)arg1 itemPosition:(long long)arg2 itemCount:(long long)arg3;
- (void)startStoryViewSession:(id <SCGalleryEntry>)arg1;
- (void)logGalleryFeaturedStoryCellView:(id <SCGalleryEntry>)arg1 itemPosition:(long long)arg2 itemCount:(long long)arg3 userInitiated:(_Bool)arg4;
- (void)logGalleryCollectionAction:(long long)arg1 entry:(id <SCGalleryEntry>)arg2;
- (void)logNetworkFailureForEndpoint:(NSString *)arg1 response:(NSHTTPURLResponse *)arg2 error:(NSError *)arg3;
- (void)exportItemWithItemProvider:(id <SCActivityItemProviding>)arg1 shareChannel:(NSString *)arg2;
- (void)finishPrivateGalleryForgetPasscodeFlow:(unsigned long long)arg1;
- (void)finishPrivateGallerySetup;
- (void)setItemAsPublic:(id)arg1 subItems:(NSArray *)arg2;
- (void)setItemAsPrivate:(id)arg1 subItems:(NSArray *)arg2;
- (void)cancelledCreateStory;
- (void)createStoryWithSnaps:(NSArray *)arg1;
- (void)deleteItems:(NSArray *)arg1;
- (void)didLongPressSaveToGallery;
- (void)didSaveToGalleryForSnap:(id <SCGallerySnap>)arg1 success:(_Bool)arg2 latencyInSec:(double)arg3;
- (void)logTagUploadServerResponseStatusCode:(long long)arg1 debugInfo:(NSString *)arg2;
- (void)logSearchServiceStatus:(unsigned long long)arg1 numberOfProcessedSnaps:(long long)arg2;
- (void)didIndexedOneSnap:(unsigned long long)arg1;
- (void)logNumberOfSnapsIndexed;
- (void)logSearchLatencyWithSearchType:(long long)arg1 source:(long long)arg2 elapsedTime:(double)arg3 resultCount:(unsigned long long)arg4;
- (void)logQueryUserTypedWithSelectedItem:(id <SCGalleryEntry>)arg1 resultMatchTypes:(NSArray *)arg2 selectedSearchResultTitle:(NSString *)arg3;
- (void)queryUserTyped:(NSArray *)arg1 searchText:(NSString *)arg2 searchTextLocale:(id)arg3;
- (void)endQuery;
- (void)renewQuery;
- (void)attemptToSendToChatFromPreview;
- (void)attemptToPostToStoriesFromPreview;
- (void)setTopSecretPrivateGalleryEnabled:(_Bool)arg1;
- (void)setStoryAutoSaving:(_Bool)arg1;
- (void)logTotalDownloadingBeforeSendingWithTotalImages:(unsigned long long)arg1 totalVideos:(unsigned long long)arg2 totalDownloadedImages:(unsigned long long)arg3 totalDownloadedVideos:(unsigned long long)arg4 totalSmartShareableImages:(unsigned long long)arg5 totalSmartShareableVideos:(unsigned long long)arg6 totalUnSyncedImages:(unsigned long long)arg7 totalUnSyncedVideos:(unsigned long long)arg8;
- (void)logGallerySnapSendForPostToStory:(id)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 clientId:(NSString *)arg3 smartShared:(_Bool)arg4 userContext:(SCGalleryUserContext *)arg5;
- (void)startSendToChatWithSnapSendCount:(long long)arg1 storySendCount:(long long)arg2;
- (void)attemptToPostStoryToStoriesWithMediaGroup:(SCGalleryMediaGroup *)arg1;
- (void)logWhenStartSharingWithSharingType:(unsigned long long)arg1 galleryMedia:(id)arg2 galleryEntry:(id <SCGalleryEntry>)arg3 sendingFlow:(unsigned long long)arg4;
- (SCPlatformAnalyticsMemoriesSnapMetricInfo *)successfulSendToChatMemoriesSnapMetricInfoOnSnapLevelWithMedia:(id)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 entry:(id <SCGalleryEntry>)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(NSArray *)arg6 postToStory:(_Bool)arg7 smartShared:(_Bool)arg8 storyCount:(unsigned long long)arg9 isInsideStory:(_Bool)arg10 userContext:(SCGalleryUserContext *)arg11;
- (NSArray *)successfulSendToChatBlizzardEventsOnGroupLevelWithMediaGroup:(SCGalleryMediaGroup *)arg1 smartSharedSnapCount:(unsigned long long)arg2 userContext:(SCGalleryUserContext *)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(NSArray *)arg6 postToStory:(_Bool)arg7;
- (NSArray *)successfulSendToChatBlizzardEventsOnSnapLevelWithMedia:(id)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 entry:(id <SCGalleryEntry>)arg3 recipientCount:(long long)arg4 sendToFriend:(_Bool)arg5 mischiefIds:(NSArray *)arg6 postToStory:(_Bool)arg7 smartShared:(_Bool)arg8 isInsideStory:(_Bool)arg9 userContext:(SCGalleryUserContext *)arg10;
- (void)logBlizzardThumbnailDisplayLatency:(double)arg1 includeDownload:(_Bool)arg2 snap:(id <SCGallerySnap>)arg3;
- (void)logLargeDeletionTabEntries:(unsigned long long)arg1 currentEntriesCount:(unsigned long long)arg2;
- (void)setCurrentTab:(unsigned long long)arg1;
- (void)exitSearch;
- (void)enterSearch;
- (void)exitSelectionMode;
- (void)enterSelectionMode;
- (void)shouldStartDismissLoadingView;
- (void)endGalleryLoadingViewSession;
- (void)resumeGalleryLoadingViewSession;
- (void)pauseGalleryLoadingViewSession;
- (void)startGalleryLoadingViewSession;
- (void)exitOnboardingView;
- (void)enterOnboardingView;
- (void)didExitGallery;
- (void)didEnterGallery;
- (void)logGalleryInitialState;
- (void)logBoomboxBrowseSnapView:(id <SCGallerySnap>)arg1 entryId:(NSString *)arg2 viewTimeSec:(double)arg3 fileType:(long long)arg4 deviceId:(NSString *)arg5 firmwareVersion:(NSString *)arg6 hardwareVersion:(NSString *)arg7 deviceColor:(long long)arg8 sessionId:(NSString *)arg9 viewSource:(long long)arg10;
- (void)operaFinishViewingCameraRollItemWithItemId:(NSString *)arg1 isImage:(_Bool)arg2 loadingLatencyInSec:(double)arg3;
- (void)operaFinishViewingSnap:(id <SCGallerySnap>)arg1 unlockableSnapInfo:(NSString *)arg2 isPrivate:(_Bool)arg3 timeViewedMillis:(long long)arg4 pinchToZoomMillis:(double)arg5 maxRotationDegree:(double)arg6 minRotationDegree:(double)arg7 loadingLatencyInSec:(double)arg8 isMediaLoaded:(_Bool)arg9 magicMomentCache:(id <SCGalleryOperaMagicMomentCaching>)arg10;
- (void)operaPlaybackStallCount:(unsigned long long)arg1 firstStallMediaTime:(double)arg2 firstStallDuration:(double)arg3 totalStallDuration:(double)arg4 currentlyStalled:(_Bool)arg5;
- (void)operaBrowseSnap:(id <SCGallerySnap>)arg1 cacheHit:(_Bool)arg2 isUsingCM:(_Bool)arg3;
- (void)operaViewCanBeProgressiveDownload:(_Bool)arg1;
- (void)operaViewFullyDismissed:(unsigned long long)arg1 exitedDuringLoading:(_Bool)arg2;
- (void)operaViewFinishLoadingForPHAsset:(PHAsset *)arg1 loadingLatencyInSec:(double)arg2;
- (void)operaViewFinishLoadingForSnap:(id <SCGallerySnap>)arg1 loadingLatencyInSec:(double)arg2;
- (void)operaViewFinishLoadingForSnapId:(NSString *)arg1 mediaDidLoad:(_Bool)arg2 isProgressivePlayback:(_Bool)arg3 mediaType:(unsigned long long)arg4;
- (void)operaViewStartLoadingForSnap:(id <SCGallerySnap>)arg1 requireNetworkDownload:(_Bool)arg2 isFirstDisplayedSnap:(_Bool)arg3;
- (void)logDirectSnapCreateWithGallerySnap:(id <SCGallerySnap>)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 lagunaConnectivity:(long long)arg3;
@end

