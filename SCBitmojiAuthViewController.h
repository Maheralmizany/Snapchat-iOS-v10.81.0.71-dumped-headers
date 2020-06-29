//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SCDeepLinkURL, SCLazy, SCLoadingIndicatorView, SCUserSession;

@interface SCBitmojiAuthViewController : UIViewController
{
    SCLazy *_eventLogger;
    SCDeepLinkURL *_authDeepLink;
    SCUserSession *_userSession;
    NSString *_approvalToken;
    SCLoadingIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)_goToBitmojiApp;
- (void)_goToBitmojiAppWithRedirectUri:(id)arg1 authCode:(id)arg2 state:(id)arg3;
- (void)_showErrorMessage:(id)arg1;
- (void)_sendDenialRequest;
- (void)_sendApprovalRequest;
- (void)_verifyAuthRequest;
- (void)_didDenyAuthorization;
- (void)_didConfirmAuthorization;
- (void)_showConfirmAuthorizationAlert;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAuthDeepLink:(id)arg1 userSession:(id)arg2;

@end

