//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LSASnapRecordingComponentListener-Protocol.h"
#import "SCCameraOverlayDelegate-Protocol.h"
#import "SCCameraReplyDelegate-Protocol.h"
#import "SCCameraScreenLensDataProviderSource-Protocol.h"
#import "SCCameraViewControllerLensDelegate-Protocol.h"
#import "SCCameraViewControllerLoggingDelegate-Protocol.h"
#import "SCCameraViewControllerODGDelegate-Protocol.h"
#import "SCCameraViewControllerPreviewPresenterDelegate-Protocol.h"
#import "SCCameraViewControllerScanningDelegate-Protocol.h"
#import "SCCancelledSnapSendFromCameraDelegate-Protocol.h"
#import "SCFeatureCaptionDelegate-Protocol.h"
#import "SCFeatureDoubleTapToToggleCameraDelegate-Protocol.h"
#import "SCFeatureGameDestinationDelegate-Protocol.h"
#import "SCFeatureImageCaptureDelegate-Protocol.h"
#import "SCFeatureLensInfoButtonDelegate-Protocol.h"
#import "SCFeatureLensSideButtonDelegate-Protocol.h"
#import "SCFeatureMultiSnapDelegate-Protocol.h"
#import "SCFeatureShazamDelegate-Protocol.h"
#import "SCFeatureTimerModeDelegate-Protocol.h"
#import "SCFeatureToggleCameraButtonDelegate-Protocol.h"
#import "SCFeatureToggleCameraDelegate-Protocol.h"
#import "SCFeatureVideoCaptureDelegate-Protocol.h"
#import "SCFeatureVolumeButtonCaptureDelegate-Protocol.h"
#import "SCFeatureZoomingDelegate-Protocol.h"
#import "SCLensEntryPointTrackableProtocol-Protocol.h"
#import "SCLensOperaControllerDelegate-Protocol.h"
#import "SCLensStateWorkflowDelegate-Protocol.h"
#import "SCLensUnlockDelegate-Protocol.h"
#import "SCMainCameraScanDelegate-Protocol.h"
#import "SCMainCameraVoiceScanDelegate-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedLensProcessorStateListener-Protocol.h"
#import "SCOperaSilentlyPresentedProtocol-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCPreviewFeatureScanDelegate-Protocol.h"
#import "SCScanResultViewControllerDelegate-Protocol.h"
#import "SCScanningDelegateAdapterCameraViewVisibilityDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, NSTimer, SCCameraScreenshotLogger, SCCameraViewControllerInternalState, SCCameraViewControllerStartupWorkflow, SCDeepLinkBitmojiController, SCDisposableObserver, SCEffectViewportManager, SCFeatureProvider, SCIdleTimerManager, SCLensInitEvent, SCLensOperaController, SCLensesUIAppearanceConfiguration, SCLensesUIControllerState, SCManagedLensProcessorState;
@protocol LSASnapRecordingComponentListener, NavigationDelegate, SCCameraCircumstanceEngine, SCCameraResources, SCCameraViewControllerDelegate, SCCameraViewControllerLensDelegate, SCCameraViewControllerLensStateDelegate, SCCameraViewControllerLoggingDelegate, SCCameraViewControllerODGDelegate, SCCameraViewControllerPreviewPresenterDelegate, SCCameraViewControllerScanningDelegate, SCFeatureARBarDelegate, SCFeatureGameDestinationDelegate, SCFeatureLensCarouselActivatorDelegate, SCFeatureLensCloseButtonDelegate, SCFeatureLensFeedDelegate, SCFeatureLensInfoButtonDelegate, SCFeatureLensSideButtonDelegate, SCFeatureSceneIntelligenceLensDelegate, SCFeatureWorldCaptionLensButtonDelegate, SCLensCameraScreenDataProviderProtocol, SCLensEntryPointTrackableProtocol, SCLensProcessingCore, SCMainCameraScanDelegate, SCMainCameraVoiceScanDelegate, SCPreviewPresenter, SCShakeToReportDelegate, SCSnapSendPreparer, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCCameraViewController : UIViewController <SCCameraViewControllerPreviewPresenterDelegate, SCLensOperaControllerDelegate, LSASnapRecordingComponentListener, SCManagedLensProcessorStateListener, SCLensUnlockDelegate, SCFeatureLensSideButtonDelegate, SCCameraScreenLensDataProviderSource, SCCameraViewControllerLensDelegate, SCLensStateWorkflowDelegate, SCLensEntryPointTrackableProtocol, SCFeatureLensInfoButtonDelegate, SCScanResultViewControllerDelegate, SCCameraViewControllerScanningDelegate, SCPreviewFeatureScanDelegate, SCScanningDelegateAdapterCameraViewVisibilityDelegate, SCOperaSilentlyPresentedProtocol, SCFeatureGameDestinationDelegate, SCCameraViewControllerLoggingDelegate, SCCameraViewControllerODGDelegate, SCMainCameraScanDelegate, SendSnapNavigationControllerDelegate, SCShakeToReportDelegate, SCMainCameraVoiceScanDelegate, SCTraceEnabled, UINavigationControllerDelegate, SCFeatureVideoCaptureDelegate, SCManagedCapturerListener, SCFeatureImageCaptureDelegate, SCFeatureToggleCameraDelegate, SCFeatureToggleCameraButtonDelegate, SCFeatureDoubleTapToToggleCameraDelegate, SCFeatureShazamDelegate, SCFeatureZoomingDelegate, SCFeatureMultiSnapDelegate, SCFeatureCaptionDelegate, SCFeatureTimerModeDelegate, SCFeatureVolumeButtonCaptureDelegate, UIGestureRecognizerDelegate, SCCameraOverlayDelegate, SCCameraReplyDelegate, SCCancelledSnapSendFromCameraDelegate, SCPageNameLogging>
{
    _Bool _triedToCaptureImage;
    long long _positionStartRecording;
    SCIdleTimerManager *_idleTimerManager;
    NSString *_lastSuccessfulLensActivationActivatorId;
    unsigned long long _swipingState;
    _Bool _isBlockingUnifiedCameraSwipe;
    NSTimer *_resetIsBlockingUnifiedCameraSwipeTimer;
    SCDisposableObserver *_lensCarouselDisposableObserver;
    id <SCCameraCircumstanceEngine> _cameraCircumstanceEngine;
    _Bool _requestedToTurnOnLenses;
    _Bool _pressingCameraButton;
    id <SCCameraViewControllerDelegate> _delegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    SCCameraViewControllerStartupWorkflow *_startupWorkflow;
    struct SCFeatureProvider *_featureProvider;
    id <NavigationDelegate> _navigationDelegate;
    SCCameraViewControllerInternalState *_state;
    SCLensesUIControllerState *_pendingLensControllerState;
    SCLensesUIAppearanceConfiguration *_pendingLensControllerAppearanceConfiguration;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    SCLensInitEvent *_lensInitEvent;
    SCManagedLensProcessorState *_managedLensProcessorState;
    SCLensOperaController *_lensOperaController;
    SCCameraScreenshotLogger *_screenshotLogger;
    CDUnknownBlockType _deeplinkUnlockDeferredBlock;
    SCDeepLinkBitmojiController *_deepLinkBitmojiController;
    double _longPressStartTime;
}

