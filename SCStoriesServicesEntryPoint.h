//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCContentDeliveryServices, SCCustomStoriesServices, SCEntryPointCleanup, SCLazy, SCServicesExposer, SCShakeToReportServices, SCSnapchatterServices, SCStoriesAppLifecycleResponder, SCStoriesMediaStateUpdateMonitor, SCStoriesMetricServices, SCStoriesNetworkingServices, SCStoriesSnapReadReceiptService, SCUserFeatureConfigurationServices, SCUserSessionScope, SCUserStorageServices;

@interface SCStoriesServicesEntryPoint : SCEntryPoint
{
    SCStoriesAppLifecycleResponder *_storiesApplifecycleResponder;
    SCStoriesMediaStateUpdateMonitor *_storiesMediaAndMetadataSynchronizer;
    SCEntryPointCleanup *_cleanup;
    SCLazy *_storiesMediaDocumentStore;
    SCUserSessionScope *_userSessionScope;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCSnapchatterServices *_snapchatterServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCStoriesNetworkingServices *_storiesNetworkingServices;
    SCStoriesSnapReadReceiptService *_storiesSnapReadReceiptService;
    SCCustomStoriesServices *_customStoriesServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCServicesExposer *_storiesDataServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *storiesDataServicesExposer; // @synthesize storiesDataServicesExposer=_storiesDataServicesExposer;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCCustomStoriesServices *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
@property(nonatomic) __weak SCStoriesSnapReadReceiptService *storiesSnapReadReceiptService; // @synthesize storiesSnapReadReceiptService=_storiesSnapReadReceiptService;
@property(nonatomic) __weak SCStoriesNetworkingServices *storiesNetworkingServices; // @synthesize storiesNetworkingServices=_storiesNetworkingServices;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createSnapchatterFetcher;
- (id)_createStoriesDataProviderWithFriendStoriesPlaybackDataProvider:(id)arg1 storiesDataCoordinator:(id)arg2;
- (id)_createStoriesPlaybackDataProviderWithDataCoordinator:(id)arg1;
- (id)_createStoriesMediaCoordinatorWithThumbnailCoordinator:(id)arg1 lazyDataCoordinator:(id)arg2;
- (id)_createThumbnailCoordinator;
- (id)_createDocumentStore;
- (id)_createStoriesSnapViewerDataCoordinatorWithSnapchatterFetcher:(id)arg1;
- (id)end;
- (void)begin;

@end

