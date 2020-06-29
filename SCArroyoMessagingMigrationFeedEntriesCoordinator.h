//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoMessagingMigrationFeedEntriesCoordinating-Protocol.h"

@class SCLazy, SCObservable, SCPublishSubject;
@protocol SCPerforming;

@interface SCArroyoMessagingMigrationFeedEntriesCoordinator : NSObject <SCArroyoMessagingMigrationFeedEntriesCoordinating>
{
    SCPublishSubject *_legacySyncedFeedEntriesUpdateEvents;
    SCPublishSubject *_arroyoSyncedFeedEntriesUpdateEvents;
    SCLazy *_arroyoIdsManager;
    id <SCPerforming> _performer;
}

@property(readonly, nonatomic) SCObservable *arroyoSyncedFeedEntriesUpdateEvents; // @synthesize arroyoSyncedFeedEntriesUpdateEvents=_arroyoSyncedFeedEntriesUpdateEvents;
@property(readonly, nonatomic) SCObservable *legacySyncedFeedEntriesUpdateEvents; // @synthesize legacySyncedFeedEntriesUpdateEvents=_legacySyncedFeedEntriesUpdateEvents;
- (void).cxx_destruct;
- (void)_publishArroyoFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntryIdentifiers:(id)arg3 multiRecipientFeedEntriesDeleted:(id)arg4 updateType:(long long)arg5 fetchContext:(id)arg6;
- (void)_publishLegacyFeedEntries:(id)arg1 updateType:(long long)arg2 fetchContext:(id)arg3;
- (void)_updateFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntryIdentifiers:(id)arg3 multiRecipientFeedEntriesDeleted:(id)arg4 updateType:(long long)arg5 fetchContext:(id)arg6;
- (void)didFeedEntriesArrive:(id)arg1 fetchContext:(id)arg2;
- (void)didFetchFeedCompleteFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didQueryFeedCompleteFeedEntries:(id)arg1 hasNoMore:(_Bool)arg2 fetchContext:(id)arg3;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntries:(id)arg3 fetchContext:(id)arg4;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntries:(id)arg3 fetchContext:(id)arg4;
- (void)didUpdateFeedEntries:(id)arg1 multiRecipientFeedEntries:(id)arg2 deletedFeedEntries:(id)arg3 multiRecipientFeedEntriesDeleted:(id)arg4;
- (id)initWithIdsManager:(id)arg1;

@end

