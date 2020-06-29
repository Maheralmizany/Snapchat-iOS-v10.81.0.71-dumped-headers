//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCAppBadFrameBlizzardLogger, SCBadFrameRateStatsTracker, SCBadFrameStatsSnapshot, SCQueuePerformer;

@interface SCBadFrameAnalytics : NSObject
{
    NSString *_eventName;
    NSMutableDictionary *_pageReportTimes;
    SCQueuePerformer *_performer;
    SCBadFrameStatsSnapshot *_initialBadFrameStats;
    SCBadFrameStatsSnapshot *_finalBadFrameStats;
    SCBadFrameRateStatsTracker *_badFrameStatsTracker;
    SCAppBadFrameBlizzardLogger *_badFrameBlizzardLogger;
}

- (void).cxx_destruct;
- (id)_badFrameDurationBucketsWithPage:(id)arg1 prevPage:(id)arg2;
- (void)_reportBadFrameEvent:(id)arg1 prevPage:(id)arg2 eventDurationInSec:(double)arg3 badFrameDurationInMs:(double)arg4 totalFrameCount:(long long)arg5 totalDroppedFrameCount:(long long)arg6 durationBuckets:(id)arg7;
- (void)endAndReportEventWithPage:(id)arg1 prevPage:(id)arg2;
- (void)reportEventWithPage:(id)arg1 prevPage:(id)arg2;
- (void)eventEnd;
- (void)eventStart;
- (id)initWithEvent:(unsigned long long)arg1 badFrameStatsTracker:(id)arg2;

@end

