//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"
#import "SCCollectionViewSectionDataProvidingSchedulable-Protocol.h"
#import "SCCollectionViewSectionFastAccessing-Protocol.h"
#import "SCCollectionViewSectionLayoutProvidingDataSource-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionDataProvidingDelegate-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionableDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, NSValue, SCCollectionViewListSectionConfiguration, SCCollectionViewSectionDataProvidingScheduler, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCListSectionExpansionTracker;
@protocol SCActionHandling, SCCollectionViewListSectionViewMoreProviding, SCCollectionViewSectionDelegate, SCCollectionViewSectionFastAccessIndexing, SCCollectionViewSectionLayoutProviding, SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable, SCPerforming, SCSearchIntentHandler, SCSectionDataProviding;

@interface SCCollectionViewListSection : NSObject <SCSectionDataProvidingDelegate, SCActionHandling, SCSectionKitCollectionViewViewMoreActionableDelegate, SCEventListener, SCCollectionViewSectionDataProvidingSchedulable, SCCollectionViewSection, SCCollectionViewSectionFastAccessing, SCEventAnnouncing, SCActionable, SCCollectionViewSectionLayoutProvidingDataSource>
{
    SCCollectionViewListSectionConfiguration *_listSectionConfiguration;
    NSArray *_containerCellViewModels;
    NSDictionary *_reuseCellClassesByIdentifiers;
    NSDictionary *_configurationBlocksByIdentifiers;
    CDUnknownBlockType _modelCanUpdateComparator;
    long long _dataLoadingStatus;
    _Bool _hasSetUp;
    id <SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable> _supplementaryViewProvider;
    _Bool _hasPendingUpdates;
    NSArray *_pendingContainerCellViewModels;
    SCListSectionExpansionTracker *_pendingExpansionTracker;
    NSValue *_pendingRangeUpdate;
    NSString *_pendingUpdateID;
    SCListSectionExpansionTracker *_expansionTracker;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCPerforming> _sectionDataUpdatePerformer;
    double _minimumInteritemSpacing;
    double _lastHeightFromLayoutCalculator;
    long long _experimentalPagingMode;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCActionHandling> _actionHandler;
    CDUnknownBlockType _sectionUpdatingBlock;
    id <SCSectionDataProviding> _sectionDataProvider;
    id <SCCollectionViewListSectionViewMoreProviding> _viewMoreProvider;
    id <SCCollectionViewSectionLayoutProviding> _layoutCalculator;
    id <SCCollectionViewSectionFastAccessIndexing> _fastAccessIndexer;
    SCCollectionViewSectionDataProvidingScheduler *_dataProvidingScheduler;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCCollectionViewSectionDataProvidingScheduler *dataProvidingScheduler; // @synthesize dataProvidingScheduler=_dataProvidingScheduler;
@property(retain, nonatomic) id <SCCollectionViewSectionFastAccessIndexing> fastAccessIndexer; // @synthesize fastAccessIndexer=_fastAccessIndexer;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator; // @synthesize layoutCalculator=_layoutCalculator;
@property(retain, nonatomic) id <SCCollectionViewListSectionViewMoreProviding> viewMoreProvider; // @synthesize viewMoreProvider=_viewMoreProvider;
@property(retain, nonatomic) id <SCSectionDataProviding> sectionDataProvider; // @synthesize sectionDataProvider=_sectionDataProvider;
@property(copy, nonatomic) CDUnknownBlockType sectionUpdatingBlock; // @synthesize sectionUpdatingBlock=_sectionUpdatingBlock;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_heightUpdatedFromLayoutCalculator;
- (_Bool)_heightUpdatedWithContainerCellViewModels:(id)arg1 existingContainerCellViewModels:(id)arg2;
- (id)_copyListConfiguration;
- (id)_copyContainerViewModels;
- (id)_copyExpansionTracker;
- (void)_setContainerCellViewModels:(id)arg1;
- (void)_releasePendingUpdates;
- (id)_reloadIndexSetForUpdateIndices:(id)arg1 withOldList:(id)arg2 newList:(id)arg3;
- (void)_announceSupplementaryViewWillDisplayEventForElementKind:(id)arg1 existingContainerViewModels:(id)arg2;
- (void)_announceCellWillDisplayEventWithIndexPath:(unsigned long long)arg1 eventTime:(double)arg2 isDecelerating:(_Bool)arg3 isDragging:(_Bool)arg4 existingContainerViewModels:(id)arg5;
- (void)_announceViewMoreEventsWithIsViewMore:(_Bool)arg1;
- (void)_resetPendingUpdate;
- (id)_setPendingUpdateWithRange:(struct _NSRange)arg1;
- (id)_sectionDataProvider;
- (void)_updateSectionWithSectionUpdateModel:(id)arg1 pendingContainerViewModels:(id)arg2 expansionTracker:(id)arg3 dataLoadingStatus:(long long)arg4;
- (void)_updateDataSourceWithContainerViewModels:(id)arg1 numberOfTotalElements:(unsigned long long)arg2 dataLoadingStatus:(long long)arg3 shouldResetExpansion:(_Bool)arg4 supplementaryViewModels:(id)arg5 minimumInteritemSpacingHasChanged:(_Bool)arg6;
- (void)_updateDataSourceWithViewModelRange:(struct _NSRange)arg1 containerCellViewModelsForRange:(id)arg2 targetNumberOfExpansions:(unsigned long long)arg3 rangeUpdateID:(id)arg4;
- (void)_handleTapViewMore;
- (void)_updateWithSectionModelControllerWithShouldResetExpansion:(_Bool)arg1;
- (void)_resetConfiguration;
- (void)_updateWithConfiguration;
- (_Bool)_shouldEnableSeparator:(id)arg1;
- (void)_setReuseCellClassesByIdentifiers;
- (unsigned long long)totalNumberOfItems;
- (struct CGSize)sizeForItemAtIndex:(unsigned long long)arg1 width:(double)arg2;
- (void)viewMoreCollectionViewCellDidTapViewMore:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)indexForItemWithQueryKey:(id)arg1;
- (void)_updateSectionDataModel;
- (void)shouldUpdateDataModelsFromDataProviding;
- (void)sectionDataProviderDidUpdateViewModels:(id)arg1;
- (id)supplementaryViewProvider;
- (id)sectionInsets;
- (long long)experimentalPagingMode;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (_Bool)_hasRoundBottomForIndex:(long long)arg1 withExpansionTracker:(id)arg2;
- (void)_configureViewMoreCell:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (void)collectionViewWillDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexInSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
@property(readonly, copy) NSString *description;
- (id)initWithSupplementaryViewProvider:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

