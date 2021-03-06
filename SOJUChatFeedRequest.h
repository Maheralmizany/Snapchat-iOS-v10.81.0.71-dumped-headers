//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUChatFeedRequest-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFeedDeltaSyncToken, SOJUFriendsRequest;

@interface SOJUChatFeedRequest : SCSojuMessage <SOJUChatFeedRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithChecksumsDict:(id)arg1 featuresMap:(id)arg2 pullToRefresh:(id)arg3 friendsRequest:(id)arg4 groupDeltaRequests:(id)arg5 excludeFriends:(id)arg6 messagesTier:(id)arg7 conversationDeltaQueryMap:(id)arg8 conversationSnapDeltaQueryMap:(id)arg9 feedIterToken:(id)arg10 messageIterToken:(id)arg11 groupPaginationType:(id)arg12 fetchReason:(id)arg13 feedDeltaSyncToken:(id)arg14;

// Remaining properties
@property(readonly, nonatomic) NSString *checksumsDict; // @dynamic checksumsDict;
@property(readonly, nonatomic) NSDictionary *conversationDeltaQueryMap; // @dynamic conversationDeltaQueryMap;
@property(readonly, nonatomic) NSDictionary *conversationSnapDeltaQueryMap; // @dynamic conversationSnapDeltaQueryMap;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *excludeFriends; // @dynamic excludeFriends;
@property(readonly, nonatomic) NSString *featuresMap; // @dynamic featuresMap;
@property(readonly, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @dynamic feedDeltaSyncToken;
@property(readonly, nonatomic) NSString *feedIterToken; // @dynamic feedIterToken;
@property(readonly, nonatomic) NSString *fetchReason; // @dynamic fetchReason;
@property(readonly, nonatomic) SOJUFriendsRequest *friendsRequest; // @dynamic friendsRequest;
@property(readonly, nonatomic) NSArray *groupDeltaRequests; // @dynamic groupDeltaRequests;
@property(readonly, nonatomic) NSString *groupPaginationType; // @dynamic groupPaginationType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *messageIterToken; // @dynamic messageIterToken;
@property(readonly, nonatomic) NSString *messagesTier; // @dynamic messagesTier;
@property(readonly, nonatomic) NSNumber *pullToRefresh; // @dynamic pullToRefresh;
@property(readonly) Class superclass;

@end

