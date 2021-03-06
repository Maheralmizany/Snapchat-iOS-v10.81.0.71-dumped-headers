//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesSnapReadReceiptCoordinating-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy, SCQueuePerformer, SCStoriesSnapReadReceiptObserver, SCStoriesSnapReadReceiptUploader;

@interface SCStoriesSnapReadReceiptCoordinator : NSObject <SCDataCoordinatorListener, SCStoriesSnapReadReceiptCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    SCLazy *_lazySnapReadReceiptLogger;
    SCQueuePerformer *_performer;
    SCLazy *_requestRetryer;
    SCLazy *_lazyMixerNetworkRequester;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCStoriesSnapReadReceiptObserver *_readReceiptObserver;
    SCStoriesSnapReadReceiptUploader *_readReceiptUploader;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_persistViewReportsToDocObjectContext:(id)arg1;
- (void)_didCompleteFetchViewHistoryResponse:(id)arg1;
- (void)_fetchViewHistoryDidFailWithStatusCode:(long long)arg1;
- (void)_fetchViewHistory;
- (void)_syncSnapReadReceiptsToServerShouldFlush:(_Bool)arg1;
- (void)_syncPremiumReadReceiptsToServerShouldFlush:(_Bool)arg1;
- (void)flushSnapReadReceipts;
- (void)flushPremiumReadReceipts;
- (void)saveSnapReadReceipt:(id)arg1 shouldFlush:(_Bool)arg2;
- (void)savePremiumReadReceipt:(id)arg1;
- (void)saveReadReceiptForServerId:(id)arg1 action:(long long)arg2 expirationTimestamp:(double)arg3;
- (void)logStoriesSnapViewStateNotReadyWhenProvidingMedatadataType:(id)arg1;
- (void)readReceiptViewStatesByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchViewHistory;
- (_Bool)hasCompletedInitialFetching;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 lazySnapReadReceiptLogger:(id)arg2 lazyMixerNetworkRequester:(id)arg3 currentUserId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

