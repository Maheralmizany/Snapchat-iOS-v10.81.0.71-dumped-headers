//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMECheckinOptionRankingSignals : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double altitudeMeters; // @dynamic altitudeMeters;
@property(retain, nonatomic) NSMutableArray *availableOptionsArray; // @dynamic availableOptionsArray;
@property(readonly, nonatomic) unsigned long long availableOptionsArray_Count; // @dynamic availableOptionsArray_Count;
@property(nonatomic) int chosenOptionIndex; // @dynamic chosenOptionIndex;
@property(nonatomic) _Bool isConnectedToWifi; // @dynamic isConnectedToWifi;
@property(nonatomic) int optionTapCount; // @dynamic optionTapCount;
@property(nonatomic) double speedMetersPerSecond; // @dynamic speedMetersPerSecond;
@property(copy, nonatomic) NSString *wifiSsid; // @dynamic wifiSsid;

@end

