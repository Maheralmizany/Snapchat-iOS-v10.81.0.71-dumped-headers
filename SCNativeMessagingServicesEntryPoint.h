//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class NSOperationQueue, SCAppUserLifecycleEventHandler, SCArroyoChatLoggingServices, SCArroyoConversationIdsManager, SCContentDeliveryServices, SCEntryPointCleanup, SCFriendsFeedLoggingServices, SCGrapheneServices, SCMediaOrchestrationServices, SCServicesExposer, SCShakeToReportServices, SCSnapTokenServices, SCSystemScope, SCUserFeatureConfigurationServices, SCUserSessionScope, SCUserStorageServices;
@protocol SCNativeMessagingSessionManaging;

@interface SCNativeMessagingServicesEntryPoint : SCEntryPoint
{
    id <SCNativeMessagingSessionManaging> _sessionManager;
    SCArroyoConversationIdsManager *_arroyoIdsManager;
    SCEntryPointCleanup *_cleanup;
    NSOperationQueue *_cleanupQueue;
    SCAppUserLifecycleEventHandler *_appUserLifecycleEventHandler;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCGrapheneServices *_grapheneServices;
    SCFriendsFeedLoggingServices *_friendsFeedLoggingServices;
    SCArroyoChatLoggingServices *_arroyoChatLoggingServices;
    SCSnapTokenServices *_snapTokenServices;
    SCMediaOrchestrationServices *_mediaOrchestrationServices;
    SCUserStorageServices *_userStorageServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCServicesExposer *_nativeMessagingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *nativeMessagingServicesExposer; // @synthesize nativeMessagingServicesExposer=_nativeMessagingServicesExposer;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCMediaOrchestrationServices *mediaOrchestrationServices; // @synthesize mediaOrchestrationServices=_mediaOrchestrationServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCArroyoChatLoggingServices *arroyoChatLoggingServices; // @synthesize arroyoChatLoggingServices=_arroyoChatLoggingServices;
@property(nonatomic) __weak SCFriendsFeedLoggingServices *friendsFeedLoggingServices; // @synthesize friendsFeedLoggingServices=_friendsFeedLoggingServices;
@property(nonatomic) __weak SCGrapheneServices *grapheneServices; // @synthesize grapheneServices=_grapheneServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

