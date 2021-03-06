//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class NSString, SCLazy, SCNetworkImageView, SCSnapchatterAvatarThumbnailView, UILabel;
@protocol SCActionHandling, SCCognacAppActivityListCellDelegate, SCImageDownloading;

@interface SCCognacAppActivityListCell : SCUnifiedProfileBaseCollectionViewCell <SCActionable>
{
    SCSnapchatterAvatarThumbnailView *_frontThumbnailView;
    SCLazy *_rearThumbnailView;
    SCNetworkImageView *_appIconView;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
    SCLazy *_subLabel;
    SCLazy *_joinButton;
    SCLazy *_loadingView;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacAppActivityListCellDelegate> _delegate;
    unsigned long long _viewStyle;
}

+ (id)thumbnailBackgroundColorWithViewStyle:(unsigned long long)arg1;
+ (struct CGSize)thumbnailSizeWithViewStyle:(unsigned long long)arg1;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) __weak id <SCCognacAppActivityListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_didTap;
- (void)_animateLoading;
- (void)resetLoadingState;
- (void)_updateViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)handleTapAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

