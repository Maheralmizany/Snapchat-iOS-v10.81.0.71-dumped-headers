//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;

@protocol SCViewControllerDismissalAnimatorDelegate <NSObject>
- (void)viewControllerTransitionAnimatorDidFinishDismissing:(_Bool)arg1;
- (void)viewControllerTransitionAnimatorWillBeginAnimatingToDismiss;
- (void)viewControllerTransitionAnimatorDidCancelDismissing;
- (void)viewControllerTransitionAnimatorDidBeginDismissing;
- (_Bool)viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:(long long)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
@end

