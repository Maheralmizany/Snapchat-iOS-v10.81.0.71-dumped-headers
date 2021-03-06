//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraViewController.h"

#import "SCCameraTeachingTooltipProviderDelegate-Protocol.h"
#import "SCCameraTooltipPriorityResolvingDelegate-Protocol.h"
#import "SCCameraTooltipVisibleProviding-Protocol.h"
#import "SCDeepLinkMiniProfileControllerDelegate-Protocol.h"
#import "SCDeepLinkableViewSource-Protocol.h"
#import "SCFeatureBatchCaptureDelegate-Protocol.h"
#import "SCFeatureCameraToolbarDelegate-Protocol.h"
#import "SCFeatureMemoriesDelegate-Protocol.h"
#import "SCMainScrollViewDelegate-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SIGViewController-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "SwipeView-Protocol.h"

@class NSString, SCAddFriendsLauncherWrapper, SCLazy, SCScanningDelegateAdapter, SIGFooterItem, SIGHeaderItem;
@protocol SCCameraTooltipPriorityResolving, SCDeepLinkMiniProfileControllerProtocol, SCFeatureCameraToolbar, SCFeatureLensCarousel, SCFeatureLensFeed, SCFeatureMemories, SCFeatureSnapKit, SCFeatureTimerMode, SCHovaNavigationBarAdapter, SCSwipeViewParentDelegate, SCUnlockablesLoaderProviding;

@interface SCMainCameraViewController : SCCameraViewController <SCManagedCapturerListener, SendSnapNavigationControllerDelegate, SCDeepLinkableViewSource, SCFeatureMemoriesDelegate, SCMainScrollViewDelegate, SwipeView, SCDeepLinkMiniProfileControllerDelegate, SCFeatureBatchCaptureDelegate, SCCameraTooltipVisibleProviding, SCCameraTooltipPriorityResolvingDelegate, SIGViewController, SCFeatureCameraToolbarDelegate, SCCameraTeachingTooltipProviderDelegate>
{
    id <SCHovaNavigationBarAdapter> _hovaNavigationBarAdapter;
    SCScanningDelegateAdapter *_scanningDelegateAdapter;
    _Bool _waitingUntilVisibleToBeginRecording;
    _Bool _isScheduledBeginRecordingFromOtherPage;
    SIGHeaderItem *_headerItem;
    id <SCSwipeViewParentDelegate> _parentDelegate;
    id <SCUnlockablesLoaderProviding> _unlockablesLoaderProvider;
    SCLazy *_teachingTooltipProvider;
    SCAddFriendsLauncherWrapper *_presentAddFriendsIntentHandler;
    id <SCDeepLinkMiniProfileControllerProtocol> _deepLinkMiniProfileController;
    id <SCCameraTooltipPriorityResolving> _tooltipPriorityResolver;
}

