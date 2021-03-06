//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, SCGalleryPopsPrintThumbnailProvider, SCLoadingIndicatorView, SCUserSession, UIImageView, UILabel, UIView;

@interface SCCommerceImageDetailTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_rightLabel;
    UILabel *_strikethroughPriceLabel;
    SCUserSession *_userSession;
    UIView *_bottomBorderLine;
    SCGalleryPopsPrintThumbnailProvider *_popsThumbnailProvider;
    _Bool _shouldShowBottomBorderLine;
    _Bool _isShowingImage;
    UIView *_leftViewContainer;
    UIImageView *_customImageView;
    SCLoadingIndicatorView *_activityView;
    NSString *_imageUrl;
}

+ (double)merchantHeight;
+ (double)heightForBillingItem:(id)arg1;
+ (id)subtitleStringForItem:(id)arg1;
@property(nonatomic) _Bool isShowingImage; // @synthesize isShowingImage=_isShowingImage;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) SCLoadingIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(retain, nonatomic) UIView *leftViewContainer; // @synthesize leftViewContainer=_leftViewContainer;
@property(nonatomic) _Bool shouldShowBottomBorderLine; // @synthesize shouldShowBottomBorderLine=_shouldShowBottomBorderLine;
- (void).cxx_destruct;
- (void)_didLoadImage:(id)arg1;
- (void)_loadImageData:(id)arg1;
- (void)_loadPopsImageData:(id)arg1 popsThumbnailProvider:(id)arg2;
- (void)_loadProductImage:(id)arg1 popsThumbnailProvider:(id)arg2;
- (void)_setMerchantDetails:(id)arg1;
- (void)configureForMerchantInfo:(id)arg1 userSession:(id)arg2;
- (void)configureForBillingItem:(id)arg1 popsThumbnailProvider:(id)arg2 userSession:(id)arg3;
- (void)configureForOrderSummary:(id)arg1 userSession:(id)arg2;
- (void)prepareForReuse;
- (void)setNeedsLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

