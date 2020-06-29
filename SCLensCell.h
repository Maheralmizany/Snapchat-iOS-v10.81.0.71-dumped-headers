//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCDisposableObserver, SCLoadingIndicatorView, UIImageView, UIView;
@protocol SCCarouselCellViewModel;

@interface SCLensCell : UICollectionViewCell <SCTraceEnabled, SCViewModelConfigurable>
{
    long long _contentAccessibilityIndex;
    NSString *_contentAccessibilityIdentifier;
    SCDisposableObserver *_contentUpdateObserver;
    _Bool _cutoutMaskEnabled;
    id <SCCarouselCellViewModel> _viewModel;
    UIView *_containerView;
    UIImageView *_lensIcon;
    long long _lensStatus;
    UIImageView *_overlayImage;
    UIView *_blueDotView;
    UIView *_rankingDebugDotView;
    SCLoadingIndicatorView *_progressIndicator;
}

@property(retain, nonatomic) SCLoadingIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UIView *rankingDebugDotView; // @synthesize rankingDebugDotView=_rankingDebugDotView;
@property(retain, nonatomic) UIView *blueDotView; // @synthesize blueDotView=_blueDotView;
@property(retain, nonatomic) UIImageView *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) _Bool cutoutMaskEnabled; // @synthesize cutoutMaskEnabled=_cutoutMaskEnabled;
@property(nonatomic) long long lensStatus; // @synthesize lensStatus=_lensStatus;
@property(retain, nonatomic) UIImageView *lensIcon; // @synthesize lensIcon=_lensIcon;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <SCCarouselCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_updateAccessibilityIdentifier;
- (struct CGRect)getSquareFromSourceRect:(struct CGRect)arg1;
- (void)_updateContent;
- (void)setAccessibilityContentId:(id)arg1 index:(long long)arg2;
- (void)setRankingDebugBadgeHidden:(_Bool)arg1;
- (void)setNewLensBadgeHidden:(_Bool)arg1;
- (struct CGRect)subviewRect;
- (void)setSelectionTransform:(struct CGAffineTransform)arg1;
- (void)setIconTransform:(struct CGAffineTransform)arg1;
- (void)fillViewWithLensIcon:(id)arg1 status:(long long)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

