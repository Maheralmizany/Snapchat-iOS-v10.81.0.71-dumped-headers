//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingUUID;

@interface SCMessagingGameScoreShare : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingUUID *appId; // @dynamic appId;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasLeaderboardId; // @dynamic hasLeaderboardId;
@property(retain, nonatomic) SCMessagingUUID *leaderboardId; // @dynamic leaderboardId;
@property(nonatomic) long long numericScore; // @dynamic numericScore;

@end

