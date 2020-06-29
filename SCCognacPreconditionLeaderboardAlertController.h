//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacPreconditionAlertController-Protocol.h"
#import "SCCognacSettingsListViewControllerDismissDelegate-Protocol.h"
#import "SCCognacSwipeTransitionPresenterDelegate-Protocol.h"

@class NSString, SCAlertView, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacSettingsListViewController, SCCognacSwipeTransitionPresenter, UIViewController;
@protocol SCCognacPreconditionAlertControllerDelegate;

@interface SCCognacPreconditionLeaderboardAlertController : NSObject <SCCognacSettingsListViewControllerDismissDelegate, SCCognacSwipeTransitionPresenterDelegate, SCCognacPreconditionAlertController>
{
    SCCognacOperaDataSource *_operaDataSource;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    UIViewController *_presentingViewController;
    SCAlertView *_leaderboardAlertView;
    SCCognacSettingsListViewController *_settingsViewController;
    SCCognacSwipeTransitionPresenter *_settingsViewControllerPresenter;
    id <SCCognacPreconditionAlertControllerDelegate> _delegate;
    long long _leaderboardAlertType;
}

@property(readonly, nonatomic) long long leaderboardAlertType; // @synthesize leaderboardAlertType=_leaderboardAlertType;
@property(nonatomic) __weak id <SCCognacPreconditionAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)alertType;
- (void)logAlertEventWithEventName:(id)arg1;
- (long long)loggingAlertType;
- (void)_presentSettings;
- (void)_presentLeaderboardAlert;
- (id)_makeLeaderboardAlertTitle;
- (CDUnknownBlockType)_makeAlertConfiguration;
- (void)_dismissCurrentAlert;
- (void)cognacSwipeTransitionPresenterDidDismiss:(id)arg1;
- (void)settingsListViewControllerDidDismiss:(id)arg1;
- (void)dismissAlert;
- (_Bool)presentAlert;
- (_Bool)isPresentingAlert;
- (id)initWithLeaderboardAlertType:(long long)arg1 operaDataSource:(id)arg2 viewLifeCycleAnnouncer:(id)arg3 presentingViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

