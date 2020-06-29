//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastMobsModelMobStory-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelMobStoryTypeExtraData;

@interface SOJUBroadcastMobsModelMobStory : SCSojuMessage <SOJUBroadcastMobsModelMobStory>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 creatorId:(id)arg2 typeExtraData:(id)arg3 displayName:(id)arg4 subText:(id)arg5 createTimestamp:(id)arg6 creatorUsername:(id)arg7 creatorDisplayName:(id)arg8 typeVal:(id)arg9 usersWithAbilities:(id)arg10;

// Remaining properties
@property(readonly, nonatomic) NSNumber *createTimestamp; // @dynamic createTimestamp;
@property(readonly, nonatomic) NSString *creatorDisplayName; // @dynamic creatorDisplayName;
@property(readonly, nonatomic) NSString *creatorId; // @dynamic creatorId;
@property(readonly, nonatomic) NSString *creatorUsername; // @dynamic creatorUsername;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *subText; // @dynamic subText;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUBroadcastMobsModelMobStoryTypeExtraData *typeExtraData; // @dynamic typeExtraData;
@property(readonly, nonatomic) NSString *typeVal; // @dynamic typeVal;
@property(readonly, nonatomic) NSArray *usersWithAbilities; // @dynamic usersWithAbilities;

@end
