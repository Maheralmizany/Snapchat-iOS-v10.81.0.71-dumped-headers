//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCGroupInviteEditorViewControllerDelegate-Protocol.h"
#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCGroupInvite, SCGroupInviteEditorViewController, SCLegacySendToUIContainer, SCSendToTransitionProvider, SCUserFeatureLauncher, SCUserSession, UIViewController;

@interface SCMyUnifiedProfileEventsSectionActionHandler : NSObject <SCGroupInviteEditorViewControllerDelegate, SCSendToDelegate, SCSendToNavigationDelegate, SCTraceEnabled, SCLegacySendToWorkflowDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCGroupInviteEditorViewController *_currentEditorViewController;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCGroupInvite *_lastCreatedInvite;
    SCUserFeatureLauncher *_legacySendToLauncher;
    SCLegacySendToUIContainer *_uiContainer;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)_sendInviteToRecipients:(id)arg1 groups:(id)arg2;
- (void)_actuallyShowSendToFromBaseVC:(id)arg1;
- (void)_showSendToFromBaseViewController:(id)arg1;
- (void)_showLeaveEventPromptWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showPreSendConfidentialityPromptWithCompletion:(CDUnknownBlockType)arg1;
- (void)groupStickerEditorDidCancel:(id)arg1;
- (_Bool)groupStickerEditor:(id)arg1 shouldDismissEditingStickerForInvite:(id)arg2;
- (void)_leaveEventWithGroupInvite:(id)arg1;
- (void)_presentEventDetail:(id)arg1;
- (void)_presentEventCreationViewController;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

