//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCActiveUserNGSNavigationRouter, SCActiveUserNavigationWorkflow, SCBitmojiFetchServices, SCBitmojiSelfieServices, SCFeatureSettingsServices, SCLegacyStoriesServices, SCLegacyUserServices, SCLensUnlockActivationServices, SCMemoryDebugServices, SCMultiScopeExposer, SCNavigationLoggingServices, SCNetworkImageServices, SCPlugInScopeExposer, SCScopeExposer, SCServicesExposer, SCSnapTokenServices, SCUserFeatureConfigurationServices, SCUserInfoServices, SCUserNavigationScope, SCUserSession, SCUserSessionScope, SCUserTooltipStatusServices, UIViewController;

@interface SCLegacyUserNavigationEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCUserSession *_userSession;
    UIViewController *_rootViewController;
    SCActiveUserNGSNavigationRouter *_ngsRouter;
    SCActiveUserNavigationWorkflow *_workflow;
    SCUserSessionScope *_userSessionScope;
    SCUserNavigationScope *_userNavigationScope;
    SCUserInfoServices *_userInfoServices;
    SCLegacyUserServices *_legacyUserServices;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCNetworkImageServices *_networkImageServices;
    SCSnapTokenServices *_snapTokenServices;
    SCUserTooltipStatusServices *_userTooltipStatusServices;
    SCNavigationLoggingServices *_navigationLoggingServices;
    SCLensUnlockActivationServices *_lensUnlockActivationServices;
    SCFeatureSettingsServices *_featureSettingsServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCMemoryDebugServices *_memoryDebugServices;
    SCServicesExposer *_navigationServicesExposer;
    SCScopeExposer *_discoverFeedScopeExposer;
    SCScopeExposer *_cameraScopeExposer;
    SCScopeExposer *_mapScopeExposer;
    SCScopeExposer *_searchV2ScopeExposer;
    SCScopeExposer *_searchSuggestionsScopeExposer;
    SCScopeExposer *_premiumFeedScopeExposer;
    SCScopeExposer *_friendsFeedScopeExposer;
    SCScopeExposer *_addFriendsScopeExposer;
    SCPlugInScopeExposer *_navigationItemBadgeProviderScopeExposer;
    SCMultiScopeExposer *_profileHeaderButtonScopeExposer;
    SCMultiScopeExposer *_searchHeaderButtonScopeExposer;
    SCMultiScopeExposer *_addFriendsHeaderButtonScopeExposer;
}

@property(retain, nonatomic) SCMultiScopeExposer *addFriendsHeaderButtonScopeExposer; // @synthesize addFriendsHeaderButtonScopeExposer=_addFriendsHeaderButtonScopeExposer;
@property(retain, nonatomic) SCMultiScopeExposer *searchHeaderButtonScopeExposer; // @synthesize searchHeaderButtonScopeExposer=_searchHeaderButtonScopeExposer;
@property(retain, nonatomic) SCMultiScopeExposer *profileHeaderButtonScopeExposer; // @synthesize profileHeaderButtonScopeExposer=_profileHeaderButtonScopeExposer;
@property(retain, nonatomic) SCPlugInScopeExposer *navigationItemBadgeProviderScopeExposer; // @synthesize navigationItemBadgeProviderScopeExposer=_navigationItemBadgeProviderScopeExposer;
@property(retain, nonatomic) SCScopeExposer *addFriendsScopeExposer; // @synthesize addFriendsScopeExposer=_addFriendsScopeExposer;
@property(retain, nonatomic) SCScopeExposer *friendsFeedScopeExposer; // @synthesize friendsFeedScopeExposer=_friendsFeedScopeExposer;
@property(retain, nonatomic) SCScopeExposer *premiumFeedScopeExposer; // @synthesize premiumFeedScopeExposer=_premiumFeedScopeExposer;
@property(retain, nonatomic) SCScopeExposer *searchSuggestionsScopeExposer; // @synthesize searchSuggestionsScopeExposer=_searchSuggestionsScopeExposer;
@property(retain, nonatomic) SCScopeExposer *searchV2ScopeExposer; // @synthesize searchV2ScopeExposer=_searchV2ScopeExposer;
@property(retain, nonatomic) SCScopeExposer *mapScopeExposer; // @synthesize mapScopeExposer=_mapScopeExposer;
@property(retain, nonatomic) SCScopeExposer *cameraScopeExposer; // @synthesize cameraScopeExposer=_cameraScopeExposer;
@property(retain, nonatomic) SCScopeExposer *discoverFeedScopeExposer; // @synthesize discoverFeedScopeExposer=_discoverFeedScopeExposer;
@property(retain, nonatomic) SCServicesExposer *navigationServicesExposer; // @synthesize navigationServicesExposer=_navigationServicesExposer;
@property(nonatomic) __weak SCMemoryDebugServices *memoryDebugServices; // @synthesize memoryDebugServices=_memoryDebugServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingsServices; // @synthesize featureSettingsServices=_featureSettingsServices;
@property(nonatomic) __weak SCLensUnlockActivationServices *lensUnlockActivationServices; // @synthesize lensUnlockActivationServices=_lensUnlockActivationServices;
@property(nonatomic) __weak SCNavigationLoggingServices *navigationLoggingServices; // @synthesize navigationLoggingServices=_navigationLoggingServices;
@property(nonatomic) __weak SCUserTooltipStatusServices *userTooltipStatusServices; // @synthesize userTooltipStatusServices=_userTooltipStatusServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCUserInfoServices *userInfoServices; // @synthesize userInfoServices=_userInfoServices;
@property(nonatomic) __weak SCUserNavigationScope *userNavigationScope; // @synthesize userNavigationScope=_userNavigationScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)_beginLegacyMainViewControllerUserNavigation;
- (void)_beginNGSUserNavigation;
- (id)end;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

