//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSArray, NSString, SCDataCoordinatorListenerAnnouncer, SCExperimentManager, SCLazy, SCQueuePerformer;

@interface SCDiscoverFeedFriendStoriesDataCoordinator : NSObject <SCCustomStoriesUpdateListener, SCDataCoordinatorListener, SCDataCoordinating>
{
    SCLazy *_personDataCoordinatorLazy;
    SCLazy *_storiesDataCoordinatorLazy;
    SCLazy *_userInfoProvider;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_dataUpdatePerformer;
    NSArray *_discoverFeedFriendStories;
    SCExperimentManager *_experimentManager;
    SCLazy *_customStoriesDataFetcherLazy;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_updateWithDiscoverFeedFriendStories:(id)arg1 dataRequest:(id)arg2 rankedStoriesCompletion:(CDUnknownBlockType)arg3;
- (id)_buildStoryWithIdentifier:(id)arg1 storySummary:(id)arg2 customStoryMetadata:(id)arg3 mostRecentPosterDisplayName:(id)arg4;
- (id)_buildStoryWithIdentifier:(id)arg1 entity:(id)arg2 storySummary:(id)arg3;
- (void)_fetchPostersWithRankedStoryIds:(id)arg1 storiesDataByFeedId:(id)arg2 entityDataByFeedId:(id)arg3 customStoriesData:(id)arg4 dataRequest:(id)arg5 rankedStoriesCompletion:(CDUnknownBlockType)arg6;
- (void)_fetchPostersWithRankedStoryIds:(id)arg1 friendStoryUsernames:(id)arg2 groupCustomStoryGroupIds:(id)arg3 customStoryIds:(id)arg4 storiesDataByFeedId:(id)arg5 dataRequest:(id)arg6 rankedStoriesCompletion:(CDUnknownBlockType)arg7;
- (void)_fetchEntitiesWithRankedStoryIdentifiers:(id)arg1 dataRequest:(id)arg2 rankedStoriesCompletion:(CDUnknownBlockType)arg3;
- (void)_updateEmptyStateWithDataRequest:(id)arg1 rankedStoriesCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchStoriesWithDataRequest:(id)arg1 rankedStoriesCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchRankedFriendStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)didUpdatePostableStories;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)_handleFetchedSummaryInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUncachedFriendStoryWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRankedFriendStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (id)initWithExperimentManager:(id)arg1 personDataCoordinatorLazy:(id)arg2 storiesDataCoordinatorLazy:(id)arg3 userInfoProviderLazy:(id)arg4 customStoriesDataFetcherLazy:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

