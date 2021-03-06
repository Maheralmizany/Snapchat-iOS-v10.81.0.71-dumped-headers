//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPEnableTwoPersonTopCellOutput-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UICollectionView;
@protocol SPCollectionDisplayManagerOutput, SPStringsProvider;

@interface SPCollectionDisplayManager : NSObject <SPEnableTwoPersonTopCellOutput, UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableArray *_models;
    UICollectionView *_collectionView;
    NSMutableSet *_registeredCellsIds;
    _Bool _isNeedShowEnableTwoPersonTopSection;
    struct CGSize _scenarioItemSize;
    id <SPStringsProvider> _stringsProvider;
    id <SPCollectionDisplayManagerOutput> _output;
}

@property(nonatomic) __weak id <SPCollectionDisplayManagerOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)enableTwoPersonTopCellCloseDidPress:(id)arg1;
- (void)enableTwoPersonTopCellPanelDidPress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setNeedsShowEnableTwoPersonTopSection:(_Bool)arg1 animated:(_Bool)arg2;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (void)updateCellAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)updateModels:(id)arg1;
- (id)initWithCollectionView:(id)arg1 scenarioItemSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

