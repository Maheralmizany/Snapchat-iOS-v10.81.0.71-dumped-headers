//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMEExplorerFriendStatus, SCMEExplorerMapStatus;

@interface SCMEExplorerStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMEExplorerFriendStatus *friendStatus; // @dynamic friendStatus;
@property(nonatomic) _Bool hasFriendStatus; // @dynamic hasFriendStatus;
@property(nonatomic) _Bool hasMapStatus; // @dynamic hasMapStatus;
@property(retain, nonatomic) SCMEExplorerMapStatus *mapStatus; // @dynamic mapStatus;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic) int version; // @dynamic version;

@end

