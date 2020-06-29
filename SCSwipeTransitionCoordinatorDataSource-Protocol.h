//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPresentationController, UIViewController;
@protocol SCSwipeTransitionCoordinator;

@protocol SCSwipeTransitionCoordinatorDataSource <NSObject>
- (UIPresentationController *)transitionCoordinator:(id <SCSwipeTransitionCoordinator>)arg1 presentationControllerForPresentedViewController:(UIViewController *)arg2 presentingViewController:(UIViewController *)arg3;
- (UIViewController *)presentingViewControllerWithSwipeTransitionCoordinator:(id <SCSwipeTransitionCoordinator>)arg1;
- (UIViewController *)presentedViewControllerWithSwipeTransitionCoordinator:(id <SCSwipeTransitionCoordinator>)arg1;

@optional
- (double)defaultSwipeInteractionAnimationDuration;
@end
