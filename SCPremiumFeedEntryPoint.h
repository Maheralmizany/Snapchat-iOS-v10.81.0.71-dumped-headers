//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAttributionServices, SCBitmojiFetchServices, SCBloopsServices, SCDiscoverFeedDataServices, SCDiscoverFeedExtensionServices, SCDiscoverFeedLegacyServices, SCDiscoverFeedMetricServices, SCDiscoverFeedStoriesServices, SCDynamicLayoutLegacyServices, SCLegacyStoriesServices, SCNavigationServices, SCNetworkImageServices, SCNotificationOptInService, SCPremiumFeedScope, SCSnapTokenServices, SCStoriesSnapReadReceiptService, SCUserSessionScope;

@interface SCPremiumFeedEntryPoint : SCEntryPoint
{
    SCPremiumFeedScope *_premiumFeedScope;
    SCUserSessionScope *_userSessionScope;
    SCSnapTokenServices *_snapTokenServices;
    SCDiscoverFeedStoriesServices *_discoverFeedStoriesServices;
    SCDiscoverFeedDataServices *_discoverFeedDataServices;
    SCDiscoverFeedMetricServices *_discoverFeedMetricServices;
    SCDiscoverFeedExtensionServices *_discoverFeedExtensionServices;
    SCDiscoverFeedLegacyServices *_discoverFeedLegacyServices;
    SCDynamicLayoutLegacyServices *_dynamicLayoutLegacyServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCStoriesSnapReadReceiptService *_readReceiptService;
    SCNetworkImageServices *_networkImageServices;
    SCNotificationOptInService *_notificationOptInService;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCAttributionServices *_attributionServices;
    SCNavigationServices *_navigationServices;
    SCBloopsServices *_bloopsServices;
}

@property(nonatomic) __weak SCBloopsServices *bloopsServices; // @synthesize bloopsServices=_bloopsServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCNotificationOptInService *notificationOptInService; // @synthesize notificationOptInService=_notificationOptInService;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCStoriesSnapReadReceiptService *readReceiptService; // @synthesize readReceiptService=_readReceiptService;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCDynamicLayoutLegacyServices *dynamicLayoutLegacyServices; // @synthesize dynamicLayoutLegacyServices=_dynamicLayoutLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedLegacyServices *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionServices *discoverFeedExtensionServices; // @synthesize discoverFeedExtensionServices=_discoverFeedExtensionServices;
@property(nonatomic) __weak SCDiscoverFeedMetricServices *discoverFeedMetricServices; // @synthesize discoverFeedMetricServices=_discoverFeedMetricServices;
@property(nonatomic) __weak SCDiscoverFeedDataServices *discoverFeedDataServices; // @synthesize discoverFeedDataServices=_discoverFeedDataServices;
@property(nonatomic) __weak SCDiscoverFeedStoriesServices *discoverFeedStoriesServices; // @synthesize discoverFeedStoriesServices=_discoverFeedStoriesServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCPremiumFeedScope *premiumFeedScope; // @synthesize premiumFeedScope=_premiumFeedScope;
- (void).cxx_destruct;
- (void)_configureHeaderItem:(id)arg1;
- (void)begin;

@end

