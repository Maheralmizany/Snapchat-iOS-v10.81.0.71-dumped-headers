//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCMapCarouselVerticalScrollingViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, NSIndexPath, NSMapTable, NSString, UICollectionView, UICollectionViewCell;
@protocol SCMapCarouselViewDataSource, SCMapCarouselViewDelegate;

@interface SCMapCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, SCTraceEnabled, SCMapCarouselVerticalScrollingViewDelegate>
{
    UIView *_containerView;
    CAGradientLayer *_topFadeOutGradientLayer;
    UICollectionView *_collectionView;
    NSMapTable *_viewToWrappedViewMap;
    NSMapTable *_wrappedViewToViewMap;
    _Bool _initializationCompleted;
    _Bool _userIsScrolling;
    long long _lastScrolledToViewIndex;
    NSIndexPath *_beginDraggingIndexPath;
    UIView *_dismissButton;
    double _lastCollectionViewXOffset;
    UICollectionViewCell *_lastCenteredCell;
    _Bool _infiniteScrollEnabled;
    _Bool _onlyScrollOneItemPerSwipe;
    _Bool _alphaFadingEnabled;
    _Bool _showsDismissButton;
    id <SCMapCarouselViewDelegate> _delegate;
    id <SCMapCarouselViewDataSource> _dataSource;
    struct SCMapCarouselViewPadding _padding;
}

+ (double)destinationTargetForTargetContentOffset:(double)arg1 velocity:(double)arg2 destinations:(id)arg3;
@property(nonatomic) struct SCMapCarouselViewPadding padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property(nonatomic) _Bool alphaFadingEnabled; // @synthesize alphaFadingEnabled=_alphaFadingEnabled;
@property(nonatomic) _Bool onlyScrollOneItemPerSwipe; // @synthesize onlyScrollOneItemPerSwipe=_onlyScrollOneItemPerSwipe;
@property(nonatomic) _Bool infiniteScrollEnabled; // @synthesize infiniteScrollEnabled=_infiniteScrollEnabled;
@property(nonatomic) __weak id <SCMapCarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCMapCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)carouselVerticalScrollingViewTopCellFrameChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)_snapshotCellView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)_wrappedViewInVisibleCellAtIndex:(long long)arg1;
- (void)_updateDismissButtonFrameForScrollingView:(id)arg1;
- (id)scrollingViewForCell:(id)arg1;
- (void)_updateDismissButton;
- (void)_updatePropertiesForVisibleCells;
- (void)_updatePropertiesForCell:(id)arg1 percentFromCenter:(double)arg2;
- (void)_updatePropertiesForCell:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool scrollEnabled;
@property(readonly, nonatomic) _Bool isUserInteracting;
@property(readonly, nonatomic) long long currentViewIndex;
- (id)viewForIndex:(long long)arg1;
- (void)reloadData;
- (void)scrollToViewAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollToViewAtIndex:(long long)arg1 actionType:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_viewAtIndexDidBeginToLoseFocus:(long long)arg1;
- (id)_currentIndexPathUsingCenterPoint;
- (id)_preferredIndexPathForIndexPath:(id)arg1;
- (_Bool)_isPreferredIndex:(long long)arg1;
- (long long)_indexToPreferredDisplayIndex:(long long)arg1;
- (long long)_indexToRealViewIndex:(long long)arg1;
- (long long)_numberOfScrollPaddingViewsPerSide;
- (id)_wrapView:(id)arg1 padding:(struct SCMapCarouselViewPadding)arg2;
- (double)_widthForCellWithPadding:(struct SCMapCarouselViewPadding)arg1;
- (void)_handleDismissTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

