//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, SCHitTestingMaskView, SCLoadingIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIVisualEffectView;
@protocol SCSnappablesInterstitialLayerViewDelegate;

@interface SCSnappablesInterstitialLayerView : UIView <UIGestureRecognizerDelegate, SCOperaLayerView>
{
    SCHitTestingMaskView *_maskableBlurViewContainer;
    UIVisualEffectView *_blurView;
    CAShapeLayer *_maskLayer;
    UIView *_lensBacking;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_extendedAreaRecognizer;
    _Bool _showingOverlay;
    UIView *_lensIconContainer;
    UIImageView *_lensIconImageView;
    SCLoadingIndicatorView *_lensIconSpinner;
    UILabel *_nameLabel;
    UIButton *_joinButton;
    UILabel *_ctaLabel;
    UILabel *_skipLabel;
    double _extendedHitAreaWidth;
    UIView *_playerView;
    double _playerViewAspectRatio;
    id <SCSnappablesInterstitialLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool showingOverlay; // @synthesize showingOverlay=_showingOverlay;
@property(nonatomic) __weak id <SCSnappablesInterstitialLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double playerViewAspectRatio; // @synthesize playerViewAspectRatio=_playerViewAspectRatio;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) double extendedHitAreaWidth; // @synthesize extendedHitAreaWidth=_extendedHitAreaWidth;
@property(readonly, nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(readonly, nonatomic) UILabel *ctaLabel; // @synthesize ctaLabel=_ctaLabel;
@property(readonly, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) SCLoadingIndicatorView *lensIconSpinner; // @synthesize lensIconSpinner=_lensIconSpinner;
@property(readonly, nonatomic) UIImageView *lensIconImageView; // @synthesize lensIconImageView=_lensIconImageView;
@property(readonly, nonatomic) UIView *lensIconContainer; // @synthesize lensIconContainer=_lensIconContainer;
- (void).cxx_destruct;
- (void)_addSpringAnimationToLayer:(id)arg1 key:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleEarlyDisplayTap:(id)arg1;
- (void)_handleExtendedAreaTap:(id)arg1;
- (void)_handleReplyTap:(id)arg1;
- (struct CGRect)_maskFrame;
- (void)_reset;
- (void)_buildView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)enableTouchProcessing;
- (void)displayOverlay;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

