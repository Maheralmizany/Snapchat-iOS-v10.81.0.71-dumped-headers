//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCConversationIdServices, SCConversationServices, SCFriendmojiServices, SCGroupServices, SCServicesExposer, SCSnapTokenServices, SCSnapchatterServices, SCStartupCompleteScope, SCUserFeatureConfigurationServices, SCUserSessionScope, SCUserStorageServices;

@interface SCCharmsEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCUserSessionScope *_userSessionScope;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCSnapchatterServices *_snapchatterServices;
    SCGroupServices *_groupServices;
    SCFriendmojiServices *_friendmojiServices;
    SCConversationServices *_conversationServices;
    SCSnapTokenServices *_snapTokenServices;
    SCConversationIdServices *_conversationIdServices;
    SCServicesExposer *_charmsServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *charmsServicesExposer; // @synthesize charmsServicesExposer=_charmsServicesExposer;
@property(nonatomic) __weak SCConversationIdServices *conversationIdServices; // @synthesize conversationIdServices=_conversationIdServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCFriendmojiServices *friendmojiServices; // @synthesize friendmojiServices=_friendmojiServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

