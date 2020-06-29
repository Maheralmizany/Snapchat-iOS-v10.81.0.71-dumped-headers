//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCGalleryFeaturedStoryThumbnailDownloaderEncryptionDelegate-Protocol.h"
#import "SCMemoriesFeaturedStoryDataSource-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SCDataObjectContext, SCFeatureSettingsService, SCGalleryFeaturedStoryThumbnailDownloader, SCQueuePerformer, SCSentinel, SCUserSession;
@protocol SCGalleryHighlightContentDataSourceDelegate, SCObserving;

@interface SCGalleryHighlightContentDataSource : NSObject <SCCloudSyncStatusListener, SCGalleryFeaturedStoryThumbnailDownloaderEncryptionDelegate, SCUserSessionScoped, SCMemoriesFeaturedStoryDataSource>
{
    SCSentinel *_invalidateSentinel;
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    SCDataObjectContext *_dataObjectContext;
    id <SCObserving> _featureSettingsObserveContext;
    _Bool _hasSetupHighlightUpStream;
    NSMutableSet *_pendingPrefetchExternalIds;
    NSMutableDictionary *_prefetchedMediaCount;
    NSArray *_savingEntryIds;
    SCGalleryFeaturedStoryThumbnailDownloader *_featuredStoryThumbnailDownloader;
    SCFeatureSettingsService *_featureSettingsService;
    NSArray *_featuredStories;
    id <SCGalleryHighlightContentDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryHighlightContentDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *featuredStories; // @synthesize featuredStories=_featuredStories;
- (void).cxx_destruct;
- (void)featuredStoryThumbnailDownloader:(id)arg1 decryptedData:(id)arg2 collectionId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_addNewSnap:(id)arg1 originalSnap:(id)arg2 mediaOverlayURL:(id)arg3 mediaURL:(id)arg4 mediaCloudFile:(id)arg5;
- (id)_galleryDataObjectContext;
- (void)_performDeletionChangeRequestsForSnaps:(id)arg1 entry:(id)arg2 removeMedia:(_Bool)arg3;
- (id)_entryChangeRequestFromCollection:(id)arg1;
- (void)didSaveFeaturedStory:(id)arg1;
- (void)willSaveFeaturedStory:(id)arg1;
- (_Bool)isSavingFeaturedStory:(id)arg1;
- (void)setSnapViewed:(id)arg1 entry:(id)arg2;
- (void)setSeenInCarousel:(id)arg1;
- (void)setIsHidden:(id)arg1;
- (_Bool)_allSnapsExistLocally:(id)arg1;
- (void)_updateLastSyncToNow;
- (_Bool)_shouldFetchServerCollections;
- (void)_logSyncEventWithTotalLatency:(double)arg1 prefetchLatency:(double)arg2 snapCount:(unsigned long long)arg3 prefetchSuccessCount:(unsigned long long)arg4 withBackgroundPush:(_Bool)arg5 galleryCollectionCategory:(id)arg6 externalId:(id)arg7 failureReason:(id)arg8;
- (id)_persistTemporaryHighlightsEntries:(id)arg1 snapIds:(id)arg2 snapIdsToServletSnapsMap:(id)arg3 titleSnapIds:(id)arg4;
- (void)_preloadMediaIfNeeded:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_preloadMediaIfNeededForSnaps:(id)arg1 totalSnapCount:(unsigned long long)arg2 galleryCollectionCategory:(id)arg3 startTime:(id)arg4 externalId:(id)arg5 snapsToSnapDetailsMap:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_duplicateLocalMediaForEntries:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_mixHighlightStories:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isCollectionSupported:(id)arg1;
- (void)_waitUntilNextCollectionsUpdate;
- (void)_fetchHighlightCollectionsFromServer;
- (void)_fetchCollectionsFromServerWithContext:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchExistingHighlightStory;
- (void)_setupOnHighlightDataSourceUpStream;
- (void)_setup;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (_Bool)isFeaturedStorySaved:(id)arg1;
- (id)requestMapSnapshotProviderForStyle:(long long)arg1;
- (void)requestOverlayForHighlightEntry:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestThumbnailForHighlightEntry:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestLocationForFeaturedStory:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prefetchCollectionsWithContext:(unsigned long long)arg1 timeout:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)editFeaturedSnap:(id)arg1 mediaData:(id)arg2 mediaCloudFile:(id)arg3 cloudFile:(id)arg4 assetCloudFiles:(id)arg5 entry:(id)arg6 duration:(double)arg7 isInfiniteDuration:(_Bool)arg8 overlayFormat:(id)arg9 overlay:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)deleteHighlightSnap:(id)arg1 forEntry:(id)arg2;
- (void)deleteHighlightEntry:(id)arg1;
- (id)featuredStoryViewModelForEntry:(id)arg1;
- (void)updateFeaturedStoriesWithEntries:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
