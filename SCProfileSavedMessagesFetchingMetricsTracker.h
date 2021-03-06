//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGrapheneProfileMetrics, SCStopwatch;

@interface SCProfileSavedMessagesFetchingMetricsTracker : NSObject
{
    SCGrapheneProfileMetrics *_getMessagesMetric;
    SCGrapheneProfileMetrics *_getDataMetric;
    SCGrapheneProfileMetrics *_getLatencyMetric;
    long long _profileType;
    _Bool _emittedMetrics;
    SCStopwatch *_latencyStopwatch;
}

- (void).cxx_destruct;
- (void)_addCustomDimensions:(id)arg1 hasMore:(_Bool)arg2;
- (void)receivedNumberOfMessages:(unsigned long long)arg1 numberOfData:(unsigned long long)arg2 hasMore:(_Bool)arg3;
- (void)startSendingRequest;
- (id)initWithGetMessagesMetric:(id)arg1 getDataMetric:(id)arg2 getLatencyMetric:(id)arg3 profileType:(long long)arg4;

@end

