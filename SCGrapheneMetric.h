//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCGrapheneMetricId;

@interface SCGrapheneMetric : NSObject
{
    SCGrapheneMetricId *_metricId;
    NSMutableArray *_customDimensions;
}

- (void).cxx_destruct;
- (id)description;
- (id)customDimensions;
- (id)metricId;
- (int)partitionId;
- (id)withDimension:(id)arg1 value:(id)arg2;
- (id)initWithMetricId:(id)arg1 dimensionSize:(unsigned long long)arg2;
- (id)initWithMetricId:(id)arg1;

@end
