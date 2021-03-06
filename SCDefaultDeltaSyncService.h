//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeltaSyncService-Protocol.h"

@class NSMutableDictionary, NSString, SCDeltaSyncTokenRepository, SCDocObjectContext, SCFuture, SCNDeltaforceDeltaForceSyncClient;
@protocol OS_dispatch_queue, SCDeltaSyncMetricsReporter, SCPerforming;

@interface SCDefaultDeltaSyncService : NSObject <SCDeltaSyncService>
{
    SCFuture *_processors;
    SCFuture *_legacyProcessors;
    SCDeltaSyncTokenRepository *_syncTokenRepository;
    SCNDeltaforceDeltaForceSyncClient *_syncClient;
    SCDocObjectContext *_docObjectContext;
    id <SCPerforming> _performer;
    id <SCDeltaSyncMetricsReporter> _metricsReporter;
    NSMutableDictionary *_groupKeyToPromise;
    NSObject<OS_dispatch_queue> *_promiseLock;
}

- (void).cxx_destruct;
- (void)_handleSyncFailureForGroupKey:(id)arg1 error:(id)arg2;
- (void)_processedSyncWithGroupKey:(id)arg1 success:(_Bool)arg2 unexpectedSyncToken:(_Bool)arg3;
- (id)_deltaforceSyncRequestForGroupKey:(id)arg1 syncToken:(id)arg2;
- (void)_handleSyncSuccessWithLegacyProcessor:(id)arg1 groupKey:(id)arg2 response:(id)arg3;
- (void)_syncGroupWithKey:(id)arg1 legacyProcessor:(id)arg2;
- (id)_docObjectContextForProcessor:(id)arg1;
- (void)_handleSyncSuccessWithProcessor:(id)arg1 groupKey:(id)arg2 syncToken:(id)arg3 response:(id)arg4;
- (void)_syncGroupWithKey:(id)arg1 processor:(id)arg2;
- (void)shutdown;
- (id)syncGroupWithKey:(id)arg1;
- (id)initWithProcessors:(id)arg1 legacyProcessors:(id)arg2 syncTokenRepository:(id)arg3 syncClient:(id)arg4 docObjectContext:(id)arg5 performer:(id)arg6 metricsReporter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

