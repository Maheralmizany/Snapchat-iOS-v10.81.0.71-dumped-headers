//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataMutating-Protocol.h"

@class SCLazy, SCQueuePerformer;

@interface SCSnapchatterShadowDataCoordinator : NSObject <SCSnapchattersDataMutating>
{
    SCLazy *_docObjectMutator;
    SCLazy *_legacyMutator;
    SCLazy *_shadowReporter;
    SCLazy *_shadowEventTracker;
    _Bool _isShadowModeEnabled;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_addEventName:(id)arg1 eventInfo:(id)arg2;
- (void)_reportDiffWithEventName:(id)arg1 eventInfo:(id)arg2 success:(_Bool)arg3;
- (void)_setSnapStreakInShadowForUsername:(id)arg1 snapstreakCount:(long long)arg2 expirationServerTimestamp:(id)arg3;
- (void)_updateInShadowWithRecentFriends:(struct NSDictionary *)arg1;
- (void)_promoteAddFriendsSuggestionsInShadowWithUserIds:(id)arg1;
- (void)_updateInShadowWithFriendRequestViewed:(id)arg1;
- (void)handleSetDisplayNameInShadowWithSnapchatter:(id)arg1 displayName:(id)arg2 setDisplayRequest:(id)arg3;
- (void)_handleUnmuteFriendStoryInShadowWithAFriend:(id)arg1 unmuteStoryRequest:(id)arg2;
- (void)_handleMuteFriendStoryInShadowWithAFriend:(id)arg1 muteStoryRequest:(id)arg2;
- (void)handleUnblockInShadowWithPersistedSnapchatter:(id)arg1 unblockedSnapchatter:(id)arg2 unblockSnapchatterRequest:(id)arg3;
- (void)handleBlockInShadowWithPersistedSnapchatter:(id)arg1 blockedSnapchatter:(id)arg2 blockSnapchatterRequest:(id)arg3;
- (void)_handleIgnoreInShadowWithIncomingFriend:(id)arg1 ignoreRequest:(id)arg2;
- (void)handleDeleteInShadowWithAFriend:(id)arg1 deleteFriendRequest:(id)arg2;
- (void)handleMultiAddInShadowWithFriends:(id)arg1 fideliusFriendMetadatas:(id)arg2 isRegistration:(_Bool)arg3 multiAddRequest:(id)arg4;
- (void)handleAddFriendInShadowWithAFriend:(id)arg1 fideliusFriendMetadata:(id)arg2 addFriendRequest:(id)arg3;
- (void)_handleInShadowUpdatedSyncEnable:(_Bool)arg1;
- (void)_hideInShadowWithSuggestedSnapchatter:(id)arg1 suggestRequest:(id)arg2;
- (void)_fetchContactsInShadowWithFindFriendsResponse:(id)arg1 contactRequest:(id)arg2;
- (void)_fetchInShadowWithSuggestedFriendsResponse:(id)arg1 serverSyncVersion:(id)arg2 isPrefetchForNotification:(_Bool)arg3 suggestRequest:(id)arg4;
- (void)_fetchInShadowWithSoJuFriendsResponse:(id)arg1 fetchRequest:(id)arg2;
- (void)setSnapStreakForUsername:(id)arg1 snapstreakCount:(long long)arg2 expirationServerTimestamp:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)prefetchSuggestedSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecentFriends:(struct NSDictionary *)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)promoteAddFriendsSuggestionsOfUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateFriendRequestViewed:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDisplayNameWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unblockSnapchatterWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockSnapchatterWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFriendWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)multiAddFriendsWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addFriendWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSnapchatterContactDataRequest:(id)arg1;
- (void)handleSnapchatterSuggestDataRequest:(id)arg1;
- (void)handleSnapchatterUpdateDataRequest:(id)arg1;
- (void)handleSnapchatterFetchDataRequest:(id)arg1;
- (id)initWithDocObjectMutator:(id)arg1 legacyMutator:(id)arg2 shadowReporter:(id)arg3 shadowEventTracker:(id)arg4 isShadowModeEnabled:(_Bool)arg5;

@end
