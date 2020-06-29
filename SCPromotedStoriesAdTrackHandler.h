//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistAdTrackProtocol-Protocol.h"

@class NSString, SCExperimentManager, SCOperaViewController;
@protocol SCOperaPlaylistItemController;

@interface SCPromotedStoriesAdTrackHandler : NSObject <SCOperaPlaylistAdTrackProtocol>
{
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCExperimentManager *_experimentManager;
    long long _viewLocation;
}

- (void).cxx_destruct;
- (_Bool)_isPromotedStoriesPlaylistItem:(id)arg1;
- (void)teardown;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (long long)totalAdCountForItem:(id)arg1;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(id)arg1;
- (unsigned long long)adProductTypeForItem:(id)arg1;
- (id)adSessionId;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(id)arg1;
- (_Bool)isNofillAdGroup:(id)arg1;
- (void)logAdSkipWithAdGroup:(id)arg1 aroundGroup:(id)arg2 pagedLeft:(_Bool)arg3;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adResponseForGroup:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (_Bool)isNofillUnskippableAdItem:(id)arg1;
- (_Bool)isNofillAdItem:(id)arg1;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (id)adViewContextForItem:(id)arg1;
- (long long)adPositionForItem:(id)arg1;
- (long long)adSnapIndexForItem:(id)arg1;
- (id)adResponseForItem:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1;
- (id)initWithExperimentManager:(id)arg1 viewLocation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

