//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCLocationStoring-Protocol.h"
#import "SCFriendLocationsListener-Protocol.h"
#import "SCLocationListener-Protocol.h"
#import "SCMapPersonLocationsProviding-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCStreamingFriendClustersListening-Protocol.h"

@class CLLocation, NSDictionary, NSHashTable, NSSet, NSString, NSTimer, SCExperimentManager, SCFriendLocationsDataStore, SCMTFriendLocation, SCMapPersonLocationsListenerAnnouncer, SCMapStatusStore, SCQueuePerformer;
@protocol SCLocationProvider, SCMapPeopleFriendsProvider, SCObserving, SCStreamingFriendClustersProviding;

@interface SCMapBasePersonLocationsProvider : NSObject <SCFriendLocationsListener, SCLocationListener, SCMapStatusFetcherListener, SCStreamingFriendClustersListening, SCMapPersonLocationsProviding, SCCLocationStoring>
{
    NSString *_currentUserId;
    SCExperimentManager *_experimentManager;
    SCFriendLocationsDataStore *_friendLocationsDataStore;
    id <SCStreamingFriendClustersProviding> _streamingFriendClustersProvider;
    id <SCLocationProvider> _locationProvider;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCMapStatusStore *_mapStatusStore;
    id <SCObserving> _activeLocationObserver;
    SCMapPersonLocationsListenerAnnouncer *_announcer;
    SCQueuePerformer *_internalPerformer;
    CLLocation *_lastCurrentUserLocation;
    SCMTFriendLocation *_lastCurrentUserFriendLocation;
    NSHashTable *_listenersRequiringPeriodicUpdates;
    NSTimer *_throttledUpdateTimer;
    NSSet *_personLocationClusters;
    NSDictionary *_personLocationClustersByUserId;
    NSDictionary *_personLocationsByUserId;
    CDUnknownBlockType _locationsUpdatedCallback;
}

@property(copy) CDUnknownBlockType locationsUpdatedCallback; // @synthesize locationsUpdatedCallback=_locationsUpdatedCallback;
@property(retain) NSDictionary *personLocationsByUserId; // @synthesize personLocationsByUserId=_personLocationsByUserId;
@property(retain) NSDictionary *personLocationClustersByUserId; // @synthesize personLocationClustersByUserId=_personLocationClustersByUserId;
@property(retain) NSSet *personLocationClusters; // @synthesize personLocationClusters=_personLocationClusters;
- (void).cxx_destruct;
- (CDUnknownBlockType)onFriendLocationsUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (void)getFriendLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)didDeleteFriendCluster:(id)arg1;
- (void)didUpdateFriendCluster:(id)arg1;
- (_Bool)_hasListenersRequiringPeriodicUpdates;
- (void)_stopPeriodicUpdatesIfNoLongerRequired;
- (void)_setPeriodicUpdatesEnabled:(_Bool)arg1;
- (void)_update;
- (void)_valisAnnounceHasUpdates:(id)arg1;
- (void)_updateStreamingDataStoreWithMapPersonLocationCluster:(id)arg1;
- (void)_updatePersonLocationClusters;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
- (void)friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:(id)arg1;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
- (id)bestFriendLocations;
- (id)allPersonLocationClusters;
- (id)allPersonLocations;
- (id)personLocationClusterForUserId:(id)arg1;
- (id)personLocationForUserId:(id)arg1;
- (id)announcer;
- (_Bool)isLastUpdateOlderThan:(double)arg1;
- (void)reloadIfOlderThan:(double)arg1;
- (void)removeRequestedUpdatesForListener:(id)arg1;
- (void)requestPeriodicUpdatesForListener:(id)arg1;
@property(readonly, nonatomic) _Bool hasHadSuccessfulUpdate;
- (void)dealloc;
- (id)initWithUserId:(id)arg1 experimentManager:(id)arg2 friendLocationsDataStore:(id)arg3 locationProvider:(id)arg4 mapPeopleFriendsProvider:(id)arg5 mapStatusStore:(id)arg6 streamingFriendClustersProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

