//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCRegisterEmailV2ViewDelegate-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCAuthenticatedPhoneManager, SCEmailManager, SCRegisterEmailV2View, SCScopedAccess, SCUserSession;

@interface SCRegisterEmailV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCRegisterEmailV2ViewDelegate, SCPageNameLogging>
{
    SCRegisterEmailV2View *_registerEmailView;
    _Bool _hasSuggstedDomain;
    SCUserSession *_userSession;
    SCEmailManager *_emailManager;
    SCAuthenticatedPhoneManager *_authenticatedPhoneManager;
    SCScopedAccess *_stateTransitionLogger;
    _Bool _isResumingRegistration;
    _Bool _loginVerifyFlow;
    NSDictionary *_context;
}

@property(nonatomic) _Bool loginVerifyFlow; // @synthesize loginVerifyFlow=_loginVerifyFlow;
@property(nonatomic) _Bool isResumingRegistration; // @synthesize isResumingRegistration=_isResumingRegistration;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)pageViewName;
- (id)_pageNameForPageView;
- (_Bool)_isInvalidEmail:(id)arg1;
- (id)_getPotentialDomain:(id)arg1;
- (_Bool)_suggestEmailIfNecessary:(id)arg1;
- (void)_postRegistrationFlow;
- (void)_presentPhoneVerify;
- (void)continueButtonClicked;
- (void)onSkipPressed;
- (void)phoneSignupButtonPressed;
- (void)backButtonPressed:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

