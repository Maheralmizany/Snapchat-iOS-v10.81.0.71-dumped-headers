//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCTXContextClientInfo_TappableElement_Point, SCCTXContextClientInfo_TappableElement_Size;

@interface SCCTXContextClientInfo_TappableElement_Appearance : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCTXContextClientInfo_TappableElement_Point *center; // @dynamic center;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasSize; // @dynamic hasSize;
@property(nonatomic) double rotation; // @dynamic rotation;
@property(retain, nonatomic) SCCTXContextClientInfo_TappableElement_Size *size; // @dynamic size;

@end
