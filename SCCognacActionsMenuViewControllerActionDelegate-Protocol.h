//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCCognacActionsMenuViewController;

@protocol SCCognacActionsMenuViewControllerActionDelegate <NSObject>
- (void)actionsMenuViewController:(SCCognacActionsMenuViewController *)arg1 didLongPressWithAppId:(NSString *)arg2;
- (void)actionsMenuViewController:(SCCognacActionsMenuViewController *)arg1 didInviteSnapchatters:(NSArray *)arg2;
@end
