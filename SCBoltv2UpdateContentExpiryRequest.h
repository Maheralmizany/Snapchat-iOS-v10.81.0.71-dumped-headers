//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, SCBoltv2ContentReference;

@interface SCBoltv2UpdateContentExpiryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltv2ContentReference *contentReference; // @dynamic contentReference;
@property(nonatomic) int contentReferenceResultOption; // @dynamic contentReferenceResultOption;
@property(retain, nonatomic) GPBTimestamp *expiration; // @dynamic expiration;
@property(nonatomic) _Bool hasContentReference; // @dynamic hasContentReference;
@property(nonatomic) _Bool hasExpiration; // @dynamic hasExpiration;

@end

