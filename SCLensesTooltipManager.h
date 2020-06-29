//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

#import "SCLensUIUpdateListener-Protocol.h"

@class NSString, SCCameraOverlayView, SCFeatureSettingsService, SCLensesSwipeTooltip;

@interface SCLensesTooltipManager : SCOnboardingTooltipManager <SCLensUIUpdateListener>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCCameraOverlayView *_cameraView;
    _Bool _lensesOnboardingTooltipEnabled;
    _Bool _isSwipeTooltipBeingShown;
    _Bool _isSuppressed;
    NSString *_firstSelectedLensIdWithSwipeTooltipEnabled;
    SCLensesSwipeTooltip *_swipeTooltip;
}

@property(retain, nonatomic) SCLensesSwipeTooltip *swipeTooltip; // @synthesize swipeTooltip=_swipeTooltip;
- (void).cxx_destruct;
- (void)willShowLensesWithContext:(unsigned long long)arg1;
- (void)willDisplayLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didUpdateActiveLensOrder:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didSelectLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didHideLensesWithContext:(unsigned long long)arg1;
- (void)didEndDisplayingLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)_hideSwipeTooltip;
- (void)_showSwipeTooltipCheckingSuppression;
- (_Bool)_didSelectAnotherLens:(id)arg1;
- (void)hideTooltip;
- (void)setTooltipSuppressed:(_Bool)arg1;
- (_Bool)areLensesOnboardingTooltipsCompleted;
- (void)setupWithParentView:(id)arg1;
- (id)initWithFeatureSettingsService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

