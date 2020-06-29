//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SIGCardTransition-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol SIGCardGestureHandler, SIGCardTransitionDelegate;

@interface SIGCardTransitioningDelegateImplementation : NSObject <SIGCardTransition, UIGestureRecognizerDelegate>
{
    _Bool _interactivelyDismissing;
    double _fractionalPresentationHeight;
    id <SIGCardGestureHandler> _gestureHandler;
    id <SIGCardTransitionDelegate> _cardTransitionDelegate;
}

@property(nonatomic) double fractionalPresentationHeight; // @synthesize fractionalPresentationHeight=_fractionalPresentationHeight;
@property(nonatomic) __weak id <SIGCardTransitionDelegate> cardTransitionDelegate; // @synthesize cardTransitionDelegate=_cardTransitionDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)installPullToDismissGestureRecognizerOnViews:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
