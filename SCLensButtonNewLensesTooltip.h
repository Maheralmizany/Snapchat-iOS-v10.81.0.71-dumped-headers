//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

#import "SCLensButtonTooltip-Protocol.h"

@class NSString, SCFeatureSettingsService;

@interface SCLensButtonNewLensesTooltip : SCOnboardingTooltip <SCLensButtonTooltip>
{
    SCFeatureSettingsService *_featureSettingsService;
    struct CGRect _lensButtonFrame;
}

- (void).cxx_destruct;
- (id)_appearance;
- (void)show;
- (void)showWithLensButtonFrame:(struct CGRect)arg1;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)willShow;
- (id)initWithView:(id)arg1 featureSettingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

