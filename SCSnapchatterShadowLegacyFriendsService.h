//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyFriendsService-Protocol.h"

@class SCLazy;

@interface SCSnapchatterShadowLegacyFriendsService : NSObject <SCLegacyFriendsService>
{
    SCLazy *_legacyFriendsService;
    SCLazy *_shadowDataMutator;
    _Bool _isShadowModeEnabled;
}

- (void).cxx_destruct;
- (void)_handleSetDisplayInShadowWithFriend:(id)arg1 displayName:(id)arg2;
- (void)_handleUnblockInShadowWithBlockedFriend:(id)arg1 unblockedFriend:(id)arg2;
- (void)_handleBlockInShadowWithFriend:(id)arg1 blockedFriend:(id)arg2 blockReasonId:(id)arg3;
- (void)_handleDeleteInShadowWithFriend:(id)arg1 context:(id)arg2;
- (void)_handleMultiAddInShadowWithSourceType:(id)arg1 Friends:(id)arg2 context:(id)arg3;
- (void)_handleAddInShadowWithAFriend:(id)arg1 newFriend:(id)arg2 context:(id)arg3 sourceType:(long long)arg4;
- (void)fetchAsyncOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fullyInitialized;
- (id)friendsRequest;
- (void)updateUnreadAddedFriends;
- (void)setDisplay:(id)arg1 forFriend:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)unblockFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)blockFriend:(id)arg1 blockReasonId:(id)arg2 context:(id)arg3 sessionRequestManager:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteFriend:(id)arg1 context:(id)arg2 sessionRequestManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addMultiFriendsWithSourceType:(id)arg1 context:(id)arg2 pageType:(long long)arg3 sessionRequestManager:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)addFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 sessionRequestManager:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)getOrCreateTempFriendForName:(id)arg1;
- (_Bool)isUsernameBlocked:(id)arg1;
- (_Bool)isFriend:(id)arg1;
- (id)addedFriendForName:(id)arg1;
- (id)friendForName:(id)arg1;
- (id)friendsForUserIds:(id)arg1;
- (id)friendForUserId:(id)arg1;
- (id)getBlockedStoryFriends;
- (id)getBlockedFriends;
- (id)getRecents;
- (id)getUnreadAddedFriends;
- (id)getRecentlyAdded;
- (id)bestFriendsObjects;
- (id)getAllMutualFriendsExceptSelf;
- (id)getAllMutualFriends;
- (id)allOutgoingFriendsExceptSelf;
- (id)allOutgoingFriends;
- (id)getAllFriends;
- (id)initWithLegacyFriendsService:(id)arg1 shadowDataMutator:(id)arg2 isShadowModeEnabled:(_Bool)arg3;

@end

