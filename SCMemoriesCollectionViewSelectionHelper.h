//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, SCUserSession, UICollectionView, UIImage, UILongPressGestureRecognizer;
@protocol SCMemoriesCollectionViewSelectionHelperDataSource, SCMemoriesCollectionViewSelectionHelperDelegate;

@interface SCMemoriesCollectionViewSelectionHelper : NSObject <UIGestureRecognizerDelegate>
{
    UICollectionView *_collectionView;
    struct CGPoint _initialTapPoint;
    NSIndexPath *_touchItemIndexPath;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_actionMenuLongPressGestureRecognizer;
    UIImage *_selectOverlayImage;
    NSMutableSet *_selectedItems;
    NSMutableDictionary *_entrySnapItemsMap;
    unsigned long long _selectedCellsCount;
    SCUserSession *_userSession;
    _Bool _selectMode;
    id <SCMemoriesCollectionViewSelectionHelperDataSource> _dataSource;
    id <SCMemoriesCollectionViewSelectionHelperDelegate> _delegate;
    unsigned long long _tabType;
}

@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) UIImage *selectOverlayImage; // @synthesize selectOverlayImage=_selectOverlayImage;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(nonatomic) __weak id <SCMemoriesCollectionViewSelectionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCMemoriesCollectionViewSelectionHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_handleSelectionAtIndexPath:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_selectedItemsWithFilterBlock:(CDUnknownBlockType)arg1;
- (_Bool)showOverSelectionLimitDialogIfNeeded:(_Bool)arg1 numberOfSnapsSelected:(unsigned long long)arg2;
- (void)_handleActionMenuLongPressGesture:(id)arg1;
- (_Bool)_isPressAndHoldSelectModeEnabled:(id)arg1;
- (id)_touchItemCell;
- (void)_handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)batchSelect:(_Bool)arg1 items:(id)arg2 snapItems:(id)arg3 announce:(_Bool)arg4;
- (unsigned long long)numberOfBatchSelectedSnapsForItems:(id)arg1 snapItems:(id)arg2 select:(_Bool)arg3;
- (_Bool)isBatchSelected:(id)arg1 snapItems:(id)arg2;
- (void)toggleSelectedForSnapItem:(id)arg1;
- (void)cancelOngoingGestureRecognizers;
- (_Bool)_isItemSelected:(id)arg1;
- (void)toggleSelectedAtIndexPath:(id)arg1;
- (void)setSelectedForCell:(id)arg1 snapItem:(id)arg2;
- (void)setSelectedForCell:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)getSelectedCellsCount;
- (void)setSelectedCellsCount:(_Bool)arg1 numberOfSnapsSelected:(unsigned long long)arg2;
- (void)_updateSelection:(_Bool)arg1 snapItem:(id)arg2 announce:(_Bool)arg3;
- (void)_changeSelected:(_Bool)arg1 snapItem:(id)arg2 announce:(_Bool)arg3;
- (void)changeSelected:(_Bool)arg1 snapItem:(id)arg2;
- (void)_changeSelected:(_Bool)arg1 item:(id)arg2 announce:(_Bool)arg3;
- (void)_changeSelected:(_Bool)arg1 item:(id)arg2 announce:(_Bool)arg3 changeSelectedCellsCount:(_Bool)arg4;
- (void)changeSelected:(_Bool)arg1 item:(id)arg2;
- (void)_updateVisibleCells;
- (id)_selectedSnapIdsForItem:(id)arg1;
- (id)selectedSnapItems;
- (id)selectedGalleryEntries;
- (id)selectedItems;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

