//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCDeltaforceItemKey, SCDeltaforceValueList, SCDeltaforceValueMap;

@interface SCDeltaforceValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool bool_p; // @dynamic bool_p;
@property(copy, nonatomic) NSData *bytes; // @dynamic bytes;
@property(nonatomic) double double_p; // @dynamic double_p;
@property(nonatomic) unsigned long long epochTimeMillis; // @dynamic epochTimeMillis;
@property(retain, nonatomic) SCDeltaforceItemKey *key; // @dynamic key;
@property(retain, nonatomic) SCDeltaforceValueList *list; // @dynamic list;
@property(nonatomic) long long long_p; // @dynamic long_p;
@property(retain, nonatomic) SCDeltaforceValueMap *map; // @dynamic map;
@property(nonatomic) _Bool nullVal; // @dynamic nullVal;
@property(copy, nonatomic) NSString *string; // @dynamic string;
@property(readonly, nonatomic) int typesOneOfCase; // @dynamic typesOneOfCase;

@end

