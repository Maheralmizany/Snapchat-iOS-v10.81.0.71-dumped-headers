//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TwoFASettingCodeVerificationViewController.h"

#import "SCPageNameLogging-Protocol.h"

@class NSString, SCUserInfoServices, SCUserSession;

@interface TwoFAOtpSettingsViewController : TwoFASettingCodeVerificationViewController <SCPageNameLogging>
{
    NSString *_srcFlowName;
    NSString *_otpSecret;
    SCUserSession *_userSession;
    SCUserInfoServices *_userInfoServices;
}

- (void).cxx_destruct;
- (void)verifySucceed:(id)arg1 recoveryCode:(id)arg2;
- (void)verifyPressed:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)leftButtonPressed:(id)arg1;
- (id)initWithSourceFlowName:(id)arg1 otpSecret:(id)arg2 userSession:(id)arg3 userInfoServices:(id)arg4;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

