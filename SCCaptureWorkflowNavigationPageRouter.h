//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowPageRouter-Protocol.h"

@class NSString, SCCameraViewController, SCCaptureWorkflowSwipeTransitionCoordinator, SCLazy, UINavigationController;
@protocol SCCameraViewContaining, SCCurrentPageTracker;

@interface SCCaptureWorkflowNavigationPageRouter : NSObject <SCCaptureWorkflowPageRouter>
{
    id <SCCameraViewContaining> _cameraViewContainer;
    SCCameraViewController *_cameraViewController;
    UINavigationController *_navigationController;
    SCCaptureWorkflowSwipeTransitionCoordinator *_cameraTransitionCoordinator;
    SCLazy *_legacyPageViewLogger;
    id <SCCurrentPageTracker> _currentPageTracker;
}

@property(readonly, nonatomic) SCCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void).cxx_destruct;
- (void)_logPagePageView:(_Bool)arg1;
- (_Bool)shouldDismissWorkflowOnBackground;
- (void)dismissPreview:(id)arg1;
- (void)dismissCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCameraWithDelegate:(id)arg1 cameraViewConfigurationController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCameraViewContainer:(id)arg1 featureProvider:(struct SCFeatureProvider *)arg2 lensDataProvider:(id)arg3 cameraCircumstanceEngine:(id)arg4 legacyPageViewLogger:(id)arg5 currentPageTracker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

