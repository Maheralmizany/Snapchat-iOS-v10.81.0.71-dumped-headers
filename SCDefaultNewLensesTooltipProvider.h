//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensButtonNewLensesTooltipProvider-Protocol.h"

@class NSString, SCFeatureSettingsService, SCOnboardingTooltip, UIView;
@protocol SCLensButtonTooltip;

@interface SCDefaultNewLensesTooltipProvider : NSObject <SCLensButtonNewLensesTooltipProvider>
{
    SCOnboardingTooltip<SCLensButtonTooltip> *_tooltip;
    UIView *_parentView;
    SCFeatureSettingsService *_featureSettingsService;
    _Bool _qualified;
}

- (void).cxx_destruct;
- (void)_userSegmentsChangedWithUserSegments:(id)arg1;
- (void)_observeUserSegments:(id)arg1;
- (id)lensButtonNewLensesAvailableTooltip;
- (void)setUpWithParentView:(id)arg1;
- (id)initWithUserSegmentsObservable:(id)arg1 featureSettingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

