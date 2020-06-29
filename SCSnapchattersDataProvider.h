//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataFetching-Protocol.h"

@class SCLazy, SCQueuePerformer, SCSnapchattersFetchedResultObserverRepository, SCUserIdToSnapchatterFetcher, SCUsernameToSnapchatterFetcher;

@interface SCSnapchattersDataProvider : NSObject <SCSnapchattersDataFetching>
{
    SCLazy *_userInfoRepository;
    SCLazy *_incomingFriendsTracker;
    SCQueuePerformer *_fetchPerformer;
    SCUserIdToSnapchatterFetcher *_userIdToSnapchatterFetcher;
    SCUsernameToSnapchatterFetcher *_usernameToSnapchatterFetcher;
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_recentSnapchatterPredicate;
- (id)_rankedBestFriendsSnapchatters;
- (id)_recentAndSuggestedFriendSnapchatters;
- (void)_recentAndSuggestedFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recentFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_rankedBestFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_nonFriendContactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_contactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_nonFriendSuggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_displayIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_allIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_outgoingSnapchattersWithoutUserWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_mutualFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_outgoingSnapchattersForLetterKey:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_outgoingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_snapchattersWithUserIdsWaitDeserialization:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_snapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)bestFriendsCount;
- (unsigned long long)mutualFriendsCount;
- (unsigned long long)outgoingFriendsCount;
- (id)latestAddedFriendsTimestamp;
- (void)recentAndSuggestedFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recentFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rankedBestFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFriendContactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)contactSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFriendsSuggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allIncomingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mutualFriendSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)outgoingSnapchattersForLetterKey:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)outgoingSnapchattersWithoutUserWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)outgoingSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)snapchattersWithUserIdsWaitDeserialization:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserIdToSnapchatterFetcher:(id)arg1 usernameToSnapchatterFetcher:(id)arg2 snapchattersFetchedResultObserverRepository:(id)arg3 userInfoRepository:(id)arg4 incomingFriendsTracker:(id)arg5;

@end

