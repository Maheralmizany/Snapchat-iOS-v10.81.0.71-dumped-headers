//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AdPreferences_AdOptOuts, NSMutableArray;

@interface AdPreferences : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AdPreferences_AdOptOuts *adOptOuts; // @dynamic adOptOuts;
@property(nonatomic) _Bool hasAdOptOuts; // @dynamic hasAdOptOuts;
@property(retain, nonatomic) NSMutableArray *interestsArray; // @dynamic interestsArray;
@property(readonly, nonatomic) unsigned long long interestsArray_Count; // @dynamic interestsArray_Count;

@end

