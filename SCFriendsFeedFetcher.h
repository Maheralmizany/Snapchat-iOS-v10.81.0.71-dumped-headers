//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendsFeedPaginationDelegate-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;

@interface SCFriendsFeedFetcher : NSObject <SCFriendsFeedPaginationDelegate, SCTraceEnabled, SCNetworkConnectivityListener>
{
    SCLazy *_arroyoFeedFetcher;
    SCLazy *_legacyFeedFetcher;
    long long _arroyoExperience;
    SCLazy *_loadingStatusManager;
    SCLazy *_friendsFeedDataCoordinator;
    SCLazy *_ghostToFeedLogger;
    _Bool _hasSetPaginationDelegate;
    _Bool _userNotBootstrapped;
    _Bool _previousUpdateSucceeded;
    unsigned long long _consecutivePaginationFailures;
}

@property _Bool previousUpdateSucceeded; // @synthesize previousUpdateSucceeded=_previousUpdateSucceeded;
@property _Bool userNotBootstrapped; // @synthesize userNotBootstrapped=_userNotBootstrapped;
@property _Bool hasSetPaginationDelegate; // @synthesize hasSetPaginationDelegate=_hasSetPaginationDelegate;
- (void).cxx_destruct;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)_markUserNotBootstrappedWithFetchContext:(id)arg1;
@property(nonatomic) unsigned long long consecutivePaginationFailures; // @synthesize consecutivePaginationFailures=_consecutivePaginationFailures;
- (void)_updateArroyoFeedWithLegacyFallback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)friendsFeedDidUpdateFromPaginationWithoutNewItem;
- (void)_loadMoreConversationsLegacyForFetchContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadMoreConversations;
- (void)_loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (void)configureForWarmStart;
- (_Bool)hasMoreFeedEntries;
- (CDUnknownBlockType)_updateCompletionToHandleFetchResult:(CDUnknownBlockType)arg1;
- (void)updateFriendsFeedForTriggerType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAppStateChange:(_Bool)arg1;
- (void)_setPaginationDelegateIfNecessary;
- (id)initWithArroyoFeedFetcher:(id)arg1 legacyFeedFetcher:(id)arg2 arroyoExperience:(long long)arg3 friendsFeedDataCoordinator:(id)arg4 loadingStatusManager:(id)arg5 ghostToFeedLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

