//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAttributionServices, SCLazy, SCLegacyPageViewLoggerServices, SCLoggerServices, SCServicesExposer, SCUserFeatureConfigurationServices;

@interface SCSendToLoggingServicesEntryPoint : SCEntryPoint
{
    SCLazy *_sendToLogger;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCLoggerServices *_loggerServices;
    SCAttributionServices *_attributionServices;
    SCLegacyPageViewLoggerServices *_legacyPageViewLoggerServices;
    SCServicesExposer *_sendToLoggingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *sendToLoggingServicesExposer; // @synthesize sendToLoggingServicesExposer=_sendToLoggingServicesExposer;
@property(nonatomic) __weak SCLegacyPageViewLoggerServices *legacyPageViewLoggerServices; // @synthesize legacyPageViewLoggerServices=_legacyPageViewLoggerServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
- (void).cxx_destruct;
- (void)begin;

@end

