//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, SCNetworkImageView, SCScanCardViewModel, UIButton, UILabel;
@protocol SCImageDownloading, SCScanCardCellDelegate;

@interface SCScanCardCell : UICollectionViewCell
{
    id <SCImageDownloading> _imageDownloader;
    SCScanCardViewModel *_viewModel;
    SCNetworkImageView *_brandImage;
    SCNetworkImageView *_itemImage;
    UILabel *_brandName;
    UILabel *_itemName;
    UILabel *_itemDescription;
    UILabel *_html;
    UIButton *_actionButton;
    NSString *_actionButtonText;
    NSString *_actionButtonURL;
    NSString *_actionButtonHTML;
    UIButton *_playButton;
    NSString *_shazamMusicPlayerURL;
    NSArray *_layerViews;
    _Bool _hideActionButtons;
    id <SCScanCardCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCScanCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_attributedMainActionButtonText:(id)arg1;
- (void)_layoutActionButtons;
- (void)_hideActionButtons;
- (void)_createActionButtons;
- (void)_configurePlayButton;
- (void)_didClickPlayButton:(id)arg1;
- (void)_didTapOpenAppButton;
- (void)_didTapLearnMoreButton;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
- (void)setViewModel:(id)arg1 forState:(_Bool)arg2;
- (void)_configureCellWithStackSize:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
