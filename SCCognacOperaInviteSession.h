//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacFriendsListViewControllerDelegate-Protocol.h"
#import "SCCognacNudgeFriendPresenterDelegate-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacRingFriendsViewPresenting-Protocol.h"
#import "SCCognacSwipeTransitionPresenterDelegate-Protocol.h"

@class NSDictionary, NSString, SCAppNotification, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacFriendsListViewController, SCCognacNudgeFriendPresenter, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, SCOperaViewController;
@protocol SCCognacCypressProxy, SCCognacNotificationManager;

@interface SCCognacOperaInviteSession : NSObject <SCCognacSwipeTransitionPresenterDelegate, SCCognacNudgeFriendPresenterDelegate, SCCognacFriendsListViewControllerDelegate, SCCognacRingFriendsViewPresenting, SCCognacOperaSession>
{
    SCCognacNudgeFriendPresenter *_nudgeSingleFriendPresenter;
    SCCognacSwipeTransitionPresenter *_friendsPickerPresenter;
    SCCognacFriendsListViewController *_friendsListVC;
    id <SCCognacNotificationManager> _notificationManager;
    NSDictionary *_userIdToNameToDisplayMap;
    SCAppNotification *_initiateNotification;
    double _interactionViewHeight;
    double _inviteButtonCenterX;
    SCOperaViewController *_operaVC;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCCognacOperaDataSource *_dataSource;
    id <SCCognacCypressProxy> _cypressProxy;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) id <SCCognacCypressProxy> cypressProxy; // @synthesize cypressProxy=_cypressProxy;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void).cxx_destruct;
- (void)presentRingFriendsView;
- (void)friendsListViewController:(id)arg1 didRevokeInvitedFriendIds:(id)arg2;
- (void)friendsListViewController:(id)arg1 didInviteFriendIds:(id)arg2;
- (void)friendsListViewControllerDidDismiss:(id)arg1;
- (void)nudgeFriendPresenterWillDismissPresenter:(id)arg1;
- (void)nudgeFriendPresenterDidInviteFriend:(id)arg1;
- (void)cognacSwipeTransitionPresenterDidDismiss:(id)arg1;
- (id)registeredCypressHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (CDUnknownBlockType)_ringFriendsCypressHandler;
- (id)_availableFriendsToInvite:(id)arg1 presentUserIds:(id)arg2;
- (id)_availableFriendsToInvite:(id)arg1;
- (void)_revokeInviteNotificationWithInvitedUserIds:(id)arg1;
- (void)_notificationDismissButtonPressed;
- (void)_sendInitiateNotificationWithFriendIds:(id)arg1;
- (id)_notificationDismissView;
- (void)_inviteFriendsWithFriendIds:(id)arg1;
- (void)_launchFriendsListVC:(id)arg1;
- (void)_presentNudgeFriendViewWithViewModel:(id)arg1;
- (double)_nudgeSingleFriendPopoverViewBottomOffset;
- (void)clearInvitedFriends;
- (void)_fetchFriendsInConversationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)init;
- (void)logInGameButtonTapEvent:(long long)arg1;
- (void)logInGameInviteSentEventWithSelectedFriendsCount:(unsigned long long)arg1;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
