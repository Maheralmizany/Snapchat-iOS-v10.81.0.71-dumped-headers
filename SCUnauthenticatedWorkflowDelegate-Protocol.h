//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCUserSession, SOJULoginResponse;

@protocol SCUnauthenticatedWorkflowDelegate <NSObject>
- (void)userCompletedLogInWithUserSession:(SCUserSession *)arg1 logInResponse:(SOJULoginResponse *)arg2;
- (void)userCompletedRegistrationWithUserSession:(SCUserSession *)arg1 registrationResponse:(SOJULoginResponse *)arg2;
@end

