//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCSUPRecommendedUsers_User : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isOfficial; // @dynamic isOfficial;
@property(nonatomic) int recReason; // @dynamic recReason;
@property(nonatomic) int recommendationReason; // @dynamic recommendationReason;
@property(nonatomic) float score; // @dynamic score;
@property(retain, nonatomic) NSMutableDictionary *scoringInfo; // @dynamic scoringInfo;
@property(readonly, nonatomic) unsigned long long scoringInfo_Count; // @dynamic scoringInfo_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

