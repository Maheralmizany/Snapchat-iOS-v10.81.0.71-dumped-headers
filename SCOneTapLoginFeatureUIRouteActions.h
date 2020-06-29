//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginRouteActions-Protocol.h"

@class NSString, SCBusinessLogicHarness, SCScopeExposer;
@protocol SCUIContainer;

@interface SCOneTapLoginFeatureUIRouteActions : NSObject <SCOneTapLoginRouteActions>
{
    id <SCUIContainer> _otlUIContainer;
    SCScopeExposer *_abuseWarningScopeExposer;
    SCScopeExposer *_twoFAScopeExposer;
    SCBusinessLogicHarness *_oneTapLoginLandingPageBusinessLogicHarness;
}

- (void).cxx_destruct;
- (void)removeAbuseWarning;
- (void)showAbuseWarningWithId:(id)arg1 message:(id)arg2 delegate:(id)arg3;
- (void)removeTwoFAVerification;
- (void)showTwoFAVerification:(id)arg1 delegate:(id)arg2;
- (void)showOneTapLoginLandingPage:(id)arg1 loginButtonTitle:(id)arg2 avatar:(id)arg3 hasBitmoji:(_Bool)arg4 reactivationStatus:(id)arg5 oneTapLoginAuthenticator:(id)arg6 applicationLoginLogger:(id)arg7 loginStateTransitionLogger:(id)arg8 oneTapLoginLogger:(id)arg9 delegate:(id)arg10;
- (id)initWithUIContainer:(id)arg1 abuseWarningScopeExposer:(id)arg2 twoFAScopeExposer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
