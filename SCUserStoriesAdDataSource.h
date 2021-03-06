//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAdDataSource.h"

#import "SCOperaPlaylistAdInsertionProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCOperaPlaylistItem, SCStoriesAutoAdvanceAdsSessionTracker, SCUserSession, SCUserStoriesAdConfiguration, SCWeakTimer;

@interface SCUserStoriesAdDataSource : SCAdDataSource <SCOperaPlaylistAdInsertionProtocol>
{
    SCUserSession *_userSession;
    SCUserStoriesAdConfiguration *_adConfiguration;
    SCStoriesAutoAdvanceAdsSessionTracker *_adsSessionTracker;
    NSMutableSet *_disallowAdAfterGroupIds;
    NSMutableSet *_insertedAdAfterGroupIds;
    NSMutableDictionary *_previousGroupIdToInsertedAdGroupIdMap;
    NSMutableSet *_viewedNonAdGroupIds;
    NSMutableSet *_viewedNonAdItemIds;
    NSMutableSet *_viewedUserStoryAdGroupIds;
    SCOperaPlaylistItem *_previousViewedItem;
    SCWeakTimer *_insertionRetryTimer;
    NSMutableSet *_viewedInterstitialGroupIds;
    _Bool _didStartViewingSession;
}

- (void).cxx_destruct;
- (long long)_cachedAdStatus;
- (void)_insertAdIfNecessaryAfterItem:(id)arg1 insertSource:(long long)arg2;
- (void)_trackItemGroup:(id)arg1 isNoFill:(_Bool)arg2;
- (void)_handleMediaFetchComplete;
- (void)_makeAdRequestIfNecessary;
- (id)_groupsLeftCount;
- (id)engagement;
- (id)unviewedAds;
- (_Bool)isRetryInsertionEnabled;
- (id)adServeLoggingContext;
- (id)adSnapViewLogParametersForSkippedAdGroup:(id)arg1 aroundGroup:(id)arg2 pageLeft:(_Bool)arg3;
- (id)adViewContextForGroup:(id)arg1;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (_Bool)shouldInsertPlaylistItemGroup;
- (_Bool)shouldInsertPlaylistItem;
- (void)resetInsertionData;
- (id)mediaLoadContexts;
- (_Bool)shouldCachePendingAdAfterTearDown;
- (unsigned long long)adProductType;
- (id)targetingParameters;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)_retryInsertion:(id)arg1;
- (void)_scheduleRetryInsertionAfterItem:(id)arg1 delaySec:(double)arg2;
- (long long)_extraViewTimeRequiredInSec;
- (void)startViewingPlaylistItem:(id)arg1 context:(id)arg2;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 currentItem:(id)arg3;
- (void)_handleAdRequestCompleteFromPrefetch:(_Bool)arg1;
- (void)prefetchAds;
- (void)startViewingSessionInViewLocation:(long long)arg1 operaSessionId:(id)arg2 adTrackerHelper:(id)arg3 adBlizzardLogger:(id)arg4;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3 adBlizzardLogger:(id)arg4 operaSessionId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

