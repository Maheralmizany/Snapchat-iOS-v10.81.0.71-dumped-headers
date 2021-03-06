//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLongformContentViewLogger-Protocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, SCDiscoverChunk;
@protocol SCDiscoverSessionLogging;

@interface SCDiscoverLogger : NSObject <SCLongformContentViewLogger>
{
    NSString *_snapcodePublisherId;
    NSString *_snapcodeDSnapId;
    NSString *_snapcodeEditionId;
    NSString *_snapcodeActionId;
    NSString *_snapcodeDenyReason;
    _Bool _snapcodeWasConsumed;
    _Bool _shouldSamplePlaybackMetrics;
    id <SCDiscoverSessionLogging> _currentEditionSession;
    SCDiscoverChunk *_lastViewedLoadingChunk;
    NSMutableDictionary *_eventStartTimeMap;
    NSMutableDictionary *_eventParameterMap;
    NSMutableSet *_eventT0Set;
    NSDate *_sessionOpenTime;
}

+ (double)roundCGFloat:(double)arg1;
+ (id)shared;
@property(nonatomic) _Bool shouldSamplePlaybackMetrics; // @synthesize shouldSamplePlaybackMetrics=_shouldSamplePlaybackMetrics;
@property(retain, nonatomic) NSDate *sessionOpenTime; // @synthesize sessionOpenTime=_sessionOpenTime;
@property(retain, nonatomic) NSMutableSet *eventT0Set; // @synthesize eventT0Set=_eventT0Set;
@property(retain, nonatomic) NSMutableDictionary *eventParameterMap; // @synthesize eventParameterMap=_eventParameterMap;
@property(retain, nonatomic) NSMutableDictionary *eventStartTimeMap; // @synthesize eventStartTimeMap=_eventStartTimeMap;
@property(retain, nonatomic) SCDiscoverChunk *lastViewedLoadingChunk; // @synthesize lastViewedLoadingChunk=_lastViewedLoadingChunk;
@property(nonatomic) __weak id <SCDiscoverSessionLogging> currentEditionSession; // @synthesize currentEditionSession=_currentEditionSession;
- (void).cxx_destruct;
- (long long)_editionReadState;
- (void)_setCommonDSnapPropertiesForEvent:(id)arg1 dSnapId:(id)arg2 snapIndexPos:(unsigned long long)arg3;
- (void)_setCommonEditionSessionPropertiesForEvent:(id)arg1;
- (void)logSubtitleStateChanged:(_Bool)arg1 userTriggered:(_Bool)arg2;
- (void)logProductView;
- (void)logSubscriptionLongformView;
- (void)logStoreView;
- (void)logLongformCameraViewWithLensSessionId:(id)arg1 lensLoadedOnEntry:(_Bool)arg2 lensLoadedOnExit:(_Bool)arg3 loadingTimeSec:(double)arg4 viewDurationTimeSec:(double)arg5;
- (void)logRemoteWebpageViewWithPageLoadCount:(long long)arg1 pageLoadErrorCount:(long long)arg2 loadedOnEntry:(_Bool)arg3 loadedOnExit:(_Bool)arg4 visiblePageLoadTimeSec:(double)arg5 userPermissionPromptCount:(unsigned long long)arg6 userPermissionPromptAllowedCount:(unsigned long long)arg7 webpageAutofillDetectedFields:(id)arg8 webpageDetectedFields:(id)arg9 webpageOnEditAutofilledFields:(id)arg10 totalInteractionItemCount:(id)arg11 lastInteractiveItemIndex:(id)arg12 interactionZoneStyle:(id)arg13 isTopSnap:(_Bool)arg14 logAsDiscoverEvents:(_Bool)arg15 logAsStoryEvents:(_Bool)arg16;
- (void)logScreenshot;
- (void)logInlineInlineVideoViewWithID:(id)arg1 mediaDisplayedTime:(double)arg2 totalVideoDuration:(double)arg3 fullscreenTime:(double)arg4 inlineTime:(double)arg5 startedWithCaptionOn:(_Bool)arg6 videoAspectRatio:(double)arg7 videoInLandscapeModeTimeViewed:(double)arg8 videoWithCaptionOnTimeViewed:(double)arg9;
- (void)logLongformVideoViewWithStartedWithCaptionOn:(_Bool)arg1 videoWithCaptionOnTimeViewedSeconds:(double)arg2 videoDurationSeconds:(double)arg3 videoViewDurationSeconds:(double)arg4 aspectRatio:(double)arg5 videoInLandscapeModeTimeViewedSeconds:(double)arg6 videoRotationEnabled:(_Bool)arg7 videoRollMinDegree:(double)arg8 videoRollMaxDegree:(double)arg9;
- (void)logPlaybackStallCount:(unsigned long long)arg1 firstStallMediaTime:(double)arg2 firstStallDuration:(double)arg3 totalStallDuration:(double)arg4 currentlyStalled:(_Bool)arg5 firstItemType:(long long)arg6;
- (void)logDiscoverTopSnapSnapViewWithFullView:(_Bool)arg1 mediaDisplayTimeSec:(double)arg2 durationSec:(double)arg3 mediaType:(long long)arg4 logAsDiscoverEvents:(_Bool)arg5 logAsStoryEvents:(_Bool)arg6;
- (void)logEditionViewWithRequestManager:(id)arg1 logAsDiscoverEvents:(_Bool)arg2 logAsStoryEvents:(_Bool)arg3;
- (void)logFinishSavingWithSavingParameters:(id)arg1;
- (void)logDeniedSharing;
- (void)logCompletedSharingContentWithSharingParameters:(id)arg1;
- (void)logBeginSharing;
- (void)logHideChannelWithPublisherName:(id)arg1 position:(long long)arg2 viewLocation:(long long)arg3 tileCoverId:(id)arg4 editionId:(id)arg5 collectionId:(id)arg6 collectionPos:(long long)arg7 collectionType:(long long)arg8 trackingId:(id)arg9;
- (void)logHideChannelWithPublisherName:(id)arg1 position:(long long)arg2 viewLocation:(long long)arg3 tileCoverId:(id)arg4 editionId:(id)arg5 collectionId:(id)arg6 collectionPos:(long long)arg7 collectionType:(long long)arg8 sourceType:(long long)arg9 trackingId:(id)arg10;
- (void)logUnsubscribeFromChannelWithPublisherId:(id)arg1 trackingId:(id)arg2 collectionId:(id)arg3 collectionPos:(long long)arg4 collectionType:(long long)arg5 source:(unsigned long long)arg6;
- (void)logSubscribeToChannelWithPublisherId:(id)arg1 source:(unsigned long long)arg2 editionId:(id)arg3 trackingId:(id)arg4 collectionId:(id)arg5 collectionPos:(long long)arg6 collectionType:(long long)arg7 dSnapId:(id)arg8;
- (void)setCommonPropertiesForDeepLinkEvent:(id)arg1 publisherId:(id)arg2 editionId:(id)arg3 dSnapId:(id)arg4 scanActionId:(id)arg5 denyReason:(id)arg6;
- (void)didDismissSnapcode:(unsigned long long)arg1;
- (void)didConsumeSnapcode;
- (void)didProcessSnapcodeWithPublisherId:(id)arg1 editionId:(id)arg2 dSnapId:(id)arg3 actionId:(id)arg4 denyReason:(id)arg5;
- (void)wasDeniedDeepLinkForPublisherId:(id)arg1 editionId:(id)arg2 dSnapId:(id)arg3 reason:(id)arg4;
- (id)init;
- (void)didViewDsnapWithoutWaitingForLoading:(id)arg1;
- (void)logBlizzardDsnapWaitEvent:(id)arg1 success:(_Bool)arg2 error:(id)arg3 abandoned:(_Bool)arg4;
- (void)didFinishWaitingForDsnapToLoad:(id)arg1 success:(_Bool)arg2 error:(id)arg3 abandoned:(_Bool)arg4;
- (void)logPlaybackItemActionForChunk:(id)arg1;
- (_Bool)_shouldLogPlaybackMetrics;
- (long long)_playSourceForCurrentEdition;
- (void)didPossiblyAbandonLoadingDsnap;
- (void)didStartWaitingForDsnapToLoad:(id)arg1;
- (void)didFinishLoadingChunk:(id)arg1 success:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

