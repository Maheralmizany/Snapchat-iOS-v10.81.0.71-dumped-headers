//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32ObjectDictionary, SCSUPWindowedEngagementSignals;

@interface SCSUPWindowedEngagementStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32ObjectDictionary *dailyWindowedEngagementSignals; // @dynamic dailyWindowedEngagementSignals;
@property(readonly, nonatomic) unsigned long long dailyWindowedEngagementSignals_Count; // @dynamic dailyWindowedEngagementSignals_Count;
@property(nonatomic) _Bool hasSignalsSinceLastDay; // @dynamic hasSignalsSinceLastDay;
@property(nonatomic) _Bool hasSignalsSinceLastFourWeeks; // @dynamic hasSignalsSinceLastFourWeeks;
@property(nonatomic) _Bool hasSignalsSinceLastThreeDays; // @dynamic hasSignalsSinceLastThreeDays;
@property(nonatomic) _Bool hasSignalsSinceLastTwoWeeks; // @dynamic hasSignalsSinceLastTwoWeeks;
@property(nonatomic) _Bool hasSignalsSinceLastWeek; // @dynamic hasSignalsSinceLastWeek;
@property(retain, nonatomic) SCSUPWindowedEngagementSignals *signalsSinceLastDay; // @dynamic signalsSinceLastDay;
@property(retain, nonatomic) SCSUPWindowedEngagementSignals *signalsSinceLastFourWeeks; // @dynamic signalsSinceLastFourWeeks;
@property(retain, nonatomic) SCSUPWindowedEngagementSignals *signalsSinceLastThreeDays; // @dynamic signalsSinceLastThreeDays;
@property(retain, nonatomic) SCSUPWindowedEngagementSignals *signalsSinceLastTwoWeeks; // @dynamic signalsSinceLastTwoWeeks;
@property(retain, nonatomic) SCSUPWindowedEngagementSignals *signalsSinceLastWeek; // @dynamic signalsSinceLastWeek;

@end

