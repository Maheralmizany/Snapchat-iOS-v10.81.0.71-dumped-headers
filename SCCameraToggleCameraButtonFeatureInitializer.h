//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCFeatureReference, SCObservable, SCUserSession;
@protocol SCCapturer, SCFeatureToggleCamera;

@interface SCCameraToggleCameraButtonFeatureInitializer : SCFeatureInitializer
{
    id <SCCapturer> _capturer;
    SCObservable *_applicationLifecycleEvents;
    SCObservable *_viewControllerLifecycleEvents;
    long long _cameraViewType;
    SCUserSession *_userSession;
    SCFeatureReference *_cameraUserActionLogger;
    id <SCFeatureToggleCamera> _toggleCameraFeature;
}

- (void).cxx_destruct;
- (id)_createLazyInstance;
- (_Bool)enabled;
- (id)createInstance;
- (id)initWithCapturer:(id)arg1 toggleCameraFeature:(id)arg2 applicationLifecycleEvents:(id)arg3 viewControllerLifecycleEvents:(id)arg4 cameraUserActionLogger:(id)arg5;

@end

