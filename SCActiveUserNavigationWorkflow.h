//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavigationDelegate-Protocol.h"
#import "NavigationPageState-Protocol.h"
#import "SCActiveUserRouterInteractionDelegate-Protocol.h"
#import "SCApplicationLifecycleNavigationHandler-Protocol.h"
#import "SCCameraViewControllerDelegate-Protocol.h"
#import "SCHeaderButtonDelegate-Protocol.h"
#import "SCInAppNotificationInteractionDelegate-Protocol.h"
#import "SCPremiumFeedNavigationDelegate-Protocol.h"
#import "SCSearchV2WorkflowDelegate-Protocol.h"
#import "SCStartChatDelegate-Protocol.h"
#import "SCTCKNavigationServices-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSString, SCDeepLinkURL, SCLazy, SCStartChatIdentifier, SCUserSession, UIViewController;
@protocol SCActiveUserRouter, SCNavigationState, SCTimeProviding, SCUserNavigationLaunchObserver;

@interface SCActiveUserNavigationWorkflow : NSObject <NavigationDelegate, NavigationPageState, SCApplicationLifecycleNavigationHandler, SCTCKNavigationServices, SCHeaderButtonDelegate, SCInAppNotificationInteractionDelegate, SCPremiumFeedNavigationDelegate, SCStartChatDelegate, SCCameraViewControllerDelegate, SendSnapNavigationControllerDelegate, SCActiveUserRouterInteractionDelegate, SCTraceEnabled, SCSearchV2WorkflowDelegate>
{
    id <SCNavigationState> _navigationState;
    id <SCUserNavigationLaunchObserver> _launchObserver;
    id <SCTimeProviding> _timeProvider;
    UIViewController *_containerViewController;
    double _deviceUptimeWhenBackgrounded;
    id <SCActiveUserRouter> _router;
    SCUserSession *_userSession;
    SCLazy *_lensUnlockActivation;
    SCStartChatIdentifier *_legacyCurrentConversationId;
    SCDeepLinkURL *_legacyCurrentConversationDeepLinkURL;
    long long _legacyCurrentConversationSourceType;
    long long _legacyCurrentConversationEntryEvent;
    NSString *_legacyCurrentConversationSubpageName;
}

