//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoConversationIdsManaging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, SCBehaviorSubject, SCDisposableObserverLifecycle, SCLazy, SCObservable, SCQueuePerformer;
@protocol OS_dispatch_queue, SCNativeMessagingSessionManaging, SCPerforming;

@interface SCArroyoConversationIdsManager : NSObject <SCTraceEnabled, SCArroyoConversationIdsManaging>
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    SCObservable *_arroyoFeedEntriesUpdateEvents;
    SCObservable *_arroyoSyncedFeedEntriesUpdateEvents;
    SCDisposableObserverLifecycle *_feedObserverLifecycle;
    SCDisposableObserverLifecycle *_initialLoadDisposableObserverLifecycle;
    SCBehaviorSubject *_conversationStoreDeserializationObservable;
    id <SCPerforming> _nativeDispatchPerformer;
    NSObject<OS_dispatch_queue> *_queue;
    SCLazy *_preferences;
    SCLazy *_graphene;
    SCBehaviorSubject *_didFinishLoadingObservable;
    NSMutableDictionary *_conversationIdToStatus;
    NSMutableDictionary *_conversationMigrationDate;
    SCQueuePerformer *_performer;
    _Bool _preferenceWasEmpty;
    _Bool _conversationStoreDeserialized;
    _Bool _didFinishLoading;
    NSSet *_sessionMigratedArroyoConversationIds;
}

+ (id)popArroyoConversationIdsFromPreferences:(id)arg1;
@property _Bool didFinishLoading; // @synthesize didFinishLoading=_didFinishLoading;
- (void).cxx_destruct;
- (void)_upsertArroyoConversationIds:(id)arg1 deletedConversationIds:(id)arg2;
- (_Bool)_canAddArroyoConversation;
- (void)_dispatchUpsertArroyoConversationIds:(id)arg1 deletedConversationIds:(id)arg2;
- (void)_resetConversationIds:(id)arg1;
- (void)resetConversationsToBeMigrated:(id)arg1;
- (id)conversationIdsToBeMigrated;
- (id)displayPrefixesByConversationId;
- (id)finishedLoadingObservable;
- (id)arroyoConversationIdsFromConversationIds:(id)arg1;
- (id)partitionConversationIds:(id)arg1;
- (_Bool)_isArroyoConversationId:(id)arg1;
- (_Bool)isArroyoConversationId:(id)arg1;
- (void)addNewArroyoConversationId:(id)arg1;
@property(readonly, nonatomic) NSSet *sessionMigratedArroyoConversationIds; // @synthesize sessionMigratedArroyoConversationIds=_sessionMigratedArroyoConversationIds;
@property(readonly, nonatomic) NSSet *arroyoConversationIds;
- (void)addV3ConversationId:(id)arg1;
- (void)addV3ConversationIdsFromDeserialization:(id)arg1;
- (void)_updateToBeMigratedToArroyo;
- (void)_populateSessionMigratedArroyoConversationIds;
- (void)_loadLocalFeedEntries;
- (void)_performLoadLocalFeedEntries;
- (void)dispose;
- (id)initWithPreferences:(id)arg1 graphene:(id)arg2 isFromLogin:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

