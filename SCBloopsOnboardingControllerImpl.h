//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"
#import "SCBloopsFullscreenPlayerViewControllerOutput-Protocol.h"
#import "SCBloopsOnboardingController-Protocol.h"
#import "SCBloopsSelfieConfirmationViewControllerDelegate-Protocol.h"
#import "SCBloopsSetTargetControllerOutput-Protocol.h"
#import "SCBloopsSwipeTransitionPresenterDelegate-Protocol.h"
#import "SCBloopsTwoPersonConfigurationViewControllerControllerDelegate-Protocol.h"
#import "SPReenactmentClientsManagerOutput-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, SCBloopsChangeTargetLogger, SCBloopsFullscreenPlayerViewController, SCBloopsOnboardingControllerState, SCBloopsSelfieConfirmationViewController, SCBloopsSetTargetController, SCBloopsSwipeTransitionPresenter, SCBloopsTwoPersonConfigurationViewController, SCCustomVolumeController, SCExperimentManager, SCLazy, SPOnboardingScenarios;
@protocol SCAudioSession, SPReenactmentClientsManager;

@interface SCBloopsOnboardingControllerImpl : NSObject <SCBloopsSetTargetControllerOutput, SCBloopsSwipeTransitionPresenterDelegate, SPReenactmentClientsManagerOutput, SCBloopsFullscreenPlayerViewControllerOutput, SCBloopsSelfieConfirmationViewControllerDelegate, SCBloopsTwoPersonConfigurationViewControllerControllerDelegate, SCAudioSessionListener, SCBloopsOnboardingController>
{
    SCLazy *_secondTargetIdsProvider;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _selfieApprovedCallback;
    SCBloopsSwipeTransitionPresenter *_cameraControllerPresenter;
    id <SPReenactmentClientsManager> _reenactmentService;
    SPOnboardingScenarios *_onboardingBloops;
    NSMutableDictionary *_reenactmentResultByBloopId;
    SCBloopsSetTargetController *_bloopsSetTargetController;
    SCBloopsFullscreenPlayerViewController *_firstBloopVC;
    SCBloopsSelfieConfirmationViewController *_selfieConfirmationVC;
    SCBloopsTwoPersonConfigurationViewController *_twoPersonConfigurationVC;
    SCLazy *_bloopsAPI;
    SCLazy *_remoteSettingsProvider;
    SCLazy *_targetsService;
    SCLazy *_onboardingResourcesService;
    SCLazy *_previewsResourcesService;
    SCLazy *_categoriesProvider;
    SCExperimentManager *_experimentManager;
    SCBloopsOnboardingControllerState *_state;
    SCLazy *_userInfoProvider;
    NSTimer *_onboardingWaitingTimer;
    SCCustomVolumeController *_customVolumeController;
    id <SCAudioSession> _audioSession;
    SCBloopsChangeTargetLogger *_logger;
}

- (void).cxx_destruct;
- (long long)_loggerResultWithTargetChanged:(_Bool)arg1;
- (void)_updateFriendBloopsPolicy:(id)arg1;
- (_Bool)_checkOnboardingBloops:(id)arg1;
- (void)_finishOnboardingByTimerIfNeeded;
- (void)_stopOnboardingWaitingTimer;
- (void)_startOnboardingWaitingTimer;
- (void)_appDidEnterBackground;
- (void)_reset;
- (void)_resetAndBackToCamera;
- (void)_returnToCameraWithErrorText:(id)arg1;
- (void)_showErrorWithText:(id)arg1;
- (void)_showTwoPersonConfigurationViewControllerIfNeeded;
- (void)_showSelfieConfirmationViewControllerIfNeeded;
- (void)_showFullscreenPlayerViewControllerIfNeeded;
- (void)_prefetchOnboardingScenariosWithSecondPersonProcessor:(id)arg1;
- (void)_prefetchOtherBloopsIfNeeded;
- (void)_prefetchFirstBloopsIfNeeded;
- (void)_showHairSelectionIfNeeded;
- (void)_obtainOnboardingBloops;
- (void)_completeTargetChanged:(_Bool)arg1;
- (id)_reenactmentResultByBloop:(id)arg1;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)twoPersonConfigurationViewControllerDidTapSkip:(id)arg1;
- (void)twoPersonConfigurationViewControllerDidTapEnable:(id)arg1;
- (void)selfieConfirmationControlViewControllerDidTapRetakeSelfie:(id)arg1;
- (void)selfieConfirmationControlViewControllerDidTapUseSelfie:(id)arg1;
- (void)fullscreenPlayerViewController:(id)arg1 didFinishLoopOfVideo:(long long)arg2;
- (void)didFailFullScreenReenactmentForRequest:(id)arg1 withError:(id)arg2;
- (void)didFinishReenactment:(id)arg1;
- (void)didReadyToShowReenactment:(id)arg1;
- (void)bloopsSwipeTransitionPresenterDidDismiss:(id)arg1;
- (void)setTargetControllerDidSelectGenderType:(id)arg1 genderType:(unsigned long long)arg2;
- (void)setTargetControllerDidMakePhoto:(id)arg1 isFrontCamera:(_Bool)arg2;
- (void)setTargetControllerDidFinishAnimation:(id)arg1;
- (void)setTargetControllerDidStartValidation:(id)arg1;
- (void)setTargetControllerDidBack:(id)arg1;
- (void)setTargetControllerDidClose:(id)arg1;
- (void)setTargetControllerDidFailSetTarget:(id)arg1 withError:(id)arg2 analyticsErrorType:(unsigned long long)arg3;
- (void)setTargetControllerDidFinishHairSelection:(id)arg1 hairStyleId:(id)arg2 hairStyleFeatures:(id)arg3 hairStyleTechnicalMetadata:(id)arg4;
- (void)setTargetControllerDidSuccessSetTarget:(id)arg1;
- (id)_reenactmentService;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startOnViewController:(id)arg1 sourceType:(long long)arg2 selfieApprovedCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithUserInfoProvider:(id)arg1 bloopsAPI:(id)arg2 remoteSettingsProvider:(id)arg3 targetsService:(id)arg4 onboardingResourcesService:(id)arg5 previewsResourcesService:(id)arg6 categoriesProvider:(id)arg7 secondTargerProvider:(id)arg8 experimentManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

