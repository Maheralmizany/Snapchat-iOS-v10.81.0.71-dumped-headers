//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCMapExploreStatusCarouselThumbnailViewModel, SCMapThumbnailTextureFetcher, SCStoryRingView, UIImageView, UILabel;
@protocol SCMapCarouselPoiPlayer;

@interface SCMapExplorerMapStoryIconView : UIView
{
    SCMapThumbnailTextureFetcher *_thumbnailTextureFetcher;
    long long _iconType;
    UILabel *_emojiLabel;
    UIImageView *_thumbnailImageView;
    UIImageView *_compassImageView;
    SCStoryRingView *_ringView;
    id <SCMapCarouselPoiPlayer> _delegate;
    SCMapExploreStatusCarouselThumbnailViewModel *_viewModel;
}

@property(copy, nonatomic) SCMapExploreStatusCarouselThumbnailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCMapCarouselPoiPlayer> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapThumbnailImageView;
- (void)_fetchImageForThumbnail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_rebuildUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

