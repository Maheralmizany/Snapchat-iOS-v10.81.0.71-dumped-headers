//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsStickersTooltipPresenter-Protocol.h"

@class NSString, NSTimer, SCLazy;
@protocol SCBloopsStickersTooltipPresenterOutput, SCBloopsStickersTooltipPresenterViewProvider;

@interface SCBloopsStickersTooltipPresenterImpl : NSObject <SCBloopsStickersTooltipPresenter>
{
    SCLazy *_onboardingTooltip;
    SCLazy *_customTextTooltip;
    SCLazy *_bloopsOnboardingTooltipStateProvider;
    SCLazy *_bloopsCustomTextTooltipStateProvider;
    NSTimer *_changeQuickSearchIconTimer;
    NSTimer *_showTooltipTimer;
    _Bool _isOnboardingTooltipVisible;
    _Bool _isCustomTextTooltipVisible;
    unsigned long long _tooltipShowingCounter;
    id <SCBloopsStickersTooltipPresenterViewProvider> dataSource;
    id <SCBloopsStickersTooltipPresenterOutput> output;
}

@property(nonatomic) __weak id <SCBloopsStickersTooltipPresenterOutput> output; // @synthesize output;
@property(nonatomic) __weak id <SCBloopsStickersTooltipPresenterViewProvider> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)textInputCurrentInputModeDidChange:(id)arg1;
- (void)_showTooltipIfNeededWithType:(unsigned long long)arg1;
- (id)_createTooltipWithType:(unsigned long long)arg1;
- (void)_showTooltip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showCustomTextTooltip;
- (void)_showOnboardingTooltip;
- (void)cancel;
- (void)setCustomTextBloopsWasShown:(_Bool)arg1;
- (_Bool)needToShowCustomTextTooltip;
- (_Bool)needToShowOnboardingTooltip;
- (void)hideCustomTextTooltipIfNeeded;
- (void)hideOnboardingTooltip;
- (void)showCustomTextTooltipIfNeeded;
- (void)showOnboardingTooltipIfNeeded;
- (void)dealloc;
- (id)initWithBloopsOnboardingTooltipStateProvider:(id)arg1 bloopsCustomTextTooltipStateProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
