//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCDiscoverFeedExtensionProviderScope, SCFeatureSettingsServices, SCUserFeatureConfigurationServices;

@interface SCDiscoverFeedForYouSectionEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCDiscoverFeedExtensionProviderScope *_discoverFeedExtensionProviderScope;
    SCFeatureSettingsServices *_featureSettingsServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
}

@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingsServices; // @synthesize featureSettingsServices=_featureSettingsServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionProviderScope *discoverFeedExtensionProviderScope; // @synthesize discoverFeedExtensionProviderScope=_discoverFeedExtensionProviderScope;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

