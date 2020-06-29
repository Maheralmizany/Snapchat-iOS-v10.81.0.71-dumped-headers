//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCBatchCaptureConfigurationListener-Protocol.h"
#import "SCCameraFeatureRecoverable-Protocol.h"
#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCFeatureBatchCapture-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSDate, NSString, SCBatchCaptureConfiguration, SCCameraOverlayView, SCCameraToolbarItem, SCCapturedBatchCaptureRecoveryData, SCCoreCameraLogger, SCDisposableObserverLifecycle, SCFeatureReference, SCLazy, SCManagedCapturerState, SCUserSession, UIView;
@protocol SCBatchCaptureUserPreferenceTimeProvider, SCCapturer, SCFeatureBatchCaptureDelegate, SCFeatureCameraToolbar, SCFeatureCameraUIArbitrator, SCFeatureContainerView, SCFeatureImageCapture, SCFeatureImageCaptureDelegate, SCFeatureMultiSnap, SCFeatureVideoCapture, SCFeatureVideoCaptureDelegate;

@interface SCFeatureBatchCaptureImpl : SCFeature <SCManagedCapturerListener, SCBatchCaptureConfigurationListener, SCCameraFeatureRecoverable, SCFeatureBatchCapture, SCCameraToolbarItemProvider, SCCameraGestureResponder>
{
    id <SCFeatureCameraToolbar> _cameraToolbar;
    id <SCFeatureMultiSnap> _multiSnap;
    SCCameraOverlayView *_parentView;
    SCUserSession *_userSession;
    id <SCFeatureImageCaptureDelegate> _originImageCaptureDelegate;
    id <SCFeatureVideoCaptureDelegate> _originVideoCaptureDelegate;
    SCFeatureReference *_cameraUserActionLogger;
    SCCameraToolbarItem *_toolbarItem;
    SCLazy *_overlayViewController;
    SCLazy *_buttonIconView;
    id <SCBatchCaptureUserPreferenceTimeProvider> _userPreferenceTimeProvider;
    unsigned long long _batchCaptureButtonTapCount;
    id <SCFeatureBatchCaptureDelegate> _delegate;
    id <SCFeatureCameraUIArbitrator> _cameraBottomUIArbitrator;
    UIView<SCFeatureContainerView> *_containerView;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    SCCapturedBatchCaptureRecoveryData *_batchCaptureRecoveryData;
    long long _cameraViewType;
    id <SCCapturer> _capturer;
    id <SCFeatureImageCapture> _imageCapture;
    id <SCFeatureVideoCapture> _videoCapture;
    NSDate *_creationTime;
    SCCoreCameraLogger *_coreCameraLogger;
    SCManagedCapturerState *_managedCapturerState;
}

