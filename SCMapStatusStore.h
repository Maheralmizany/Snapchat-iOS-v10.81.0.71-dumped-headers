//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapStatusFetcher-Protocol.h"
#import "SCMapStatusMutator-Protocol.h"
#import "SCMapStatusViewedStateMutator-Protocol.h"
#import "SCMapStatusViewedStateProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOrderedSet, NSString, SCDisposableObserver, SCMapExploreItem, SCMapStatusFetcherListenerAnnouncer, SCMapStatusViewedStateListenerAnnouncer, SCMapUserPreferences, SCQueuePerformer;
@protocol SCLocationSharingPreferencesProvider, SCMapPeopleFriendsProvider, SCMapStatusRPCService, SCMapStatusStoriesFetcher, SCXBitmojiAvatarGeneratorProtocol;

@interface SCMapStatusStore : NSObject <SCMapPeopleFriendsListener, SCTraceEnabled, SCMapStatusFetcher, SCMapStatusMutator, SCMapStatusViewedStateProvider, SCMapStatusViewedStateMutator>
{
    NSString *_currentUserId;
    id <SCXBitmojiAvatarGeneratorProtocol> _mapBitmojiAvatarGenerator;
    id <SCMapStatusRPCService> _mapStatusRPCService;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapStatusStoriesFetcher> _mapStatusStoriesFetcher;
    SCMapUserPreferences *_mapUserPreferences;
    id <SCLocationSharingPreferencesProvider> _sharingPreferencesProvider;
    SCQueuePerformer *_performer;
    SCMapStatusFetcherListenerAnnouncer *_statusFetcherListenerAnnouncer;
    SCMapStatusViewedStateListenerAnnouncer *_viewedStateAnnouncer;
    SCDisposableObserver *_preferencesObserver;
    SCMapExploreItem *_mostRecentlyViewedItem;
    NSMutableSet *_pendingViewEvents;
    _Bool _hasScheduledPeriodicUpdateForStatuses;
    _Bool _hasScheduledPeriodicUpdateForMyStatuses;
    _Bool _isAppForegrounded;
    NSHashTable *_listenersRequiringPeriodicUpdates;
    id _clearViewedStateTweak;
    id _resetStatusButtonTweak;
    _Bool _loadingExploreItems;
    _Bool _loadingMyStatuses;
    NSOrderedSet *_allExploreItems;
    NSOrderedSet *_allMyStatuses;
    NSDictionary *_exploreItemsByUserId;
    NSDictionary *_exploreItemsByItemId;
    NSDate *_lastSuccessfulExploreItemsLoadDate;
    NSDate *_lastSuccessfulMyStatusesLoadDate;
}

+ (_Bool)_statusGroup:(id)arg1 hasStoryMoreRecentThanTimestamp:(double)arg2;
+ (_Bool)_isLoadDate:(id)arg1 olderThan:(double)arg2;
@property(retain) NSDate *lastSuccessfulMyStatusesLoadDate; // @synthesize lastSuccessfulMyStatusesLoadDate=_lastSuccessfulMyStatusesLoadDate;
@property(retain) NSDate *lastSuccessfulExploreItemsLoadDate; // @synthesize lastSuccessfulExploreItemsLoadDate=_lastSuccessfulExploreItemsLoadDate;
@property(getter=isLoadingMyStatuses) _Bool loadingMyStatuses; // @synthesize loadingMyStatuses=_loadingMyStatuses;
@property(getter=isLoadingExploreItems) _Bool loadingExploreItems; // @synthesize loadingExploreItems=_loadingExploreItems;
@property(retain) NSDictionary *exploreItemsByItemId; // @synthesize exploreItemsByItemId=_exploreItemsByItemId;
@property(retain) NSDictionary *exploreItemsByUserId; // @synthesize exploreItemsByUserId=_exploreItemsByUserId;
@property(retain) NSOrderedSet *allMyStatuses; // @synthesize allMyStatuses=_allMyStatuses;
@property(retain) NSOrderedSet *allExploreItems; // @synthesize allExploreItems=_allExploreItems;
- (void).cxx_destruct;
- (void)_resetStatusButtonTooltipState;
- (void)_clearViewedState;
- (void)_updateMyStatusesWithPeopleProvider:(id)arg1;
- (void)_updateExploreItemsWithPeopleProvider:(id)arg1;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)_onLocationSharingPreferencesChanged:(id)arg1;
- (id)_exploreItems:(id)arg1 filteredByViewed:(_Bool)arg2;
- (id)_sortedExploreItems:(id)arg1;
- (_Bool)_hasListenersRequiringPeriodicUpdates;
- (void)_schedulePeriodicUpdateForMyStatusesIfNecessaryWithInterval:(double)arg1;
- (void)_schedulePeriodicUpdateForExploreItemsIfNecessaryWithInterval:(double)arg1;
- (void)_prefetchStickersForStatusGroup:(id)arg1 dispatchGroup:(id)arg2;
- (void)_didDeleteMyStatus:(id)arg1 newMyStatuses:(id)arg2;
- (void)_deleteMyStatus:(id)arg1;
- (void)_didFetchMyStatuses:(id)arg1 error:(id)arg2;
- (void)_didFetchExploreItems:(id)arg1 error:(id)arg2;
- (void)_loadMyStatuses;
- (void)_loadExploreItems;
- (void)flushStatusViewEvents;
- (void)markViewedStatusId:(id)arg1 userId:(id)arg2;
- (id)announcer;
- (_Bool)_isViewedStatusId:(id)arg1 timestamp:(double)arg2;
- (_Bool)isViewedStatusId:(id)arg1;
- (void)deleteMyStatus:(id)arg1;
- (void)removeRequestedUpdatesForStatusFetcherListener:(id)arg1;
- (void)requestPeriodicUpdatesForStatusFetcherListener:(id)arg1;
- (void)removeStatusFetcherListener:(id)arg1;
- (void)addStatusFetcherListener:(id)arg1;
- (id)currentUserCustomStickerID;
- (id)statusGroupForUserId:(id)arg1;
- (id)myStatuses;
- (id)exploreItems;
- (_Bool)hasLoadedMyStatusesAtLeastOnce;
- (_Bool)hasLoadedExploreItemsAtLeastOnce;
- (void)reloadMyStatusesIfOlderThan:(double)arg1;
- (void)reloadExploreItemsIfOlderThan:(double)arg1;
- (void)reloadIfOlderThan:(double)arg1;
- (void)reloadMyStatuses;
- (void)reloadExploreItems;
- (void)reload;
- (id)preferredInitialItem;
- (void)_onApplicationWillEnterForeground:(id)arg1;
- (void)_onApplicationDidEnterBackground:(id)arg1;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_scheduleInitialPeriodicUpdate;
- (void)_setIsAppForegrounded:(_Bool)arg1;
- (void)_checkForInitialApplicationState;
- (id)initWithCurrentUserId:(id)arg1 mapBitmojiAvatarGenerator:(id)arg2 mapPeopleFriendsProvider:(id)arg3 mapStatusRPCService:(id)arg4 mapStatusStoriesFetcher:(id)arg5 mapUserPreferences:(id)arg6 sharingPreferencesProvider:(id)arg7;
- (id)filteredItemsForMapPersonLocationsProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

