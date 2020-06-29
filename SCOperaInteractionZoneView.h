//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaInteractionZoneItemCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, SCAffordanceArrowView, SCGradientView, SCOperaInteractionZoneViewModel, UICollectionView, UILabel;
@protocol SCOperaImageProvider, SCOperaInteractionZoneViewDelegate;

@interface SCOperaInteractionZoneView : UIView <SCOperaInteractionZoneItemCollectionViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    UICollectionView *_contentCollectionView;
    SCGradientView *_backgroundGradientView;
    UILabel *_titleLabel;
    SCAffordanceArrowView *_arrowView;
    UILabel *_logoLabel;
    SCOperaInteractionZoneViewModel *_viewModel;
    NSIndexPath *_beginDraggingIndexPath;
    NSMutableArray *_scrolledItemIndexPath;
    id <SCOperaInteractionZoneViewDelegate> _delegate;
    id <SCOperaImageProvider> _imageProvider;
}

@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak id <SCOperaInteractionZoneViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapTitle;
- (void)_updateCellAlphaBasedOnCenterOffset:(id)arg1;
- (void)_addItemIndexToScrolledItemIndexPath:(long long)arg1;
- (void)_scrollToFirstItemIfNecessary;
- (void)interactionZoneCollectionViewCell:(id)arg1 didTriggerActionWithActionModel:(id)arg2 tapRelativeLocation:(struct CGPoint)arg3 itemIndex:(long long)arg4;
- (id)_currentIndexPathUsingCenterPoint;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

