//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCAttributionServices, SCCameraCircumstanceEngineServices, SCCaptureScope, SCLegacyPageViewLoggerServices, SCSystemScope;
@protocol SCCaptureWorkflow;

@interface SCCaptureEntryPoint : SCEntryPoint
{
    id <SCCaptureWorkflow> _captureWorkflow;
    SCSystemScope *_systemScope;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCCaptureScope *_captureScope;
    SCCameraCircumstanceEngineServices *_cameraCircumstanceEngineServices;
    SCAttributionServices *_attributionServices;
    SCLegacyPageViewLoggerServices *_legacyPageViewLoggerServices;
}

@property(nonatomic) __weak SCLegacyPageViewLoggerServices *legacyPageViewLoggerServices; // @synthesize legacyPageViewLoggerServices=_legacyPageViewLoggerServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCCameraCircumstanceEngineServices *cameraCircumstanceEngineServices; // @synthesize cameraCircumstanceEngineServices=_cameraCircumstanceEngineServices;
@property(nonatomic) __weak SCCaptureScope *captureScope; // @synthesize captureScope=_captureScope;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end
