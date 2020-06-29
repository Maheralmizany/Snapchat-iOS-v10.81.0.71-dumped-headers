//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesMetadataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager, SCStoriesRankedStoryIdentifiersObserver, SCStoriesSummariesObserver;
@protocol SCStoriesGhostToStoriesMetricsEmitting, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesDataCoordinator : NSObject <SCDataCoordinatorListener, SCStoriesMetadataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_utilityPerformer;
    SCLazy *_customStoriesDataSyncer;
    SCLazy *_mixerRequester;
    SCLazy *_storiesSnapchatterFetcher;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToFriendStoriesMetricsEmitter;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
    NSString *_currentUsername;
    SCStoriesRankedStoryIdentifiersObserver *_rankedStoryIdentifiersObserver;
    SCStoriesSummariesObserver *_storiesSummariesObserver;
    SCLazy *_snapReadReceiptLogger;
    SCLazy *_snapReadReceiptCoordinator;
    SCLazy *_autoShakeToReporter;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_didFinishProcessStoriesResponseWithFetchTriggerIdentifier:(id)arg1 shouldFullyFetchMobstoriesMetadata:(_Bool)arg2;
- (void)_applySOJUStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 pendingOrFollowingFriendUsernames:(id)arg3 shouldFullyFetchMobstoriesMetadata:(_Bool)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applySOJUStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 shouldFullyFetchMobstoriesMetadata:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)updateReadReceiptWithRecord:(id)arg1 flushableStoryId:(id)arg2 creatorUsername:(id)arg3 publicationId:(id)arg4 isPublic:(_Bool)arg5 canSyncToServer:(_Bool)arg6 shouldFlush:(_Bool)arg7;
- (void)flushReadReceipts;
- (void)resetReadReceipts;
- (void)_updateAllSummaryInfosWithViewStates;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)updateAllSummaryInfosWithViewStates;
- (void)deleteExpiredMetadata;
- (void)deleteStoryWithGroupId:(id)arg1;
- (void)deleteStoryWithUsername:(id)arg1;
- (void)deleteStorySnapsWithSnapComponentId:(id)arg1;
- (void)deleteCustomStorySnapsWithPublicationId:(id)arg1 clientIds:(id)arg2;
- (void)deleteFriendStorySnapsWithUsername:(id)arg1 clientIds:(id)arg2;
- (void)_didFinishProcessBatchResponseWithFetchStartTime:(double)arg1 fetchTriggerIdentifier:(id)arg2 shouldFullyFetchMobstoriesMetadata:(_Bool)arg3;
- (void)_processStoriesBatchResponse:(id)arg1 friendUserIds:(id)arg2 publicationIds:(id)arg3 friendIdToUsernameMap:(id)arg4 publicationIdToMetadataMap:(id)arg5 unidirFriendsUsernames:(id)arg6 fetchStartTime:(double)arg7 fetchTriggerIdentifier:(id)arg8 shouldFullyFetchMobstoriesMetadata:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)_handleStoriesBatchResponse:(id)arg1 fetchSource:(id)arg2 fetchTriggerIdentifier:(id)arg3 shouldFullyFetchMobstoriesMetadata:(_Bool)arg4 fetchStartTime:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchFriendStoriesWithFetchSource:(id)arg1 fetchTriggerIdentifier:(id)arg2 shouldFullyFetchMobstoriesMetadata:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_existingCustomStoriesSequenceInfo;
- (id)_existingFriendStoriesSequenceInfo;
- (void)_logFetchFriendStoriesLatencyWithStartTime:(double)arg1 step:(id)arg2;
- (id)_fetchExistingUserIdToSequenceMappingWithUserIds:(id)arg1;
- (void)_processBatchStoryLookupResponse:(id)arg1 fetchedUserIds:(id)arg2 userIdToUsernameMap:(id)arg3;
- (void)_handleBatchStoryLookupResponse:(id)arg1 fetchedUserIds:(id)arg2;
- (void)fetchStoriesWithUserIds:(id)arg1;
- (void)fetchFriendStoriesDeltaCursor:(CDUnknownBlockType)arg1;
- (void)_storySnapsInfoForyStoryIds:(id)arg1 friendSequenceMap:(id)arg2 friendPlaybackInfoMap:(id)arg3 viewStateMap:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_storySnapsInfoForyStoryIds:(id)arg1 friendSequenceMap:(id)arg2 friendPlaybackInfoMap:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storySnapsInfoForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storiesSummaryFilteredByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRankedStoryIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSessionRequestManager:(id)arg1 docObjectContext:(id)arg2 mixerRequester:(id)arg3 customStoriesDataSyncer:(id)arg4 storiesSnapchatterFetcher:(id)arg5 snapReadReceiptLogger:(id)arg6 snapReadReceiptCoordinator:(id)arg7 grapheneMetricsEmitter:(id)arg8 ghostToFriendStoriesMetricsEmitter:(id)arg9 experimentManager:(id)arg10 currentUserId:(id)arg11 currentUsername:(id)arg12 autoShakeToReporter:(id)arg13;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
