//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedChatTableViewCell.h"

@class UIViewController;
@protocol SCChatCellBaseGestureDelegate><SCPageNameLogging, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCStackedChatMediaChatTableViewCell : SCStackedChatTableViewCell
{
    UIViewController<SCChatCellBaseGestureDelegate><SCPageNameLogging> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)_itemIndexWithIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)endDisplayingCell;
- (void)willDisplayCell;
- (void)stopAnimations;
- (void)startAnimations;
- (void)clearContents;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;

@end
