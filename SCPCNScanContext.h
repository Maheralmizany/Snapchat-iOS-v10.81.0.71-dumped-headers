//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPCNGeoCoordinate, SCPCNLocalTimeV2, SCPCNPoint;

@interface SCPCNScanContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSMutableArray *experimentsArray; // @dynamic experimentsArray;
@property(readonly, nonatomic) unsigned long long experimentsArray_Count; // @dynamic experimentsArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasRelativeTouchPoint; // @dynamic hasRelativeTouchPoint;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(nonatomic) _Bool isFrontFacing; // @dynamic isFrontFacing;
@property(retain, nonatomic) SCPCNGeoCoordinate *location; // @dynamic location;
@property(retain, nonatomic) SCPCNPoint *relativeTouchPoint; // @dynamic relativeTouchPoint;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) SCPCNLocalTimeV2 *time; // @dynamic time;

@end

