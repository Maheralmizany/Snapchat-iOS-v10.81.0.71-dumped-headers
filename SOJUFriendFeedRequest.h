//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUFriendFeedRequest-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastStoryFriendFeedRequest, SOJUChatFeedRequest, SOJUFriendFeedRequestDebugParam;

@interface SOJUFriendFeedRequest : SCSojuMessage <SOJUFriendFeedRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 chatFeedRequest:(id)arg4 storyFriendFeedRequest:(id)arg5 sessionId:(id)arg6 requestId:(id)arg7 callOriginationType:(id)arg8 creationTimestamp:(id)arg9 layoutType:(id)arg10 conversationIdsToFetch:(id)arg11 previousPagesItemIds:(id)arg12 debugParam:(id)arg13 lastFullSyncTimestamp:(id)arg14 returnRankedStoriesOnly:(id)arg15 notificationId:(id)arg16 sinceTimestamp:(id)arg17 limit:(id)arg18 returnFriendStoriesOnly:(id)arg19 returnFeedItemWithSignals:(id)arg20 userStoryInteractionHistory:(id)arg21 friendRankingSignals:(id)arg22 filterOutUnidirectionalFriendStories:(id)arg23 friendStoryRankingSignals:(id)arg24;

// Remaining properties
@property(readonly, nonatomic) NSString *callOriginationType; // @dynamic callOriginationType;
@property(readonly, nonatomic) SOJUChatFeedRequest *chatFeedRequest; // @dynamic chatFeedRequest;
@property(readonly, nonatomic) NSArray *conversationIdsToFetch; // @dynamic conversationIdsToFetch;
@property(readonly, nonatomic) NSNumber *creationTimestamp; // @dynamic creationTimestamp;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SOJUFriendFeedRequestDebugParam *debugParam; // @dynamic debugParam;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *filterOutUnidirectionalFriendStories; // @dynamic filterOutUnidirectionalFriendStories;
@property(readonly, nonatomic) NSArray *friendRankingSignals; // @dynamic friendRankingSignals;
@property(readonly, nonatomic) NSString *friendStoryRankingSignals; // @dynamic friendStoryRankingSignals;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lastFullSyncTimestamp; // @dynamic lastFullSyncTimestamp;
@property(readonly, nonatomic) NSString *layoutType; // @dynamic layoutType;
@property(readonly, nonatomic) NSNumber *limit; // @dynamic limit;
@property(readonly, nonatomic) NSString *notificationId; // @dynamic notificationId;
@property(readonly, nonatomic) NSArray *previousPagesItemIds; // @dynamic previousPagesItemIds;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly, nonatomic) NSString *requestId; // @dynamic requestId;
@property(readonly, nonatomic) NSNumber *returnFeedItemWithSignals; // @dynamic returnFeedItemWithSignals;
@property(readonly, nonatomic) NSNumber *returnFriendStoriesOnly; // @dynamic returnFriendStoriesOnly;
@property(readonly, nonatomic) NSNumber *returnRankedStoriesOnly; // @dynamic returnRankedStoriesOnly;
@property(readonly, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(readonly, nonatomic) NSNumber *sinceTimestamp; // @dynamic sinceTimestamp;
@property(readonly, nonatomic) SOJUBroadcastStoryFriendFeedRequest *storyFriendFeedRequest; // @dynamic storyFriendFeedRequest;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSArray *userStoryInteractionHistory; // @dynamic userStoryInteractionHistory;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

