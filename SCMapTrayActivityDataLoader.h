//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapTrayBaseDataLoader.h"

#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"
#import "SCMapTrayUnseenItemTracking-Protocol.h"

@class NSArray, NSString, SCCallbackCancelable, SCMapUserPreferences;
@protocol SCImageDownloading, SCMapPeopleFriendsProvider, SCMapStatusFetcher><SCMapStatusViewedStateProvider, SCMapTrayActivityDataLoaderDelegate;

@interface SCMapTrayActivityDataLoader : SCMapTrayBaseDataLoader <SCMapStatusFetcherListener, SCMapStatusViewedStateListener, SCMapPeopleFriendsListener, SCMapTrayUnseenItemTracking>
{
    id <SCMapStatusFetcher><SCMapStatusViewedStateProvider> _statusStore;
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    id <SCImageDownloading> _imageDownloader;
    SCMapUserPreferences *_mapUserPrefs;
    unsigned long long _mapSessionId;
    NSString *_currentUserId;
    double _newestItemTimestamp;
    SCCallbackCancelable *_overallCancelToken;
    _Bool _isLoading;
    _Bool _shouldDisplayUnseenItemIndicator;
    unsigned long long _unseenItemCount;
    unsigned long long _firstUnseenItemIndex;
    id <SCMapTrayActivityDataLoaderDelegate> _delegate;
    NSArray *_items;
}

@property(retain) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SCMapTrayActivityDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool shouldDisplayUnseenItemIndicator; // @synthesize shouldDisplayUnseenItemIndicator=_shouldDisplayUnseenItemIndicator;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) unsigned long long firstUnseenItemIndex; // @synthesize firstUnseenItemIndex=_firstUnseenItemIndex;
@property(readonly, nonatomic) unsigned long long unseenItemCount; // @synthesize unseenItemCount=_unseenItemCount;
- (void).cxx_destruct;
- (void)handleTrayOpened;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdateFeedItems:(id)arg1;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (id)_viewModelForExploreItem:(id)arg1;
- (void)_updateFirstUnseenItemIndexWithUnseenItems:(id)arg1;
- (id)_unseenItems:(id)arg1;
- (void)_maybeBuildExploreModels;
- (id)_mapTrayExploreItemForExploreItem:(id)arg1;
- (void)_cleanUp;
- (id)initializeLoad;
- (void)reloadItems;
- (id)initWithFriendsProvider:(id)arg1 imageDownloader:(id)arg2 statusStore:(id)arg3 mapUserPrefs:(id)arg4 performer:(id)arg5 mapSessionId:(unsigned long long)arg6 currentUserId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
