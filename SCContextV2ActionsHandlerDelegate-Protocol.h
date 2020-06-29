//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCTXGroupInviteAction, SCContextSnapReplyInfo, SCContextV2ActionsHandler;
@protocol SCContextActionTriggering;

@protocol SCContextV2ActionsHandlerDelegate <NSObject>
- (void)contextActionsHandlerWantsToDismissCurrentModalOverlay:(SCContextV2ActionsHandler *)arg1 completion:(void (^)(void))arg2;
- (void)contextActionsHandler:(SCContextV2ActionsHandler *)arg1 wantsToOpenReplyCameraWithReplyInfo:(SCContextSnapReplyInfo *)arg2 triggerInfo:(id <SCContextActionTriggering>)arg3;
- (void)contextActionsHandler:(SCContextV2ActionsHandler *)arg1 wantsToOpenGroupInviteFor:(SCCTXGroupInviteAction *)arg2 triggerInfo:(id <SCContextActionTriggering>)arg3;
- (void)contextActionsHandlerWantsToOpenChat:(SCContextV2ActionsHandler *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)contextActionsHandlerWantsToPresentDefaultSwipeUpContent:(SCContextV2ActionsHandler *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)contextActionsHandlerWantsToPresentContextCards:(SCContextV2ActionsHandler *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)contextActionsHandler:(SCContextV2ActionsHandler *)arg1 didLeaveAppSuccessfully:(_Bool)arg2;
- (void)contextActionsHandlerWillTryToLeaveApp:(SCContextV2ActionsHandler *)arg1;
- (void)contextActionsHandlerDidFinishPresentingMedia:(SCContextV2ActionsHandler *)arg1;
- (void)contextActionsHandlerDidBeginPresentingMedia:(SCContextV2ActionsHandler *)arg1;
- (void)contextActionsHandlerDidDismissModalContent:(SCContextV2ActionsHandler *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)contextActionsHandlerDidPresentModalContent:(SCContextV2ActionsHandler *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)contextActionsHandler:(SCContextV2ActionsHandler *)arg1 wantsToDismissContextCardsWithCompletion:(void (^)(void))arg2;

@optional
- (void)contextActionsHandlerWantsToExpandFromCollapsedState:(SCContextV2ActionsHandler *)arg1;
- (void)contextActionsHandler:(SCContextV2ActionsHandler *)arg1 wantsToRegisterExpansionStateListener:(void (^)(_Bool))arg2;
- (_Bool)contextActionsHandlerCardsShouldBeCollapsed:(SCContextV2ActionsHandler *)arg1;
@end

