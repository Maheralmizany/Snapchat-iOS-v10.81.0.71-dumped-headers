//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCArroyoGroupFilterer, SCLegacySendToUIContainer, SCScopedAccess, SCSendToTransitionProvider, SCUserSession, Story, UIViewController;
@protocol SCSearchStoryShareSessionDelegate, SCSendPreviewViewModel, SCSendToScreen;

@interface SCSearchStoryShareSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCLegacySendToWorkflowDelegate>
{
    SCUserSession *_userSession;
    Story *_story;
    NSString *_dynamicStoryId;
    UIViewController<SCSendToScreen> *_sendVC;
    SCSendToTransitionProvider *_transitionProvider;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    id <SCSendPreviewViewModel> _previewViewModel;
    SCScopedAccess *_sendToLauncher;
    SCLegacySendToUIContainer *_sendToUIContainer;
    id <SCSearchStoryShareSessionDelegate> _delegate;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCSearchStoryShareSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_sendArroyoStoryShareToConversations:(id)arg1 additionalText:(id)arg2 platformAnalytics:(id)arg3 additionalTextPlatformAnalytics:(id)arg4;
- (void)dismissSendViewController:(id)arg1;
- (void)leftButtonPressed;
- (id)customDismissalAnimator;
- (void)_sendMessageToRecipients:(id)arg1 groups:(id)arg2 appStories:(id)arg3 additionalText:(id)arg4;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (void)_launchLegacySendToScopeFromViewController:(id)arg1;
- (void)send;
- (id)initWithUserSession:(id)arg1 dynamicStory:(id)arg2 coverImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

