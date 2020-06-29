//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAttributionServices, SCBitmojiFetchServices, SCBitmojiFriendInfoServices, SCBloopsServices, SCDiscoverFeedBaseServices, SCDiscoverFeedExtensionServices, SCDiscoverFeedLegacyServices, SCDiscoverFeedMetricServices, SCDiscoverFeedScope, SCDiscoverFeedStoriesServices, SCDynamicLayoutLegacyServices, SCFeatureSettingsServices, SCLegacyStoriesServices, SCNavigationServices, SCNetworkImageServices, SCNotificationOptInService, SCScopeExposer, SCSnapTokenServices, SCStoriesServices, SCStoriesSnapReadReceiptService, SCSystemScope, SCUserSessionScope;

@interface SCDiscoverFeedEntryPoint : SCEntryPoint
{
    _Bool _headlessWithoutWarmup;
    SCSystemScope *_systemScope;
    SCDiscoverFeedScope *_discoverFeedScope;
    SCUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCStoriesServices *_storiesServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCStoriesSnapReadReceiptService *_readReceiptService;
    SCDiscoverFeedStoriesServices *_discoverFeedStoriesServices;
    SCDiscoverFeedExtensionServices *_discoverFeedExtensionServices;
    SCDiscoverFeedLegacyServices *_discoverFeedLegacyServices;
    SCDynamicLayoutLegacyServices *_dynamicLayoutLegacyServices;
    SCNetworkImageServices *_networkImageServices;
    SCDiscoverFeedBaseServices *_discoverFeedBaseServices;
    SCDiscoverFeedMetricServices *_discoverFeedMetricServices;
    SCNotificationOptInService *_notificationOptInService;
    SCSnapTokenServices *_snapTokenServices;
    SCAttributionServices *_attributionServices;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCBitmojiFriendInfoServices *_bitmojiFriendInfoServices;
    SCFeatureSettingsServices *_featureSettingsServices;
    SCScopeExposer *_customStoryMenuScopeExposer;
    SCBloopsServices *_bloopsServices;
}

@property(nonatomic) __weak SCBloopsServices *bloopsServices; // @synthesize bloopsServices=_bloopsServices;
@property(retain, nonatomic) SCScopeExposer *customStoryMenuScopeExposer; // @synthesize customStoryMenuScopeExposer=_customStoryMenuScopeExposer;
@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingsServices; // @synthesize featureSettingsServices=_featureSettingsServices;
@property(nonatomic) __weak SCBitmojiFriendInfoServices *bitmojiFriendInfoServices; // @synthesize bitmojiFriendInfoServices=_bitmojiFriendInfoServices;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCNotificationOptInService *notificationOptInService; // @synthesize notificationOptInService=_notificationOptInService;
@property(nonatomic) __weak SCDiscoverFeedMetricServices *discoverFeedMetricServices; // @synthesize discoverFeedMetricServices=_discoverFeedMetricServices;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseServices; // @synthesize discoverFeedBaseServices=_discoverFeedBaseServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCDynamicLayoutLegacyServices *dynamicLayoutLegacyServices; // @synthesize dynamicLayoutLegacyServices=_dynamicLayoutLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedLegacyServices *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionServices *discoverFeedExtensionServices; // @synthesize discoverFeedExtensionServices=_discoverFeedExtensionServices;
@property(nonatomic) __weak SCDiscoverFeedStoriesServices *discoverFeedStoriesServices; // @synthesize discoverFeedStoriesServices=_discoverFeedStoriesServices;
@property(nonatomic) __weak SCStoriesSnapReadReceiptService *readReceiptService; // @synthesize readReceiptService=_readReceiptService;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCDiscoverFeedScope *discoverFeedScope; // @synthesize discoverFeedScope=_discoverFeedScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)_configureHeaderItem:(id)arg1 discoverFeedContainerViewController:(id)arg2;
- (id)end;
- (void)_beginImmediately;
- (void)begin;

@end

