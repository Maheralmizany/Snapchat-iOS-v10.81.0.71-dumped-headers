//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface SCSectionBasedCollectionViewFlowLayout : UICollectionViewLayout
{
    NSArray *_numberOfItemsBySection;
    NSArray *_sectionInsetsBySection;
    NSDictionary *_itemSizesByIndexPath;
    NSArray *_minimumInteritemSpacingBySection;
    NSArray *_minimumLineSpacingBySection;
    NSDictionary *_supplementaryViewSizeByKindByIndexPath;
    struct CGSize _contentSize;
    NSMutableArray *_mutableSectionFrameBySection;
    NSMutableDictionary *_mutableItemLayoutAttributesByIndexPath;
    NSMutableDictionary *_mutableSupplementaryViewLayoutAttributesByIndexPath;
    struct CGRect _boundsForLayoutAttributes;
    _Bool _shouldInvalidateLayoutAttributes;
    NSMutableSet *_mutableInvalidatedItemIndexPaths;
    NSMutableSet *_mutableInvalidatedHeaderViewIndexPaths;
    _Bool _doNotPlaceLastItemInTheMiddle;
    double _headerStickyPositionYOffset;
    long long _headerTransitionMode;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) _Bool doNotPlaceLastItemInTheMiddle; // @synthesize doNotPlaceLastItemInTheMiddle=_doNotPlaceLastItemInTheMiddle;
@property(nonatomic) long long headerTransitionMode; // @synthesize headerTransitionMode=_headerTransitionMode;
@property(nonatomic) double headerStickyPositionYOffset; // @synthesize headerStickyPositionYOffset=_headerStickyPositionYOffset;
- (void).cxx_destruct;
- (void)_updateLayoutAttributesForOverscrollIfNeeded:(id)arg1;
- (void)_updateHeaderViewLayoutAttributes:(id)arg1 withSectionFrame:(struct CGRect)arg2 contentBounds:(struct CGRect)arg3;
- (void)_updateGradientForItemLayoutAttributes:(id)arg1 withGradientFrame:(struct CGRect)arg2;
- (double)_layoutItemsInLineForSectionAtIndex:(unsigned long long)arg1 nextItemIndexPtr:(unsigned long long *)arg2 lineOrigin:(struct CGPoint)arg3 width:(double)arg4 gradientFrame:(struct CGRect)arg5;
- (double)_layoutHeaderViewForSectionAtIndex:(unsigned long long)arg1 withSectionOrigin:(struct CGPoint)arg2 width:(double)arg3;
- (double)_layoutSectionAtIndex:(unsigned long long)arg1 withSectionOrigin:(struct CGPoint)arg2 width:(double)arg3;
- (void)_calculateLayoutAttributesWithLayoutInformation;
- (void)_fetchLayoutInformationFromDelegate;
- (void)_resetInvalidationIndexPaths;
- (void)_resetLayoutAttributesIfNeeded;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

