//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStoriesResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, SOJUServerInfoResponse;

@interface SOJUStoriesResponse : SCSojuMessage <SOJUStoriesResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMyStories:(id)arg1 myStoriesWithCollabs:(id)arg2 friendStories:(id)arg3 myGroupStories:(id)arg4 myVerifiedStories:(id)arg5 matureContentText:(id)arg6 friendStoriesDelta:(id)arg7 orderingResponse:(id)arg8 serverInfo:(id)arg9 userStoriesPrecacheConfig:(id)arg10 myMobStories:(id)arg11 syncMetadata:(id)arg12 unsignedReceipt:(id)arg13 responseType:(id)arg14 deletedFriendStories:(id)arg15 paginate:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSDictionary *deletedFriendStories; // @dynamic deletedFriendStories;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *friendStories; // @dynamic friendStories;
@property(readonly, nonatomic) NSNumber *friendStoriesDelta; // @dynamic friendStoriesDelta;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *matureContentText; // @dynamic matureContentText;
@property(readonly, nonatomic) NSArray *myGroupStories; // @dynamic myGroupStories;
@property(readonly, nonatomic) NSArray *myMobStories; // @dynamic myMobStories;
@property(readonly, nonatomic) NSArray *myStories; // @dynamic myStories;
@property(readonly, nonatomic) NSArray *myStoriesWithCollabs; // @dynamic myStoriesWithCollabs;
@property(readonly, nonatomic) NSArray *myVerifiedStories; // @dynamic myVerifiedStories;
@property(readonly, nonatomic) SOJUBroadcastStoriesOrderingOrderingResponse *orderingResponse; // @dynamic orderingResponse;
@property(readonly, nonatomic) NSNumber *paginate; // @dynamic paginate;
@property(readonly, nonatomic) NSString *responseType; // @dynamic responseType;
@property(readonly, nonatomic) SOJUServerInfoResponse *serverInfo; // @dynamic serverInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *syncMetadata; // @dynamic syncMetadata;
@property(readonly, nonatomic) NSNumber *unsignedReceipt; // @dynamic unsignedReceipt;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *userStoriesPrecacheConfig; // @dynamic userStoriesPrecacheConfig;

@end

