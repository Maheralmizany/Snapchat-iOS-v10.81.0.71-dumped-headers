//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncStatusListener-Protocol.h"

@class SCMemoriesStatusIcon, SCUserSession;
@protocol SCGalleryEntry, SCGallerySnap, SCMemoriesSyncStatusGeneratorDelegate;

@protocol SCMemoriesSyncStatusGenerating <SCCloudSyncStatusListener>
@property(nonatomic) _Bool selectMode;
@property(readonly, nonatomic) unsigned long long status;
@property(nonatomic) __weak id <SCMemoriesSyncStatusGeneratorDelegate> delegate;
@property(readonly, nonatomic) SCMemoriesStatusIcon *syncStatusIcon;
- (_Bool)isShowingSyncStatusIcon;
- (void)reset;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)updateSnap:(id <SCGallerySnap>)arg1;
- (void)updateEntry:(id <SCGalleryEntry>)arg1;
- (id)initWithUserSession:(SCUserSession *)arg1 snap:(id <SCGallerySnap>)arg2 entry:(id <SCGalleryEntry>)arg3 selectMode:(_Bool)arg4;
- (id)initWithUserSession:(SCUserSession *)arg1 entry:(id <SCGalleryEntry>)arg2 selectMode:(_Bool)arg3;
@end

