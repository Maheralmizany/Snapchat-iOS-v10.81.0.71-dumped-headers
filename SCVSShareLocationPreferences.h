//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCVSShareLocationPreferences : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int audience; // @dynamic audience;
@property(nonatomic) _Bool backgroundSharingEnabled; // @dynamic backgroundSharingEnabled;
@property(retain, nonatomic) NSMutableArray *blacklistFriendIdArray; // @dynamic blacklistFriendIdArray;
@property(readonly, nonatomic) unsigned long long blacklistFriendIdArray_Count; // @dynamic blacklistFriendIdArray_Count;
@property(nonatomic) _Bool ghostMode; // @dynamic ghostMode;
@property(nonatomic) long long ghostModeExpiration; // @dynamic ghostModeExpiration;
@property(nonatomic) _Bool isOnboarded; // @dynamic isOnboarded;
@property(nonatomic) _Bool shareUsageData; // @dynamic shareUsageData;
@property(nonatomic) long long version; // @dynamic version;
@property(retain, nonatomic) NSMutableArray *whitelistFriendIdArray; // @dynamic whitelistFriendIdArray;
@property(readonly, nonatomic) unsigned long long whitelistFriendIdArray_Count; // @dynamic whitelistFriendIdArray_Count;

@end

