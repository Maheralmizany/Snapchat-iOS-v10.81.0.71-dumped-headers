//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SCCompositeNetworkImageModel, SCCompositeNetworkImageView, SCLoadingIndicatorView, UIImageView, UILabel;
@protocol SCCompositeNetworkImageDownloading;

@interface SCCommerceStoreItemCollectionViewCell : UICollectionViewCell
{
    _Bool _useCompositeNetworkImageView;
    _Bool _setupComplete;
    SCCompositeNetworkImageModel *_compositeImageModel;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    UILabel *_productTitleLabel;
    UILabel *_productPriceLabel;
    UILabel *_strikeThroughPriceLabel;
    UILabel *_outOfStockLabel;
    UIImageView *_productImageView;
    SCLoadingIndicatorView *_imageLoadingIndicator;
    NSString *_productImageUrl;
    SCCompositeNetworkImageView *_compositeNetworkImageView;
}

+ (double)textBlockHeight;
+ (double)imageHeightWithNumColumns:(unsigned long long)arg1;
+ (double)cellHeightWithNumColumns:(unsigned long long)arg1;
+ (double)cellWidthWithNumColumns:(unsigned long long)arg1;
+ (double)cellPaddingWithNumColumns:(unsigned long long)arg1;
@property(retain, nonatomic) SCCompositeNetworkImageView *compositeNetworkImageView; // @synthesize compositeNetworkImageView=_compositeNetworkImageView;
@property(retain, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=_productImageUrl;
@property(retain, nonatomic) SCLoadingIndicatorView *imageLoadingIndicator; // @synthesize imageLoadingIndicator=_imageLoadingIndicator;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UILabel *outOfStockLabel; // @synthesize outOfStockLabel=_outOfStockLabel;
@property(retain, nonatomic) UILabel *strikeThroughPriceLabel; // @synthesize strikeThroughPriceLabel=_strikeThroughPriceLabel;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
@property(retain, nonatomic) id <SCCompositeNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCCompositeNetworkImageModel *compositeImageModel; // @synthesize compositeImageModel=_compositeImageModel;
- (void).cxx_destruct;
- (void)_configureImageWithUrl:(id)arg1 userSession:(id)arg2;
- (void)_setupOutOfStockLabel;
- (void)_setupStrikeThroughLabels;
- (void)_setupPriceLabel;
- (void)_initPriceLabel;
- (void)_initTitleLabel;
- (void)_initNetworkImageView;
- (void)_initImageView;
- (void)prepareForReuse;
- (void)setOutOfStockProductWithTitle:(id)arg1;
- (void)setStrikeThroughProductWithTitle:(id)arg1 productPrice:(id)arg2 strikeThroughPrice:(id)arg3;
- (void)setProductWithTitle:(id)arg1 productPrice:(id)arg2;
- (void)delayedUpdateWithCompositeImageModel:(id)arg1;
- (void)setupWithCompositeRendererEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
