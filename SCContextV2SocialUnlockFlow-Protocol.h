//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SCReplyParameters, UIViewController;
@protocol SCContextV2DeepLinkUnlockPolicy, SCContextV2SocialUnlockFlowDelegate;

@protocol SCContextV2SocialUnlockFlow <NSObject>
- (_Bool)startUnlockFlowForURL:(NSURL *)arg1 deepLinkUnlockPolicy:(id <SCContextV2DeepLinkUnlockPolicy>)arg2 baseViewController:(UIViewController *)arg3 replyParameters:(SCReplyParameters *)arg4 delegate:(id <SCContextV2SocialUnlockFlowDelegate>)arg5;
@end

