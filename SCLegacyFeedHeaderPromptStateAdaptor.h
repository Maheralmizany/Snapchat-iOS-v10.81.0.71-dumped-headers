//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedHeaderPromptState-Protocol.h"

@class SCLazy, SCUserInfoServices, User;

@interface SCLegacyFeedHeaderPromptStateAdaptor : NSObject <SCFeedHeaderPromptState>
{
    User *_user;
    SCUserInfoServices *_userInfoServices;
    SCLazy *_userTooltipStatus;
}

- (void).cxx_destruct;
- (_Bool)seenBirthdayPartyPrompt;
- (void)setDisplayedBirthdayPartyPrompt;
- (_Bool)shouldDisplayBirthdayPartyPrompt;
- (_Bool)seenPhoneNumberVerificationPrompt;
- (void)setDisplayedPhoneNumberVerificationPrompt;
- (_Bool)shouldDisplayPhoneNumberVerificationPrompt;
- (_Bool)seenNotificationPrompt;
- (void)setDisplayedNotificationPrompt;
- (_Bool)shouldDisplayNotificationPrompt;
- (void)setWasFeedHeaderPromptDisplayedLastInteractionTime:(_Bool)arg1;
- (_Bool)wasFeedHeaderPromptDisplayedLastInteractionTime;
- (void)setFeedHeaderPromptLastInteractionTime:(id)arg1;
- (id)feedHeaderPromptLastInteractionTime;
- (id)initWithUser:(id)arg1 userInfoServices:(id)arg2 userTooltipStatus:(id)arg3;

@end

