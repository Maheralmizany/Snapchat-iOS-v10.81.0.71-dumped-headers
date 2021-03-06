//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaWebViewDelegate-Protocol.h"

@class NSString, NSURL, SCOperaWebView;
@protocol SCWebScriptHelperDelegate;

@interface SCWebScriptHelper : NSObject <SCOperaWebViewDelegate>
{
    SCOperaWebView *_webviewInternal;
    NSURL *_linkToOpen;
    NSString *_websiteTitle;
    _Bool _onlyTitleNoPolling;
    double _startTime;
    int _state;
    id <SCWebScriptHelperDelegate> _delegate;
    NSString *_requestId;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) __weak id <SCWebScriptHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didUpdateProgress:(float)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)dealloc;
@property(retain) SCOperaWebView *webview;
@property(readonly, nonatomic) NSURL *openedUrl;
- (void)_documentReadyWithState:(int)arg1;
- (void)_checkState;
- (void)_pollState;
- (void)_stringByEvaluatingJavaScriptFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)scriptByEnclosingInFunction:(id)arg1;
- (void)evaluateScript:(id)arg1;
- (void)load:(id)arg1;
- (void)_openPageURL:(id)arg1;
- (void)openForTitle:(id)arg1;
- (void)openURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

