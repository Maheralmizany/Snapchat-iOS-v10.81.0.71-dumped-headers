//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCFeatureSettingsService, SCGalleryLogger;
@protocol NavigationPageState;

@interface SCGalleryAutoSaveTooltip : SCOnboardingTooltip
{
    id <NavigationPageState> _navigationPageState;
    SCFeatureSettingsService *_featureSettingsService;
    SCGalleryLogger *_galleryLogger;
}

@property(nonatomic) __weak SCGalleryLogger *galleryLogger; // @synthesize galleryLogger=_galleryLogger;
@property(nonatomic) __weak SCFeatureSettingsService *featureSettingsService; // @synthesize featureSettingsService=_featureSettingsService;
- (void).cxx_destruct;
- (_Bool)needsToBeCompleted;
- (void)markCompleted;
- (_Bool)shouldShow;
- (void)willShow;
- (id)initWithFeatureSettingsService:(id)arg1 galleryLogger:(id)arg2 parentView:(id)arg3 navigationPageState:(id)arg4;

@end

