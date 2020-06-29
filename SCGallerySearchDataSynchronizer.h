//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class EGODatabaseStatement, NSArray, NSSet, NSString, SCCloudSync, SCDataObjectContext, SCGalleryLogger, SCGalleryProfile, SCGallerySearchIndexer, SCGallerySearchTagUploader, SCKeyService, SCMemoriesSearchDatabase, SCQueuePerformer, SCSentinel;
@protocol SCNetworker;

@interface SCGallerySearchDataSynchronizer : NSObject <SCService, SCUserSessionScoped>
{
    SCMemoriesSearchDatabase *_memoriesSearchDatabase;
    SCGallerySearchIndexer *_searchIndexer;
    SCGallerySearchTagUploader *_tagUploader;
    id <SCNetworker> _networker;
    SCQueuePerformer *_performer;
    SCGalleryProfile *_profile;
    SCGalleryLogger *_galleryLogger;
    SCCloudSync *_cloudSync;
    SCKeyService *_keyService;
    NSArray *_pendingSnaps;
    NSArray *_snapsInCoreData;
    NSSet *_indexedSnapIdSet;
    long long _pendingIndex;
    unsigned long long _status;
    EGODatabaseStatement *_querySyncedSnapIds;
    SCSentinel *_invalidateSentinel;
    SCDataObjectContext *_dataObjectContext;
}

- (void).cxx_destruct;
- (id)_findSyncedSnapIdWithDatabase:(id)arg1;
- (void)_setupDatabase:(id)arg1;
- (void)_uploadTagsWithServiceTerm:(id)arg1;
- (void)_indexSnapWithServiceTerm:(id)arg1;
- (void)_fetchIndexedSnapsWithServiceTerm:(id)arg1;
- (void)_fetchSnapsWithServiceTerm:(id)arg1;
- (void)_transitToState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (id)defaultLongRunningNotifier;
- (id)defaultImmediateNotifier;
- (id)_fullySyncedNotifier:(double)arg1;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (id)initWithMemoriesSearchDatabase:(id)arg1 searchIndexer:(id)arg2 tagUploader:(id)arg3 networker:(id)arg4 cloudSync:(id)arg5 profile:(id)arg6 galleryLogger:(id)arg7 keyService:(id)arg8 dataObjectContext:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

