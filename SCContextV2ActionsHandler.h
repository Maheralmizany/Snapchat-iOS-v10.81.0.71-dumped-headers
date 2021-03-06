//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCCognacGameLauncherDataProvider-Protocol.h"
#import "SCContextActionHandling-Protocol.h"
#import "SCContextCTAViewContext-Protocol.h"
#import "SCContextCardsViewContext-Protocol.h"
#import "SCContextV2DeepLinkHandlerDelegate-Protocol.h"
#import "SCContextV2ModalDocumentViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, SCContextV2ComposerActionHandler, SCContextV2Session, SCLazy, UIViewController;
@protocol SCCGameLaunching><SCCognacComposerGameLauncher, SCCStoryPlayerPlaying, SCComposerNetworkingClientProtocol, SCContextComposerActionHandler, SCContextV2ActionsHandlerDelegate, SCContextV3ActionHandling, SCPageNameLogging;

@interface SCContextV2ActionsHandler : NSObject <SCContextV2ModalDocumentViewControllerDelegate, SCContextV2DeepLinkHandlerDelegate, SCCognacGameLauncherDataProvider, NSCopying, SCContextCTAViewContext, SCContextCardsViewContext, SCContextActionHandling>
{
    SCLazy *_suggestedFriendsService;
    id <SCContextV3ActionHandling> _v3ActionHandler;
    SCContextV2ComposerActionHandler<SCContextComposerActionHandler> *_actionHandler;
    _Bool _presentingModalContent;
    id <SCContextV2ActionsHandlerDelegate> _delegate;
    UIViewController<SCPageNameLogging> *_baseViewController;
    SCContextV2Session *_contextSession;
    id <SCCGameLaunching><SCCognacComposerGameLauncher> _gameLauncher;
    id <SCCStoryPlayerPlaying> _storyPlayer;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    NSNumber *_allowRelatedStories;
}

@property(retain, nonatomic) NSNumber *allowRelatedStories; // @synthesize allowRelatedStories=_allowRelatedStories;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> storyPlayer; // @synthesize storyPlayer=_storyPlayer;
@property(retain, nonatomic) id <SCContextComposerActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCCGameLaunching><SCCognacComposerGameLauncher> gameLauncher; // @synthesize gameLauncher=_gameLauncher;
@property(readonly, nonatomic) SCContextV2Session *contextSession; // @synthesize contextSession=_contextSession;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(readonly, nonatomic) _Bool presentingModalContent; // @synthesize presentingModalContent=_presentingModalContent;
@property(nonatomic) __weak id <SCContextV2ActionsHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)experiments;
- (double)getOverridePlaceholderIconTtlMs;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (_Bool)isGroupConversation;
- (id)conversationId;
- (void)_storyPlaybackDidEnd:(id)arg1;
- (void)_storyPlaybackDidBegin:(id)arg1;
- (void)deepLinkHandlerDidLeaveApp:(id)arg1 successfully:(_Bool)arg2;
- (void)deepLinkHandlerWillTryToLeaveApp:(id)arg1;
- (void)deepLinkHandlerDidDismissModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)deepLinkHandlerWillPresentModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)deepLinkHandler:(id)arg1 wantsToDismissContextCardsWithCompletion:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPresentingModalContent:(_Bool)arg1 triggerInfo:(id)arg2;
- (void)openPlainURL:(id)arg1;
- (void)tryToOpenURLsInOrder:(id)arg1 options:(long long)arg2 triggerInfo:(id)arg3 onFailure:(CDUnknownBlockType)arg4;
- (void)contextModalDocumentViewControllerDidDismiss:(id)arg1;
- (void)contextModalDocumentViewControllerWantsToDismissContextCards:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextModalDocumentViewController:(id)arg1 wantsToOpenGroupInviteFor:(id)arg2 triggerInfo:(id)arg3;
- (void)dismissModal:(id)arg1;
- (void)openURL:(id)arg1;
@property(readonly, nonatomic) SCLazy *suggestedFriendsService;
- (void)wantsToExpandFromCollapsedState;
- (void)registerExpansionStateListenerWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)shouldCardsBeInitiallyCollapsed;
- (void)presentRemoteDocumentModallyWithInfo:(id)arg1;
- (void)playUserStoryWithUsername:(id)arg1 userId:(id)arg2 baseView:(id)arg3;
- (void)playStoryWithToken:(id)arg1 baseView:(id)arg2 onLoadFinished:(CDUnknownBlockType)arg3;
- (void)performActionWithAction:(id)arg1;
- (void)openDefaultSwipeUpContentWithTriggerInfo:(id)arg1;
- (void)openGroupInvite:(id)arg1 triggerInfo:(id)arg2;
- (void)openReplyCameraWithReplyInfo:(id)arg1 triggerInfo:(id)arg2;
- (void)openReplyChatWithTriggerInfo:(id)arg1;
- (void)openContextCardsWithTriggerInfo:(id)arg1;
- (void)openURLWithUrlsInPriorityOrder:(id)arg1 triggerInfo:(id)arg2;
- (void)openURLWithUrlsInPriorityOrder:(id)arg1 tapMetrics:(id)arg2;
- (void)openDefaultSwipeUpContentWithTapMetrics:(id)arg1;
- (void)openReplyCameraWithTapMetrics:(id)arg1;
- (void)openReplyChatWithTapMetrics:(id)arg1;
- (void)openContextWithTapMetrics:(id)arg1;
- (id)initWithSession:(id)arg1 baseViewController:(id)arg2 suggestedFriendsService:(id)arg3 v3ActionHandler:(id)arg4;
- (id)initWithSession:(id)arg1 baseViewController:(id)arg2 suggestedFriendsService:(id)arg3 v3ActionHandlerProvider:(id)arg4 actionParams:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

