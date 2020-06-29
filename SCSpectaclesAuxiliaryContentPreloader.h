//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCCloudFS, SCCloudSync, SCDataObjectContext, SCQueuePerformer, SCSentinel, SCSpectaclesAuxiliaryContentStore;
@protocol SCEncryptedContentManaging, SCGalleryProfile;

@interface SCSpectaclesAuxiliaryContentPreloader : NSObject <SCService, SCUserSessionScoped>
{
    id <SCGalleryProfile> _profile;
    SCCloudSync *_cloudSync;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    SCCloudFS *_cloudFS;
    id <SCEncryptedContentManaging> _encryptedContentManager;
    SCDataObjectContext *_dataObjectContext;
    SCQueuePerformer *_performer;
    unsigned long long _state;
    NSArray *_pendingEntries;
    NSArray *_pendingSnaps;
    long long _entryIndex;
    long long _snapIndex;
    long long _cachedBytes;
    SCSentinel *_invalidateSentinel;
}

- (void).cxx_destruct;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)_continueDownloadDepthWithServiceTerm:(id)arg1;
- (void)_downloadSnapsWithServiceTerm:(id)arg1;
- (_Bool)_shouldDownloadDepth;
- (void)_processEntryWithServiceTerm:(id)arg1;
- (void)_fetchAllEntriesWithServiceTerm:(id)arg1;
- (void)_transitToState:(unsigned long long)arg1 serviceTerm:(id)arg2;
- (id)_fileRestoringNotifier;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (id)defaultLongRunningNotifier;
- (id)defaultImmediateNotifier;
- (id)_notifierWithSyncedStatusNotifier:(id)arg1;
- (id)initWithProfile:(id)arg1 cloudSync:(id)arg2 cloudFS:(id)arg3 auxiliaryContentStore:(id)arg4 encryptedContentManager:(id)arg5 dataObjectContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

