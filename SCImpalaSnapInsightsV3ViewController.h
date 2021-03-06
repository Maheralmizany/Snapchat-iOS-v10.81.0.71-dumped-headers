//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCImpalaInteractiveDismissalDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSArray, NSString, SCImpalaSnapInsightsSnapInsightsContext, SCImpalaSnapInsightsV3View, SCUserSession;
@protocol SCImpalaQuotingCameraPresenting, SCImpalaSnapInsightsChatPresenting, SCImpalaSnapInsightsOperaActionHandling, SCImpalaSnapInsightsProfilePresenterProviding, SCImpalaSnapInsightsReportPagePresenting, SCImpalaSnapInsightsSnapActionHandling;

@interface SCImpalaSnapInsightsV3ViewController : UIViewController <SCImpalaInteractiveDismissalDelegate, SCPageNameLogging>
{
    SCUserSession *_userSession;
    NSString *_profileId;
    NSString *_snapId;
    NSArray *_snaps;
    id <SCImpalaSnapInsightsOperaActionHandling> _operaActionHandler;
    id <SCImpalaSnapInsightsSnapActionHandling> _snapActionHandler;
    id <SCImpalaSnapInsightsChatPresenting> _chatPresenter;
    id <SCImpalaSnapInsightsProfilePresenterProviding> _profilePresenterProvider;
    id <SCImpalaQuotingCameraPresenting> _quotingCameraPresenter;
    id <SCImpalaSnapInsightsReportPagePresenting> _reportPagePresenter;
    SCImpalaSnapInsightsV3View *_view;
    SCImpalaSnapInsightsSnapInsightsContext *_context;
}

- (void).cxx_destruct;
- (id)pageViewName;
- (_Bool)shouldBeginInteractiveDismissal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 profileId:(id)arg2 snapId:(id)arg3 snaps:(id)arg4 operaActionHandler:(id)arg5 snapActionHandler:(id)arg6 chatPresenter:(id)arg7 profilePresenterProvider:(id)arg8 quotingCameraPresenter:(id)arg9 reportPagePresenter:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

