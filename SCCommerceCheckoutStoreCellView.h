//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCNetworkImageView, UIImageView, UILabel;

@interface SCCommerceCheckoutStoreCellView : UIView
{
    SCNetworkImageView *_thumbnailView;
    UILabel *_titleLabel;
    UILabel *_quantityLabel;
    UIImageView *_chevronView;
    NSArray *_constraints;
}

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_updateViewContent:(id)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

