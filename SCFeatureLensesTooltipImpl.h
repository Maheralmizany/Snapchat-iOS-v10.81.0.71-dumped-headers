//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensesTooltip-Protocol.h"

@class NSString, SCLensesTooltipManager;
@protocol SCLensButtonNewLensesTooltipProvider;

@interface SCFeatureLensesTooltipImpl : SCFeature <SCFeatureLensesTooltip>
{
    SCLensesTooltipManager *_lensesTooltipManager;
    id <SCLensButtonNewLensesTooltipProvider> _lensButtonNewLensesTooltipProvider;
}

- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
- (void)hideNewLensesTooltip;
- (void)showNewLensesTooltipWithLensButtonFrame:(struct CGRect)arg1;
- (void)unsubscribeLensUIUpdateEvents:(id)arg1;
- (void)subscribeLensUIUpdateEvents:(id)arg1;
- (void)setSwipeTooltipSuppressed:(_Bool)arg1;
- (void)hideSwipeTooltip;
- (_Bool)isLensesOnboardingCompleted;
- (id)initWithFeatureSettingsService:(id)arg1 lensButtonNewLensesTooltipProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

