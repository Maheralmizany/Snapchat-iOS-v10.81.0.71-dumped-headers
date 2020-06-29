//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCMyStoriesDataCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy, SCQueuePerformer, SCStoriesRequestDebouncer, SCStoriesSnapDeleteCoordinator, SCStoriesSnapPostCoordinator, SCStoriesSnapSaveCoordinator;
@protocol SCStoriesGrapheneMetricsEmitting, SCStoriesSnapViewerDataCoordinating;

@interface SCMyStoriesDataCoordinator : NSObject <SCDataCoordinatorListener, SCMyStoriesDataCoordinating>
{
    NSString *_currentUserId;
    NSString *_currentUsername;
    SCStoriesSnapSaveCoordinator *_snapSaveCoordinator;
    SCStoriesSnapDeleteCoordinator *_snapDeleteCoordinator;
    SCStoriesSnapPostCoordinator *_snapPostCoordinator;
    id <SCStoriesSnapViewerDataCoordinating> _snapViewerDataCoordinator;
    SCLazy *_mixerRequester;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCLazy *_postingLogger;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_announcePerformer;
    long long _numOfContinuousFailedSyncs;
    SCStoriesRequestDebouncer *_debouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)storiesArrayDidUpdate;
- (void)handleDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)markMyStoriesViewedWithStoryId:(id)arg1;
- (long long)postingStateWithClientId:(id)arg1;
- (void)updatePostingProgress:(double)arg1 forStory:(id)arg2;
- (void)updatePostingState:(long long)arg1 forStory:(id)arg2;
- (void)didDeleteSnapForServerId:(id)arg1;
- (long long)fetchSnapDeleteStateWithSnapUniqueConsistentId:(id)arg1;
- (void)deleteSnapWithSnapUniqueConsistentId:(id)arg1 storyType:(long long)arg2 storyId:(id)arg3 clientId:(id)arg4 serverId:(id)arg5 archiveOnly:(_Bool)arg6 additionalHttpHeaders:(id)arg7 legacyDeleteSuccessCompletion:(CDUnknownBlockType)arg8;
- (void)deleteStorySnapWithClientId:(id)arg1 storyId:(id)arg2;
- (long long)fetchSnapSaveStateWithSnapUniqueConsistentId:(id)arg1;
- (void)finishSavingSnapWithSnapUniqueConsistentId:(id)arg1 success:(_Bool)arg2;
- (void)startSavingSnapWithSnapUniqueConsistentId:(id)arg1;
- (void)_logLatencyWithFetchStartTime:(double)arg1 step:(id)arg2;
- (void)_invokeAllCompletionBlocksWithSuccess:(_Bool)arg1;
- (void)_handleAppliedBatchStoriesResponse:(id)arg1 fetchStartTime:(double)arg2 success:(_Bool)arg3;
- (void)_handleFetchMyStoriesWithResponse:(id)arg1 fetchStartTime:(double)arg2;
- (void)_makeMyStoriesSyncRequestWithFetchSource:(id)arg1 fetchStartTime:(double)arg2;
- (void)_fetchMyStoriesWithCompletion:(CDUnknownBlockType)arg1 fetchSource:(id)arg2 fetchStartTime:(double)arg3;
- (void)fetchMyStoriesWithCompletion:(CDUnknownBlockType)arg1 fetchSource:(id)arg2;
- (void)fetchMyStoriesIfNeededWithFetchSource:(id)arg1;
- (void)_fetchViewerInfoWithStories:(id)arg1;
- (void)fetchViewerInfo;
- (void)queryAllStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)insertStorySnap:(id)arg1 storyId:(id)arg2;
- (id)initWithDocObjectContext:(id)arg1 snapDeleteCoordinator:(id)arg2 snapViewerDataCoordinator:(id)arg3 mixerRequester:(id)arg4 grapheneMetricsEmitter:(id)arg5 postingLogger:(id)arg6 experimentManager:(id)arg7 currentUserId:(id)arg8 currentUsername:(id)arg9;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

