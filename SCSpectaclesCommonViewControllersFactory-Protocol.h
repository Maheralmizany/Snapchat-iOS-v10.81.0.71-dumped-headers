//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDeepLinkURL, SCUserSession, UIViewController;
@protocol SCPageNameLogging, SCSpectaclesPairingDelegate;

@protocol SCSpectaclesCommonViewControllersFactory <NSObject>
- (void)presentSpectaclesSnapStoreViewControllerWithUserSession:(SCUserSession *)arg1 originViewController:(UIViewController<SCPageNameLogging> *)arg2 deepLinkURL:(SCDeepLinkURL *)arg3;
- (UIViewController *)newLagunaPairingViewControllerWithUserSession:(SCUserSession *)arg1 delegate:(id <SCSpectaclesPairingDelegate>)arg2 source:(unsigned long long)arg3;
- (UIViewController *)newSpectaclesReportIssueViewController;
@end

