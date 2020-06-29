//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCCaptureWorkflowTransitionAnimatableFeature-Protocol.h"
#import "SCFeatureToggleCameraButton-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCCameraToolbarItem, SCDisposableObserverLifecycle, SCFeatureReference, SCNavigationBarButtonItem, SCPreviewTooltipBalloon, UIView;
@protocol SCCapturer, SCFeatureCameraToolbar, SCFeatureToggleCamera, SCFeatureToggleCameraButtonDelegate;

@interface SCFeatureToggleCameraButtonImpl : SCFeature <SCManagedCapturerListener, SCFeatureToggleCameraButton, SCCameraGestureResponder, SCCameraToolbarItemProvider, SCCaptureWorkflowTransitionAnimatableFeature>
{
    id <SCCapturer> _capturer;
    SCFeatureReference *_cameraUserActionLogger;
    SCCameraToolbarItem *_toolbarItem;
    SCPreviewTooltipBalloon *_tooltip;
    NSString *_deviceOrientationToken;
    id <SCFeatureToggleCamera> _toggleCameraFeature;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    _Bool _isFrontFacing;
    unsigned long long _toggleCameraTapCount;
    id <SCFeatureToggleCameraButtonDelegate> _delegate;
    SCNavigationBarButtonItem *_navigationBarButtonItem;
}

@property(nonatomic) __weak id <SCFeatureToggleCameraButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleSwipeOnTooltip:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_setupDeviceMotionUpdate;
- (id)_createToolbarItemWithToolbar:(id)arg1;
- (void)_viewDidAppear;
- (void)_appDidEnterBackground;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)dealloc;
- (void)dismissTooltipAnimated:(_Bool)arg1 afterDelay:(double)arg2;
- (void)showTooltip:(id)arg1;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (void)reset;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)setDisabled:(_Bool)arg1;
- (void)setFrontFacing:(_Bool)arg1;
- (void)_setToggleButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (void)animate;
- (void)triggerTap;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)_configureStandaloneCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) SCNavigationBarButtonItem *navigationBarButtonItem; // @synthesize navigationBarButtonItem=_navigationBarButtonItem;
- (id)initWithCapturer:(id)arg1 toggleCameraFeature:(id)arg2 applicationLifecycleEvents:(id)arg3 viewControllerLifecycleEvents:(id)arg4 cameraUserActionLogger:(id)arg5;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
