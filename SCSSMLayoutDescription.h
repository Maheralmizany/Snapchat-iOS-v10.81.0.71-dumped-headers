//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary;

@interface SCSSMLayoutDescription : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int firstServedTsSecs; // @dynamic firstServedTsSecs;
@property(retain, nonatomic) GPBInt32ObjectDictionary *sectionPositions; // @dynamic sectionPositions;
@property(readonly, nonatomic) unsigned long long sectionPositions_Count; // @dynamic sectionPositions_Count;
@property(retain, nonatomic) GPBInt32ObjectDictionary *seedSectionHistory; // @dynamic seedSectionHistory;
@property(readonly, nonatomic) unsigned long long seedSectionHistory_Count; // @dynamic seedSectionHistory_Count;

@end
