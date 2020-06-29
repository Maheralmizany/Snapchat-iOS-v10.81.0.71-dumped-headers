//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRecoverPasswordRouteActions-Protocol.h"

@class SCBusinessLogicHarness, SCIdentityLoggerServices, SCRecoverPasswordAlert, SCScopeExposer, UIViewController, UIWindow;
@protocol SCUIContainer;

@interface SCRecoverPasswordUIRouteActions : NSObject <SCRecoverPasswordRouteActions>
{
    UIWindow *_window;
    id <SCUIContainer> _parentUIContainer;
    _Bool _hasAttachedUI;
    UIViewController<SCUIContainer> *_uiContainer;
    SCIdentityLoggerServices *_loggerServices;
    SCBusinessLogicHarness *_recoverPasswordAlertHarness;
    SCBusinessLogicHarness *_recoverPasswordViaEmailHarness;
    SCBusinessLogicHarness *_recoverPasswordPhoneEntryBusinessLogicHarness;
    SCBusinessLogicHarness *_chooseNewPasswordHarness;
    SCRecoverPasswordAlert *_recoverPasswordAlert;
    SCScopeExposer *_phoneCodeScopeExposer;
}

- (void).cxx_destruct;
- (void)_attachUIIfNecessary;
- (void)removePasswordResetSuccessScreen;
- (void)showPasswordResetSuccessScreen:(id)arg1;
- (void)removeChooseNewPasswordScreen;
- (void)showChooseNewPasswordScreenWithPasswordResetToken:(id)arg1 usernameOrEmail:(id)arg2 delegate:(id)arg3;
- (void)removePhoneCodeEntryScreen;
- (void)showPhoneCodeEntryScreenForPhoneReceivingCode:(id)arg1 initialPhoneCodeDeliveryMechanism:(unsigned long long)arg2 usernameOrEmail:(id)arg3 passwordResetToken:(id)arg4 delegate:(id)arg5;
- (void)removeRecoverPasswordViaEmailScreen;
- (void)showRecoverPasswordViaEmailWithDelegate:(id)arg1 usernameOrEmail:(id)arg2;
- (void)removePhoneEntryScreen;
- (void)showRecoverPasswordPhoneEntryWithDelegate:(id)arg1 phoneNumber:(id)arg2 usernameOrEmail:(id)arg3;
- (void)removeRecoverPasswordAlert;
- (void)showRecoverPasswordAlertWithDelegate:(id)arg1 usernameOrEmail:(id)arg2 logger:(id)arg3;
- (id)initWithParentUIContainer:(id)arg1 window:(id)arg2 phoneCodeScopeExposer:(id)arg3 loggerServices:(id)arg4;

@end
