//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCOREUUID;

@interface SCVSGetACLResponse_FriendACL : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCOREUUID *friendId; // @dynamic friendId;
@property(nonatomic) _Bool hasFriendId; // @dynamic hasFriendId;
@property(nonatomic) long long preferenceTimestamp; // @dynamic preferenceTimestamp;

@end
