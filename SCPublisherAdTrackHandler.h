//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistAdInsertionProtocol-Protocol.h"
#import "SCOperaPlaylistAdTrackProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, SCAdLogger, SCOperaViewController, SCSnapAdsAdLifecycleWatermarkEventsTracker, SCUserSession;
@protocol SCOperaPlaylistItemController;

@interface SCPublisherAdTrackHandler : NSObject <SCOperaPlaylistAdTrackProtocol, SCOperaPlaylistAdInsertionProtocol>
{
    NSMutableArray *_currentGroupAdChunks;
    NSMutableDictionary *_skippedItemIdToAdChunkMap;
    NSMutableSet *_viewedAdRequestClientIds;
    NSMutableSet *_adRequestClientIds;
    NSString *_currentGroupId;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    long long _viewLocation;
    NSString *_deepLinkId;
    SCUserSession *_userSession;
    NSMutableDictionary *_groupIdToEntrySnapIndexMap;
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_lifecycleTracker;
    NSMutableSet *_trackedAdRequestClientIds;
    SCAdLogger *_adBlizzardLogger;
    NSNumber *_operaSessionId;
}

- (void).cxx_destruct;
- (void)_populateAdChunksWithItemGroup:(id)arg1 item:(id)arg2;
- (id)_chunkFromOperaItem:(id)arg1;
- (_Bool)_isPublisherAdItem:(id)arg1;
- (long long)editionEntrySnapIndexForItem:(id)arg1;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(id)arg1;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(id)arg1;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (long long)totalAdCountForItem:(id)arg1;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (void)logAdSkipWithAdGroup:(id)arg1 aroundGroup:(id)arg2 pagedLeft:(_Bool)arg3;
- (_Bool)isNofillUnskippableAdItem:(id)arg1;
- (_Bool)isNofillAdItem:(id)arg1;
- (_Bool)isNofillAdGroup:(id)arg1;
- (id)_commonViewContextForChunk:(id)arg1;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adViewContextForItem:(id)arg1;
- (long long)adSnapIndexForItem:(id)arg1;
- (id)adSessionId;
- (id)adResponseForItem:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1;
- (id)adResponseForGroup:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (unsigned long long)adProductTypeForItem:(id)arg1;
- (long long)adPositionForItem:(id)arg1;
- (void)teardown;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)startViewingPlaylistItem:(id)arg1 context:(id)arg2;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 currentItem:(id)arg3;
- (id)initWithViewLocation:(long long)arg1 deepLinkId:(id)arg2 userSession:(id)arg3 adBlizzardLogger:(id)arg4 operaSessionId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
