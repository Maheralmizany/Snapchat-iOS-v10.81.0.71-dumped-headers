//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol LSAAnalyticsListener <NSObject>
- (void)didChangeContent:(NSString *)arg1;
- (void)didPrepareTrackingEventsWithAnalyticsManager:(struct AnalyticsManager *)arg1;
- (void)didPrepareEffectAnalyticEventsForEffectId:(NSString *)arg1 analyticsManager:(struct AnalyticsManager *)arg2;
- (void)didPreparePerformanceReport:(NSDictionary *)arg1;
@end

