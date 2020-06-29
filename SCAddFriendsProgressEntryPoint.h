//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsProgressActionTracker, SCAddFriendsScope, SCApplicationStorageServices, SCBitmojiSelfieServices, SCBusinessLogicHarness, SCOnDemandResourceDownloaderServices, SCServicesExposer, SCSnapchatterServices, SCUserFeatureConfigurationServices, SCUserStorageServices;

@interface SCAddFriendsProgressEntryPoint : SCEntryPoint
{
    SCBusinessLogicHarness *_businessLogicHarness;
    SCAddFriendsProgressActionTracker *_actionTracker;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCAddFriendsScope *_addFriendsScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCSnapchatterServices *_snapchatterServices;
    SCOnDemandResourceDownloaderServices *_resourceDownloaderServices;
    SCUserStorageServices *_userStorageServices;
    SCApplicationStorageServices *_applicationStorageServices;
    SCServicesExposer *_addFriendsProgressServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *addFriendsProgressServicesExposer; // @synthesize addFriendsProgressServicesExposer=_addFriendsProgressServicesExposer;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCOnDemandResourceDownloaderServices *resourceDownloaderServices; // @synthesize resourceDownloaderServices=_resourceDownloaderServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
- (void).cxx_destruct;
- (_Bool)_shouldInitScreen:(unsigned long long)arg1 experimentManager:(id)arg2 addFriendsScope:(id)arg3;
- (void)_exposeServicesWithFriendsCount:(unsigned long long)arg1;
- (void)begin;

@end
