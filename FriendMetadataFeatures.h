//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCOREUUID;

@interface FriendMetadataFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int friendCount; // @dynamic friendCount;
@property(retain, nonatomic) SCSCOREUUID *friendId; // @dynamic friendId;
@property(nonatomic) _Bool hasFriendId; // @dynamic hasFriendId;
@property(nonatomic) int mutualFriendCount; // @dynamic mutualFriendCount;

@end

