//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCMapCarouselRow-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCMapCarouselItemCell;
@protocol SCChatGroup, SCImageDownloading, SCMapCarouselGroupRowControllerDelegate, SCMapCarouselRowHeightUpdatesObserver, SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider, SCMapPersonLocationsProviding;

@interface SCMapCarouselGroupRowController : NSObject <SCAvatarViewDelegate, SCMapPersonLocationsListener, SCMapPeopleFriendsListener, SCMapCarouselRow>
{
    NSString *_currentUserId;
    id <SCMapCarouselGroupRowControllerDelegate> _delegate;
    id <SCChatGroup> _group;
    id <SCImageDownloading> _imageDownloader;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    unsigned long long _options;
    SCMapCarouselItemCell *_cell;
}

- (void).cxx_destruct;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (unsigned long long)_numFriendsSharingLocation;
- (void)_updateUI;
- (void)didEndDisplayingCell:(id)arg1;
- (double)heightForWidth:(double)arg1;
- (void)updateCell:(id)arg1;
- (Class)cellClass;
- (id)reuseIdentifier;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 group:(id)arg3 imageDownloader:(id)arg4 mapPeopleFriendsProvider:(id)arg5 mapPeopleGroupsProvider:(id)arg6 mapPersonLocationsProvider:(id)arg7 options:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver;
@property(readonly) Class superclass;

@end

