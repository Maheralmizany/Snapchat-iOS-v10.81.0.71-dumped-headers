//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSSet, NSString, SCLensDiscoveryCategory, UICollectionView, UILabel;
@protocol SCLensDiscoveryDataProvider, SCLensDiscoveryGroupCellDelegate, SCLensDiscoveryUIProviderProtocol;

@interface SCLensDiscoveryGroupCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UILabel *_headerView;
    UICollectionView *_collectionView;
    SCLensDiscoveryCategory *_category;
    long long _categoryIndex;
    NSSet *_selectedLensIds;
    id <SCLensDiscoveryDataProvider> _dataProvider;
    id <SCLensDiscoveryUIProviderProtocol> _uiProvider;
    id <SCLensDiscoveryGroupCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensDiscoveryGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isPreloadCellAtIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)makeConstraintsForHeaderView:(id)arg1;
- (id)headerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reload;
- (void)updateCategory:(id)arg1;
- (void)fillWithDataProvider:(id)arg1 category:(id)arg2 categoryIndex:(long long)arg3 selectedLensIds:(id)arg4 contentXOffset:(double)arg5;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 uiProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

