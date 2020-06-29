//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class SCCameraOverlayView, SCLens, SCLongPressGestureRecognizer, SCNavigationItem_DEPRECATED, UIGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UIView;
@protocol SCLensCameraScreenDataProviderProtocol;

@protocol SCCameraOverlayDelegate <UIGestureRecognizerDelegate, UIScrollViewDelegate>
- (_Bool)shouldDisplayHandsFreeTooltip;
- (_Bool)lensCollectionNeedsRemoveHovaExtraBottomOffset;
- (_Bool)cameraTimerNeedsHovaExtraBottomOffset;
- (_Bool)cameraTimerNeedsNGSExtraBottomOffset;
- (double)headerProfileButtonCenterX;
- (_Bool)isHeaderExists;
- (_Bool)inCaptureFlow;
- (void)abortSnapRecordingFromLensIfNeeded;
- (void)setVolumeButtonHandlingEnabled:(_Bool)arg1;
- (void)createYourOwnLensPressed;
- (void)cameraOverlayView:(SCCameraOverlayView *)arg1 setAllInterfaceElementsHidden:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)cameraOverlayView:(SCCameraOverlayView *)arg1 didUpdateCameraViewType:(long long)arg2;
- (SCNavigationItem_DEPRECATED *)cameraNavigationItem;
- (UIView *)toggleCameraButtonView;
- (UIView *)replyBackButtonView;
- (UIView *)profileButtonView;
- (UIView *)mainSuperview;
- (id <SCLensCameraScreenDataProviderProtocol>)lensDataProvider;
- (void)lensCallToActionButtonPressed:(SCLens *)arg1;
- (void)thirdPartyLensInformationButtonPressed:(SCLens *)arg1;
- (void)toggleLensesButtonPressed;
- (void)replyBackButtonLeftPressed;
- (_Bool)longPress:(SCLongPressGestureRecognizer *)arg1;
- (_Bool)enableScanning;
- (void)longPressOnCameraTimer:(SCLongPressGestureRecognizer *)arg1;
- (void)setRightSwipeGestureRecognizerEnabled;
- (void)handleSwipeFrom:(UISwipeGestureRecognizer *)arg1;
- (void)handleTapFrom:(UIGestureRecognizer *)arg1;
- (void)handlePanFrom:(UIPanGestureRecognizer *)arg1;
- (void)handlePinchFrom:(UIPinchGestureRecognizer *)arg1;
@end
