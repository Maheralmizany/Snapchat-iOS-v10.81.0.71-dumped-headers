//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBaseViewModelDataProvider-Protocol.h"
#import "SCLensExplorerVisibleItemsTracking-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCLensExplorerDataStore, SCLensExplorerImagesDataStore, SCLensExplorerLensCellViewModelDataProviderConfiguration, SCLensExplorerVisibleItemsTracker, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCUnlockableLensDataStoreFilterProtocol;

@interface SCLensExplorerLensCellViewModelDataProvider : NSObject <SCUpdateListener, SCLensExplorerBaseViewModelDataProvider, SCLensExplorerVisibleItemsTracking>
{
    SCLensExplorerDataStore *_lensDataStore;
    SCLensExplorerImagesDataStore *_imagesDataStore;
    id <SCUnlockableLensDataStoreFilterProtocol> _creatorsBlacklist;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_performer;
    SCLensExplorerLensCellViewModelDataProviderConfiguration *_configuration;
    SCLensExplorerVisibleItemsTracker *_visibleItemsTracker;
    _Bool _isTextRightToLeftDirection;
    NSMutableArray *_lensCellViewModels;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) NSMutableArray *lensCellViewModels; // @synthesize lensCellViewModels=_lensCellViewModels;
- (void).cxx_destruct;
- (id)_uniqueLensItems:(id)arg1;
- (id)_convertFromDataModel:(id)arg1;
- (long long)_findViewModelIndexWithLensItemUnlockableId:(id)arg1;
- (void)_clearMediaDataForIndexes:(id)arg1 clearOnlyAnimations:(_Bool)arg2;
- (void)_cancelMediaRequestsForIndexes:(id)arg1;
- (void)_requestMediaForIndexes:(id)arg1;
- (void)visibleItemsChanged:(id)arg1;
- (void)_updateLensViewModelsMediaWithLenses:(id)arg1;
- (void)_updateLensViewModelsWithLenses:(id)arg1;
- (void)_loadLensViewModel;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_notifySectionDataProviderAboutChanges;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)refreshCachedItems;
- (void)reset;
- (void)clearMemoryCache;
- (_Bool)hasMoreItems;
@property(readonly, copy, nonatomic) NSArray *viewModels;
- (id)initWithDataStore:(id)arg1 lensExplorerImagesDataStore:(id)arg2 creatorsBlacklist:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

