//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCFeatureDepthCaptureMode-Protocol.h"
#import "SCLensDataProviderListener-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSArray, NSString, SCCameraToolbarItem, SCDepthCaptureLiveCameraCropModule, SCDisposableObserverLifecycle, SCExperimentManager, SCFeatureReference, SCLensDataFetcher, UIView;
@protocol SCCameraViewControllerLensDelegate, SCCapturer, SCFeatureCameraToolbar, SCFeatureContainerView, SCLensCameraScreenDataProviderProtocol;

@interface SCFeatureDepthCaptureModeImpl : SCFeature <SCManagedCapturerListener, SCLensDataProviderListener, SCFeatureDepthCaptureMode, SCCameraToolbarItemProvider>
{
    id <SCCapturer> _capturer;
    UIView<SCFeatureContainerView> *_containerView;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    SCCameraToolbarItem *_toolbarItem;
    long long _lastDevicePosition;
    SCDepthCaptureLiveCameraCropModule *_liveCameraCropModule;
    SCFeatureReference *_lensDataProviderFactory;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    NSString *_lensDataProviderToken;
    SCLensDataFetcher *_lensDataFetcher;
    SCExperimentManager *_experimentManager;
    _Bool _lensPrefetchRequestDone;
    NSArray *_lensesToBePrefetched;
    SCFeatureReference *_cameraUserActionLogger;
    SCFeatureReference *_volumeButtonCapture;
    unsigned long long _buttonTapCount;
    _Bool _interactionDisabled;
    _Bool _enabled;
    id <SCCameraViewControllerLensDelegate> _lensDelegate;
}

@property(nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate; // @synthesize lensDelegate=_lensDelegate;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeDepthCaptureModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)_updateLensesThatNeedsToBePrefetched;
- (void)_updateToolbarItemVisibility;
- (_Bool)_depthCaptureSupported;
- (_Bool)_isDepthCaptureDevicePosition:(long long)arg1;
- (_Bool)_onFrontCamera:(long long)arg1;
- (void)setDepthCaptureActive:(_Bool)arg1;
- (void)stopIfActive;
- (void)startIfInactive;
- (void)setEnabled:(_Bool)arg1 force:(_Bool)arg2;
- (id)_createToolbarItem;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)activate;
- (void)setButtonHidden:(_Bool)arg1;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)_configureStandaloneCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1 applicationLifecycleEvents:(id)arg2 lensDataProviderFactory:(id)arg3 lensDataFetcher:(id)arg4 experimentManager:(id)arg5 cameraUserActionLogger:(id)arg6 volumeButtonCapture:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

