//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCOREUUID, SCVSShareLocationPreferences;

@interface SCVSSetPreferencesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long ghostModeDuration; // @dynamic ghostModeDuration;
@property(nonatomic) _Bool hasPreferences; // @dynamic hasPreferences;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) SCVSShareLocationPreferences *preferences; // @dynamic preferences;
@property(retain, nonatomic) SCCOREUUID *userId; // @dynamic userId;

@end

