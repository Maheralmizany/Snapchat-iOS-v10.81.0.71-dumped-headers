//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCAddFriendsWorkflowDelegate, SCContactPermissionRequestWorkflowDelegate;

@protocol SCPostRegistrationRouterActions <NSObject>
- (void)endPostRegAddFriendsWorkflow;
- (void)startPostRegAddFriendsWorkflow:(id <SCAddFriendsWorkflowDelegate>)arg1;
- (void)endContactPermissionRequestWorkflow;
- (void)startContactPermissionRequestWorkflow:(id <SCContactPermissionRequestWorkflowDelegate>)arg1;
- (void)showLegacyAddFriendsPage;
@end

