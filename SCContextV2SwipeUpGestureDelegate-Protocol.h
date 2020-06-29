//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCContextV2SwipeUpGestureTracker, UIViewController;
@protocol SCContextActionTriggering, SCContextV2SwipeUpPresentable;

@protocol SCContextV2SwipeUpGestureDelegate <NSObject>
- (_Bool)swipeUpGestureShouldBegin:(SCContextV2SwipeUpGestureTracker *)arg1;
- (void)swipeUpGestureDidDismiss:(SCContextV2SwipeUpGestureTracker *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (void)swipeUpGestureDidPresent:(SCContextV2SwipeUpGestureTracker *)arg1 triggerInfo:(id <SCContextActionTriggering>)arg2;
- (UIViewController *)baseViewControllerForSwipeUpPresentation:(SCContextV2SwipeUpGestureTracker *)arg1;
- (UIViewController<SCContextV2SwipeUpPresentable> *)viewControllerToPresentViaSwipeUpGesture:(SCContextV2SwipeUpGestureTracker *)arg1;
@end
