//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCNativeFeedServices, SCProfileArroyoStreaksFeedEntriesUpdatedListener, SCSnapchatterServices, SCUserFeatureConfigurationServices;

@interface SCProfileArroyoStreaksEntryPoint : SCEntryPoint
{
    SCProfileArroyoStreaksFeedEntriesUpdatedListener *_listener;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCNativeFeedServices *_nativeFeedServices;
    SCSnapchatterServices *_snapchatterServices;
}

@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCNativeFeedServices *nativeFeedServices; // @synthesize nativeFeedServices=_nativeFeedServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

