//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SCSnapAirPerformer
- (void)perform:(void (^)(void))arg1 after:(double)arg2;
- (void)perform:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)workQueue;
@end

