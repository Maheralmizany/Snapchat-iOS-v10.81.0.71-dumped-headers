//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SCAutoStickerLogger, SCFaceDetector, SCPreferences, SCQueuePerformer, SCUserSession;
@protocol OS_dispatch_group;

@interface SCCustomStickerFaceCutAnalyzer : NSObject
{
    SCUserSession *_userSession;
    SCPreferences *_userPreferences;
    SCAutoStickerLogger *_logger;
    SCFaceDetector *_faceDetector;
    SCQueuePerformer *_performer;
    struct unique_ptr<SnapCutExt, std::__1::default_delete<SnapCutExt>> _snapCut;
    NSMutableSet *_dedupMemoriesIds;
    NSMutableSet *_dedupCameraRollIds;
    NSObject<OS_dispatch_group> *_addStickerCompleteGroup;
    _Bool _isGenerating;
}

@property(nonatomic) _Bool isGenerating; // @synthesize isGenerating=_isGenerating;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugString;
- (_Bool)isFirstTime;
- (void)_generateFaceCustomStickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setSnapCutModelIfNecessary;
- (void)_loadSnapCutModelCompletion:(CDUnknownBlockType)arg1;
- (void)generateFaceCustomStickerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAutoUpdate;
- (id)_getSnapsFromMemories;
- (void)updateAutoSticker;
- (id)_getFetchResultsFromCameraRoll;
- (void)_filterOutSnapchatAlbum;
- (void)_stickersFromCameraAndMemoriesWithCompletion:(long long)arg1 scanCount:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stickerFromMemoriesWithCompletion:(id)arg1 currentIdx:(unsigned long long)arg2 totalScanCount:(long long)arg3 totalSkipCount:(long long)arg4 totalStickerCount:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_getFaceCutStickers:(CDUnknownBlockType)arg1;
- (long long)_analyze:(id)arg1 originId:(id)arg2 creationTime:(id)arg3;
- (id)initAnalyzerWithUserSession:(id)arg1;

@end

