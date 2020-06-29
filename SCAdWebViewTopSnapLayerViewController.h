//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCAdWebViewTopSnapJSBridgeDelegate-Protocol.h"
#import "SCAdWebViewTopSnapLayerViewDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCWkWebViewWrapperDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSMutableSet, NSString, NSTimer, SCAdWebViewTopSnapJSBridge, SCAdWebViewTopSnapLayerView, SCOperaViewInteraction, SCOperaWebView, SCWkWebViewWrapper, SKStoreProductViewController;

@interface SCAdWebViewTopSnapLayerViewController : SCOperaLayerViewController <SCAdWebViewTopSnapLayerViewDelegate, SCAdWebViewTopSnapJSBridgeDelegate, SKStoreProductViewControllerDelegate, SCOperaEventListener, SCWkWebViewWrapperDelegate, SCOperaLayerViewControllerMediaContainer>
{
    SCOperaWebView *_webView;
    SCAdWebViewTopSnapLayerView *_layerView;
    SCAdWebViewTopSnapJSBridge *_jsBridge;
    _Bool _isFullyVisible;
    SCOperaViewInteraction *_lastInteraction;
    NSDate *_didStartLoadingTimestamp;
    NSDate *_didFinishLoadingTimestamp;
    NSDate *_didFullyAppearTimestamp;
    NSDate *_didFullyDisappearTimestamp;
    double _cookieParseTimeMillis;
    double _totalLoadTimeMillis;
    NSString *_errorReason;
    NSString *_errorMessage;
    _Bool _didFinishLoading;
    NSTimer *_loadingTimeoutTimer;
    SKStoreProductViewController *_appStoreViewController;
    _Bool _enableSwipeUpToDeepLinkAttachment;
    SCWkWebViewWrapper *_deepLinkFallbackWebviewWrapper;
    NSMutableArray *_candidateDeepLinkURLs;
    NSMutableSet *_visitedDeepLinkURLs;
    _Bool _deepLinkToAppSucceeded;
    _Bool _deepLinkFellBackToAppStore;
    _Bool _deepLinkFellBackToWebview;
}

+ (id)_registeredEventsForOperaSession;
- (void).cxx_destruct;
- (void)_resetDeepLinkMetrics;
- (id)_configDict:(id)arg1;
- (void)_loadUrlRequest;
- (void)_initAndLoadWebview:(id)arg1;
- (void)_didInterceptDeeplinkURL:(id)arg1 success:(_Bool)arg2;
- (void)_deeplinkFallback;
- (void)_openNextDeeplinkCandidate;
- (void)_presentStoreProductVCModally;
- (void)_initStoreProductVC;
- (void)openUrl:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)onError:(id)arg1 errorReason:(id)arg2 errorMessage:(id)arg3;
- (void)onLoaded:(id)arg1 cookieParseTimeMillis:(double)arg2 totalLoadTimeMillis:(double)arg3;
- (void)didTapAdWebViewTopSnapLayerView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)currentViewParameters;
- (_Bool)canHandleRoundCorner;
- (void)teardown;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

