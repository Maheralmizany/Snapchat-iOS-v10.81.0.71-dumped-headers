//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCommerceCatalogPaginationErrorCollectionViewCellDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, UICollectionView;
@protocol SCActionHandling, SCCommercePaginationProviding, SCCompositeNetworkImageDownloading;

@interface SCCommerceCatalogCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SCCommerceCatalogPaginationErrorCollectionViewCellDelegate, SCEventListener>
{
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    id <SCCommercePaginationProviding> _paginationProvider;
    id <SCActionHandling> _actionHandler;
    SCLoadingIndicatorView *_loadingView;
    NSString *_catalogMetricType;
    NSString *_catalogMetricId;
    unsigned long long _maxRowScrolled;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_handlePageItemsLoadingFailedWithChangedIndices:(id)arg1;
- (void)_updateCellAtIndexPath:(id)arg1;
- (void)_handlePageItemsLoadingUpdatedWithChangedIndices:(id)arg1;
- (void)_handlePageFinalItemsLoadedWithRemovedIndices:(id)arg1;
- (void)_handlePageItemsLoadedWithAddedIndices:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTapRetryForSCCommerceCatalogPaginationErrorCollectionViewCell:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_paginationErrorCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_paginationLoadingCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_storeCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_productCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadNextPageIfNeeded;
- (void)_setupLoadingView;
- (void)_setupCollectionView;
- (void)scrollToTop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithImageDownloader:(id)arg1 paginationProvider:(id)arg2 actionHandler:(id)arg3 catalogMetricType:(id)arg4 catalogMetricId:(id)arg5;
- (long long)_itemColumnForIndexPath:(id)arg1;
- (long long)_itemRowForIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