+ (id)cameraPageViewName;
+ (id)announcerIdentifier;
@property(nonatomic) double longPressStartTime; // @synthesize longPressStartTime=_longPressStartTime;
@property(retain, nonatomic) SCDeepLinkBitmojiController *deepLinkBitmojiController; // @synthesize deepLinkBitmojiController=_deepLinkBitmojiController;
@property(nonatomic) _Bool pressingCameraButton; // @synthesize pressingCameraButton=_pressingCameraButton;
@property(copy, nonatomic) CDUnknownBlockType deeplinkUnlockDeferredBlock; // @synthesize deeplinkUnlockDeferredBlock=_deeplinkUnlockDeferredBlock;
@property(retain, nonatomic) SCCameraScreenshotLogger *screenshotLogger; // @synthesize screenshotLogger=_screenshotLogger;
@property(retain, nonatomic) SCLensOperaController *lensOperaController; // @synthesize lensOperaController=_lensOperaController;
@property(retain, nonatomic) SCManagedLensProcessorState *managedLensProcessorState; // @synthesize managedLensProcessorState=_managedLensProcessorState;
@property(retain, nonatomic) SCLensInitEvent *lensInitEvent; // @synthesize lensInitEvent=_lensInitEvent;
@property(retain, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(retain, nonatomic) SCLensesUIAppearanceConfiguration *pendingLensControllerAppearanceConfiguration; // @synthesize pendingLensControllerAppearanceConfiguration=_pendingLensControllerAppearanceConfiguration;
@property(retain, nonatomic) SCLensesUIControllerState *pendingLensControllerState; // @synthesize pendingLensControllerState=_pendingLensControllerState;
@property(nonatomic) _Bool requestedToTurnOnLenses; // @synthesize requestedToTurnOnLenses=_requestedToTurnOnLenses;
@property(readonly, nonatomic) SCCameraViewControllerInternalState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) SCFeatureProvider<SCCameraResources> *featureProvider; // @synthesize featureProvider=_featureProvider;
@property(readonly, nonatomic) SCCameraViewControllerStartupWorkflow *startupWorkflow; // @synthesize startupWorkflow=_startupWorkflow;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) __weak id <SCCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didScreenShot;
- (_Bool)_isBatchCaptureActive;
- (void)featureTimerModeDidAbortCountingDown:(id)arg1;
- (void)featureTimerModeDidFinishCountingDown:(id)arg1;
- (void)featureTimerModeWillStartCountingDown:(id)arg1;
- (void)featureCaptionDidTap:(id)arg1;
- (void)featureMultiSnapDidShowTooltip:(id)arg1;
- (_Bool)featureMultiSnapShouldShowTooltip:(id)arg1;
- (void)featureMultiSnap:(id)arg1 didRecoverWithMultiSnapConfiguration:(id)arg2 startRecordingTimestamp:(id)arg3;
- (void)featureMultiSnap:(id)arg1 willResetWithViewController:(id)arg2;
- (void)featureMultiSnap:(id)arg1 willDisplayWithViewController:(id)arg2;
- (void)didUpdateCarouselVisibility:(_Bool)arg1;
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
- (void)featureVideoCaptureDidCancelRecording:(id)arg1;
- (void)featureVideoCaptureDidFailRecording:(id)arg1;
- (void)featureVideoCaptureDidAbortRecording:(id)arg1;
- (void)featureVideoCaptureDidFinishRecording:(id)arg1;
- (void)featureVideoCaptureWillFinishRecording:(id)arg1 videoSize:(struct CGSize)arg2 placeholderImage:(id)arg3;
- (void)featureVideoCaptureDidReachUnlimitedMovementThreshhold:(id)arg1;
- (void)featureVideoCaptureWillStartRecording:(id)arg1;
- (id)featureToggleCameraButtonTooltipGestureDelegate;
- (id)featureToggleCameraButtonTooltipContainerView;
- (void)featureToggleCameraButtonDidTap:(id)arg1;
- (void)featureImageCaptureDidComplete:(id)arg1;
- (void)featureImageCapture:(id)arg1 didCompleteRecoveryWithImage:(id)arg2 captureSessionId:(id)arg3 captureTimeStamp:(id)arg4;
- (void)featureImageCapture:(id)arg1 didCompleteWithError:(id)arg2;
- (void)featureImageCapture:(id)arg1 willCompleteWithStillImageData:(id)arg2 discardRelatedData:(id)arg3;
- (_Bool)featureToggleCameraIsTakingPicture:(id)arg1;
- (_Bool)featureToggleCameraIsRecording:(id)arg1;
- (void)featureToggleCamera:(id)arg1 didToggleToDevicePosition:(long long)arg2;
- (void)featureToggleCamera:(id)arg1 willToggleToDevicePosition:(long long)arg2;
- (void)didTapMicrophoneNotification;
- (void)onDetectCameraViewVisible:(_Bool)arg1;
- (_Bool)isLensActive;
- (void)tryToActivateLensFromPushNotification:(id)arg1;
- (void)willEndCensoringScreenshot;
- (void)willStartCensoringScreenshot;
- (_Bool)shouldDisableShakeToReportOnCurrentPage;
- (void)_setScreenAutoLockDisabledIfNeeded:(_Bool)arg1;
- (id)idleTimerManager;
- (void)_recordCurrentZoomStateForReset;
- (_Bool)featureZoomingIsInitiatedRecording:(id)arg1;
- (id)filterLensForFeatureShazam:(id)arg1;
- (void)featureShazamDidSubmitSearchRequest:(id)arg1;
- (void)featureShazam:(id)arg1 didFinishWithResult:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)presentMemoriesSearchResultsForLens:(id)arg1;
- (void)presentMemoriesSearchResultsForVRPlayer;
- (void)activateSnap3DMode;
- (void)tryToActivateLensAfterUnlockWithActivationState:(id)arg1;
- (CDUnknownBlockType)activateLensBlockAfterUnlockWithActivationState:(id)arg1;
- (void)handleLensActivation:(id)arg1;
- (void)_presentPreviewForImage;
- (_Bool)_shouldSetDepthPhotoDataFuture;
- (void)managedCapturer:(id)arg1 didCapturePhoto:(id)arg2;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2 sampleMetadata:(id)arg3;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangePortraitModeActive:(id)arg2;
- (void)_reset;
- (void)didPostStories;
- (void)didSendSnaps;
- (void)didCancelFromPreview;
- (void)stopScanning;
- (void)stopCameraImmediately;
- (void)stopCameraSoftlyWithCompletionIfStopped:(CDUnknownBlockType)arg1;
- (_Bool)isCameraRunning;
- (void)setCameraCircumstanceEngine:(id)arg1;
- (void)stopDeviceMotionUpdates;
- (id)cameraNavigationItem;
- (void)handleSwipeFrom:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (void)setRightSwipeGestureRecognizerEnabled;
- (void)handlePanFrom:(id)arg1;
- (_Bool)handlePinchFrom:(id)arg1;
- (void)resetIsBlockingUnifiedCameraSwipe;
- (void)_blockCameraSwipeDismissalIfNecessary:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)appStartupDidComplete;
- (id)mainSuperview;
- (_Bool)interactingWithCamera;
- (_Bool)shouldRecognizeButtonActions;
- (void)replyBackButtonLeftPressed;
- (void)lensCallToActionButtonPressed:(id)arg1;
- (void)thirdPartyLensInformationButtonPressed:(id)arg1;
- (void)_toggleLenses;
- (void)toggleLensesButtonPressed;
- (void)setCameraViewHidden:(_Bool)arg1;
- (void)showCameraTimer;
- (void)hideCameraTimer;
- (void)volumeButtonCaptureEnded;
- (void)volumeButtonCaptureBegan;
- (_Bool)volumeButtonCaptureShouldAllowEnd:(id)arg1;
- (_Bool)volumeButtonCaptureShouldAllowBegin:(id)arg1;
- (id)volumeButtonCaptureHandler:(id)arg1;
- (void)abortPressingVolumeButtonAndEndRecording;
- (void)stopHandlingVolumeButtonEvents;
- (void)abortSnapRecordingFromLensIfNeeded;
- (void)setVolumeButtonHandlingEnabled:(_Bool)arg1;
- (void)createYourOwnLensPressed;
- (void)cameraOverlayView:(id)arg1 setAllInterfaceElementsHidden:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)cameraOverlayView:(id)arg1 didUpdateCameraViewType:(long long)arg2;
- (void)tryCapturingStillImage;
- (void)captureStillImage;
- (void)prepareForRecordingWithMethod:(unsigned long long)arg1;
- (void)setRecordingState:(unsigned long long)arg1;
- (id)featureDoubleTapToToggleCameraGestureRecognizerDelegate;
- (void)featureDoubleTapToToggleCameraDidTriger:(id)arg1;
- (_Bool)longPress:(id)arg1;
- (_Bool)toggleCameraButtonsVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)enableScanning;
- (void)processTimerModeForGesture:(id)arg1;
- (void)_processLongPressCancelled:(id)arg1;
- (void)_processLongPressDidEnd:(id)arg1;
- (_Bool)_fingerDownCaptureEnabled;
- (void)_processStartRecordingWithLongPress:(id)arg1;
- (void)processRecordingForLongPress:(id)arg1 shouldStartRecording:(_Bool)arg2;
- (void)longPressOnCameraTimer:(id)arg1;
- (_Bool)isPressingCameraButtonOrVolumeButton;
- (long long)initialCameraPosition;
- (void)resetAll;
- (void)_transitionToRecordingStateWithAnimationDuration:(double)arg1;
- (void)setNavigationItemsHidden:(_Bool)arg1 includingAlwaysShowItems:(_Bool)arg2 withOffset:(_Bool)arg3 animated:(_Bool)arg4 duration:(double)arg5;
- (void)setNavigationItemsHidden:(_Bool)arg1 includingAlwaysShowItems:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)showRecordedVideoIfNecessary;
- (void)handleMediaServicesLostNotification:(id)arg1;
- (void)handleMediaServicesResetNotification:(id)arg1;
- (void)postponedViewDidBecomeActive;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewWillEnterForeground;
- (void)viewDidEnterBackground;
- (void)setCameraViewType:(long long)arg1;
- (void)setNoReply;
- (void)setReplyWithParameter:(id)arg1 cameraViewType:(long long)arg2;
- (_Bool)isInReplyingMode;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setCameraOverlayFrameHeight:(double)arg1;
- (void)didReceiveMemoryWarning;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)canShowStatusBarOverlay;
- (void)logPageViewWhenViewDisappears;
- (void)viewDidDisappear:(_Bool)arg1;
- (double)headerProfileButtonCenterX;
- (_Bool)isHeaderExists;
- (id)toggleCameraButtonView;
- (id)replyBackButtonView;
- (id)profileButtonView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_logNoCamera:(id)arg1 authorization:(long long)arg2;
- (void)_alertWithTitle:(id)arg1 description:(id)arg2;
- (void)_alertNoCamera;
- (void)_alertCameraRestrictionOn;
- (void)notifyUserOfRestrictedCameraIfNecessary;
- (_Bool)notifyUserOfDeniedCameraIfNecessary;
- (_Bool)notifyUserOfCameraAndMicrophoneUsageIfNecessary;
- (void)notifyUserOfMicrophoneUsageIfNecessary;
- (void)notifyUserAfterStartCameraIfNecessary;
- (void)forceReloadViewWillAndDidAppearIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (_Bool)shouldDisplayHandsFreeTooltip;
- (_Bool)lensCollectionNeedsRemoveHovaExtraBottomOffset;
- (_Bool)cameraTimerNeedsHovaExtraBottomOffset;
- (_Bool)cameraTimerNeedsNGSExtraBottomOffset;
- (_Bool)inCaptureCountingDown;
- (_Bool)inCaptureFlow;
- (_Bool)preparingPreview;
- (_Bool)finishingRecording;
- (_Bool)hasTakenPicture;
- (_Bool)takingPicture;
- (_Bool)startedRecording;
- (_Bool)initiatedRecording;
- (_Bool)preparingRecording;
- (_Bool)recording;
- (_Bool)isSwiping;
- (_Bool)isBlockingUnifiedCameraSwipe;
- (void)setSwipingState:(unsigned long long)arg1;
- (id)captureSessionIDForLog;
- (void)finishSnapCaptureSession;
- (void)cancelSnapCaptureSession;
- (void)startVideoCaptureSessionForLensInitiatedCapture:(_Bool)arg1;
- (void)startImageCaptureSessionWithSessionId:(id)arg1 lensIntiatedCapture:(_Bool)arg2;
- (_Bool)compatibilityZoomingMode;
- (id)pageViewName;
- (id)cameraOverlay;
- (id)userSession;
- (void)dealloc;
- (void)finishInitializationWithFeatureProvider:(struct SCFeatureProvider *)arg1;
- (id)initWithLensDataProvider:(id)arg1 startupWorkflow:(id)arg2;
- (id)initWithLensDataProvider:(id)arg1;
- (id)initWithStartupWorkflow:(id)arg1 delegate:(id)arg2;
- (id)init;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerPreviewPresenterDelegate> previewPresenterDelegate;
- (void)_setupMultiSnapConfigurationWithVideo:(id)arg1;
- (void)_presentPreviewForRecordedVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentPreviewForRecordedVideoFuture:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPreviewForBatchCapture;
- (void)_setCaptureSourceFromRecordingMethod:(unsigned long long)arg1;
- (id)previewTransitionController;
- (void)handleNavigationAfterStoryPosted;
- (void)warmupPreview;
- (void)vendPreviewPresenterToRelevantFeatures:(id)arg1;
- (void)resetPreviewPresenter;
@property(retain, nonatomic) id <SCPreviewPresenter> previewPresenter;
- (void)presentPreviewForVideoFuture:(id)arg1;
- (void)setDepthPhotoDataFuture:(id)arg1 isDepthCameraModeActive:(_Bool)arg2;
- (void)presentPreviewForImageFuture:(id)arg1 async:(_Bool)arg2;
- (void)logPresentPreview;
- (void)willEnterPreview;
- (_Bool)isPresentingPreviewViewController;
- (id)cameraRootViewController;
- (void)lensInfoCardPresenterDidDismissInfoCard:(id)arg1;
- (void)lensInfoButtonDidTap:(id)arg1 withLens:(id)arg2;
- (void)resetLensEntryPoint;
- (void)willExitFullscreen;
- (void)didEnterPreview;
- (void)lensStateWorkflowPrepareToRestore:(id)arg1;
- (void)lensStateWorkflowStartHandlingVolumeButtonEventsIfNeeded:(id)arg1;
- (_Bool)lensStateWorkflowIsPresentingPreviewViewController:(id)arg1;
- (id)lensStateWorkflowUserSession:(id)arg1;
- (_Bool)lensStateWorkflowIsPresentingOperaController:(id)arg1;
- (_Bool)lensStateWorkflowIsPreviewViewControllerConfiguredWithLensPresented:(id)arg1;
- (id)lensStateWorkflowLensEntryPointTrackable:(id)arg1;
- (id)lensStateWorkflowDefaultEmptyLensControllerStateBuilder:(id)arg1;
- (id)lensStateWorkflowCurrentCameraViewControllerInternalState:(id)arg1;
- (id)lensStateWorkflowCameraViewControllerLensDelegate:(id)arg1;
- (id)lensStateWorkflowCameraLensesInteractor:(id)arg1;
- (id)lensActionHandler;
- (id)lensByIdRetrievable;
- (id)lensUserProvider;
- (_Bool)hasActiveLens;
- (_Bool)isCurrentLensFetched;
- (void)clearExpiredLensPersistentStoragesInBackground;
- (_Bool)lensCameraTooltipEnabled;
- (_Bool)areLensesOnboardingTooltipsCompleted;
- (_Bool)areLensesAllInterfaceElementsHidden;
- (id)lensesCollectionView;
- (void)setLensesCollectionViewScrollEnabled:(_Bool)arg1;
- (_Bool)areLensesActive;
- (_Bool)hasRestorableLensState;
- (void)applyCurrentLensIconToCameraButton;
- (void)exitLensFullScreenModeIfNeeded;
- (id)pendingDeeplinkBitmojiLensId;
- (id)appliedSnappablesMetadata;
- (id)snappablesDataFuture;
- (void)selectLastApplicableLensIfPossible;
- (void)selectLensWithIdIfPossible:(id)arg1;
- (id)lensControllerState;
- (void)setLensCarouselHidden:(_Bool)arg1;
- (_Bool)lensesDisallowSnapRecording;
- (_Bool)isLensRotationGestureRecognizer:(id)arg1;
- (_Bool)isLensLongPressGestureRecognizer:(id)arg1;
- (_Bool)isLensPanGestureRecognizer:(id)arg1;
- (_Bool)isLensPinchGestureRecognizer:(id)arg1;
- (_Bool)isLensTapGestureRecognizer:(id)arg1;
- (_Bool)isLensTouchProcessingGestureRecognizer:(id)arg1;
- (_Bool)isAnyLensTouchProcessingGestureRecognizer:(id)arg1;
- (void)lensContainerTapped;
- (_Bool)lensTouchProcessingActive;
- (_Bool)blockTouchesForCurrentLensWithNormalizedTouchPoints:(id)arg1 touchTypeMask:(unsigned long long)arg2;
- (_Bool)blockTouchesForCurrentLens;
- (_Bool)pointInsideLensInfoButton:(struct CGPoint)arg1;
- (_Bool)pointInsideAnyLensViewButton:(struct CGPoint)arg1;
- (_Bool)pointInsideAnyLensView:(struct CGPoint)arg1;
- (_Bool)pointInsideArcadiaLogoPicker:(struct CGPoint)arg1;
- (void)logRecordingStopped;
- (void)logRecordingStarted;
- (void)logCameraToggledWithAction:(long long)arg1 recording:(_Bool)arg2;
- (CDUnknownBlockType)defaultErrorHandlerWithSelector:(SEL)arg1;
- (void)_displayOpenLensTooltip;
- (id)currentLensDataProvider;
- (id)featureLensSideButtonBadgingUpdateProvider;
- (id)featureLensSideButtonUpdateProvider;
- (void)featureLensSideButton:(id)arg1 didPressLensButton:(id)arg2;
- (void)removeSnapRecordingComponentListener:(id)arg1;
- (void)restartTrackingWithNormalizedPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)managedLensProcessor:(id)arg1 didChangeState:(id)arg2;
- (void)_studioPreviewLensShouldReloadIfNeeded:(id)arg1;
- (void)_studioPreviewLensShouldActivate:(id)arg1;
- (void)_studioPreviewCarouselShouldOpen:(id)arg1;
- (void)_clearLensInitEvent;
- (void)_logLensInitEvent;
- (void)_prepareLensInitEventWithActivationFlow:(long long)arg1;
- (void)_activateEffectViewportManager;
- (void)captureSnapImage;
- (void)stopSnapRecording;
- (void)startSnapRecording;
- (id)defaultEmptyLensControllerState;
- (id)defaultEmptyLensControllerStateBuilder;
- (void)_processLensesActivationForUIWithCategoryId:(id)arg1 activationType:(long long)arg2;
- (void)_processLensesActivationFromPoint:(struct CGPoint)arg1 lenses:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)_lensesForActivation;
- (void)clearLensState;
- (_Bool)tryToActivateLensesWithTapGestureRecognizer:(id)arg1 originalPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)tryToActivateLensesWithLongPressGestureRecognizer:(id)arg1 originalPoint:(struct CGPoint)arg2 retryOnFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)tryToActivateLensesWithActivationParameters:(id)arg1 activationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)tryToActivateLensesWithActivationState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isAnyLensDetectionAllowed;
- (id)activeLensForState:(id)arg1;
- (_Bool)isAnyLensActivationAllowed;
- (_Bool)isLensDisplayable;
- (void)hideLensUIControllerAnimated:(_Bool)arg1;
- (void)showLensUIControllerAnimated:(_Bool)arg1;
- (void)resumeDataFetcherDownloads;
- (void)pauseDataFetcherDownloads;
- (long long)_snapSourceForPageSource;
- (void)_turnLensesOn:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)turnLensesOnAndSelectFirstApplicableLensWithActivationType:(unsigned long long)arg1;
- (id)turnLensesOnAndSelectFirstApplicableLens;
- (void)turnLensesOnWithActivationParameters:(id)arg1 activationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)turnLensesOnWithActivationParameters:(id)arg1 activationState:(id)arg2;
- (void)turnLensesOnWithActivationState:(id)arg1;
- (void)turnLensesOn;
- (void)turnLensesOff;
- (void)turnLensesOffWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startHandlingVolumeButtonEventsIfNeeded;
- (void)lensOperaController:(id)arg1 didClosePresenter:(id)arg2 lensUnlocked:(id)arg3;
- (void)lensOperaController:(id)arg1 didClosePresenter:(id)arg2;
- (void)lensOperaController:(id)arg1 didOpenPresenter:(id)arg2;
- (void)openLensCarouselSideButtonPressed:(id)arg1;
- (void)_didDismissAdInfoPageWithLens:(id)arg1;
- (void)lensSponsoredSlugPressed:(id)arg1;
- (void)dismissLensOperaPresenterWithDidBackground:(_Bool)arg1;
- (void)showCallToActionViewForLens:(id)arg1;
- (void)_logGeofilterAttachmentView:(id)arg1;
- (void)_prepareLensOperaController:(id)arg1;
- (void)showInfoCardV2ForLens:(id)arg1;
- (void)dismissLensInfoCardIfNeeded;
- (void)showScanCardForThirdPartyLens:(id)arg1;
- (void)beginCurrentLensStateForLensSource:(long long)arg1;
- (long long)currentLensStateWorkflowSourceType;
- (void)overwriteLensStateWorkflow;
- (id)createLensStateWorkflow;
- (id)createCameraLensesInteractor;
- (id)createCameraLensesUIController;
- (void)_setLensesActive:(_Bool)arg1 appearanceConfiguration:(id)arg2 activationState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetTextInputIfNecessary;
- (void)hideKeyboardIfNecessary;
- (void)_lockMemoriesScroll:(_Bool)arg1;
- (_Bool)updateLensCarouselVisibilityForState:(id)arg1 showBirthdayReplyLens:(_Bool)arg2 animated:(_Bool)arg3;
- (id)_currentLens;
- (_Bool)isInteractiveSnapSupportedByCurrentLens;
- (_Bool)isDepthCaptureSupportedByCurrentLens;
- (_Bool)isCurrentLensUtility;
- (_Bool)isCurrentLensSnappable;
- (void)setUpLensProcessorDependants;
- (void)updateLensDataProvider:(id)arg1 updatingStrategy:(id)arg2;
- (void)updateLensDataProvider:(id)arg1;
- (void)updateLensDataStore;
- (void)resetLensSubPickerActiveOptionIds;
- (void)updateLensDataProviderWithCameraType:(long long)arg1 ownerContextDescription:(id)arg2 updatingStrategy:(id)arg3;
- (void)updateLensDataProviderWithCameraType:(long long)arg1 ownerContextDescription:(id)arg2;
- (void)setUpLensesWithLensDataProvider:(id)arg1;
- (id)createLensDataProvider;
- (void)setDevicePosition:(long long)arg1;
- (void)warmupLensesUIController;
- (id)lensStateWorkflow;
- (id)lensSideButtonUpdateProvider;
- (id)lensesUIUpdateAnnouncer;
- (id)lensesUIController;
- (id)cameraLensesUIController;
- (id)lazyLensesUIController;
- (id)cameraLensesInteractor;
- (id)propertiesTuple;
- (id)bundledLensProvider;
@property(readonly, nonatomic) SCEffectViewportManager *effectViewportManager;
- (id)lensCoreAnalyticsLogger;
@property(readonly, nonatomic) id <SCLensProcessingCore> lensProcessingCore;
- (id)_lensAPIAdaptor;
- (_Bool)isPlayingSnappable;
@property(nonatomic) _Bool frontCameraActiveForLogging;
@property(readonly, nonatomic) NSString *lensSessionId;
@property(readonly, nonatomic) __weak id <SCFeatureLensInfoButtonDelegate> lensInfoButtonDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureLensFeedDelegate> lensFeedDelegate;
@property(readonly, nonatomic) __weak id <SCLensEntryPointTrackableProtocol> lensEntryPointTrackable;
@property(readonly, nonatomic) __weak id <LSASnapRecordingComponentListener> lsaSnapRecordingComponentListener;
@property(readonly, nonatomic) __weak id <SCFeatureSceneIntelligenceLensDelegate> sceneIntelligenceLensDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureLensCarouselActivatorDelegate> lensActivatorDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureLensCloseButtonDelegate> lensCloseButtonDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureARBarDelegate> arBarDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureWorldCaptionLensButtonDelegate> worldCaptionLensDelegate;
@property(readonly, nonatomic) __weak id <SCFeatureLensSideButtonDelegate> lensSideButtonDelegate;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerLensStateDelegate> lensStateDelegate;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerScanningDelegate> scanningDelegate;
- (void)_scanResultDismissedWithType:(unsigned long long)arg1 lensUnlocked:(id)arg2 urlOpened:(id)arg3;
- (void)_handleScanResultDismissalWithType:(unsigned long long)arg1 scanResultViewController:(id)arg2;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)_dismissCameraCardViewControllerWithDismissType:(unsigned long long)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldExitPreviewIfNecessary:(unsigned long long)arg1;
- (void)_presentScanResultView:(id)arg1;
- (void)featureScan:(id)arg1 didScanWithResult:(id)arg2;
- (id)getScanResultViewController;
- (id)scanResultViewController:(id)arg1;
- (void)dismissScanCards;
- (void)presentScanResultViewControllerWithActionsInfo:(id)arg1 scanSourceInformation:(id)arg2;
- (void)presentInformationIconCardView:(id)arg1;
- (void)featureScanning:(id)arg1 didFinishWithResult:(id)arg2;
- (void)longPressDidEnd;
- (void)_endScanningWithSuccess:(_Bool)arg1;
- (void)handleScanResults:(id)arg1 withSuccess:(_Bool)arg2 scanSourceInformation:(id)arg3 sender:(id)arg4;
- (void)handleScanResults:(id)arg1 scanSourceInformation:(id)arg2 sender:(id)arg3;
- (_Bool)isPresentingScanResultsViewController;
- (_Bool)shouldBeSilentlyPresentedAndPauseOpera;
@property(readonly, nonatomic) __weak id <SCFeatureGameDestinationDelegate> gameDestinationDelegate;
- (void)featureGameDestination:(id)arg1 presentViewController:(id)arg2;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerLoggingDelegate> loggingDelegate;
- (long long)_geofilterCount;
- (long long)_geolensCount;
- (void)logCameraUserActionForCameraTimerWithGestureRecognizer:(id)arg1;
- (void)logCameraPageActionEventWithStartX:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 duration:(double)arg5 module:(long long)arg6 firstUsage:(_Bool)arg7 action:(long long)arg8 lensActivator:(id)arg9 creativeKitMetadata:(id)arg10;
- (void)logPageViewOnExit:(long long)arg1;
- (void)logPageViewOnDisappear:(id)arg1;
- (void)logPageViewOnAppear:(id)arg1;
- (void)logLivePreview;
- (void)scheduleLogForCameraOpenFirstFrameReceivedSuccessfully:(id)arg1;
- (void)logCameraOpenCameraRunning:(id)arg1;
- (void)logCameraOpenStart:(id)arg1;
@property(readonly, nonatomic) __weak id <SCCameraViewControllerODGDelegate> odgDelegate;
- (void)showProfileTooltipForOnDemandGeofilterInAppPurchaseFromViewController:(id)arg1;
- (void)presentCreateYourOwnFlowFromMainCarousel;
- (void)presentOnDemandGeofilterViewControllers:(id)arg1;
@property(readonly, nonatomic) __weak id <SCMainCameraScanDelegate> scanDelegate;
- (void)setCameraControllerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCameraHeaderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didComeFromCameraWithoutSendingSnapForCameraVC;
- (void)didPostStory;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendChatMessage;
- (void)didSendDiscoverSharedMessageWithParameters:(id)arg1;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didSendToGallery;
- (void)didComeFromCameraWithoutSendingSnap;
- (void)didCancelFromPreview:(id)arg1;
@property(readonly, nonatomic) __weak id <SCShakeToReportDelegate> shakeToReportDelegate;
- (id)jiraMetaInfo;
- (id)defaultSubProjectName;
- (id)defaultProjectNameV2;
@property(readonly, nonatomic) __weak id <SCMainCameraVoiceScanDelegate> voiceScanDelegate;
- (_Bool)canPresentVoiceScanViewController;
- (void)setAllCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addUIAutomationOnlyUsedHelpers;
- (void)addPermissionHandlerNoOpButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
