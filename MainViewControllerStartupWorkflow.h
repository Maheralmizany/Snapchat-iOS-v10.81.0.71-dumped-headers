//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCViewControllerStructuredStartupWorkflow.h"

@interface MainViewControllerStartupWorkflow : SCViewControllerStructuredStartupWorkflow
{
}

- (void)_setupFailedStoryTooltip:(id)arg1;
- (void)initProfileTransitionCoordinator:(id)arg1;
- (void)initStatusBarController:(id)arg1;
- (void)initOverscrollController:(id)arg1;
- (void)addBandwidthAndFrameRateLabel:(id)arg1;
- (void)didAppStartupComplete:(id)arg1;
- (void)observeBadgeCount:(id)arg1;
- (void)observeAll:(id)arg1;
- (id)viewControllerForTabBarItemType:(long long)arg1 mainViewController:(id)arg2;
- (void)initFarLeftVC:(id)arg1;
- (void)initRightVC:(id)arg1;
- (void)initLeftVC:(id)arg1;
- (void)initMiddleVC:(id)arg1;
- (void)setupTabBarAndNavBarOnce:(id)arg1;
- (void)initScrollView:(id)arg1;
- (void)setupSpringAnimationHeartbeat:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1 callIntent:(id)arg2 convoMetadata:(id)arg3 isVideo:(_Bool)arg4;
- (void)performHandleApplicationWillEnterForeground:(id)arg1 notification:(id)arg2;
- (void)performApplicationWillEnterForeground:(id)arg1 notification:(id)arg2;
- (void)performViewDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)performViewWillAppear:(id)arg1 animated:(_Bool)arg2;
- (void)performViewDidLoadWithSubScreensInitialized:(id)arg1;
- (void)performViewDidLoad:(id)arg1;
- (void)performSubScreensInitialized:(id)arg1;
- (void)performSubScreenInitialized:(id)arg1;
- (_Bool)hasInitializedSubScreens:(id)arg1;
- (void)performLoadView:(id)arg1;
- (void)performInitialization:(id)arg1;

@end
