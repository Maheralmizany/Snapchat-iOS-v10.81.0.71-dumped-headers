//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCTXCTAZone;

@interface SCCTXCTA_Zones : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCTXCTAZone *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasLeading; // @dynamic hasLeading;
@property(nonatomic) _Bool hasTrailing; // @dynamic hasTrailing;
@property(retain, nonatomic) SCCTXCTAZone *leading; // @dynamic leading;
@property(retain, nonatomic) SCCTXCTAZone *trailing; // @dynamic trailing;

@end
