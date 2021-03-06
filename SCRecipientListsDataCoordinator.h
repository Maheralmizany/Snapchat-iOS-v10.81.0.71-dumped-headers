//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRecipientListsDataCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy, SCQueuePerformer, SCUserSession;

@interface SCRecipientListsDataCoordinator : NSObject <SCTraceEnabled, SCRecipientListsDataCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    SCLazy *_networkService;
    SCUserSession *_userSession;
    SCQueuePerformer *_docObjectPerformer;
    SCQueuePerformer *_utilityPerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    _Bool _hasPrepopulatedBefore;
    _Bool _hasSyncedWithServer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)cleanAllDataWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanAllDataWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteClientListsWithIds:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_upsertClientLocalLists:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_flushAndUpsertClientLocalLists:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)handleDataRequest:(id)arg1;
- (void)deleteListsWithListIds:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateLists:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)createLists:(id)arg1 isPrepopulation:(_Bool)arg2 completionQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)syncFromServerWithCompletionQueue:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)listWithListId:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listsWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 networkService:(id)arg2 userSession:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (id)lastServerSyncTimestamp;
- (void)_updateLastServerSyncTimestamp;
- (_Bool)hasSyncedWithServer;
- (void)_setHasPrepopulatedBefore:(_Bool)arg1;
- (_Bool)hasPrepopulatedBefore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