@property(copy, nonatomic) NSString *legacyCurrentConversationSubpageName; // @synthesize legacyCurrentConversationSubpageName=_legacyCurrentConversationSubpageName;
@property(nonatomic) long long legacyCurrentConversationEntryEvent; // @synthesize legacyCurrentConversationEntryEvent=_legacyCurrentConversationEntryEvent;
@property(nonatomic) long long legacyCurrentConversationSourceType; // @synthesize legacyCurrentConversationSourceType=_legacyCurrentConversationSourceType;
@property(retain, nonatomic) SCDeepLinkURL *legacyCurrentConversationDeepLinkURL; // @synthesize legacyCurrentConversationDeepLinkURL=_legacyCurrentConversationDeepLinkURL;
@property(retain, nonatomic) SCStartChatIdentifier *legacyCurrentConversationId; // @synthesize legacyCurrentConversationId=_legacyCurrentConversationId;
@property(readonly, nonatomic) __weak SCLazy *lensUnlockActivation; // @synthesize lensUnlockActivation=_lensUnlockActivation;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak id <SCActiveUserRouter> router; // @synthesize router=_router;
- (void).cxx_destruct;
- (void)searchV2WorkflowDidEnd;
- (void)userDidPanToMemories:(_Bool)arg1;
- (void)userBeganPanningToMemories;
- (void)userDidPanToSearch:(_Bool)arg1;
- (void)userBeganPanningToSearch;
- (void)userDidPanToAddFriends:(_Bool)arg1;
- (void)userBeganPanningToAddFriends;
- (void)userDidPanToPremiumFeed:(_Bool)arg1;
- (void)userBeganPanningToPremiumFeed;
- (void)userDidPanToMap:(_Bool)arg1;
- (void)userBeganPanningToMap;
- (void)userDidPanToDiscoverFeed:(_Bool)arg1;
- (void)userBeganPanningToDiscoverFeed;
- (void)userDidPanToFriendsFeed:(_Bool)arg1;
- (void)userBeganPanningToFriendsFeed;
- (void)userDidPanToCamera:(_Bool)arg1;
- (void)userBeganPanningToCamera;
- (_Bool)_shouldSkipNavigateToChatBecauseConvoAlreadyOpened:(id)arg1;
- (void)_handleODGNotification:(id)arg1;
- (void)_impalaNotificationHandlerDataReady:(id)arg1;
- (void)_handleImpalaNotification:(id)arg1;
- (void)userPressedNotification:(id)arg1;
- (id)_popWhile:(CDUnknownBlockType)arg1 becauseOfEvent:(unsigned long long)arg2;
- (void)userForegroundedApp;
- (void)userBackgroundedApp;
- (void)begin;
- (id)initWithRouter:(id)arg1 containerViewController:(id)arg2 userSession:(id)arg3 navigationState:(id)arg4 launchObserver:(id)arg5 timeProvider:(id)arg6 lensUnlockActivation:(id)arg7;
- (void)_handleDiscoverDeeplinkURL:(id)arg1 additionalInfo:(id)arg2;
- (void)_handleMapDeepLink:(id)arg1;
- (void)_handleDeepLinkSnap3D;
- (void)_handleDeeplinkCommerce:(id)arg1;
- (void)_handleDeepLinkLenses:(id)arg1;
- (_Bool)_handleDeepLinkVCInfo:(id)arg1;
- (void)_handleDeepLinkURL:(id)arg1 additionalInfo:(id)arg2;
- (id)visibleViewController;
- (void)presentOnCurrentVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3;
- (void)presentMiddleVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentFarLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3;
- (id)profileTransitionCoordinator;
- (_Bool)isAtFarLeft;
- (_Bool)canPerformNavigation;
- (_Bool)isAnimatingScroll;
- (unsigned long long)visiblePageType;
- (void)handleApplicationWillEnterForegroundFromCallIntent:(id)arg1 convoMetadata:(id)arg2 isVideo:(_Bool)arg3;
- (void)handleApplicationWillEnterForegroundFromNotification:(id)arg1;
- (void)handleApplicationDidEnterBackground;
- (void)handleActionedAppNotification:(id)arg1;
- (void)handleActionedShortcutItem:(id)arg1;
- (void)didTapAddFriendsHeaderButtonWithPlacementType:(long long)arg1;
- (void)didTapSearchHeaderButton;
- (void)didTapProfileHeaderButton;
- (_Bool)_cognacHandledDismissedInAppNotification:(id)arg1;
- (_Bool)_cognacHandledPressedInAppNotification:(id)arg1;
- (void)handleInAppNotificationDismissed:(id)arg1;
- (void)handleInAppNotificationPressed:(id)arg1;
- (void)navigateToPremiumFeedWithBadgeMetadata:(id)arg1;
- (void)navigateToPremiumFeed;
- (void)setConversationByChatIdentifier:(id)arg1 deepLinkURL:(id)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 subpageName:(id)arg5;
- (id)presentChatViewWithPannableCellController:(id)arg1;
- (void)navigateToChatViewAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3;
- (void)navigateToChatViewAnimated:(_Bool)arg1;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3 showStatusBar:(_Bool)arg4;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleSearchBarAndBitmojiVisibility:(_Bool)arg1;
- (void)toggleTimerMode:(_Bool)arg1;
- (void)didBeginRecording;
- (_Bool)isAppInLowPowerMode:(id)arg1;
- (void)leftCameraBackButtonPressed;
- (void)didPostStory;
- (void)didSendToGallery;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didCancelFromPreview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

