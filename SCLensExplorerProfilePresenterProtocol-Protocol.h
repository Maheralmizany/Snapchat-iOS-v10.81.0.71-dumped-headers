//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLensExplorerLensItemCreator, UIViewController;

@protocol SCLensExplorerProfilePresenterProtocol <NSObject>
@property(readonly, nonatomic) UIViewController *profileViewController;
- (void)presentProfileViewControllerFromViewController:(UIViewController *)arg1 lensCreator:(SCLensExplorerLensItemCreator *)arg2 sourcePageType:(long long)arg3 dismissBlock:(void (^)(void))arg4;
@end

