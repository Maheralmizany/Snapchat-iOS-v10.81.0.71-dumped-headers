//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesDataMutatingAddSnap-Protocol.h"
#import "SCMemoriesDataMutatingAutoSave-Protocol.h"
#import "SCMemoriesDataMutatingBackupRetry-Protocol.h"
#import "SCMemoriesDataMutatingBatchCapture-Protocol.h"
#import "SCMemoriesDataMutatingDelete-Protocol.h"
#import "SCMemoriesDataMutatingEdit-Protocol.h"
#import "SCMemoriesDataMutatingHighlight-Protocol.h"
#import "SCMemoriesDataMutatingMEO-Protocol.h"
#import "SCMemoriesDataMutatingMultiSnap-Protocol.h"
#import "SCMemoriesDataMutatingRecovery-Protocol.h"
#import "SCMemoriesDataMutatingSharedStory-Protocol.h"
#import "SCMemoriesDataMutatingSpectacles-Protocol.h"
#import "SCMemoriesDataMutatingStory-Protocol.h"

@class NSMutableDictionary, NSString, SCDataObjectContext, SCQueuePerformer, SCScopedAccess, SCUserSession;

@interface SCGalleryDataMutator : NSObject <SCMemoriesDataMutatingAddSnap, SCMemoriesDataMutatingAutoSave, SCMemoriesDataMutatingBackupRetry, SCMemoriesDataMutatingBatchCapture, SCMemoriesDataMutatingDelete, SCMemoriesDataMutatingEdit, SCMemoriesDataMutatingHighlight, SCMemoriesDataMutatingMultiSnap, SCMemoriesDataMutatingMEO, SCMemoriesDataMutatingRecovery, SCMemoriesDataMutatingSharedStory, SCMemoriesDataMutatingSpectacles, SCMemoriesDataMutatingStory>
{
    SCQueuePerformer *_storeQueuePerformer;
    SCUserSession *_userSession;
    SCScopedAccess *_scopedUserInfoServices;
    SCDataObjectContext *_dataObjectContext;
    NSMutableDictionary *_updatedSnapIdMap;
}

