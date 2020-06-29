//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchTabBarViewController;

@protocol SCSearchTabBarViewControllerDelegate <NSObject>
- (void)searchTabBarViewControllerDidSwitchTab:(SCSearchTabBarViewController *)arg1;

@optional
- (struct CGPoint)containerViewContentOffsetForViewAtIndex:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 containerViewCurrentContentOffset:(struct CGPoint)arg3;
- (void)searchTabBarViewControllerDidFinishSwitchTab:(SCSearchTabBarViewController *)arg1;
- (void)searchTabBarViewControllerDidBeginToSwitchTabs:(SCSearchTabBarViewController *)arg1;
@end

