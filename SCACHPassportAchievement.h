//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCACHPassportAchievement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bitmojiStickerId; // @dynamic bitmojiStickerId;
@property(nonatomic) long long countAccumulated; // @dynamic countAccumulated;
@property(nonatomic) long long countNeeded; // @dynamic countNeeded;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) int familyType; // @dynamic familyType;
@property(nonatomic) _Bool isActive; // @dynamic isActive;
@property(nonatomic) _Bool isExpiring; // @dynamic isExpiring;
@property(nonatomic) long long streakCount; // @dynamic streakCount;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

