//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCUpNextGroupThumbnailViewDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCUpNextGroupThumbnailView, SCUpNextGroupViewModel, UIView;
@protocol SCCanceling, SCUpNextCollectionViewCellDelegate;

@interface SCUpNextCollectionViewCell : UICollectionViewCell <SCUpNextGroupThumbnailViewDelegate>
{
    UIView *_containerView;
    SCUpNextGroupThumbnailView *_thumbnailView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    id <SCCanceling> _thumbnailLoadingCancelable;
    SCUpNextGroupViewModel *_viewModel;
    id <SCUpNextCollectionViewCellDelegate> _delegate;
    long long _activeState;
}

@property(nonatomic) long long activeState; // @synthesize activeState=_activeState;
@property(readonly, nonatomic) SCUpNextGroupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCUpNextCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)upNextGroupThumbnailViewIdentifier:(id)arg1 didLoadThumbnailWithDesiredSize:(struct CGSize)arg2 error:(id)arg3;
- (double)_desiredAlpha;
- (void)_recomputeLayout:(_Bool)arg1;
- (void)_setupViews;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)_resetState;
- (void)configure:(id)arg1 imageDownloader:(id)arg2;
- (void)setActiveState:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
