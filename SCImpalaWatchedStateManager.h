//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, SCImpalaService, SCImpalaWatchedStateUpdateListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCImpalaWatchedStateManager : NSObject
{
    SCImpalaService *_service;
    NSString *_userId;
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_pendingDBWrites;
    NSMutableSet *_seenShows;
    NSMutableSet *_itemIdsPendingUpdate;
    double _currentBatchTimeInterval;
    double _lastBatchUploadTime;
    _Bool _currentlyUploadingOrThrottled;
    SCLazy *_docObjectContext;
    SCImpalaWatchedStateUpdateListenerAnnouncer *_eventAnnouncer;
    _Bool _currentlyClearingState;
}

- (void).cxx_destruct;
- (void)resetWatchedStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_retryUncommittedWatchedState;
- (void)_truncateDB;
- (void)_performUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleNextRound;
- (void)_tryToPerformUpdate;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)_getLatestWatchedStateBatch:(id)arg1;
- (void)_getLatestWatchedStateBatch:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getLatestWatchedStateBatch:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateCachedWatchedStateBatch:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCachedWatchedStateBatch:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitWatchedStateUpdateIfNeeded:(id)arg1 forceSubmit:(_Bool)arg2;
- (id)initWithService:(id)arg1 userId:(id)arg2 docObjectContext:(id)arg3;

@end

