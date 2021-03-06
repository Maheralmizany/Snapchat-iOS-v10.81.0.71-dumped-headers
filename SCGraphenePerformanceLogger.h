//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCGraphenePerformanceLogger : NSObject
{
    CDUnknownBlockType _grapheneInstanceProvider;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_uniqueIdToLogItem;
}

- (void).cxx_destruct;
- (void)logTimeMetricEndWithUniqueId:(id)arg1;
- (void)logHistogramWithUniqueId:(id)arg1 value:(long long)arg2;
- (void)incrementCounterWithUniqueId:(id)arg1;
- (void)updateMetricWithUniqueId:(id)arg1 dimensionNameToValue:(id)arg2;
- (void)logTimeMetricStart:(id)arg1 uniqueId:(id)arg2;
- (id)initWithGrapheneInstanceProvider:(CDUnknownBlockType)arg1;

@end

