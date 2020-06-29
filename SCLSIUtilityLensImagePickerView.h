//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, PHImageManager, SCLSIUtilityLensImagePickerCarrotView, SCLSIUtilityLensImagePickerViewModel, SCScanBorderView, UICollectionView;
@protocol SCLSIUtilityLensImagePickerViewDelegate;

@interface SCLSIUtilityLensImagePickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <SCLSIUtilityLensImagePickerViewDelegate> _delegate;
    SCLSIUtilityLensImagePickerViewModel *_viewModel;
    long long _finishedScanningIndex;
    PHImageManager *_imageManager;
    UICollectionView *_collectionView;
    SCLSIUtilityLensImagePickerCarrotView *_carrotView;
    SCScanBorderView *_borderView;
}

- (void).cxx_destruct;
- (void)_configureBorderWithOldViewModel:(id)arg1 newViewModel:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

