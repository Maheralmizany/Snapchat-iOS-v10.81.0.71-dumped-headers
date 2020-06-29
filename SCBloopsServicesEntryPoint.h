//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBoltDataUploaderServices, SCCircumstanceEngineServices, SCContentDeliveryServices, SCEntryPointCleanup, SCFeatureSettingsServices, SCFriendsFeedServices, SCLazy, SCLegacySnapchatterServices, SCServicesExposer, SCSnapchatterServices, SCUserFeatureConfigurationServices, SCUserSessionScope, SCUserStorageServices;

@interface SCBloopsServicesEntryPoint : SCEntryPoint
{
    SCLazy *_bloopsAPI;
    SCEntryPointCleanup *_cleanup;
    SCUserSessionScope *_userSessionScope;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCUserStorageServices *_userStorageServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCBoltDataUploaderServices *_boltDataUploaderServices;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCSnapchatterServices *_snapchatterServices;
    SCFriendsFeedServices *_friendsFeedServices;
    SCFeatureSettingsServices *_featureSettingsServices;
    SCServicesExposer *_bloopsServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *bloopsServicesExposer; // @synthesize bloopsServicesExposer=_bloopsServicesExposer;
@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingsServices; // @synthesize featureSettingsServices=_featureSettingsServices;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(nonatomic) __weak SCBoltDataUploaderServices *boltDataUploaderServices; // @synthesize boltDataUploaderServices=_boltDataUploaderServices;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

