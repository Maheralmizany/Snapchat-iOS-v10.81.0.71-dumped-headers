//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SCPetraReportingInfo <NSObject>
- (void)getUpdatedImpressionAndClickURLsWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(NSArray *, NSArray *))arg2;
- (void)getUpdatedImpressionURLsWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(NSArray *))arg2;
@end

