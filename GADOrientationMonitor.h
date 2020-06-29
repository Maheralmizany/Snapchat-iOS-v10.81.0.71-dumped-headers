//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADFullScreenAdViewController, GADObserverCollection, GADWebAdView;

@interface GADOrientationMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
    GADFullScreenAdViewController *_viewController;
    _Bool _orientationNotifiedToTheAdViewAtLeastOnce;
    long long _lastOrientation;
}

- (void).cxx_destruct;
- (void)handleOrientationDidChangeNotification:(long long)arg1;
- (void)handleForceOrientationAction:(id)arg1;
- (id)initWithAdView:(id)arg1 viewController:(id)arg2;

@end

