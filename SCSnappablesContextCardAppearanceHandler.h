//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnappablesContextCardAppearanceEventHandler-Protocol.h"

@class NSString, SCWeakTimer;
@protocol SCSnappablesContextCardAppearanceActionViewHandler;

@interface SCSnappablesContextCardAppearanceHandler : NSObject <SCSnappablesContextCardAppearanceEventHandler>
{
    long long _snappablesAppearanceVariant;
    unsigned long long _contentType;
    id <SCSnappablesContextCardAppearanceActionViewHandler> _appearanceActionViewHandler;
    SCWeakTimer *_presentingTimer;
    _Bool _actionViewPresented;
    _Bool _actionViewHidden;
    _Bool _mainViewOnScreen;
    _Bool _actionViewAppearanceBlocked;
}

- (void).cxx_destruct;
- (void)didSendSnap;
- (void)didTapOutside;
- (void)didLayerUpdateWithContentType:(unsigned long long)arg1;
- (void)didVideoFinishLooping;
- (void)didUpdatePresenceContextOnScreen:(_Bool)arg1;
- (void)didUpdatePresenceMainViewOnScreen:(_Bool)arg1;
- (void)_setActionViewHidden:(_Bool)arg1;
- (void)_presentActionViewIfNeededWithSourceType:(long long)arg1;
- (void)_stopTimerIfNeeded;
- (void)_presentActionViewFromTimerIfNeeded;
- (void)_runTimerIfNeeded;
- (void)_initiallyPresentActionViewIfNeeded;
- (unsigned long long)_currentVariant;
- (void)_resetState;
- (void)setAppearanceActionViewHandler:(id)arg1;
- (id)initWithVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

