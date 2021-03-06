//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCLogInCredentialsPhoneNumber, SCLoginOdlvChallenge, SCLoginReactivationStatus, SCTwoFAContext;
@protocol SCAbuseWarningWorkflowDelegate, SCLogInCredentialsEntryDelegate, SCLoginOdlvLandingDelegate, SCLoginOdlvVerifyingDelegate, SCRecoverPasswordDelegate, SCTwoFADelegate;

@protocol SCLogInRouteActions <NSObject>
- (void)cancelPasswordRecovery;
- (void)removePasswordRecovery;
- (void)showPasswordRecoveryWithDelegate:(id <SCRecoverPasswordDelegate>)arg1 usernameOrEmail:(NSString *)arg2;
- (void)removeAbuseWarning;
- (void)showAbuseWarningWithId:(NSString *)arg1 message:(NSString *)arg2 delegate:(id <SCAbuseWarningWorkflowDelegate>)arg3;
- (void)removeTwoFAVerification;
- (void)showTwoFAVerification:(SCTwoFAContext *)arg1 delegate:(id <SCTwoFADelegate>)arg2;
- (void)showLoginOdlvVerifyingScreen:(id <SCLoginOdlvVerifyingDelegate>)arg1 challengge:(SCLoginOdlvChallenge *)arg2 otpTypeSelected:(unsigned long long)arg3 obfuscatedContact:(NSString *)arg4;
- (void)showLoginOdlvLandingScreen:(id <SCLoginOdlvLandingDelegate>)arg1 challenge:(SCLoginOdlvChallenge *)arg2;
- (void)showCredentialsEntryScreen:(id <SCLogInCredentialsEntryDelegate>)arg1 usernameOrEmail:(NSString *)arg2 phoneNumber:(SCLogInCredentialsPhoneNumber *)arg3 password:(NSString *)arg4 reactivationStatus:(SCLoginReactivationStatus *)arg5;
- (void)showCredentialsEntryScreen:(id <SCLogInCredentialsEntryDelegate>)arg1 usernameOrEmail:(NSString *)arg2 password:(NSString *)arg3 reactivationStatus:(SCLoginReactivationStatus *)arg4;
@end

