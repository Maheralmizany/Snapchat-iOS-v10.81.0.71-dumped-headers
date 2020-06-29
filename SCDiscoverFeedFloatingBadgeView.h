//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCStoryThumbnailView, UIImageView, UILabel, UIStackView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCDiscoverFeedFloatingBadgeView : UIView <SCActionable, SCViewModelConfigurable>
{
    SCStoryThumbnailView *_storyThumbnailView;
    UIView *_storyThumbnailBackgroundView;
    UIImageView *_trendingIcon;
    UILabel *_titleLabel;
    UIStackView *_titleStackView;
    UILabel *_subtitleLabel;
    UIStackView *_titleAndSubtitleStackView;
    UILabel *_numberOfUpdates;
    UIImageView *_rightArrow;
    UIStackView *_accessoryStackView;
    double _accumulatedViewTimeInSec;
    double _currentStartViewTimestampInSec;
    _Bool _isBeingViewed;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (double)accumulatedViewTimeInSec;
- (void)didViewBadge;
- (void)didDismissBadge;
- (void)didShowBadge;
- (void)didTapBadge;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
