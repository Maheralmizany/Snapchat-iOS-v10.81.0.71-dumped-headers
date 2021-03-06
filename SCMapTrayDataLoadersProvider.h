//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMapServerService, SCMapSnapTokenService, SCMapTrayActivityDataLoader, SCMapTrayFriendsDataLoader, SCMapTrayWorldStoriesDataLoader, SCMapUserPreferences, SCQueuePerformer;
@protocol SCImageDownloading, SCLocationProvider, SCMapPOITileSetIdProviding, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding, SCMapStatusFetcher><SCMapStatusViewedStateProvider;

@interface SCMapTrayDataLoadersProvider : NSObject
{
    SCMapSnapTokenService *_snapTokenService;
    SCMapUserPreferences *_mapUserPreferences;
    SCMapServerService *_mapServerService;
    id <SCMapStatusFetcher><SCMapStatusViewedStateProvider> _statusStore;
    id <SCMapPersonLocationsProviding> _personLocationProvider;
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    id <SCImageDownloading> _imageDownloader;
    id <SCLocationProvider> _locationProvider;
    id <SCMapPOITileSetIdProviding> _tileSetProvider;
    unsigned long long _mapSessionId;
    NSString *_currentUserId;
    unsigned long long _maxFriendCount;
    SCQueuePerformer *_performer;
    double _lastLoadTime;
    SCMapTrayFriendsDataLoader *_friendsDataLoader;
    SCMapTrayActivityDataLoader *_activityDataLoader;
    SCMapTrayWorldStoriesDataLoader *_worldStoriesDataLoader;
}

- (void).cxx_destruct;
- (void)refreshIfNecessary;
@property(readonly, nonatomic) SCMapTrayWorldStoriesDataLoader *worldStoriesDataLoader; // @synthesize worldStoriesDataLoader=_worldStoriesDataLoader;
@property(readonly, nonatomic) SCMapTrayActivityDataLoader *activityDataLoader; // @synthesize activityDataLoader=_activityDataLoader;
@property(readonly, nonatomic) SCMapTrayFriendsDataLoader *friendsDataLoader; // @synthesize friendsDataLoader=_friendsDataLoader;
- (id)initWithFriendsProvider:(id)arg1 personLocationProvider:(id)arg2 snapTokenService:(id)arg3 mapUserPreferences:(id)arg4 imageDownloader:(id)arg5 statusStore:(id)arg6 mapServerService:(id)arg7 locationProvider:(id)arg8 tileSetIdProvider:(id)arg9 currentUserId:(id)arg10 mapSessionId:(unsigned long long)arg11 maxFriendCount:(unsigned long long)arg12;

@end

