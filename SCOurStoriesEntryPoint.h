//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFeatureSettingsServices, SCLegacyUserServices, SCServicesExposer, SCSnapProServices, SCStoriesMetricServices, SCStoriesPreferencesServices, SCUserInfoServices, SCUserSessionScope, SCUserStorageServices;

@interface SCOurStoriesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCUserInfoServices *_userInfoServices;
    SCStoriesPreferencesServices *_storiesPreferencesServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCSnapProServices *_snapProServices;
    SCFeatureSettingsServices *_featureSettingServices;
    SCLegacyUserServices *_legacyUserServices;
    SCServicesExposer *_ourStoriesServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *ourStoriesServicesExposer; // @synthesize ourStoriesServicesExposer=_ourStoriesServicesExposer;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingServices; // @synthesize featureSettingServices=_featureSettingServices;
@property(nonatomic) __weak SCSnapProServices *snapProServices; // @synthesize snapProServices=_snapProServices;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCStoriesPreferencesServices *storiesPreferencesServices; // @synthesize storiesPreferencesServices=_storiesPreferencesServices;
@property(nonatomic) __weak SCUserInfoServices *userInfoServices; // @synthesize userInfoServices=_userInfoServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createOnboardingManager;
- (id)_createAttributionManager;
- (void)begin;

@end

