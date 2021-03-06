//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_applicationCircumstanceEngineServicesContainer;
    SCServicesContainer *_applicationStorageServicesContainer;
    SCServicesContainer *_attributionServicesContainer;
    SCServicesContainer *_audioServicesContainer;
    SCServicesContainer *_changeLanguageInSettingsActionRecordingServicesContainer;
    SCServicesContainer *_crashAttributionServicesContainer;
    SCServicesContainer *_discoverFeedMetricServicesContainer;
    SCServicesContainer *_dynamicLocaleEventServicesContainer;
    SCServicesContainer *_dynamicLocaleProviderServicesContainer;
    SCServicesContainer *_forceAppTerminationServicesContainer;
    SCServicesContainer *_grapheneServicesContainer;
    SCServicesContainer *_identityLoggerServicesContainer;
    SCServicesContainer *_incidentTicketCreatorServicesContainer;
    SCServicesContainer *_internalQuickLoginServicesContainer;
    SCServicesContainer *_legacyPageViewLoggerServicesContainer;
    SCServicesContainer *_navigationLoggingServicesContainer;
    SCServicesContainer *_notificationsServicesContainer;
    SCServicesContainer *_oneTapLoginServicesContainer;
    SCServicesContainer *_pagePageViewReporterServicesContainer;
    SCServicesContainer *_registrationDeviceInfoServicesContainer;
    SCServicesContainer *_retrySignalAnnouncerServicesContainer;
    SCServicesContainer *_startupCompletionServicesContainer;
    SCServicesContainer *_swiftServicesContainer;
    SCServicesContainer *_systemContentDeliveryServicesContainer;
    SCServicesContainer *_systemJobSchedulerServicesContainer;
    SCServicesContainer *_systemNetworkServicesContainer;
    SCServicesContainer *_systemScopeContainer;
    SCServicesContainer *_userNotTrackedLoggerServicesContainer;
}

@property(readonly, nonatomic) SCServicesContainer *userNotTrackedLoggerServicesContainer; // @synthesize userNotTrackedLoggerServicesContainer=_userNotTrackedLoggerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *systemScopeContainer; // @synthesize systemScopeContainer=_systemScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *systemNetworkServicesContainer; // @synthesize systemNetworkServicesContainer=_systemNetworkServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *systemJobSchedulerServicesContainer; // @synthesize systemJobSchedulerServicesContainer=_systemJobSchedulerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *systemContentDeliveryServicesContainer; // @synthesize systemContentDeliveryServicesContainer=_systemContentDeliveryServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *swiftServicesContainer; // @synthesize swiftServicesContainer=_swiftServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *startupCompletionServicesContainer; // @synthesize startupCompletionServicesContainer=_startupCompletionServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *retrySignalAnnouncerServicesContainer; // @synthesize retrySignalAnnouncerServicesContainer=_retrySignalAnnouncerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *registrationDeviceInfoServicesContainer; // @synthesize registrationDeviceInfoServicesContainer=_registrationDeviceInfoServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *pagePageViewReporterServicesContainer; // @synthesize pagePageViewReporterServicesContainer=_pagePageViewReporterServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *oneTapLoginServicesContainer; // @synthesize oneTapLoginServicesContainer=_oneTapLoginServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *notificationsServicesContainer; // @synthesize notificationsServicesContainer=_notificationsServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *navigationLoggingServicesContainer; // @synthesize navigationLoggingServicesContainer=_navigationLoggingServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *legacyPageViewLoggerServicesContainer; // @synthesize legacyPageViewLoggerServicesContainer=_legacyPageViewLoggerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *internalQuickLoginServicesContainer; // @synthesize internalQuickLoginServicesContainer=_internalQuickLoginServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *incidentTicketCreatorServicesContainer; // @synthesize incidentTicketCreatorServicesContainer=_incidentTicketCreatorServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *identityLoggerServicesContainer; // @synthesize identityLoggerServicesContainer=_identityLoggerServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *grapheneServicesContainer; // @synthesize grapheneServicesContainer=_grapheneServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *forceAppTerminationServicesContainer; // @synthesize forceAppTerminationServicesContainer=_forceAppTerminationServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *dynamicLocaleProviderServicesContainer; // @synthesize dynamicLocaleProviderServicesContainer=_dynamicLocaleProviderServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *dynamicLocaleEventServicesContainer; // @synthesize dynamicLocaleEventServicesContainer=_dynamicLocaleEventServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *discoverFeedMetricServicesContainer; // @synthesize discoverFeedMetricServicesContainer=_discoverFeedMetricServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *crashAttributionServicesContainer; // @synthesize crashAttributionServicesContainer=_crashAttributionServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *changeLanguageInSettingsActionRecordingServicesContainer; // @synthesize changeLanguageInSettingsActionRecordingServicesContainer=_changeLanguageInSettingsActionRecordingServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *audioServicesContainer; // @synthesize audioServicesContainer=_audioServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *attributionServicesContainer; // @synthesize attributionServicesContainer=_attributionServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *applicationStorageServicesContainer; // @synthesize applicationStorageServicesContainer=_applicationStorageServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *applicationCircumstanceEngineServicesContainer; // @synthesize applicationCircumstanceEngineServicesContainer=_applicationCircumstanceEngineServicesContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

