//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREClientInfo;

@interface UserViewHistoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;

@end

