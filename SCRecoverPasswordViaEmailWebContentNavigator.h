//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRecoverPasswordViaEmailWebContentNavigator-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;
@protocol SCRecoverPasswordViaEmailWebContentNavigationDelegate;

@interface SCRecoverPasswordViaEmailWebContentNavigator : NSObject <WKNavigationDelegate, SCRecoverPasswordViaEmailWebContentNavigator>
{
    WKWebView *_webView;
    id <SCRecoverPasswordViaEmailWebContentNavigationDelegate> _delegate;
}

@property(nonatomic) __weak id <SCRecoverPasswordViaEmailWebContentNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)_navigationStatusFromWebView:(id)arg1;
- (void)goBack;
- (void)goForward;
- (void)refresh;
- (id)initWithWebView:(id)arg1 URL:(id)arg2;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

