//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUBroadcastMobsModelGeofencedMobStoryExtraData;

@protocol SOJUBroadcastMobsModelMobStoryAuth <SCSojuMessage>
@property(readonly, nonatomic) NSString *typeVal;
@property(readonly, nonatomic) NSNumber *isExpired;
@property(readonly, nonatomic) NSString *creatorDisplayName;
@property(readonly, nonatomic) SOJUBroadcastMobsModelGeofencedMobStoryExtraData *geostoryExtra;
@property(readonly, nonatomic) NSString *creator;
@property(readonly, nonatomic) NSNumber *createdAt;
@property(readonly, nonatomic) NSNumber *lastPostedTimestamp;
@property(readonly, nonatomic) NSString *rankType;
@property(readonly, nonatomic) NSString *subtext;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *storyId;
@end

