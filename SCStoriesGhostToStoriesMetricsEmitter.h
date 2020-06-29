//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesGhostToStoriesMetricsEmitting-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SCLazy, SCQueuePerformer;

@interface SCStoriesGhostToStoriesMetricsEmitter : NSObject <SCStoriesGhostToStoriesMetricsEmitting>
{
    SCLazy *_graphene;
    long long _loggingType;
    SCQueuePerformer *_performer;
    long long _loggingState;
    long long _triggerType;
    double _logStartTime;
    NSMutableArray *_stepMetrics;
    NSMutableSet *_loggedSteps;
}

- (void).cxx_destruct;
- (void)_logG2SWithTriggerType:(id)arg1 step:(long long)arg2 latency:(double)arg3;
- (void)_emitMetric;
- (void)_endLogging;
- (void)abortLogging;
- (void)logStep:(long long)arg1;
- (void)startWithTriggerType:(long long)arg1;
- (id)initWithGraphene:(id)arg1 loggingType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
