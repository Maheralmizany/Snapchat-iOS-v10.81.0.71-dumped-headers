//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacActionsMenuViewControllerActionDelegate-Protocol.h"
#import "SCCognacActionsMenuViewControllerViewDelegate-Protocol.h"
#import "SCCognacActionsMenuViewPresenting-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacSwipeTransitionPresenterDelegate-Protocol.h"

@class NSString, SCAppNotification, SCCognacActionsMenuViewController, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, SCOperaViewController;
@protocol SCCognacCypressProxy, SCCognacNotificationManager;

@interface SCCognacOperaActionsMenuSession : NSObject <SCCognacActionsMenuViewControllerActionDelegate, SCCognacActionsMenuViewControllerViewDelegate, SCCognacActionsMenuViewPresenting, SCCognacSwipeTransitionPresenterDelegate, SCCognacOperaSession>
{
    id <SCCognacNotificationManager> _notificationManager;
    SCAppNotification *_initiateNotification;
    SCCognacActionsMenuViewController *_actionsMenuViewController;
    SCCognacSwipeTransitionPresenter *_swipePresenter;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCOperaViewController *_operaVC;
    SCCognacOperaDataSource *_dataSource;
    id <SCCognacCypressProxy> _cypressProxy;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) id <SCCognacCypressProxy> cypressProxy; // @synthesize cypressProxy=_cypressProxy;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void).cxx_destruct;
- (void)_revokeInviteNotificationWithInvitedUserIds:(id)arg1;
- (void)_notificationDismissButtonPressed;
- (void)_sendInitiateNotificationWithUserIds:(id)arg1 userIdToDisplayNameMap:(id)arg2;
- (id)_notificationDismissView;
- (void)_inviteSnapchatters:(id)arg1;
- (CDUnknownBlockType)_ringFriendsCypressHandler;
- (void)cognacSwipeTransitionPresenterDidDismiss:(id)arg1;
- (void)presentActionsMenuScreen;
- (void)actionsMenuViewController:(id)arg1 didLongPressWithAppId:(id)arg2;
- (void)actionsMenuViewController:(id)arg1 didInviteSnapchatters:(id)arg2;
- (void)actionsMenuViewControllerIsDismissed:(id)arg1;
- (void)actionsMenuViewControllerIsPresented:(id)arg1;
- (id)registeredCypressHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)init;
- (void)logActionMenuProfileLongPressWithAppId:(id)arg1;
- (void)logInGameButtonTapEventWithButtonType:(long long)arg1;
- (void)logInGameInviteSentEventWithUserIdCount:(unsigned long long)arg1;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

