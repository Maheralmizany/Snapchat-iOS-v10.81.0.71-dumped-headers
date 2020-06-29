//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"

@class NSDictionary, NSString, PINMemoryCache, SCManagedDatastoreCollector;
@protocol SCPerforming;

@interface SCCacheManager : NSObject <SCServerConfigListener>
{
    SCManagedDatastoreCollector *_datastoreCollector;
    NSDictionary *_ownedDatastoreMetrics;
    NSString *_jsonifiedSetOfDirectories;
    _Bool _isUserAvailable;
    CDUnknownBlockType _unavailableWarningCallback;
    id <SCPerforming> _performer;
    PINMemoryCache *_sharedMemoryCache;
}

+ (id)shared;
@property(retain, nonatomic) PINMemoryCache *sharedMemoryCache; // @synthesize sharedMemoryCache=_sharedMemoryCache;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(copy, nonatomic) CDUnknownBlockType unavailableWarningCallback; // @synthesize unavailableWarningCallback=_unavailableWarningCallback;
@property(nonatomic) _Bool isUserAvailable; // @synthesize isUserAvailable=_isUserAvailable;
- (void).cxx_destruct;
- (void)_updateWithServerConfig:(id)arg1;
- (void)serverConfigDidChange:(id)arg1;
- (void)_markOversizedDatastore;
- (id)_determineActiveCacheDirectories;
- (id)_determineActiveUnmanagedDirectories:(id)arg1;
- (void)_initializeDeadCacheDetection:(id)arg1;
- (void)_removeDeadCacheDirectories:(id)arg1;
- (_Bool)_isReadyForCacheCleanup:(id)arg1;
- (void)_cleanupDeadCacheDirectories;
- (void)_cleanupDeadUnmanagedDirectories;
- (void)handleEmergencyDiskConditionForDatastores:(id)arg1;
- (void)clearAllSessionScopedCache;
- (void)clearOutExpiredCache:(id)arg1;
- (id)_prepareScrubbersForReportDirectories;
- (id)_prepareOwnedDatastores;
- (id)_determineMetricsForDatastores:(id)arg1;
- (void)determineAllMetrics:(CDUnknownBlockType)arg1;
- (void)getDiskCacheSizeForKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithQueuePerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
