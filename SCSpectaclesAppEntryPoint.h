//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCCircumstanceEngineServices, SCNotificationsServices, SCServicesExposer, SCUserFeatureConfigurationServices;

@interface SCSpectaclesAppEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCUserFeatureConfigurationServices *_featureConfigurationServices;
    SCNotificationsServices *_notificationsServices;
    SCServicesExposer *_dependenciesServiceExposer;
}

@property(retain, nonatomic) SCServicesExposer *dependenciesServiceExposer; // @synthesize dependenciesServiceExposer=_dependenciesServiceExposer;
@property(nonatomic) __weak SCNotificationsServices *notificationsServices; // @synthesize notificationsServices=_notificationsServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *featureConfigurationServices; // @synthesize featureConfigurationServices=_featureConfigurationServices;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