@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(retain, nonatomic) SCCoreCameraLogger *coreCameraLogger; // @synthesize coreCameraLogger=_coreCameraLogger;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) __weak id <SCFeatureVideoCapture> videoCapture; // @synthesize videoCapture=_videoCapture;
@property(nonatomic) __weak id <SCFeatureImageCapture> imageCapture; // @synthesize imageCapture=_imageCapture;
@property(nonatomic) __weak id <SCCapturer> capturer; // @synthesize capturer=_capturer;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(retain, nonatomic) SCCapturedBatchCaptureRecoveryData *batchCaptureRecoveryData; // @synthesize batchCaptureRecoveryData=_batchCaptureRecoveryData;
@property(retain, nonatomic) SCBatchCaptureConfiguration *batchCaptureConfiguration; // @synthesize batchCaptureConfiguration=_batchCaptureConfiguration;
@property(retain, nonatomic) SCDisposableObserverLifecycle *appLifecycle; // @synthesize appLifecycle=_appLifecycle;
@property(readonly, nonatomic) UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraBottomUIArbitrator; // @synthesize cameraBottomUIArbitrator=_cameraBottomUIArbitrator;
@property(nonatomic) __weak id <SCFeatureBatchCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)batchCaptureOverlayViewController:(id)arg1 previewButtonDidBecomeVisible:(_Bool)arg2;
- (void)batchCaptureOverlayViewControllerDidPressReviewAndEdit:(id)arg1;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
- (id)_activeVideoPaths;
- (id)_getCurrentLocation;
- (_Bool)featureVideoCaptureCameraFlipsWhileRecording:(id)arg1;
- (_Bool)featureVideoCaptureHandsFreeEnabled:(id)arg1;
- (_Bool)featureVideoCaptureHasStartedRecording:(id)arg1;
- (_Bool)featureVideoCaptureShouldEndRecording:(id)arg1;
- (_Bool)featureVideoCaptureShouldStartRecording:(id)arg1;
- (_Bool)featureVideoCaptureShouldPrepareRecording:(id)arg1;
- (void)featureVideoCaptureDidCompleteRecovery:(id)arg1 captureSessionId:(id)arg2;
- (void)featureVideoCaptureDidRemoveInvalidRecordedVideo:(id)arg1;
- (void)featureVideoCaptureDidDiscardRecordedVideo:(id)arg1;
- (void)featureVideoCaptureDidStopRecording:(id)arg1;
- (void)featureVideoCaptureDidReachEnd:(id)arg1;
- (void)featureVideoCaptureRecordingTooShort:(id)arg1;
- (void)featureVideoCaptureDidAbortRecording:(id)arg1;
- (void)featureVideoCaptureDidCancelRecording:(id)arg1;
- (void)featureVideoCaptureDidFailRecording:(id)arg1;
- (void)featureVideoCaptureDidFinishRecording:(id)arg1;
- (void)featureVideoCaptureWillFinishRecording:(id)arg1 videoSize:(struct CGSize)arg2 placeholderImage:(id)arg3;
- (void)featureVideoCaptureDidReachUnlimitedMovementThreshhold:(id)arg1;
- (void)featureVideoCaptureWillStartRecording:(id)arg1;
- (void)featureImageCaptureDidComplete:(id)arg1;
- (void)featureImageCapture:(id)arg1 didCompleteRecoveryWithImage:(id)arg2 captureSessionId:(id)arg3 captureTimeStamp:(id)arg4;
- (void)featureImageCapture:(id)arg1 didCompleteWithError:(id)arg2;
- (void)featureImageCapture:(id)arg1 willCompleteWithStillImageData:(id)arg2 discardRelatedData:(id)arg3;
- (void)recoverWithSnapRecoveryDataArray:(id)arg1;
- (void)_loadBatchCaptureRecoveryDataAndShowPreview:(id)arg1;
- (void)_persistRecordedVideo:(id)arg1 timestamp:(double)arg2 captureSessionID:(id)arg3;
- (void)_persistImage:(id)arg1 timestamp:(double)arg2 captureSessionID:(id)arg3;
- (void)_showLimitReachedAlertIfNeeded;
- (void)_updateLastSegmentThumbnailAndTotalCountAnimated:(_Bool)arg1;
- (unsigned long long)_unsavedSegmentCount;
- (unsigned long long)_segmentCount;
- (void)_removeActiveVideoPathsForSegment:(id)arg1;
- (void)_resetUI;
- (id)_lastSegmentThumbnail;
- (void)_setBatchCaptureUIVisible:(_Bool)arg1;
- (void)_setBatchCaptureActivated:(_Bool)arg1;
- (void)_appWillEnterForeground;
- (void)setIsCapturing:(_Bool)arg1;
- (_Bool)shouldShowPreviewButton;
- (void)setLastSegmentSnappablesDataWithFuture:(id)arg1;
- (void)prepareForRecording;
- (void)reset;
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (void)interruptGestures;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (id)_createButtonIconView;
- (id)_createToolbarItem;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)_configureStandaloneCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1 imageCapture:(id)arg2 videoCapture:(id)arg3 userSession:(id)arg4 multiSnap:(id)arg5 userPreferenceTimeProvider:(id)arg6 coreCameraLogger:(id)arg7 applicationLifecycleEvents:(id)arg8 cameraUserActionLogger:(id)arg9;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeBatchCaptureActive:(id)arg2;
- (void)batchCaptureConfigurationDidDeleteAllSegments:(id)arg1;
- (void)batchCaptureConfigurationWillDeleteAllSegments:(id)arg1;
- (void)batchCaptureConfiguration:(id)arg1 didAddSegment:(id)arg2;
- (void)batchCaptureConfiguration:(id)arg1 didSplitSnapAtIndexPath:(id)arg2 splitTime:(CDStruct_1b6d18a9)arg3;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSnapAtIndexPath:(id)arg2;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSegment:(id)arg2 atIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

