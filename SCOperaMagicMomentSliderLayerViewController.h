//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCMagicMomentSliderControllerDelegate-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"

@class NSString, SCMagicMomentButton, SCMagicMomentSliderController, SCMagicMomentSliderView, UILabel;

@interface SCOperaMagicMomentSliderLayerViewController : SCOperaLayerViewController <SCOperaFadeTransitionCompatibleViewController, SCMagicMomentSliderControllerDelegate>
{
    _Bool _buttonSelected;
    UILabel *_3DLabel;
    SCMagicMomentButton *_button;
    SCMagicMomentSliderView *_slider;
    SCMagicMomentSliderController *_controller;
}

- (void).cxx_destruct;
- (id)_videoAsset;
- (id)_videoAssetProvider;
- (void)magicMomentSliderController:(id)arg1 didReselectMagicMomentFrameTime:(double)arg2;
- (void)magicMomentSliderController:(id)arg1 didSeekToFrameTime:(double)arg2;
- (void)magicMomentSliderControllerDidResumeMagicMoment:(id)arg1;
- (void)magicMomentSliderControllerDidPauseMagicMoment:(id)arg1;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)_magicMomentButtonPressed:(id)arg1;
- (void)_configureButton;
- (void)_updateViewFadedOut:(_Bool)arg1 duration:(double)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