- (void).cxx_destruct;
- (_Bool)_storeGenericAssets:(id)arg1 withMutationInfo:(id)arg2 snap:(id)arg3 key:(id)arg4 iv:(id)arg5 masterKey:(id)arg6;
- (void)_checkSnapMediaType:(int)arg1 servletMediaFormat:(id)arg2 isSavingVideo:(_Bool)arg3 userContext:(id)arg4;
- (long long)_sojuMediaFormatFromServletMediaFormat:(id)arg1;
- (id)_checkServletMediaFormat:(id)arg1 sojuMediaType:(int)arg2;
- (void)_appendByteSizeOperationsForStory:(id)arg1 addSnapEntities:(id)arg2 fromFailedEntry:(id)arg3 dataVaultEncryption:(id)arg4 userContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_placeholderForPhotoAsset:(id)arg1 mediaURL:(id)arg2 orientation:(long long)arg3 creationDate:(id)arg4 isPrivate:(_Bool)arg5 creatorUserId:(id)arg6 sharedSnapId:(id)arg7 multiSnapGroupId:(id)arg8 attribution:(id)arg9 source:(unsigned long long)arg10 dataVaultEncryption:(id)arg11 mutationInfo:(id)arg12 userContext:(id)arg13;
- (void)_addStoryWithEntryId:(id)arg1 externalId:(id)arg2 title:(id)arg3 autosaveTimeUtc:(id)arg4 entryType:(unsigned long long)arg5 entrySource:(long long)arg6 viewType:(unsigned long long)arg7 addSnapEntities:(id)arg8 isPrivate:(_Bool)arg9 dataVaultEncryption:(id)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)_addPhoto:(id)arg1 genericAssets:(id)arg2 sojuMediaType:(int)arg3 servletMediaFormat:(id)arg4 source:(unsigned long long)arg5 cameraRollId:(id)arg6 attribution:(id)arg7 externalId:(id)arg8 title:(id)arg9 entryType:(unsigned long long)arg10 entrySource:(long long)arg11 autosaveTimeUtc:(id)arg12 captureTimeUtc:(id)arg13 createTimeUtc:(id)arg14 orientation:(long long)arg15 duration:(double)arg16 isInfiniteDuration:(_Bool)arg17 overlayFormat:(id)arg18 overlay:(id)arg19 location:(id)arg20 isPrivate:(_Bool)arg21 autosave:(_Bool)arg22 saveSource:(unsigned long long)arg23 isFromSavedMetadata:(_Bool)arg24 cameraFrontFacing:(_Bool)arg25 snap3DAssetMetadata:(id)arg26 userContext:(id)arg27 completionHandler:(CDUnknownBlockType)arg28;
- (id)_generateEncryptedPhotoSnap:(id)arg1 genericAssets:(id)arg2 sojuMediaType:(int)arg3 servletMediaFormat:(id)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 source:(unsigned long long)arg7 cameraRollId:(id)arg8 sharedSnapId:(id)arg9 attribution:(id)arg10 captureTimeUtc:(id)arg11 createTimeUtc:(id)arg12 orientation:(long long)arg13 duration:(double)arg14 location:(id)arg15 isPrivate:(_Bool)arg16 isInfiniteDuration:(_Bool)arg17 dataVaultEncryption:(id)arg18 mutationInfo:(id)arg19 cameraFrontFacing:(_Bool)arg20 snap3DAssetMetadata:(id)arg21;
- (void)_addVideo:(id)arg1 genericAssets:(id)arg2 metadataItems:(id)arg3 sojuMediaType:(int)arg4 servletMediaFormat:(id)arg5 source:(unsigned long long)arg6 cameraRollId:(id)arg7 attribution:(id)arg8 externalId:(id)arg9 title:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 autosaveTimeUtc:(id)arg13 captureTimeUtc:(id)arg14 createTimeUtc:(id)arg15 orientation:(long long)arg16 overlayFormat:(id)arg17 overlay:(id)arg18 location:(id)arg19 isPrivate:(_Bool)arg20 autosave:(_Bool)arg21 saveSource:(unsigned long long)arg22 isInfiniteDuration:(_Bool)arg23 isFromSavedMetadata:(_Bool)arg24 cameraFrontFacing:(_Bool)arg25 encryptedMediaFile:(id)arg26 hasOptimizedForNetworkUse:(_Bool)arg27 deviceFirmwareInfo:(id)arg28 deviceId:(id)arg29 userContext:(id)arg30 completionHandler:(CDUnknownBlockType)arg31;
- (id)_generateEncryptedVideoSnap:(id)arg1 genericAssets:(id)arg2 metadataItems:(id)arg3 sojuMediaType:(int)arg4 servletMediaFormat:(id)arg5 overlayFormat:(id)arg6 overlay:(id)arg7 timeScale:(double)arg8 source:(unsigned long long)arg9 cameraRollId:(id)arg10 sharedSnapId:(id)arg11 multiSnapGroupId:(id)arg12 attribution:(id)arg13 captureTimeUtc:(id)arg14 createTimeUtc:(id)arg15 orientation:(long long)arg16 location:(id)arg17 isPrivate:(_Bool)arg18 isInfiniteDuration:(_Bool)arg19 dataVaultEncryption:(id)arg20 mutationInfo:(id)arg21 cameraFrontFacing:(_Bool)arg22 encryptedMediaFile:(id)arg23 hasOptimizedForNetworkUse:(_Bool)arg24 deviceFirmwareInfo:(id)arg25 deviceId:(id)arg26 userContext:(id)arg27;
- (_Bool)_shouldApplyFastStartOperation:(_Bool)arg1 isOKToUseEncryptedMediaFile:(_Bool)arg2;
- (_Bool)_isOKToUseEncryptedMediaFile:(id)arg1 isPrivate:(_Bool)arg2;
- (id)_generateEncryptedVideoSnap:(id)arg1 genericAssets:(id)arg2 metadataItems:(id)arg3 sojuMediaType:(int)arg4 servletMediaFormat:(id)arg5 overlayFormat:(id)arg6 overlay:(id)arg7 timeScale:(double)arg8 source:(unsigned long long)arg9 cameraRollId:(id)arg10 sharedSnapId:(id)arg11 attribution:(id)arg12 captureTimeUtc:(id)arg13 createTimeUtc:(id)arg14 orientation:(long long)arg15 location:(id)arg16 isPrivate:(_Bool)arg17 isInfiniteDuration:(_Bool)arg18 dataVaultEncryption:(id)arg19 mutationInfo:(id)arg20 cameraFrontFacing:(_Bool)arg21 userContext:(id)arg22;
- (id)initWithUserSession:(id)arg1 dataObjectContext:(id)arg2;
- (void)addPhoto:(id)arg1 genericAssets:(id)arg2 sojuMediaType:(int)arg3 servletMediaFormat:(id)arg4 source:(unsigned long long)arg5 cameraRollId:(id)arg6 attribution:(id)arg7 captureTimeUtc:(id)arg8 createTimeUtc:(id)arg9 orientation:(long long)arg10 duration:(double)arg11 overlayFormat:(id)arg12 overlay:(id)arg13 location:(id)arg14 isPrivate:(_Bool)arg15 saveSource:(unsigned long long)arg16 isInfiniteDuration:(_Bool)arg17 isFromSavedMetadata:(_Bool)arg18 cameraFrontFacing:(_Bool)arg19 snap3DAssetMetadata:(id)arg20 userContext:(id)arg21 completionHandler:(CDUnknownBlockType)arg22;
- (void)addVideoProvider:(id)arg1 genericAssets:(id)arg2 metadataItems:(id)arg3 sojuMediaType:(int)arg4 source:(unsigned long long)arg5 cameraRollId:(id)arg6 attribution:(id)arg7 captureTimeUtc:(id)arg8 createTimeUtc:(id)arg9 orientation:(long long)arg10 overlayFormat:(id)arg11 overlay:(id)arg12 location:(id)arg13 isPrivate:(_Bool)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 encryptedMediaFile:(id)arg19 deviceFirmwareInfo:(id)arg20 deviceId:(id)arg21 userContext:(id)arg22 completionHandler:(CDUnknownBlockType)arg23;
- (void)addVideoProvider:(id)arg1 genericAssets:(id)arg2 metadataItems:(id)arg3 sojuMediaType:(int)arg4 source:(unsigned long long)arg5 cameraRollId:(id)arg6 attribution:(id)arg7 captureTimeUtc:(id)arg8 createTimeUtc:(id)arg9 orientation:(long long)arg10 overlayFormat:(id)arg11 overlay:(id)arg12 location:(id)arg13 isPrivate:(_Bool)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 userContext:(id)arg19 completionHandler:(CDUnknownBlockType)arg20;
- (id)_getAttribution;
- (void)_addAutosavedVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 autosavedEntry:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 externalId:(id)arg13 title:(id)arg14 attribution:(id)arg15 cameraFrontFacing:(_Bool)arg16 userContext:(id)arg17 completionHandler:(CDUnknownBlockType)arg18;
- (void)addAutosavedMyStoryVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)addAutosavedMobVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 completionHandler:(CDUnknownBlockType)arg15;
- (void)_addAutosavedPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 autosavedEntry:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 externalId:(id)arg13 title:(id)arg14 attribution:(id)arg15 cameraFrontFacing:(_Bool)arg16 snap3DAssetMetadata:(id)arg17 userContext:(id)arg18 completionHandler:(CDUnknownBlockType)arg19;
- (void)addAutosavedMyStoryPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 snap3DAssetMetadata:(id)arg11 userContext:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
- (void)addAutosavedMobPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 snap3DAssetMetadata:(id)arg15 completionHandler:(CDUnknownBlockType)arg16;
- (void)deleteFailedEntries:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retryFailedEntry:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retryFailedEntry:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retryFailedSnap:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 isAutosave:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 currentEntry:(id)arg13 externalId:(id)arg14 title:(id)arg15 attribution:(id)arg16 cameraFrontFacings:(id)arg17 createTimes:(id)arg18 timeRanges:(id)arg19 completionHandler:(CDUnknownBlockType)arg20;
- (void)addBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 isAutosave:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacings:(id)arg10 createTimes:(id)arg11 timeRanges:(id)arg12 userContext:(id)arg13 currentEntry:(id)arg14 isMultiSnap:(_Bool)arg15 completionHandler:(CDUnknownBlockType)arg16;
- (void)addMobBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 isInfiniteDuration:(_Bool)arg8 userContext:(id)arg9 externalId:(id)arg10 displayName:(id)arg11 entrySource:(long long)arg12 cameraFrontFacings:(id)arg13 createTimes:(id)arg14 timeRanges:(id)arg15 isMultiSnap:(_Bool)arg16 completionHandler:(CDUnknownBlockType)arg17;
- (void)_deleteEntries:(id)arg1 prioritized:(_Bool)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)detachSnap:(id)arg1 cloudFile:(id)arg2 fromEntry:(id)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSnap:(id)arg1 fromEntry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteEntries:(id)arg1 prioritized:(_Bool)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_addNewSnap:(id)arg1 originalSnap:(id)arg2 mediaOverlayURL:(id)arg3 mediaURL:(id)arg4 mediaCloudFile:(id)arg5;
- (void)_replacePhotoSnap:(id)arg1 photo:(id)arg2 mediaCloudFile:(id)arg3 cloudFile:(id)arg4 assetCloudFiles:(id)arg5 entry:(id)arg6 duration:(double)arg7 isInfiniteDuration:(_Bool)arg8 overlayFormat:(id)arg9 overlay:(id)arg10 snap3DAssetMetadata:(id)arg11 userContext:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
- (void)_replaceVideoSnap:(id)arg1 videideoProvider:(id)arg2 mediaCloudFile:(id)arg3 cloudFile:(id)arg4 assetCloudFiles:(id)arg5 entry:(id)arg6 overlayFormat:(id)arg7 overlay:(id)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)updateEntry:(id)arg1 addSnaps:(id)arg2 addPhotoAssets:(id)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateEntry:(id)arg1 title:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createSnapFrom:(id)arg1 cloudFile:(id)arg2 assetCloudFiles:(id)arg3 overlayFormat:(id)arg4 overlay:(id)arg5 isInfiniteDuration:(_Bool)arg6 isPrivate:(_Bool)arg7 createTimeUtc:(id)arg8 userContext:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)replacePhotoSnap:(id)arg1 cloudFile:(id)arg2 assetCloudFiles:(id)arg3 entry:(id)arg4 duration:(double)arg5 isInfiniteDuration:(_Bool)arg6 overlayFormat:(id)arg7 overlay:(id)arg8 snap3DAssetMetadata:(id)arg9 userContext:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)replacePhotoSnap:(id)arg1 mediaCloudFile:(id)arg2 cloudFile:(id)arg3 assetCloudFiles:(id)arg4 entry:(id)arg5 duration:(double)arg6 isInfiniteDuration:(_Bool)arg7 overlayFormat:(id)arg8 overlay:(id)arg9 snap3DAssetMetadata:(id)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)replacePhotoSnap:(id)arg1 photo:(id)arg2 cloudFile:(id)arg3 assetCloudFiles:(id)arg4 entry:(id)arg5 duration:(double)arg6 isInfiniteDuration:(_Bool)arg7 overlayFormat:(id)arg8 overlay:(id)arg9 snap3DAssetMetadata:(id)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)replaceVideoSnap:(id)arg1 mediaCloudFile:(id)arg2 cloudFile:(id)arg3 assetCloudFiles:(id)arg4 entry:(id)arg5 overlayFormat:(id)arg6 overlay:(id)arg7 isInfiniteDuration:(_Bool)arg8 userContext:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)replaceVideoSnap:(id)arg1 cloudFile:(id)arg2 assetCloudFiles:(id)arg3 entry:(id)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 isInfiniteDuration:(_Bool)arg7 userContext:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)replaceVideoSnap:(id)arg1 videoProvider:(id)arg2 cloudFile:(id)arg3 assetCloudFiles:(id)arg4 entry:(id)arg5 overlayFormat:(id)arg6 overlay:(id)arg7 isInfiniteDuration:(_Bool)arg8 userContext:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)getUpdatedSnapIdWithOldSnapId:(id)arg1;
- (void)saveFeaturedStory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addMultiSnapWithVideoUrls:(id)arg1 metadataItems:(id)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(id)arg4 orientation:(long long)arg5 overlayFormats:(id)arg6 overlays:(id)arg7 location:(id)arg8 isPrivate:(_Bool)arg9 isInfiniteDuration:(_Bool)arg10 userContext:(id)arg11 entryType:(unsigned long long)arg12 entrySource:(long long)arg13 currentEntry:(id)arg14 externalId:(id)arg15 title:(id)arg16 attribution:(id)arg17 cameraFrontFacing:(_Bool)arg18 createTimeOfFirstSnap:(id)arg19 timeRanges:(id)arg20 completionHandler:(CDUnknownBlockType)arg21;
- (void)addMultiSnapWithVideoUrls:(id)arg1 metadataItems:(id)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(id)arg4 orientation:(long long)arg5 overlayFormats:(id)arg6 overlays:(id)arg7 location:(id)arg8 isPrivate:(_Bool)arg9 isAutosave:(_Bool)arg10 isInfiniteDuration:(_Bool)arg11 cameraFrontFacing:(_Bool)arg12 createTimeOfFirstSnap:(id)arg13 timeRanges:(id)arg14 userContext:(id)arg15 currentEntry:(id)arg16 completionHandler:(CDUnknownBlockType)arg17;
- (void)addMobMultiSnapWithVideoUrls:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 orientation:(long long)arg4 overlayFormats:(id)arg5 overlays:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 createTimeOfFirstSnap:(id)arg15 timeRanges:(id)arg16 completionHandler:(CDUnknownBlockType)arg17;
- (void)updatePrivacyForEntries:(id)arg1 isPrivate:(_Bool)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)recoverDanglingMediaWithSnapId:(id)arg1 cloudFile:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_addEntryFromSnap:(id)arg1 createTimeUtc:(id)arg2 orientation:(long long)arg3 isPrivate:(_Bool)arg4 entrySource:(long long)arg5 isFromSavedMetadata:(_Bool)arg6 dataVaultEncryption:(id)arg7 mutationInfo:(id)arg8 userContext:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)saveStoryVideoSnap:(id)arg1 videoProvider:(id)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(id)arg4 source:(unsigned long long)arg5 storySnapId:(id)arg6 captureTimeUtc:(id)arg7 createTimeUtc:(id)arg8 orientation:(long long)arg9 overlayFormat:(id)arg10 overlay:(id)arg11 location:(id)arg12 isPrivate:(_Bool)arg13 entrySource:(long long)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 userContext:(id)arg19 completionHandler:(CDUnknownBlockType)arg20;
- (void)saveStoryImageSnap:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 captureTimeUtc:(id)arg5 createTimeUtc:(id)arg6 orientation:(long long)arg7 duration:(double)arg8 overlayFormat:(id)arg9 overlay:(id)arg10 location:(id)arg11 isPrivate:(_Bool)arg12 entrySource:(long long)arg13 saveSource:(unsigned long long)arg14 isInfiniteDuration:(_Bool)arg15 isFromSavedMetadata:(_Bool)arg16 cameraFrontFacing:(_Bool)arg17 snap3DAssetMetadata:(id)arg18 userContext:(id)arg19 completionHandler:(CDUnknownBlockType)arg20;
- (void)_createTicketForBadMediaWithMessage:(id)arg1;
- (id)_generateEncryptedDayStorySnapFromPlaceholder:(id)arg1 dataVaultEncryption:(id *)arg2 mutationInfo:(id)arg3 metadata:(id)arg4;
- (void)appendToDayStory:(id)arg1 snapPlaceholder:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_highlightSnapIds:(id)arg1 entry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)highlightSnapIds:(id)arg1 forEntry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)toggleHighlightStateForSnap:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_attemptToLoadVideoAtrributions:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_populateFieldsForSnapsToAppend:(id)arg1 isPrivate:(_Bool)arg2 addSnapEntities:(id)arg3 mutationInfo:(id)arg4 dataVaultEncryption:(id)arg5 userContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_snapsToAppendForAllSnaps:(id)arg1 entrySnaps:(id)arg2;
- (void)_extendStoriesForEntry:(id)arg1 storySnaps:(id)arg2 isPrivate:(_Bool)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_saveStoriesWithStoriesId:(id)arg1 storyDisplayName:(id)arg2 entrySource:(long long)arg3 storySnaps:(id)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(id)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)saveStoryWithId:(id)arg1 storyDisplayName:(id)arg2 entrySource:(long long)arg3 storySnaps:(id)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(id)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)createStoryWithSnaps:(id)arg1 photoAssets:(id)arg2 photoAssetMediaURLs:(id)arg3 photoAssetOrientations:(id)arg4 storyDisplayName:(id)arg5 isPrivate:(_Bool)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

