//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGallerySingleItemOperaDataSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCGalleryOperaConfiguration, SCGalleryOperaMediaManager, SCOperaViewModel, SCUserSession;
@protocol SCGalleryEntry, SCGalleryOperaMagicMomentCaching, SCGallerySingleItemOperaDataSourceDelegate, SCObserving;

@interface SCGallerySingleEntryOperaDataSource : NSObject <SCGallerySingleItemOperaDataSource>
{
    SCGalleryOperaConfiguration *_configuration;
    id <SCGalleryOperaMagicMomentCaching> _magicMomentCache;
    SCUserSession *_userSession;
    id <SCGallerySingleItemOperaDataSourceDelegate> _delegate;
    SCGalleryOperaMediaManager *_mediaManager;
    SCOperaViewModel *_currentViewModel;
    NSString *_dataSourceId;
    CDStruct_bac8f6e9 _baseMediaScenePath;
    NSMutableDictionary *_snapIdToViewModelMap;
    NSMutableDictionary *_snapIdToLoadedMediaProperties;
    id <SCGalleryEntry> _entry;
    NSArray *_snaps;
    NSMutableDictionary *_snapIdToGallerySnap;
    NSDictionary *_snapIdToSnapHighlightState;
    id <SCObserving> _observeContext;
    NSMutableArray *_delayToLoadSnapIds;
}

+ (id)sharedPerformer;
@property(nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_baseMediaScenePath;
@property(readonly, copy, nonatomic) NSString *singleDataSourceId; // @synthesize singleDataSourceId=_dataSourceId;
@property(retain, nonatomic) SCOperaViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) __weak SCGalleryOperaMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(nonatomic) __weak id <SCGallerySingleItemOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_attemptToRecoverEntry:(id)arg1;
- (void)_unobserveEntryChanges;
- (void)_observeEntryChanges;
- (void)_updateEntry:(id)arg1 snaps:(id)arg2 changedKeys:(id)arg3;
- (void)_removePropertiesFromPage:(id)arg1 removePropertyWithKeys:(id)arg2;
- (void)_appendPropertiesToPage:(id)arg1 newProperties:(id)arg2;
- (id)_pageForGallerySnap:(id)arg1;
- (void)_removeAllMediaLoadedPropertiesForSnapId:(id)arg1;
- (void)_appendMediaLoadedPropertiesForSnapId:(id)arg1 newProperties:(id)arg2;
- (void)_reportFailToPreparePageWithPageId:(id)arg1 layerType:(unsigned long long)arg2 error:(id)arg3;
- (void)_didLoadContentWithSnapId:(id)arg1 loadedProperties:(id)arg2 shouldUpdateProperties:(_Bool)arg3 shouldReport:(_Bool)arg4 pageId:(id)arg5 layerType:(unsigned long long)arg6 error:(id)arg7;
- (void)_didLoadContentWithSnapId:(id)arg1 loadedProperties:(id)arg2 shouldUpdateProperties:(_Bool)arg3 reportBlock:(CDUnknownBlockType)arg4;
- (void)_updateSingleViewModelForSnap:(id)arg1 isFailedEntry:(_Bool)arg2;
- (void)_updateViewModelGroup;
- (id)_updateSnapIdToHighlightStateMapFromSnaps:(id)arg1;
- (id)_buildSnapIdToGallerySnapMapFromSnaps:(id)arg1;
- (void)_updatePlaylistGroupBasedOnSnaps:(id)arg1;
- (void)_startToLoadSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3;
- (void)_didFetchSnapDetail:(id)arg1 forSnap:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3;
- (void)_startToLoadSnap:(id)arg1;
- (void)_startToLoadTransferringSnap:(id)arg1;
- (id)_applyCroppingIfNecessaryForImage:(id)arg1 snap:(id)arg2;
- (void)updateMagicMomentFrameTime:(id)arg1 forPageId:(id)arg2;
- (void)attemptToAttachPresentationFrame:(id)arg1 toPageId:(id)arg2;
- (void)didFailToDisplayAtPageId:(id)arg1 error:(id)arg2;
- (void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(_Bool)arg2;
- (id)resolveGalleryOperaSnapWithPageId:(id)arg1;
- (id)resolveGallerySnapWithPageId:(id)arg1;
- (void)startToBrowsePageWithPageId:(id)arg1 distanceToCurrentDataSource:(long long)arg2;
- (void)removeMediaWithPageId:(id)arg1;
- (void)prepareToViewPageWithPageId:(id)arg1;
- (void)buildViewModels;
- (id)_fetchGallerySnapsForEntry:(id)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 dataSourceId:(id)arg2 configuration:(id)arg3 magicMomentCache:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

