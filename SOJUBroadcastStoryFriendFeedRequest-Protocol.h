//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUBroadcastStoryFriendFeedRequest <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *friendStoryShouldNotReturn;
@property(readonly, nonatomic) NSNumber *myStoryShouldNotReturn;
@property(readonly, nonatomic) NSNumber *myStoryShouldNotReturnViewerInfo;
@property(readonly, nonatomic) NSNumber *friendStoryShouldNotReturnViewStatus;
@property(readonly, nonatomic) NSString *requestSource;
@property(readonly, nonatomic) NSString *checksumMissingReason;
@property(readonly, nonatomic) NSNumber *mischiefIdInOrderResp;
@property(readonly, nonatomic) NSNumber *shouldReturnStoryScores;
@property(readonly, nonatomic) NSArray *mobStoryTypesToRank;
@property(readonly, nonatomic) NSString *requestType;
@property(readonly, nonatomic) NSString *syncMetadata;
@property(readonly, nonatomic) NSString *checksum;
@end

