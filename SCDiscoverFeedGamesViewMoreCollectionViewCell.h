//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCDynamicShadowCardView, SCLoadingIndicatorView, SCShapeView, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedGamesViewMoreCollectionViewCell : UICollectionViewCell <SCViewModelConfigurable, SCActionable, SCDiscoverFeedCollectionViewCellAnimating>
{
    SCShapeView *_backgroundView;
    UILabel *_viewMoreLabel;
    SCLoadingIndicatorView *_loadingIndicatorView;
    SCDynamicShadowCardView *_cardBackgroundView;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)viewToAnimateOnTap:(id)arg1;
- (void)_handleTap;
- (void)_updateUI;
- (void)_updateBackgroundView;
- (void)_showLoadingIndicator:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

