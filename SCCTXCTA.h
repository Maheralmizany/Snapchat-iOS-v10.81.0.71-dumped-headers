//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCTXCTA_Arrow, SCCTXCTA_Gradient, SCCTXCTA_Zones, SCCTXUserIdentity;

@interface SCCTXCTA : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCTXCTA_Arrow *arrow; // @dynamic arrow;
@property(retain, nonatomic) SCCTXCTA_Gradient *gradient; // @dynamic gradient;
@property(nonatomic) _Bool hasArrow; // @dynamic hasArrow;
@property(nonatomic) _Bool hasGradient; // @dynamic hasGradient;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) _Bool hasZones; // @dynamic hasZones;
@property(retain, nonatomic) SCCTXUserIdentity *user; // @dynamic user;
@property(retain, nonatomic) SCCTXCTA_Zones *zones; // @dynamic zones;

@end
