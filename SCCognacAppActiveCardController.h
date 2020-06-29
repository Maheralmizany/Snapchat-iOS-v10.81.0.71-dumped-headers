//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatInputStateListener-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"
#import "SCCognacAppActiveCardViewDelegate-Protocol.h"
#import "SCCognacChatDockTransitionAnimatorDataSource-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCTV3ActiveConversationsListener-Protocol.h"
#import "SCTV3CallStateListener-Protocol.h"

@class NSString, SCChatInputViewController, SCChatViewLifeCycleListenerAnnouncer, SCCognacAppActiveCardDataModel, SCCognacAppActiveCardEligibility, SCCognacAppActiveCardView, SCCognacDataStorage, SCCognacImageDownloader, SCCognacSnapchatterService, UITapGestureRecognizer, UIView;
@protocol SCCognacAppActiveCardControllerDelegate, SCTalkManager;

@interface SCCognacAppActiveCardController : NSObject <SCChatViewLifeCycleListener, SCEventListener, SCChatInputStateListener, SCTV3CallStateListener, SCTV3ActiveConversationsListener, SCCognacAppActiveCardViewDelegate, SCCognacChatDockTransitionAnimatorDataSource>
{
    NSString *_conversationId;
    _Bool _isGroupConversation;
    SCChatViewLifeCycleListenerAnnouncer *_chatViewLifeCycleAnnouncer;
    UIView *_chatContainerView;
    SCChatInputViewController *_chatInputViewController;
    SCCognacImageDownloader *_imageDownloader;
    SCCognacAppActiveCardEligibility *_appActiveCardEligibility;
    id <SCTalkManager> _talkManager;
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacSnapchatterService *_cognacSnapchatterService;
    _Bool _shouldSuppressKeyboardTemporarily;
    SCCognacAppActiveCardDataModel *_appActiveCardDataModel;
    UIView *_appActiveCardDimmingView;
    UITapGestureRecognizer *_appActiveCardDimmingViewTapGestureRecognizer;
    SCCognacAppActiveCardView *_appActiveCardView;
    long long _appActiveCardViewPresenceTextSequenceNumber;
    id <SCCognacAppActiveCardControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacAppActiveCardControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_presenceTextForSnapchatters:(id)arg1 appType:(unsigned long long)arg2;
- (id)_displayNameForSnapchatter:(id)arg1;
- (id)_cognacParticipantsWithConversationId:(id)arg1;
- (void)_dismissAppActiveCardViewWithAnimationDuration:(double)arg1;
- (void)_updateAppActiveCardViewPresenceTextForAppActiveCardDataModel:(id)arg1;
- (void)_showAppActiveCardViewForAppActiveCardDataModel:(id)arg1 withAnimationDuration:(double)arg2 animationDelay:(double)arg3;
- (_Bool)_isShowingAppActiveCardView;
- (void)_handleAppActiveCardDimmingViewTapGestureRecognizer:(id)arg1;
- (void)_dismissAppActiveCardDimmingViewWithAnimationDuration:(double)arg1;
- (void)_showAppActiveCardDimmingViewWithAnimationDuration:(double)arg1 animationDelay:(double)arg2;
- (_Bool)_isShowingAppActiveCardDimmingView;
- (id)_generateAppActiveCardDataModelToDisplay;
- (void)_resetAppActiveCardAndKeyboardSuppressionForChatDockTransition;
- (void)_resetAppActiveCardAndKeyboardSuppression;
- (void)_resetAppActiveCardWithAppActiveCardDimmingViewAnimationDuration:(double)arg1 appActiveCardViewAnimationDuration:(double)arg2 shouldHideAppActiveCardBannerView:(_Bool)arg3;
- (void)_resetAppActiveCardDataModel;
- (void)cognacAppActiveCardViewDidPressJoinButton:(id)arg1;
- (void)cognacAppActiveCardViewDidPressNotNowButton:(id)arg1;
- (void)onActiveConversationsChanged;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)onOutgoingCallStarted;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallCancelled;
- (void)onIncomingCallWatched;
- (void)onIncomingCallStarted;
- (void)onIncomingCallReceived;
- (void)onIncomingCallCancelled;
- (void)onCallWatched;
- (void)onCallEnded;
- (void)inputViewController:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)inputViewController:(id)arg1 willTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)viewDidSwipeOut;
- (void)viewDidFullyDisappear;
- (struct CGRect)cognacChatDockTransitionAnimator:(id)arg1 animationSourceViewFrameForContainerView:(id)arg2;
- (id)cognacChatDockTransitionAnimatorAnimationSourceView:(id)arg1;
- (id)baseViewForAppPresentation;
- (void)dismissAppActiveCardForChatDockTransition;
- (void)dismissAppActiveCard;
- (_Bool)isShowingAppActiveCard;
- (_Bool)shouldSuppressKeyboard;
- (void)chatViewWillBecomeVisible;
- (void)setConversationId:(id)arg1 isGroupConversation:(_Bool)arg2;
- (void)dealloc;
- (id)initWithChatViewLifeCycleAnnouncer:(id)arg1 chatContainerView:(id)arg2 chatInputViewController:(id)arg3 imageDownloader:(id)arg4 appActiveCardEligibility:(id)arg5 talkManager:(id)arg6 cognacDataStorage:(id)arg7 cognacSnapchatterService:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

