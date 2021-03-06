//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatViewControllerConversationStateProtocol-Protocol.h"
#import "SCContextCardsAboveKeyboardViewDelegate-Protocol.h"
#import "SCContextChatHeaderDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCChatInputViewController, SCContextCardsAboveKeyboardView, SCContextChatHeader, UILabel, UIView;
@protocol SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol, SCSizeChangeAnnouncingView;

@interface SCContextMessagingViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, SCContextChatHeaderDelegate, UIGestureRecognizerDelegate, SCContextCardsAboveKeyboardViewDelegate, SCChatViewControllerConversationStateProtocol, SCPageNameLogging>
{
    UIView *_contentView;
    UILabel *_legalDisclaimerLabel;
    _Bool _shouldEnableKeyboardOnTransition;
    SCContextCardsAboveKeyboardView *_cardsAboveKeyboardContainer;
    _Bool _hasAlternateRecipient;
    NSString *_displayName;
    _Bool _showSnapProPublicStoryReplyDisclaimer;
    _Bool _shouldDismissBySlidingCardsAboveKeyboardDown;
    _Bool _skipFocusingKeyboardOnNextFullscreenAppearance;
    _Bool _showsBackdrop;
    _Bool _inCardsAboveKeyboardExpandedMode;
    id <SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> _delegate;
    SCContextChatHeader *_header;
    SCChatInputViewController *_inputController;
    UIView<SCSizeChangeAnnouncingView> *_cardsAboveKeyboardView;
    struct CGRect _frameToTransitionFrom;
}

@property(nonatomic) _Bool inCardsAboveKeyboardExpandedMode; // @synthesize inCardsAboveKeyboardExpandedMode=_inCardsAboveKeyboardExpandedMode;
@property(retain, nonatomic) UIView<SCSizeChangeAnnouncingView> *cardsAboveKeyboardView; // @synthesize cardsAboveKeyboardView=_cardsAboveKeyboardView;
@property(nonatomic) _Bool showsBackdrop; // @synthesize showsBackdrop=_showsBackdrop;
@property(readonly, nonatomic) struct CGRect frameToTransitionFrom; // @synthesize frameToTransitionFrom=_frameToTransitionFrom;
@property(nonatomic) _Bool skipFocusingKeyboardOnNextFullscreenAppearance; // @synthesize skipFocusingKeyboardOnNextFullscreenAppearance=_skipFocusingKeyboardOnNextFullscreenAppearance;
@property(retain, nonatomic) SCChatInputViewController *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) SCContextChatHeader *header; // @synthesize header=_header;
@property(nonatomic) __weak id <SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contextCardsAboveKeyboardViewWantsToDismiss:(id)arg1 shouldSlideDown:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)isPlayingMedia;
- (id)activeConversationId;
- (id)otherParticipant;
- (void)_dismiss;
- (id)pageViewName;
- (void)modalAccessoryDidDismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)swapButtonPressedOnHeader:(id)arg1;
- (void)xButtonPressedOnHeader:(id)arg1;
- (void)_createCardsAboveKeyboardConstraintsIfPossible;
- (void)updateHeaderToDisplayName:(id)arg1;
- (id)initWithDisplayName:(id)arg1 hasAlternateRecipient:(_Bool)arg2 showSnapProPublicStoryReplyDisclaimer:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

