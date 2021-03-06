//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCapturePhotoCaptureDelegate-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedDeviceCapacityAnalyzerListener-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"
#import "SCStillImageCapturer-Protocol.h"

@class CIContext, NSString, SCBurstCaptureDeblurTask, SCCaptureResource, SCImageCaptureConfiguration, SCManagedCaptureSession, SCManagedFrameHealthChecker, SCPortraitModeFilter, SCQueuePerformer, SCStillImageCaptureVideoInputMethod;
@protocol OS_dispatch_semaphore, SCFeatureBurstCaptureDeblur, SCManagedCapturerLensAPI, SCManagedStillImageCapturerDelegate;

@interface SCManagedStillImageCapturer : NSObject <AVCapturePhotoCaptureDelegate, SCStillImageCapturer, SCManagedDeviceCapacityAnalyzerListener, SCManagedCapturerListener, SCManagedVideoDataSourceListener>
{
    SCManagedCaptureSession *_captureSession;
    _Bool _captureImageFromVideoImmediately;
    float _captureDeadline;
    _Bool _adjustingExposureManualDetect;
    _Bool _adjustingExposureKVO;
    SCImageCaptureConfiguration *_captureConfiguration;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _callbackBlock;
    id <SCManagedCapturerLensAPI> _lensProcessingCore;
    SCQueuePerformer *_performer;
    id <SCManagedStillImageCapturerDelegate> _delegate;
    long long _lightingConditionType;
    SCManagedFrameHealthChecker *_frameHealthChecker;
    _Bool _shouldCapture;
    _Bool _shouldEnableHRSI;
    _Bool _depthCaptureModeEnabled;
    SCStillImageCaptureVideoInputMethod *_videoFileMethod;
    unsigned long long _status;
    CIContext *_ciContext;
    SCCaptureResource *_captureResource;
    _Bool _capturedFromVideoBuffer;
    struct SampleBufferMetadata _videoBufferMetadata;
    double _lastFrameTime;
    SCBurstCaptureDeblurTask *_burstCaptureDeblurTask;
    SCQueuePerformer *_shutterSoundPerformer;
    NSObject<OS_dispatch_semaphore> *_shutterSoundSemaphore;
    id <SCFeatureBurstCaptureDeblur> _burstCaptureDeblurDelegate;
    SCPortraitModeFilter *_portraitModeFilter;
}

@property(retain, nonatomic) SCPortraitModeFilter *portraitModeFilter; // @synthesize portraitModeFilter=_portraitModeFilter;
@property(nonatomic) __weak id <SCFeatureBurstCaptureDeblur> burstCaptureDeblurDelegate; // @synthesize burstCaptureDeblurDelegate=_burstCaptureDeblurDelegate;
@property(nonatomic) __weak id <SCManagedStillImageCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isSimilarToIphoneXorXSDevices;
- (_Bool)_shouldSkipCodecForImageCapture;
- (double)_capturedImageMaxWidthOrHeight;
- (id)_photoSettingsPreviewPhotoFormat;
- (void)_didFinishProcessingFromVideoBufferWithImage:(id)arg1 cameraInfo:(id)arg2;
- (void)_didCapturePhotoFromVideoBuffer;
- (void)_willBeginCapturePhotoFromVideoBuffer;
- (id)_portraitEffectsMatteFromInputPortraitEffectsMatte:(id)arg1 orientation:(long long)arg2 captureConfiguration:(id)arg3;
- (id)_depthDataFromInputDepthData:(id)arg1 orientation:(long long)arg2 captureConfiguration:(id)arg3;
- (_Bool)_shouldCreateDepthPhotoData:(id)arg1;
- (id)_croppedImageFromFullScreenImage:(id)arg1 captureConfiguration:(id)arg2;
- (id)_imageFromImage:(id)arg1 captureConfiguration:(id)arg2;
- (id)_imageFromInputImage:(id)arg1 captureConfiguration:(id)arg2;
- (id)_photoCapturerStatusToString:(unsigned long long)arg1;
- (_Bool)_lastVideoFrameValid;
- (id)_bracketSettingsArray:(id)arg1 withCaptureState:(id)arg2;
- (id)_bracketPhotoSettingsWithPhotoOutput:(id)arg1 captureConnection:(id)arg2 captureState:(id)arg3;
- (id)_defaultPhotoSettingsWithPhotoOutput:(id)arg1 captureState:(id)arg2;
- (void)_configurePhotoQualityPrioritization:(id)arg1;
- (_Bool)_shouldUseBracketPhotoSettingsWithCaptureState:(id)arg1;
- (id)_photoSettingsWithPhotoOutput:(id)arg1 captureConnection:(id)arg2 captureState:(id)arg3;
- (id)_captureConnectionFromPhotoOutput:(id)arg1;
- (void)_photoCaptureDidFailWithError:(id)arg1;
- (id)_processInputStillImageData:(id)arg1 withFullScreenImage:(id)arg2;
- (unsigned int)_counterOrientationForDepthData:(long long)arg1;
- (void)_photoCaptureDidSucceedWithStillImageData:(id)arg1 error:(id)arg2;
- (void)_photoCaptureDidSucceedWithImage:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraInfo:(id)arg3 error:(id)arg4;
- (void)_capturePhoto;
- (void)_exposureDeadlineCapturePhoto;
- (void)_deadlineCapturePhoto;
- (void)_capturePhotoFinishedWithStillImageData:(id)arg1 error:(id)arg2;
- (void)_capturePhotoFinishedWithImage:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraInfo:(id)arg3 error:(id)arg4;
- (void)_didChangeAdjustingExposure:(_Bool)arg1;
- (id)ciContext;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 sampleTimestamp:(CDStruct_1b6d18a9)arg3 devicePosition:(long long)arg4;
- (CDStruct_1b6d18a9)adjustedExposureDurationForNightModeWithCurrentExposureDuration:(CDStruct_1b6d18a9)arg1;
- (void)onFingerDownResolved;
- (void)onFingerDownTriggered;
- (void)setCaptureDeadline:(float)arg1;
- (void)captureStillImageFromVideoBufferWithSound:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)managedCapturer:(id)arg1 didChangeAdjustingExposure:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangePortraitModeActive:(id)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeLightingCondition:(long long)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)captureStillImageWithCaptureConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_fallbackToVideoBufferDeadline;
- (_Bool)_shouldFallbackToVideoBuffer;
- (void)setDepthCaptureModeEnabled:(_Bool)arg1;
- (void)setHighResolutionStillImageOutputEnabled:(_Bool)arg1;
- (id)initWithCaptureResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

