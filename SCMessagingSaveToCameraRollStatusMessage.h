//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMessagingUUID;

@interface SCMessagingSaveToCameraRollStatusMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSMutableArray *mediaTypeToCountArray; // @dynamic mediaTypeToCountArray;
@property(readonly, nonatomic) unsigned long long mediaTypeToCountArray_Count; // @dynamic mediaTypeToCountArray_Count;
@property(nonatomic) unsigned long long messageId; // @dynamic messageId;
@property(retain, nonatomic) SCMessagingUUID *userId; // @dynamic userId;

@end

