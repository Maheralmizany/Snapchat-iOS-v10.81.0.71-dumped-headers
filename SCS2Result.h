//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCS2CompositeId, SCS2FeaturedStory, SCS2Friend, SCS2Game, SCS2Group, SCS2Lens, SCS2Place, SCS2PopularUser, SCS2Publisher, SCS2PublisherEdition, SCS2SnapProEntity, SCS2Store, SCS2SuggestedFriend, SCS2User;

@interface SCS2Result : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCS2CompositeId *compId; // @dynamic compId;
@property(retain, nonatomic) SCS2FeaturedStory *featuredStory; // @dynamic featuredStory;
@property(retain, nonatomic) SCS2Friend *friend_p; // @dynamic friend_p;
@property(retain, nonatomic) SCS2Game *game; // @dynamic game;
@property(retain, nonatomic) SCS2Group *group; // @dynamic group;
@property(nonatomic) _Bool hasCompId; // @dynamic hasCompId;
@property(retain, nonatomic) SCS2Lens *lens; // @dynamic lens;
@property(retain, nonatomic) SCS2Place *place; // @dynamic place;
@property(retain, nonatomic) SCS2PopularUser *popularUser; // @dynamic popularUser;
@property(retain, nonatomic) SCS2Publisher *publisher; // @dynamic publisher;
@property(retain, nonatomic) SCS2PublisherEdition *publisherEdition; // @dynamic publisherEdition;
@property(readonly, nonatomic) int resultOneOfCase; // @dynamic resultOneOfCase;
@property(nonatomic) int resultType; // @dynamic resultType;
@property(retain, nonatomic) SCS2SnapProEntity *snapProEntity; // @dynamic snapProEntity;
@property(retain, nonatomic) SCS2Store *store; // @dynamic store;
@property(retain, nonatomic) SCS2SuggestedFriend *suggestedFriend; // @dynamic suggestedFriend;
@property(retain, nonatomic) SCS2User *user; // @dynamic user;

@end

