//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView, UIWindow;

@interface SCAlertViewCoordinator : NSObject
{
    NSMutableArray *_alertViewFlowPresentationQueue;
    _Bool _isPerformingAnimation;
    NSMutableArray *_alertViewFlowStack;
    UIView *_contentStage;
    struct CGRect _keyboardRect;
    UIWindow *_overrideWindow;
    UIView *_overlayView;
}

+ (id)sharedCoordinator;
+ (void)presentLineItemDraftAlert:(id)arg1 withGeofilterSession:(id)arg2 successHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
+ (void)presentFailureInitPurchaseAlertViewGeofilter;
+ (void)presentStoreKitPurchaseAlertViewGeofilter;
+ (id)generateUsageGuideline;
+ (id)_generatePassedStartTimeStampAlertDescription:(id)arg1;
+ (void)presentPurchaseConfirming:(id)arg1 usageguidelineDelegate:(id)arg2 successHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
+ (void)presentAbandonmentSurveyWithGeofilterSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_subtitleForSaveAlertType:(long long)arg1;
+ (id)_titleForSaveAlertType:(long long)arg1;
+ (id)_secondaryActionTitleForSaveAlertType:(long long)arg1;
+ (id)_actionTitleForSaveAlertType:(long long)arg1;
+ (void)presentSpectaclesShowSaveAlert:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)presentUnsupportedFiltersWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)presentUnsupportedDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)presentUnsupportedCandidateCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)uco_presentSaveAsCopyAlertWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (id)_topAlertView;
- (id)_topAlertViewFlow;
- (id)_popAlertViewFlow;
- (void)_pushAlertViewFlow:(id)arg1;
- (void)_performConfigurationForTransitionToAlertView:(id)arg1;
- (void)_performConfigurationForAlertView:(id)arg1;
- (void)_removeOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addOverlayToView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popAlertViewFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pushAlertViewFlow:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentNextAlertViewInFlow:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAlertViewIfVisible:(id)arg1;
- (void)dismissCurrentAlertViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissCurrentAlertViewWithAction:(id)arg1;
- (void)dismissCurrentAlertView;
- (void)didSelectActionButton:(id)arg1;
- (void)didPerformPanGesture:(id)arg1;
- (_Bool)isVisible;
- (void)enqueueAlertView:(id)arg1 inAlertViewFlow:(id)arg2;
- (void)showAlertViewFlow:(id)arg1;
- (void)showBaseAlertView:(id)arg1;
- (void)showAlertView:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 description:(id)arg2 hasSeparator:(_Bool)arg3 actions:(id)arg4 configuration:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;
- (void)showAlertWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3 configuration:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;
- (void)willChangeKeyboardFrame:(id)arg1;
- (void)didPerformTapGestureOnOverlay:(id)arg1;
- (void)applicationDidChangeOrientation:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;
- (void)lensScannable_showRemoveUnlockedLensAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertWithTitle:(id)arg1 description:(id)arg2;
- (void)showLowStorageAlert;
- (void)showHighTemperatureAlert;
- (void)showLowTemperatureAlert;
- (void)showLowBatteryAlertForDevice:(id)arg1;
- (void)presentMagicMomentSnapFailureAlert;
- (void)presentMagicMomentFrameFailureAlert;

@end

