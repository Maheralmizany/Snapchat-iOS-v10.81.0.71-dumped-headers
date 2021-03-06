//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUFriendFeedRequestDebugParam <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *shouldReturnStoryScores;
@property(readonly, nonatomic) NSNumber *shouldReturnDebugInfoHtml;
@property(readonly, nonatomic) NSString *studyIdToUse;
@property(readonly, nonatomic) NSNumber *disableConversationsPreFetchAdapter;
@property(readonly, nonatomic) NSNumber *shouldReturnAllSignals;
@property(readonly, nonatomic) NSString *friendsScoringModelToUse;
@property(readonly, nonatomic) NSString *storiesScoringModelToUse;
@property(readonly, nonatomic) NSString *conversationsScoringModelToUse;
@property(readonly, nonatomic) NSNumber *numFriendsToSelectFromRanking;
@property(readonly, nonatomic) NSNumber *numStoriesToSelectFromRanking;
@property(readonly, nonatomic) NSNumber *numRecentConversationsToFetch;
@property(readonly, nonatomic) NSNumber *isReplayRequest;
@property(readonly, nonatomic) NSArray *trackItems;
@property(readonly, nonatomic) NSNumber *disableConversationsMultiGetAdapter;
@property(readonly, nonatomic) NSNumber *disableConversationsAdapter;
@property(readonly, nonatomic) NSNumber *disableFriendsSignalAdapter;
@property(readonly, nonatomic) NSNumber *disableStoriesAdapter;
@property(readonly, nonatomic) NSNumber *disableFriendsSignalMemcache;
@property(readonly, nonatomic) NSNumber *isDebugRequest;
@end

