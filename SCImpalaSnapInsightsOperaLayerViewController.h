//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCEventListener-Protocol.h"
#import "SCImpalaShowProfilePresenterDelegate-Protocol.h"
#import "SCImpalaSnapInsightsOverlayActionHandling-Protocol.h"
#import "SCImpalaViewControllerProvider-Protocol.h"

@class NSArray, NSString, SCImpalaShowProfilePresenter, SCImpalaSnapInsightsV3OverlayView, SCSentinel, SCUserSession;
@protocol SCImpalaOperaLayerViewControllerDelegate, SCImpalaQuotingCameraPresenting, SCImpalaSnapInsightsChatPresenting, SCImpalaSnapInsightsProfilePresenterProviding, SCImpalaSnapInsightsReportPagePresenting, SCImpalaSnapInsightsSnapDeletionHandling;

@interface SCImpalaSnapInsightsOperaLayerViewController : UIViewController <SCImpalaViewControllerProvider, SCImpalaShowProfilePresenterDelegate, SCImpalaSnapInsightsOverlayActionHandling, SCEventListener>
{
    SCUserSession *_userSession;
    id <SCImpalaOperaLayerViewControllerDelegate> _operaDelegate;
    NSString *_profileId;
    NSString *_snapId;
    NSArray *_snaps;
    id <SCImpalaSnapInsightsSnapDeletionHandling> _snapDeletionHandler;
    id <SCImpalaSnapInsightsChatPresenting> _chatPresenter;
    id <SCImpalaSnapInsightsProfilePresenterProviding> _profilePresenterProvider;
    id <SCImpalaQuotingCameraPresenting> _quotingCameraPresenter;
    id <SCImpalaSnapInsightsReportPagePresenting> _reportPagePresenter;
    SCSentinel *_startInSwipedUpState;
    SCImpalaShowProfilePresenter *_presenter;
    SCImpalaSnapInsightsV3OverlayView *_overlayView;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (_Bool)showProfilePresenterSwipeUpEnabled:(id)arg1;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)viewController;
- (void)presentInsights;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 operaDelegate:(id)arg2 profileId:(id)arg3 snapId:(id)arg4 snaps:(id)arg5 snapDeletionHandler:(id)arg6 chatPresenter:(id)arg7 profilePresenterProvider:(id)arg8 quotingCameraPresenter:(id)arg9 reportPagePresenter:(id)arg10 startInSwipedUpState:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
