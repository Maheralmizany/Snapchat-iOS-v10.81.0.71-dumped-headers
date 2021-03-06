//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsFullscreenViewOutput-Protocol.h"
#import "SCBloopsReenactmentServiceOutput-Protocol.h"
#import "SCBloopsReportPresenterDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCWebBrowserDelegate-Protocol.h"

@class NSString, SCBloopsFullscreenDataSource, SCLazy, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaViewController, SCUserSession, UIView;
@protocol SCBloopsFullscreenPresenterDelegate;

@interface SCBloopsFullscreenPresenter : NSObject <SCOperaEventListener, SCBloopsReenactmentServiceOutput, SCWebBrowserDelegate, SCBloopsReportPresenterDelegate, SCBloopsFullscreenViewOutput>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCBloopsFullscreenDataSource *_dataSource;
    _Bool _isInPresentationAnimation;
    UIView *_sourceView;
    CDUnknownBlockType _presentationCompletionHandler;
    NSString *_sourcePageName;
    SCLazy *_reenactmentService;
    SCLazy *_reportPresenter;
    _Bool _keepMuteOverrideOnDismiss;
    _Bool _autoAdvance;
    _Bool _autoPageAnimationEnabled;
    id <SCBloopsFullscreenPresenterDelegate> _delegate;
}

@property(nonatomic) _Bool autoPageAnimationEnabled; // @synthesize autoPageAnimationEnabled=_autoPageAnimationEnabled;
@property(nonatomic) _Bool autoAdvance; // @synthesize autoAdvance=_autoAdvance;
@property(nonatomic) _Bool keepMuteOverrideOnDismiss; // @synthesize keepMuteOverrideOnDismiss=_keepMuteOverrideOnDismiss;
@property(nonatomic) __weak id <SCBloopsFullscreenPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showReportViewController;
- (void)_openUrl:(id)arg1;
- (unsigned long long)_pageIndexFromModel:(id)arg1;
- (void)_didStartToBrowseFromContext:(id)arg1;
- (id)_operaConfigurationForRootViewModel:(id)arg1;
- (void)_setupOperaVC;
- (void)bloopsReportPresenterDidCancel:(id)arg1;
- (void)bloopsReportPresenterDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)webBrowserDidFinalizeJavaScriptMetrics:(id)arg1;
- (void)webBrowserDidRedirect:(id)arg1;
- (void)webBrowser:(id)arg1 didFinishLoadWithSuccess:(_Bool)arg2;
- (void)webBrowserDidDismiss:(id)arg1;
- (void)bloopsFullscreenView:(id)arg1 didFinishLoopOfVideo:(long long)arg2;
- (void)bloopsFullscreenView:(id)arg1 didChangePlayingState:(_Bool)arg2;
- (void)bloopsReenactmentService:(id)arg1 didFailReenactmentResultForModel:(id)arg2 withError:(id)arg3;
- (void)bloopsReenactmentService:(id)arg1 isReadyToShowReenactmentResult:(id)arg2;
- (id)_registeredEventsForOperaSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)dismissFullscreenWithAnimation:(_Bool)arg1;
- (void)presentOperaFromViewController:(id)arg1 sourcePageName:(id)arg2 sourceView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithItems:(id)arg1 reenactmentService:(id)arg2 reportPresenter:(id)arg3 initialIndex:(unsigned long long)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

