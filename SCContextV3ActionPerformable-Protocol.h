//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCTXAction, SCContextV3ActionMetricsParams, SCContextV3ActionParams, SCContextV3ActionResult, UIViewController;
@protocol SCPageNameLogging;

@protocol SCContextV3ActionPerformable <NSObject>
- (SCContextV3ActionResult *)performAction:(SCCTXAction *)arg1 onViewController:(UIViewController<SCPageNameLogging> *)arg2 params:(SCContextV3ActionParams *)arg3 metrics:(SCContextV3ActionMetricsParams *)arg4 completion:(void (^)(NSError *))arg5;
@end

