//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDisposableObserverLifecycle, SCLazy, SCObservable, SCPromise, SCQueuePerformer;

@interface SCFriendsFeedArroyoNativeDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCLazy *_docObjectContext;
    NSString *_userId;
    SCLazy *_nativeFeedManager;
    SCLazy *_arroyoConversationIdsManager;
    SCLazy *_ghostToFeedLogger;
    SCQueuePerformer *_performer;
    SCPromise *_initialLoadPromise;
    NSMutableDictionary *_activeMessageDataByFeedId;
    NSMutableDictionary *_feedItemInfoByFeedId;
    SCObservable *_arroyoSyncedFeedEntriesUpdateEvents;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdatedFeedIds:(id)arg1 fetchContext:(id)arg2;
- (void)_didUpdateFeedItemInfo:(id)arg1 updatedActiveMessageDataFeedIds:(id)arg2 deletedFeedIds:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateWithActiveMessageData:(id)arg1 updatedFeedItemInfos:(id)arg2 deletedFeedIds:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_processFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntries:(id)arg3 multiRecipientFeedEntriesDeleted:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_processArroyoSyncedFeedEntriesUpdateEvent:(id)arg1;
- (void)_handleArroyoSyncedFeedEntriesUpdateEvent:(id)arg1;
- (void)_observeArroyoFeedEntriesEvents;
- (void)_didProcessInitialFeedEntriesWithUpdatedFeedIds:(id)arg1;
- (void)_processInitialFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2;
- (void)_handleInitialLoadDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)_activeMessageDataForFeedIds:(id)arg1;
- (void)activeMessageDataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 userId:(id)arg2 nativeFeedManager:(id)arg3 arroyoConversationIdsManager:(id)arg4 ghostToFeedLogger:(id)arg5 arroyoSyncedFeedEntriesUpdateEvents:(id)arg6;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

