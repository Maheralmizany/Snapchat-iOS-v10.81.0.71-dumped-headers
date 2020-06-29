//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchTabBarContainerView, UIView;
@protocol SCSearchTabTransitionControlling;

@protocol SCSearchTabTransitionControllingDelegate <NSObject>
- (void)searchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1 didFinishTransitionToTabAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1 didSwitchToTabAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionControllerDidBeginTransitionTabs:(id <SCSearchTabTransitionControlling>)arg1;
- (SCSearchTabBarContainerView *)tabBarContainerViewForSearchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1;
- (unsigned long long)selectedTabIndexForSearchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1;
- (unsigned long long)numberOfTabsForSearchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1;
- (UIView *)searchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1 viewForViewControllerAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1 removeViewControllerFromParentAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionController:(id <SCSearchTabTransitionControlling>)arg1 prepareViewControllerAtIndexIfNeeded:(unsigned long long)arg2 shouldCreateIfNotExisted:(_Bool)arg3;
@end

