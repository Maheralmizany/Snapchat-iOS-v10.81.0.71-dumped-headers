//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedHeaderPromptQualificationProviding-Protocol.h"

@class SCFeatureSettingsService, SCLazy, SCUserInfoServices;

@interface SCFeedHeaderPromptQualificationProvider : NSObject <SCFeedHeaderPromptQualificationProviding>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCUserInfoServices *_userInfoServices;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    _Bool _hasConversationsWithNonTeamSnapchat;
}

- (void).cxx_destruct;
- (_Bool)_isEmailVerified;
- (_Bool)_qualifiedForEmailVerificationPrompt;
- (_Bool)_qualifiedForBirthdayPartyPrompt;
- (_Bool)_isPhoneNumberVerified;
- (_Bool)_qualifiedForPhoneVerificationPrompt;
- (_Bool)_hasConversationWithNonTeamSnapchat;
- (_Bool)_qualifiedForNotificationPermissionPrompt;
- (_Bool)qualifiedForPromptWithProtoPromptType:(int)arg1;
- (id)initWithFeatureSettingsService:(id)arg1 userInfoServices:(id)arg2 lazyFriendsFeedDataCoordinator:(id)arg3;

@end

