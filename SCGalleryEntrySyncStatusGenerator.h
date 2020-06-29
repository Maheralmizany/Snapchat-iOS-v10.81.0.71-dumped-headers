//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesSyncStatusGenerating-Protocol.h"

@class NSString, SCMemoriesStatusIcon, SCUserSession;
@protocol SCGalleryEntry, SCGallerySnap, SCMemoriesSyncStatusGeneratorDelegate;

@interface SCGalleryEntrySyncStatusGenerator : NSObject <SCMemoriesSyncStatusGenerating>
{
    SCUserSession *_userSession;
    id <SCGalleryEntry> _entry;
    id <SCGallerySnap> _snap;
    _Bool _generatingUpdates;
    _Bool _selectMode;
    SCMemoriesStatusIcon *_syncStatusIcon;
    id <SCMemoriesSyncStatusGeneratorDelegate> _delegate;
    unsigned long long _status;
}

@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <SCMemoriesSyncStatusGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCMemoriesStatusIcon *syncStatusIcon; // @synthesize syncStatusIcon=_syncStatusIcon;
- (void).cxx_destruct;
- (void)_presentBackupAlert;
- (void)_handleChangeEntrySyncStatus:(unsigned long long)arg1 entryId:(id)arg2 snapId:(id)arg3;
- (void)cloudSync:(id)arg1 didChangeEntrySyncStatus:(unsigned long long)arg2 entryId:(id)arg3 snapId:(id)arg4;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)reset;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (_Bool)_isSnapPartOfCurrentSpectaclesTransferSession;
- (_Bool)isShowingSyncStatusIcon;
- (void)_updateIcon;
- (void)_stopSyncAnimation;
- (void)_startSyncAnimation;
- (void)_createSyncStatusIcon;
- (void)updateSnap:(id)arg1;
- (void)updateEntry:(id)arg1;
- (id)initWithUserSession:(id)arg1 snap:(id)arg2 entry:(id)arg3 selectMode:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1 entry:(id)arg2 selectMode:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

