//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCCoreCameraLogger, SCFeatureReference, SCObservable, SCUserSession;
@protocol SCBatchCaptureUserPreferenceTimeProvider, SCCapturer, SCFeatureImageCapture, SCFeatureImageCaptureDelegate, SCFeatureMultiSnap, SCFeatureVideoCapture, SCFeatureVideoCaptureDelegate;

@interface SCCameraBatchCaptureFeatureInitializer : SCFeatureInitializer
{
    id <SCCapturer> _capturer;
    id <SCFeatureImageCapture> _imageCapture;
    id <SCFeatureVideoCapture> _videoCapture;
    id <SCFeatureMultiSnap> _multiSnap;
    SCUserSession *_userSession;
    id <SCFeatureImageCaptureDelegate> _originImageCaptureDelegate;
    id <SCFeatureVideoCaptureDelegate> _originVideoCaptureDelegate;
    SCCoreCameraLogger *_coreCameraLogger;
    SCFeatureReference *_cameraUserActionLogger;
    SCObservable *_applicationLifecycleEvents;
    id <SCBatchCaptureUserPreferenceTimeProvider> _userPreferenceTimeProvider;
    long long _cameraViewType;
}

- (void).cxx_destruct;
- (id)_createLazyInstance;
- (id)createInstance;
- (_Bool)enabled;
- (id)initWithCapturer:(id)arg1 imageCapture:(id)arg2 videoCapture:(id)arg3 userSession:(id)arg4 multiSnap:(id)arg5 userPreferenceTimeProvider:(id)arg6 coreCameraLogger:(id)arg7 applicationLifecycleEvents:(id)arg8 cameraUserActionLogger:(id)arg9 cameraViewType:(long long)arg10;

@end
