//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation-Protocol.h"

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudAddSnapEntryOperation_DEPRECATED_DO_NOT_USE : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    NSDictionary *_dataVaultEncryption;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    SCCloudSyncTriggerUserContext *_userContext;
}

- (void).cxx_destruct;
- (_Bool)isPrivateWithDataObjectContext:(id)arg1;
- (id)dataVaultEncryption;
- (unsigned long long)numberOfSnaps;
- (id)miniThumbnailPlaceholders;
- (id)detailPlaceholders;
- (id)snapPlaceholders;
- (_Bool)requiresSyncStatusUpdate;
- (id)logParameters;
@property(readonly, copy) NSString *description;
- (void)_updateEntriesFromNetworker:(id)arg1 queue:(id)arg2 snapsUploadInfo:(id)arg3 failureHandler:(CDUnknownBlockType)arg4 successHandler:(CDUnknownBlockType)arg5;
- (id)cleanupContextForOutOfOrderDeletionWithDataObjectContext:(id)arg1;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataObjectContext:(id)arg2 dataSource:(id)arg3 logger:(id)arg4 queue:(id)arg5;
- (_Bool)needRunImmediately;
- (_Bool)allMediaUploadsCompleteWithDataObjectContext:(id)arg1;
- (_Bool)isOperationFromRetryEntry;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (void)remoteSyncFromCloudFS:(id)arg1 dataVault:(id)arg2 dataObjectContext:(id)arg3 networker:(id)arg4 logger:(id)arg5 queue:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1 dataObjectContext:(id)arg2;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (id)makeSnapshot;
- (id)entryIds;
- (id)requestID;
- (unsigned long long)type;
- (id)initWithProfile:(id)arg1 entryPlaceholder:(id)arg2 addSnapEntity:(id)arg3 dataVaultEncryption:(id)arg4 userContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
