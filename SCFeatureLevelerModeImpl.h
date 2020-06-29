//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCFeatureLevelerMode-Protocol.h"

@class CADisplayLink, NSString, SCCameraToolbarItem, SCDisposableObserverLifecycle, SCFeatureReference, SCLazy, UIView;
@protocol SCFeatureContainerView;

@interface SCFeatureLevelerModeImpl : SCFeature <SCFeatureLevelerMode, SCCameraToolbarItemProvider>
{
    SCFeatureReference *_cameraUserActionLogger;
    CADisplayLink *_displayLink;
    double _levelerModeUpdatesPerSecond;
    double _previousAccelerometerUpdateInterval;
    SCLazy *_view;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    UIView<SCFeatureContainerView> *_containerView;
    SCCameraToolbarItem *_toolbarItem;
    _Bool _activated;
    unsigned long long _levelerModeButtonTapCount;
    SCFeatureReference *_widenedFOVFeature;
}

- (void).cxx_destruct;
- (void)_updateAnimatedLeveler;
- (void)_deactivate;
- (void)_activate;
- (void)_viewWillDisappear;
- (void)_viewWillAppear;
- (void)_appDidEnterBackground;
- (void)_appWillEnterForeground;
- (id)_createToolbarItem;
- (void)_createAndSetupWithContainerView:(id)arg1;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)activate;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)_configureStandaloneCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)checkAndStopRendering;
- (void)checkAndStartRendering;
- (_Bool)isActive;
- (void)dealloc;
- (id)initWithApplicationLifecycleEvents:(id)arg1 viewControllerLifecycleEvents:(id)arg2 widenedFOVFeature:(id)arg3 cameraUserActionLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
