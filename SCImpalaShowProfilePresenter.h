//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaSwipeInteractionControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCImpalaSwipeInteractionController, UIViewController;
@protocol SCImpalaShowProfilePresenterDelegate, SCImpalaViewControllerProvider;

@interface SCImpalaShowProfilePresenter : NSObject <SCImpalaSwipeInteractionControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SCImpalaSwipeInteractionController *_presentationInteractionController;
    SCImpalaSwipeInteractionController *_dismissalInteractionController;
    _Bool _performHapticFeedback;
    UIViewController *_presentingViewController;
    id <SCImpalaViewControllerProvider> _provider;
    id <SCImpalaShowProfilePresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCImpalaShowProfilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool performHapticFeedback; // @synthesize performHapticFeedback=_performHapticFeedback;
@property(readonly, nonatomic) __weak id <SCImpalaViewControllerProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)swipeInteractionControllerDidFinish:(id)arg1 cancelled:(_Bool)arg2;
- (void)swipeInteractionControllerDidBegin:(id)arg1;
- (_Bool)swipeInteractionController:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)swipeInteractionController:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)swipeInteractionControllerDidStartInteraction:(id)arg1;
- (_Bool)swipeInteractionControllerShouldStartInteraction:(id)arg1;
- (_Bool)_swipeUpEnabled;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSwipeUpInPresentingViewController:(id)arg1 provider:(id)arg2 viewForPresentationGesture:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

