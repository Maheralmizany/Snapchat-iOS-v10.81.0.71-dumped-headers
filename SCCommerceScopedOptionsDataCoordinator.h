//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCCommerceBitmojiOptions, SCDisposableObserver, SCEventListenerAnnouncer, SCLazy, SCUserSession;
@protocol SCBitmojiAvatarProvider, SCBitmojiSelfieProvider;

@interface SCCommerceScopedOptionsDataCoordinator : NSObject <SCUserSessionScoped, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataFetching;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    id <SCBitmojiSelfieProvider> _bitmojiSelfieProvider;
    SCDisposableObserver *_avatarIdObsever;
    SCCommerceBitmojiOptions *_defaultOptions;
    SCCommerceBitmojiOptions *_selectedBitmojiOptions;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCCommerceBitmojiOptions *selectedBitmojiOptions; // @synthesize selectedBitmojiOptions=_selectedBitmojiOptions;
@property(readonly, nonatomic) SCCommerceBitmojiOptions *defaultOptions; // @synthesize defaultOptions=_defaultOptions;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_userBitmojiAvatarIdDidChange;
@property(readonly, nonatomic) _Bool userMustCreateBitmoji;
- (void)_selectDefaultOptions:(_Bool)arg1;
- (void)setupDefaultsForBitmojiInfoIfNeeded:(id)arg1;
@property(readonly, nonatomic) _Bool isValidBitmojiSelected;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 bitmojiAvatarProvider:(id)arg2 bitmojiSelfieProvider:(id)arg3 snapchattersDataFetching:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

