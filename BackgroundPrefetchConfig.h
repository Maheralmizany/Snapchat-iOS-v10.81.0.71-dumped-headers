//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface BackgroundPrefetchConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidUseIndividualWakeup; // @dynamic androidUseIndividualWakeup;
@property(nonatomic) _Bool completePrefetchInBackground; // @dynamic completePrefetchInBackground;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) int executionTimeoutInMinutes; // @dynamic executionTimeoutInMinutes;
@property(nonatomic) _Bool isChargingOnly; // @dynamic isChargingOnly;
@property(nonatomic) int numOfRetries; // @dynamic numOfRetries;
@property(retain, nonatomic) GPBInt32Array *prefetchFixedTimeInHoursArray; // @dynamic prefetchFixedTimeInHoursArray;
@property(readonly, nonatomic) unsigned long long prefetchFixedTimeInHoursArray_Count; // @dynamic prefetchFixedTimeInHoursArray_Count;
@property(nonatomic) int prefetchIntervalInMinutes; // @dynamic prefetchIntervalInMinutes;
@property(nonatomic) int prefetchTimeJitterInMinutes; // @dynamic prefetchTimeJitterInMinutes;

@end

