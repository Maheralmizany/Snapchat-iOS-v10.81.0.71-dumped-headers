//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAttributionServices, SCCognacMessageSendingServices, SCConversationServices, SCFriendsFeedLoggingServices, SCFriendsFeedScope, SCFriendsFeedServices, SCGroupServices, SCLegacySnapchatterServices, SCLegacyStoriesServices, SCMemoryDebugServices, SCNativeFeedServices, SCNativeMessagingServices, SCNavigationServices, SCShakeToReportServices, SCSnapchatterServices, SCStoriesServices, SCUserInfoServices, SCUserSessionScope, SCUserTooltipStatusServices;

@interface SCFriendsFeedEntryPoint : SCEntryPoint
{
    id _friendsFeedViewController;
    SCFriendsFeedScope *_friendsFeedScope;
    SCAttributionServices *_attributionServices;
    SCConversationServices *_conversationServices;
    SCFriendsFeedServices *_friendsFeedServices;
    SCFriendsFeedLoggingServices *_friendsFeedLoggingServices;
    SCGroupServices *_groupServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCNativeFeedServices *_nativeFeedServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCCognacMessageSendingServices *_cognacMessageSendingServices;
    SCNavigationServices *_navigationServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCSnapchatterServices *_snapchatterServices;
    SCStoriesServices *_storiesServices;
    SCUserSessionScope *_userSessionScope;
    SCUserInfoServices *_userInfoServices;
    SCUserTooltipStatusServices *_userTooltipStatusServices;
    SCMemoryDebugServices *_memoryDebugServices;
}

@property(nonatomic) __weak SCMemoryDebugServices *memoryDebugServices; // @synthesize memoryDebugServices=_memoryDebugServices;
@property(nonatomic) __weak SCUserTooltipStatusServices *userTooltipStatusServices; // @synthesize userTooltipStatusServices=_userTooltipStatusServices;
@property(nonatomic) __weak SCUserInfoServices *userInfoServices; // @synthesize userInfoServices=_userInfoServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCCognacMessageSendingServices *cognacMessageSendingServices; // @synthesize cognacMessageSendingServices=_cognacMessageSendingServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCNativeFeedServices *nativeFeedServices; // @synthesize nativeFeedServices=_nativeFeedServices;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCFriendsFeedLoggingServices *friendsFeedLoggingServices; // @synthesize friendsFeedLoggingServices=_friendsFeedLoggingServices;
@property(nonatomic) __weak SCFriendsFeedServices *friendsFeedServices; // @synthesize friendsFeedServices=_friendsFeedServices;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCFriendsFeedScope *friendsFeedScope; // @synthesize friendsFeedScope=_friendsFeedScope;
- (void).cxx_destruct;
- (void)_configureHeaderItem:(id)arg1 friendsFeedViewController:(id)arg2;
- (id)end;
- (void)begin;

@end
