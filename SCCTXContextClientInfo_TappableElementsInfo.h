//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCCTXContextClientInfo_TappableElementsInfo_SourceClient;

@interface SCCTXContextClientInfo_TappableElementsInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *elementsArray; // @dynamic elementsArray;
@property(readonly, nonatomic) unsigned long long elementsArray_Count; // @dynamic elementsArray_Count;
@property(nonatomic) _Bool hasSourceClient; // @dynamic hasSourceClient;
@property(retain, nonatomic) SCCTXContextClientInfo_TappableElementsInfo_SourceClient *sourceClient; // @dynamic sourceClient;

@end
