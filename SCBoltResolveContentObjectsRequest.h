//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCBoltCircumstance;

@interface SCBoltResolveContentObjectsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltCircumstance *circumstance; // @dynamic circumstance;
@property(nonatomic) _Bool hasCircumstance; // @dynamic hasCircumstance;
@property(nonatomic) _Bool neverRefresh; // @dynamic neverRefresh;
@property(retain, nonatomic) NSMutableArray *requestsArray; // @dynamic requestsArray;
@property(readonly, nonatomic) unsigned long long requestsArray_Count; // @dynamic requestsArray_Count;

@end

