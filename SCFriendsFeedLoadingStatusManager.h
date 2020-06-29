//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCFriendsFeedLoadingStatusManaging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDisposableObserverLifecycle, SCFriendsFeedSyncMetadata, SCLazy, SCObservable, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCFriendsFeedPaginationDelegate;

@interface SCFriendsFeedLoadingStatusManager : NSObject <SCTraceEnabled, SCFriendsFeedLoadingStatusManaging, SCDataCoordinatorListener>
{
    NSString *_currentUserId;
    SCLazy *_docObjectContext;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    long long _loadingStatus;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCLazy *_ufsDataCoordinatorLazy;
    SCQueuePerformer *_performer;
    unsigned long long _feedItemInfoCountFromLastUFSResponse;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCFriendsFeedSyncMetadata *_legacySyncMetadata;
    long long _legacyLoadingStatus;
    SCObservable *_legacySyncedFeedEntriesUpdateEvents;
    SCObservable *_arroyoSyncedFeedEntriesUpdateEvents;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    id <SCFriendsFeedPaginationDelegate> paginationDelegate;
}

+ (id)announcerIdentifier;
+ (id)dataCoordinatorIdentifier;
@property(nonatomic) __weak id <SCFriendsFeedPaginationDelegate> paginationDelegate; // @synthesize paginationDelegate;
- (void).cxx_destruct;
- (void)_announceUpdate;
- (void)_compareFeedItemInfos:(id)arg1;
- (void)_compareFeedItemInfosWithIsPagination:(_Bool)arg1;
- (void)_setLegacyLoadingStatus:(long long)arg1;
- (void)_setLoadingStatus:(long long)arg1;
- (void)_didCompleteServerSync;
- (void)_updateLegacySyncMetadata:(id)arg1;
- (void)_updateWithDataRequest:(id)arg1;
- (void)_performUpdateWithDataRequest:(id)arg1;
- (void)_handleUFSDataRequest:(id)arg1;
- (void)_updateWithIterationTokenUpdateRequest:(id)arg1;
- (void)_performDidCompleteServerSync;
- (void)_observeSyncedFeedUpdateEvents;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
@property(nonatomic) long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
- (id)syncMetadata;
- (id)initWithCurrentUserId:(id)arg1 docObjectContext:(id)arg2 UFSDataCoordinatorLazy:(id)arg3 legacySyncedFeedEntriesUpdateEvents:(id)arg4 arroyoSyncedFeedEntriesUpdateEvents:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

