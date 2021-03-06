//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPEnableTwoPersonBottomCellOutput-Protocol.h"
#import "SPEnableTwoPersonTopCellOutput-Protocol.h"
#import "SPPreviewsPlayableCellOutput-Protocol.h"
#import "SPRetakeSelfieCellOutput-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UICollectionView, UICollectionViewCell, UIImage;
@protocol SPPreviewsDisplayManagerDataSource, SPPreviewsViewOutput, SPStringsProvider;

@interface SPPreviewsDisplayManager : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, SPPreviewsPlayableCellOutput, SPEnableTwoPersonBottomCellOutput, SPEnableTwoPersonTopCellOutput, SPRetakeSelfieCellOutput>
{
    _Bool _viewIsAppear;
    _Bool _isNeedShowEnableTwoPersonTopSection;
    _Bool _isNeedShowEnableTwoPersonBottomSection;
    _Bool _isNeedShowRetakeSelfieSection;
    id <SPStringsProvider> _stringsProvider;
    UICollectionView *_collectionView;
    id <SPPreviewsViewOutput> _output;
    id <SPPreviewsDisplayManagerDataSource> _dataSource;
    NSMutableArray *_cellModels;
    unsigned long long _scrollDirection;
    UICollectionViewCell *_willDisplayMethodCell;
    NSIndexPath *_willDisplayMethodIndexPath;
    UIImage *_retakeSelfiePannelImage;
    struct CGPoint _lastContentOffset;
}

@property(retain, nonatomic) UIImage *retakeSelfiePannelImage; // @synthesize retakeSelfiePannelImage=_retakeSelfiePannelImage;
@property(nonatomic) _Bool isNeedShowRetakeSelfieSection; // @synthesize isNeedShowRetakeSelfieSection=_isNeedShowRetakeSelfieSection;
@property(nonatomic) _Bool isNeedShowEnableTwoPersonBottomSection; // @synthesize isNeedShowEnableTwoPersonBottomSection=_isNeedShowEnableTwoPersonBottomSection;
@property(nonatomic) _Bool isNeedShowEnableTwoPersonTopSection; // @synthesize isNeedShowEnableTwoPersonTopSection=_isNeedShowEnableTwoPersonTopSection;
@property(retain, nonatomic) NSIndexPath *willDisplayMethodIndexPath; // @synthesize willDisplayMethodIndexPath=_willDisplayMethodIndexPath;
@property(retain, nonatomic) UICollectionViewCell *willDisplayMethodCell; // @synthesize willDisplayMethodCell=_willDisplayMethodCell;
@property(nonatomic) _Bool viewIsAppear; // @synthesize viewIsAppear=_viewIsAppear;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
@property(nonatomic) __weak id <SPPreviewsDisplayManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SPPreviewsViewOutput> output; // @synthesize output=_output;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
- (void).cxx_destruct;
- (_Bool)_isBouncingInProgress:(id)arg1;
- (id)_cellForItemAtIndexPath:(id)arg1;
- (id)_indexPathForCell:(id)arg1;
- (void)handleSingleTapWithGesture:(id)arg1;
- (void)handleDoubleTapWithGesture:(id)arg1;
- (void)handleLongPressWithGesture:(id)arg1;
- (void)retakeSelfieCellCloseDidPress:(id)arg1;
- (void)retakeSelfieCellPanelDidPress:(id)arg1;
- (void)enableTwoPersonBottomCellButtonDidPress:(id)arg1;
- (void)enableTwoPersonTopCellCloseDidPress:(id)arg1;
- (void)enableTwoPersonTopCellPanelDidPress:(id)arg1;
- (void)cellDidStartPlay:(id)arg1;
- (void)cellWillEnterVisibleState:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (void)scrollToCellAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setNeedsShowRetakeSelfieSection:(_Bool)arg1 withPanelImage:(id)arg2 animated:(_Bool)arg3;
- (void)setNeedsShowEnableTwoPersonBottomSection:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsShowEnableTwoPersonTopSection:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadItemsWithCellModels:(id)arg1 animated:(_Bool)arg2;
- (void)setScenarioCellModels:(id)arg1 needToReload:(_Bool)arg2;
- (void)updateCellAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)updateCellAtIndex:(unsigned long long)arg1 withItem:(id)arg2 animated:(_Bool)arg3;
- (id)getVisibleItemsIndexesForSection:(unsigned long long)arg1;
- (_Bool)isItemFullyVisibleAtIndex:(unsigned long long)arg1;
- (id)getViewFromItemAtIndex:(unsigned long long)arg1;
- (id)initWithCollectionView:(id)arg1 output:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

