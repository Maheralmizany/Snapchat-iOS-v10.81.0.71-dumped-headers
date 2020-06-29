//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCBloopsStickersOnboardingCommonCell-Protocol.h"

@class CAGradientLayer, NSString, UIButton, UILabel, UITapGestureRecognizer, YYAnimatedImageView;
@protocol SCBloopsPreviewsResourcesService, SCBloopsStickersOnboardingCellDelegate;

@interface SCBloopsStickersOnboardingCell : UICollectionViewCell <SCBloopsStickersOnboardingCommonCell>
{
    YYAnimatedImageView *_onboardingImageView;
    YYAnimatedImageView *_logoImageView;
    UIButton *_startOnboardingButton;
    UILabel *_infoLabel;
    CAGradientLayer *_gradientLayer;
    id <SCBloopsPreviewsResourcesService> _resourceService;
    UITapGestureRecognizer *_tapRecognizer;
    id <SCBloopsStickersOnboardingCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsStickersOnboardingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startOnboardingTapped;
- (void)_initialSetup;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (void)configurateWithResourcesService:(id)arg1;
@property(readonly, nonatomic) unsigned long long cellType;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