@property(retain, nonatomic) id <SCCameraTooltipPriorityResolving> tooltipPriorityResolver; // @synthesize tooltipPriorityResolver=_tooltipPriorityResolver;
@property(retain, nonatomic) id <SCDeepLinkMiniProfileControllerProtocol> deepLinkMiniProfileController; // @synthesize deepLinkMiniProfileController=_deepLinkMiniProfileController;
@property(nonatomic) _Bool isScheduledBeginRecordingFromOtherPage; // @synthesize isScheduledBeginRecordingFromOtherPage=_isScheduledBeginRecordingFromOtherPage;
@property(nonatomic) _Bool waitingUntilVisibleToBeginRecording; // @synthesize waitingUntilVisibleToBeginRecording=_waitingUntilVisibleToBeginRecording;
@property(retain, nonatomic) SCAddFriendsLauncherWrapper *presentAddFriendsIntentHandler; // @synthesize presentAddFriendsIntentHandler=_presentAddFriendsIntentHandler;
@property(retain, nonatomic) SCLazy *teachingTooltipProvider; // @synthesize teachingTooltipProvider=_teachingTooltipProvider;
@property(readonly, nonatomic) __weak id <SCUnlockablesLoaderProviding> unlockablesLoaderProvider; // @synthesize unlockablesLoaderProvider=_unlockablesLoaderProvider;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(readonly, nonatomic) SIGHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)_toggleCameraToolbar:(_Bool)arg1;
- (void)cameraToolbarWillCollapse:(id)arg1;
- (void)cameraToolbarWillExpand:(id)arg1;
- (_Bool)isOtherTooltipOrAlertVisible;
- (_Bool)shouldDisplayOnboardingTooltip;
- (_Bool)areLensesOnboardingTooltipsCompleted;
- (void)_setupAfterCaptureInBatchMode:(id)arg1 withError:(id)arg2;
- (void)_resetViewAfterCapturedInBatchMode;
- (unsigned long long)featureBatchCaptureUnsavedSegmentCount:(id)arg1;
- (void)featureBatchCapture:(id)arg1 previewButtonDidBecomeVisible:(_Bool)arg2;
- (void)featureBatchCaptureDidPressReviewAndEdit:(id)arg1;
- (void)featureBatchCapture:(id)arg1 didCaptureVideo:(id)arg2 withError:(id)arg3;
- (void)featureBatchCapture:(id)arg1 didCaptureImage:(id)arg2 withError:(id)arg3;
- (void)didDismissMiniProfile:(id)arg1;
- (void)didPresentMiniProfile:(id)arg1;
- (void)removeDeepLinkMiniProfileController;
- (void)resetDeepLinkMiniProfileController;
- (_Bool)isOnMainCamera;
- (void)featureMemoriesDidScrollToCamera:(id)arg1;
- (void)featureMemoriesDidScrollToGallery:(id)arg1;
- (void)featureMemoriesWillScrollToCamera:(id)arg1;
- (void)featureMemoriesWillScrollToGallery:(id)arg1;
- (void)setCameraViewType:(long long)arg1;
- (_Bool)isMapTeachingTooltipVisible;
- (double)headerProfileButtonCenterX;
- (_Bool)isHeaderExists;
- (id)profileButtonView;
- (void)presentPreviewForVideoFuture:(id)arg1;
- (void)presentPreviewForImageFuture:(id)arg1 async:(_Bool)arg2;
- (void)featureImageCaptureDidComplete:(id)arg1;
- (void)_cameraWillStop;
- (_Bool)_isMainCameraViewAndBackFacing;
- (_Bool)_isMainCameraView;
- (_Bool)isCameraHelpTooltipVisible;
- (_Bool)isLensesActivationTooltipVisible;
- (_Bool)_isMapPresented;
- (void)_hideOnboardingTooltipsWhenPrepareForRecording;
- (void)_markCameraHelpTooltipAsCompletedIfNecessary;
- (void)_showLensesActivationTooltipIfNecessary;
- (void)_updateSnapCountBeforeShowLensesActivationTooltip;
- (void)profileViewDidFullyDisappear;
- (void)profileViewDidFullyAppear;
- (void)cancelledScrollingToProfileView;
- (void)scrollingToProfileView;
- (void)viewFrameHeightDidChange:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)forceReloadViewWillAndDidAppearIfNeeded;
- (void)postponedViewDidBecomeActive;
- (void)viewDidEnterBackground;
- (void)didReceiveMemoryWarning;
- (_Bool)enableScanning;
- (_Bool)mainScrollViewShouldDisableScroll:(id)arg1;
- (void)presentMemoriesSearchResultsForLens:(id)arg1;
- (void)presentMemoriesSearchResultsForVRPlayer;
- (void)tryToActivateLensAfterUnlockWithActivationState:(id)arg1;
- (_Bool)isAnyLensActivationAllowed;
- (_Bool)isLensDisplayable;
- (void)handleLensActivation:(id)arg1;
- (long long)initialCameraPosition;
- (void)stopCameraImmediately;
- (_Bool)toggleCameraButtonsVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)stopCameraSoftlyWithCompletionIfStopped:(CDUnknownBlockType)arg1;
- (void)setRecordingState:(unsigned long long)arg1;
- (void)didUpdateCarouselVisibility:(_Bool)arg1;
- (void)viewCanAppear;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldRecognizeButtonActions;
- (_Bool)longPress:(id)arg1;
- (void)prepareForRecordingWithMethod:(unsigned long long)arg1;
- (void)_cancelDelayStartRecordingFromOtherPage:(id)arg1;
- (void)_doStartRecordingFromOtherPage:(id)arg1;
- (void)_scheduleStartRecordingFromOtherPage:(id)arg1;
- (void)processRecordingForLongPress:(id)arg1 shouldStartRecording:(_Bool)arg2;
- (void)handleTapFrom:(id)arg1;
- (void)handlePanFrom:(id)arg1;
- (_Bool)handlePinchFrom:(id)arg1;
- (void)logPageViewWhenViewDisappears;
- (void)setPressingCameraButton:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isCameraViewFullyVisible;
- (id)tooltipState;
@property(readonly, nonatomic) _Bool isUltraWideSupported;
@property(readonly, nonatomic) id <SCFeatureTimerMode> timerMode;
@property(readonly, nonatomic) id <SCFeatureCameraToolbar> cameraToolbar;
@property(readonly, nonatomic) id <SCFeatureLensCarousel> lensCarousel;
@property(readonly, nonatomic) id <SCFeatureLensFeed> lensFeed;
@property(readonly, nonatomic) id <SCFeatureSnapKit> snapKit;
@property(readonly, nonatomic) id <SCFeatureMemories> memories;
- (id)initWithStartupWorkflow:(id)arg1 delegate:(id)arg2 hovaNavigationBarAdapter:(id)arg3 scanningDelegateAdapter:(id)arg4 unlockablesLoaderProvider:(id)arg5;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewDidPartiallyAppear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyDisappear;
- (void)viewDidFullyAppearWithModalPresentedAbove;
- (void)viewDidFullyAppear;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)featureMultiSnapDidShowTooltip:(id)arg1;
- (_Bool)featureMultiSnapShouldShowTooltip:(id)arg1;
- (void)didPostNewlyCreatedGroupStoriesWithMetadata:(id)arg1;
- (void)didPostStory;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didCancelFromPreview:(id)arg1;
- (void)_handleDeepLinkShareToPreviewWithImageFile:(id)arg1;
- (void)_handleDeepLinkShareToPreviewWithVideoFile:(id)arg1;
- (void)_setPreviewPresenterWithMetaData:(id)arg1;
- (id)deepLinkableViewControllerFromInfo:(id)arg1;
- (void)handleDeepLinkPhoneVerify:(id)arg1;
- (void)handleDeepLinkOAuth2:(id)arg1;
- (void)handleCKDeepLinkLenses:(id)arg1;
- (void)handleDeepLinkCamera:(id)arg1;
- (void)handleDeepLinkCreativeKitWeb:(id)arg1;
- (void)handleDeepLinkCreativeKitLite:(id)arg1;
- (void)handleDeepLinkPreview:(id)arg1;
- (void)handleDeepLinkCreateYourOwn:(id)arg1;
- (void)handleDeepLinkOnDemandGeoFilter:(id)arg1;
- (void)handleDeepLinkUnlockShare:(id)arg1;
- (void)didDismissSettings;
- (void)handleDeepLinkPhoneVerification:(id)arg1;
- (void)handleDeepLinkChat:(id)arg1;
- (void)handleDeepLinkUnlock:(id)arg1;
- (void)handleDeepLinkBitmoji:(id)arg1;
- (void)handleDeepLinkAddFriends:(id)arg1;
- (void)handleDeepLinkAddFriend:(id)arg1;
- (id)settingsLauncher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SIGFooterItem *footerItem;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

