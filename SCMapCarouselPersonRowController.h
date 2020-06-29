//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCMapCarouselRow-Protocol.h"
#import "SCMapCarouselShareLocationDelegate-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCExperimentManager, SCLazy, SCMapCarouselItemCell, SCMapLoggerEventSender, SCMapPerson, SCMapStatusStore, SCMapUserPreferences;
@protocol SCImageDownloading, SCMapCarouselPersonRowControllerDelegate, SCMapCarouselRowHeightUpdatesObserver, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding;

@interface SCMapCarouselPersonRowController : NSObject <SCMapPersonLocationsListener, SCAvatarViewDelegate, SCMapPeopleFriendsListener, SCMapCarouselShareLocationDelegate, SCMapCarouselRow>
{
    NSString *_currentUserId;
    id <SCMapCarouselPersonRowControllerDelegate> _delegate;
    SCMapLoggerEventSender *_logEventSender;
    SCExperimentManager *_experimentManager;
    id <SCImageDownloading> _imageDownloader;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    SCMapUserPreferences *_mapUserPreferences;
    SCLazy *_sharingPreferencesProvider;
    unsigned long long _options;
    SCMapPerson *_person;
    SCMapStatusStore *_statusStore;
    _Bool _hasLoggedStatusUiView;
    _Bool _hasLoggedExploreUiView;
    _Bool _hasLoggedLocationUiView;
    SCMapCarouselItemCell *_cell;
    id <SCMapCarouselRowHeightUpdatesObserver> _heightUpdatesObserver;
}

@property(readonly, copy, nonatomic) SCMapPerson *person; // @synthesize person=_person;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver; // @synthesize heightUpdatesObserver=_heightUpdatesObserver;
- (void).cxx_destruct;
- (void)_showFullscreenChat;
- (void)setContentHidden:(_Bool)arg1;
- (double)heightForWidth:(double)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)updateCell:(id)arg1;
- (Class)cellClass;
- (id)reuseIdentifier;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)peopleFriendsProviderDidUpdateFeedItems:(id)arg1;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)_didTapChatButton;
- (_Bool)_shouldShowLocationShareButton;
- (_Bool)_shouldShowExploreButton;
- (_Bool)_shouldShowUpdateStatusButton;
- (void)locationSharingView:(id)arg1 didTapDismissButton:(id)arg2;
- (void)_updateUI;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 experimentManager:(id)arg3 imageDownloader:(id)arg4 logEventSender:(id)arg5 mapPeopleFriendsProvider:(id)arg6 mapPersonLocationsProvider:(id)arg7 mapUserPreferences:(id)arg8 sharingPreferencesProvider:(id)arg9 options:(unsigned long long)arg10 person:(id)arg11 statusStore:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
