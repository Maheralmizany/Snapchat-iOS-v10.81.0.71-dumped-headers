//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsTabFooterButtonBadgeProvider, SCNavigationItemBadgeProviderScope, SCSnapchatterServices, SCUserFeatureConfigurationServices;

@interface SCAddFriendsTabFooterButtonBadgeEntryPoint : SCEntryPoint
{
    SCAddFriendsTabFooterButtonBadgeProvider *_badgeProvider;
    SCNavigationItemBadgeProviderScope *_navigationItemBadgeProviderScope;
    SCSnapchatterServices *_snapchatterServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
}

@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCNavigationItemBadgeProviderScope *navigationItemBadgeProviderScope; // @synthesize navigationItemBadgeProviderScope=_navigationItemBadgeProviderScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end
