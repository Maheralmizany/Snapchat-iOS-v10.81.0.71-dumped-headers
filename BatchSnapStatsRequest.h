//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString, SCSCOREClientInfo;

@interface BatchSnapStatsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *batchedSnapsByTypeArray; // @dynamic batchedSnapsByTypeArray;
@property(readonly, nonatomic) unsigned long long batchedSnapsByTypeArray_Count; // @dynamic batchedSnapsByTypeArray_Count;
@property(retain, nonatomic) SCSCOREClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(retain, nonatomic) GPBEnumArray *sectionTypesArray; // @dynamic sectionTypesArray;
@property(readonly, nonatomic) unsigned long long sectionTypesArray_Count; // @dynamic sectionTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *snapIdsArray; // @dynamic snapIdsArray;
@property(readonly, nonatomic) unsigned long long snapIdsArray_Count; // @dynamic snapIdsArray_Count;

@end

