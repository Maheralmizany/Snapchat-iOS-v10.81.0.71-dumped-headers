//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSNumber, NSString;
@protocol SCSpectaclesExportLabelCollectionViewDelegate;

@interface SCSpectaclesExportLabelCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _vr180ExportSupported;
    id <SCSpectaclesExportLabelCollectionViewDelegate> _exportLabelsDelegate;
    NSNumber *_defaultType;
}

@property(retain, nonatomic) NSNumber *defaultType; // @synthesize defaultType=_defaultType;
@property(nonatomic) _Bool vr180ExportSupported; // @synthesize vr180ExportSupported=_vr180ExportSupported;
@property(nonatomic) __weak id <SCSpectaclesExportLabelCollectionViewDelegate> exportLabelsDelegate; // @synthesize exportLabelsDelegate=_exportLabelsDelegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

