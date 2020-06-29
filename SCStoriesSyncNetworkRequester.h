//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesFetching-Protocol.h"

@class NSNumber, NSString, SCExperimentManager, SCLazy, SCMyCustomStoriesSyncer, SCQueuePerformer, SCStoriesIndividualRequestDebouncer, SCStoriesUnarchiver;
@protocol SCStoriesGhostToStoriesMetricsEmitting;

@interface SCStoriesSyncNetworkRequester : NSObject <SCStoriesFetching>
{
    SCLazy *_myStoriesDataCoordinator;
    SCLazy *_storiesDataCoordinator;
    SCLazy *_ufsSyncer;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCMyCustomStoriesSyncer *_myCustomStoriesSyncer;
    SCExperimentManager *_experimentManager;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToMyStoriesMetricsEmitter;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToFriendStoriesMetricsEmitter;
    NSString *_currentUserId;
    SCQueuePerformer *_performer;
    SCLazy *_preferences;
    NSNumber *_fetchFlag;
    SCStoriesIndividualRequestDebouncer *_debouncer;
}

- (void).cxx_destruct;
- (void)_debounceAndFetchStoriesWithFetchContext:(id)arg1 fetchSource:(id)arg2;
- (void)_saveFetchFlagFromMixer:(_Bool)arg1;
- (void)_handleFetchedFriendStoriesWithFetchSource:(long long)arg1 success:(_Bool)arg2 error:(id)arg3 updatedCustomStoryIds:(id)arg4 updatedFetchFlagFromMixer:(_Bool)arg5;
- (void)_fetchViewerInfo;
- (void)_fetchMyStoriesWithCompletion:(CDUnknownBlockType)arg1 fetchSource:(id)arg2;
- (void)fetchStoriesForTriggerType:(long long)arg1;
- (void)syncStoriesWithFetchContext:(id)arg1;
- (id)initWithUFSSyncer:(id)arg1 myStoriesDataCoordinator:(id)arg2 storiesDataCoordinator:(id)arg3 storiesUnarchiver:(id)arg4 myCustomStoriesSyncer:(id)arg5 experimentManager:(id)arg6 grapheneMetricsEmitter:(id)arg7 ghostToMyStoriesMetricsEmitter:(id)arg8 ghostToFriendStoriesMetricsEmitter:(id)arg9 currentUserId:(id)arg10 preferences:(id)arg11;

@end
