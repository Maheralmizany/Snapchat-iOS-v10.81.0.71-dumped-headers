//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCTCallCardAudioRoutingButton, SCTToggleButton;
@protocol SCTFSBottomPaneCallingServices, SCTFullscreenBottomPaneDelegate;

@interface SCTFullscreenBottomPane : UIView
{
    id <SCTFSBottomPaneCallingServices> _callingServices;
    id <SCTFullscreenBottomPaneDelegate> _delegate;
    SCTToggleButton *_toggleCameraButton;
    SCTToggleButton *_videoButton;
    SCTToggleButton *_audioButton;
    UIView *_chatButton;
    SCTCallCardAudioRoutingButton *_audioRoutingButton;
    _Bool _audioRoutingEnabled;
}

- (void).cxx_destruct;
- (id)_buttonBackgroundColorForToggled:(_Bool)arg1;
- (id)_prepareCameraButton;
- (id)_prepareVideoButton;
- (id)_prepareAudioButton;
- (id)_prepareChatButton;
- (id)_prepareAudioRoutingButton;
- (id)_prepareRoundView;
- (void)_prepareLayout;
- (void)_flipCameraButtonPressed:(id)arg1;
- (void)_videoButtonPressed:(id)arg1;
- (void)_audioButtonPressed:(id)arg1;
- (void)_audioRoutingButtonPressed:(id)arg1;
- (void)_chatButtonPressed:(id)arg1;
- (void)_updateAVToggleButtonBackground:(id)arg1;
- (void)updateAudioRoutingButtonWithAudioState:(id)arg1;
- (void)_updateButtonsState;
- (id)accessoryCenterYConstraint;
- (void)disableToggleCameraButtonIfNeeded;
- (void)didMoveToSuperview;
- (id)initWithDelegate:(id)arg1 audioRoutingEnabled:(_Bool)arg2 callingServices:(id)arg3;

@end

