//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCFeedSnapchattersRepository, SCQueuePerformer;

@interface SCPersonDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener, SCUpdateListener>
{
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_dataUpdatePerformer;
    SCFeedSnapchattersRepository *_personRepository;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSMutableDictionary *_summaryObservationTokens;
    NSMutableDictionary *_fetchedGroups;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (id)_multiRecipientEntityWithRecipientIds:(id)arg1 personEntities:(id)arg2 groupEntities:(id)arg3;
- (void)_buildAllEntitiesFromOneOnOneFeedIds:(id)arg1 groupFeedIds:(id)arg2 multiRecipientFeedIds:(id)arg3 groupEntities:(id)arg4 personEntities:(id)arg5 multiRecipientFeedIdToRecipientIds:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)_fetchGroupEntities:(id)arg1;
- (void)_updateSummaryFetchedResult:(id)arg1 groupId:(id)arg2;
- (id)_fetchAndObserveGroupsForGroupIds:(id)arg1;
- (void)_performFetchWithSnapchatterFeedIds:(id)arg1 groupFeedIds:(id)arg2 multiRecipientFeedIds:(id)arg3 multiRecipientFeedIdToRecipientIds:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)_entitiesForOneOnOneFeedIds:(id)arg1 groupFeedIds:(id)arg2 multiRecipientFeedIds:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapchatterForUsernames:(id)arg1 groupForMischiefIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)personDataForFeedItemInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPersonRepository:(id)arg1 docObjectContext:(id)arg2;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
