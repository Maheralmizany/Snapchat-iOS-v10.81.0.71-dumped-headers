//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString;
@protocol SCBitmojiAvatarProvider, SCBitmojiImageFetcher, SCBitmojiSelfieCollectionSourceDelegate;

@interface SCBitmojiSelfieCollectionSource : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_selfieIds;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
    NSString *_selectedSelfieId;
    double _cellSize;
    double _cellPadding;
    id <SCBitmojiSelfieCollectionSourceDelegate> _delegate;
}

@property(readonly, copy, nonatomic) NSString *selectedSelfieId; // @synthesize selectedSelfieId=_selectedSelfieId;
- (void).cxx_destruct;
- (id)_selfieIdAtIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadCollectionView:(id)arg1 selfieIds:(id)arg2 selectedSelfieId:(id)arg3;
- (id)initWithDelegate:(id)arg1 bitmojiAvatarProvider:(id)arg2 bitmojiImageFetcher:(id)arg3 collectionView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

