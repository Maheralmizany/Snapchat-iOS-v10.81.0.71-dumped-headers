//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp;

@interface SCLensFriendUserInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *friendshipStart; // @dynamic friendshipStart;
@property(nonatomic) _Bool hasFriendshipStart; // @dynamic hasFriendshipStart;
@property(nonatomic) _Bool hasLastInteraction; // @dynamic hasLastInteraction;
@property(retain, nonatomic) GPBTimestamp *lastInteraction; // @dynamic lastInteraction;
@property(nonatomic) unsigned int streak; // @dynamic streak;

@end

