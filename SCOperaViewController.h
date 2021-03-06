//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAudioSessionListener-Protocol.h"
#import "SCModalPresentation-Protocol.h"
#import "SCOperaAttachmentInteractionControllerDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaNavigationDataProviding-Protocol.h"
#import "SCOperaNavigationManagingDelegate-Protocol.h"
#import "SCOperaPageableViewControllerDelegate-Protocol.h"
#import "SCOperaScrollContentViewDelegate-Protocol.h"
#import "SCOperaScrollViewDataProviding-Protocol.h"
#import "SCOperaScrollViewLayoutManagerDelegate-Protocol.h"
#import "SCOperaShareableMediaItemsProviding-Protocol.h"
#import "SCOperaSharedResourceManagerDelegate-Protocol.h"
#import "SCOperaViewModelConnectionsCallbackControlling-Protocol.h"
#import "SCOperaViewModelsManagerDelegate-Protocol.h"
#import "SCOperaViewPlayManaging-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCPullToDismissVolumeController-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCViewControllerTransitionAnimatorDelegate-Protocol.h"
#import "SCViewControllerTransitionAnimatorMaskable-Protocol.h"

@class FBKVOController, NSMutableArray, NSMutableDictionary, NSNotificationCenter, NSString, SCCustomVolumeController, SCLifecycleWorkaroundHelper, SCOperaAttachmentInteractionController, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPageViewController, SCOperaScrollContentView, SCOperaScrollView, SCOperaSharedResourceManager, SCOperaTriggerPointsManager, SCOperaViewInteraction, SCOperaViewModelsManager, SCViewControllerTransitionAnimator, UIView;
@protocol SCOperaNavigationManaging, SCOperaScrollViewLayoutManaging;

@interface SCOperaViewController : UIViewController <SCOperaNavigationManagingDelegate, SCOperaEventListener, SCOperaPageableViewControllerDelegate, SCOperaViewModelsManagerDelegate, SCPullToDismissVolumeController, SCAudioSessionListener, SCTraceEnabled, SCOperaAttachmentInteractionControllerDelegate, SCOperaScrollContentViewDelegate, SCShakeToReportDelegate, SCOperaSharedResourceManagerDelegate, SCOperaScrollViewLayoutManagerDelegate, SCOperaScrollViewDataProviding, SCOperaNavigationDataProviding, SCViewControllerTransitionAnimatorDelegate, SCOperaViewModelConnectionsCallbackControlling, SCViewControllerTransitionAnimatorMaskable, SCModalPresentation, SCOperaViewPlayManaging, SCPageNameLogging, SCOperaShareableMediaItemsProviding>
{
    SCOperaScrollView *_operaScrollView;
    SCOperaScrollContentView *_operaScrollContentView;
    UIView *_fakeActionBarView;
    id <SCOperaNavigationManaging> _navigationManager;
    struct CGSize _pageSizePlusMargin;
    struct CGPoint _scrollViewContentOffsetForCurrentViewModel;
    id <SCOperaScrollViewLayoutManaging> _scrollViewLayoutManager;
    FBKVOController *_kvoController;
    SCOperaSharedResourceManager *_sharedResourceManager;
    SCCustomVolumeController *_customVolumeController;
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *_loadedPageIDToPageVCMap;
    NSMutableArray *_dummyPageVCs;
    SCOperaViewModelsManager *_viewModelsManager;
    SCOperaPageViewController *_currentFullyAppearedViewController;
    _Bool _hasUpdatedPageVCsBasedOnViewModels;
    _Bool _shouldDeferUpdatingPageVCs;
    _Bool _wasPresentingSilentlyPresentedViewController;
    _Bool _wasPresentingSilentlyPresentedAndPauseOperaViewController;
    _Bool _isFullyVisible;
    _Bool _deferringDismissalUntilPresentedViewControllerDismissed;
    _Bool _originalStatusBarHidden;
    long long _originalStatusBarStyle;
    _Bool _hasSentOpenViewerEvent;
    SCLifecycleWorkaroundHelper *_lifecycleHelper;
    UIView *_blurOverlayView;
    NSMutableDictionary *_layerTypeToFloatingLayerVCs;
    _Bool _isDismissing;
    SCOperaAttachmentInteractionController *_attachmentInteractionController;
    NSMutableArray *_callbacksToRunWhenViewModelConnectionIsStable;
    _Bool _isPreparingAutoAdvanceToStart;
    SCOperaTriggerPointsManager *_triggerPointsManger;
    NSString *_presentingPageName;
    long long _pauseState;
    _Bool _disableSwipeDownToDismiss;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaViewInteraction *_lastInteraction;
    SCViewControllerTransitionAnimator *_transitionAnimator;
    SCOperaConfiguration *_configuration;
}

@property(nonatomic) _Bool disableSwipeDownToDismiss; // @synthesize disableSwipeDownToDismiss=_disableSwipeDownToDismiss;
@property(readonly, nonatomic) SCOperaConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SCViewControllerTransitionAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) SCOperaViewInteraction *lastInteraction; // @synthesize lastInteraction=_lastInteraction;
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void).cxx_destruct;
- (void)_updateFakeActionBarContentViewIfNeeded;
- (void)_addFakeActionBarViewIfNeeded;
- (struct CGSize)_operaScrollViewContentSizeForPageSize:(struct CGSize)arg1;
- (struct CGSize)_pageSizePlusMarginForCurrentViewBounds;
- (void)_resumeIfNotInBackground;
- (_Bool)_isPaused;
- (void)_applyPausedUIIfNeeded;
- (void)_pauseIfAppIsInBackground;
- (void)_updateStatusBarAnimated:(_Bool)arg1;
- (void)_callViewDidAppearImplIfNeeded;
- (void)_viewDidAppearImpl;
- (id)jiraMetaInfo;
- (id)defaultProjectNameV2;
- (void)modalDismissalDidEnd;
- (void)modalPresentationDidEnd;
- (void)_invokeCallbacksImmediately;
- (void)requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg1;
- (_Bool)requireVideoPlayerOnRelativePosition:(unsigned long long)arg1;
- (unsigned long long)lastInteractionType;
- (void)zoomIn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dummyPageViewControllerForViewModel:(id)arg1;
- (void)_clearUpPreviousDummyPageViews;
- (void)_stopPreparingAutoAdvanceIfNecessary;
- (void)_didEndPreparingAutoAdvanceToStart;
- (void)_didStartPreparingAutoAdvanceToStart;
- (void)_removeFloatingLayerWithType:(id)arg1;
- (void)_updateFloatingLayer:(id)arg1;
- (void)_addFloatingLayer:(id)arg1;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)audioSessionRouteDidChangeReasonOldDeviceUnavailable:(id)arg1;
- (void)audioSessionRouteDidChangeReasonNewDeviceAvailable:(id)arg1;
- (void)audioSession:(id)arg1 didEndInterruption:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (_Bool)_shouldPauseForAudioInterruption;
- (void)setImageForBackdrop:(id)arg1;
- (void)setPausedForAttachment:(_Bool)arg1;
- (unsigned long long)relativePositionForPageId:(id)arg1;
- (_Bool)pageIsPartiallyVisible:(id)arg1;
- (_Bool)pageIsFullyVisible:(id)arg1;
- (void)deviceOrientationDidChange;
- (unsigned long long)supportedInterfaceOrientations;
- (void)attachmentInteractionController:(id)arg1 didUpdateAttachmentViewAnchorPointY:(double)arg2;
- (void)attachmentInteractionController:(id)arg1 didUpdateSwipeAngle:(double)arg2 withVerticalTranslation:(double)arg3;
- (void)attachmentInteractionControllerDidDismissAttachment:(id)arg1 swipeDirection:(long long)arg2;
- (_Bool)attachmentInteractionController:(id)arg1 shouldBeginWithSwipeDirection:(long long)arg2 gestureRecognizer:(id)arg3;
- (void)_disableFadeTransitionForDismissalAnimation;
- (void)_enableFadeTransitionForDismissalAnimation:(id)arg1 fadingViews:(id)arg2;
- (void)_configureFadeTransitionForDismissalAnimation;
- (_Bool)viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:(long long)arg1 gestureRecognizer:(id)arg2;
- (void)viewControllerTransitionAnimatorDidFinishDismissing:(_Bool)arg1;
- (void)viewControllerTransitionAnimatorDidCancelDismissing;
- (void)viewControllerTransitionAnimatorWillBeginAnimatingToDismiss;
- (void)viewControllerTransitionAnimatorDidBeginDismissing;
- (void)viewControllerTransitionAnimatorDidFinishPresenting;
- (void)viewControllerTransitionAnimatorWillBeginPresenting;
- (struct CGRect)maskableFrame;
- (void)dismissWithLastInteraction:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)dismiss;
- (void)updateBaseView:(id)arg1 baseViewOrientation:(long long)arg2 topInset:(double)arg3 transitionMode:(long long)arg4;
- (void)setBaseView:(id)arg1;
- (void)setBaseViewFrame:(struct CGRect)arg1;
- (void)_presentFromViewController:(id)arg1 baseView:(id)arg2 baseViewFrame:(struct CGRect)arg3 topInset:(double)arg4 baseViewBehavior:(long long)arg5 baseViewOrientation:(long long)arg6 transitionMode:(long long)arg7;
- (void)presentFromViewController:(id)arg1 config:(struct SCOperaViewControllerPresentationConfig)arg2;
- (id)_interactionEventWithType:(unsigned long long)arg1 params:(id)arg2;
- (void)_shareWebpageURL:(id)arg1;
- (id)_getVerticalNeighborModelForId:(id)arg1 isTopSnap:(_Bool)arg2;
- (void)_updateSwipeUpConfiguration;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)applyMainViewBackgroundColor;
- (void)applyScrollViewBackgroundColor;
- (_Bool)shouldDismissOnViewModel:(id)arg1;
- (id)currentPageID;
- (id)_currentPageVC;
- (struct CGPoint)_currentPageVCOffset;
- (_Bool)_shouldNotPassCurrentPageWithScrollRelativePosition:(unsigned long long)arg1;
- (void)_goBackToPreviousPage;
- (void)_didHitDismissViewModel;
- (void)_advanceToNextPage:(_Bool)arg1;
- (void)navigationManagerShouldDismiss:(id)arg1;
- (void)navigationManager:(id)arg1 wantsToDismissAnimated:(_Bool)arg2;
- (void)navigationManager:(id)arg1 handledInteraction:(id)arg2;
- (void)navigationManager:(id)arg1 didTapToRelativePosition:(unsigned long long)arg2;
- (void)_sendPageDirectionEventWithPreviousViewModel:(id)arg1 nextViewModel:(id)arg2;
- (void)scrollContentViewDidRefreshDisplay:(id)arg1;
- (void)navigationManager:(id)arg1 didScrollToPageID:(id)arg2;
- (id)_viewModelForRelativePosition:(unsigned long long)arg1;
- (id)_pageVCForRelativePosition:(unsigned long long)arg1;
- (id)shareableMediaSnapshotsWithPerformer:(id)arg1;
- (id)shareableMedias;
- (void)_updatePageIDToPageVCMapWithDimensionToPageIdToPageVCMap:(id)arg1 preloadedPageVCMap:(id)arg2;
- (void)_addOperaPageViewControllers:(id)arg1;
- (void)_updateOperaScrollViewAndAddPageVCs:(id)arg1;
- (id)_pageViewControllerForPageID:(id)arg1;
- (id)_pageViewControllerForViewModel:(id)arg1;
- (id)_buildPageVCsForViewModels:(id)arg1 modelIDToPageVCMap:(id)arg2 needToCreateDummyPageVCIfNecessary:(_Bool)arg3;
- (void)_logDummyPagesInfoIfNeeded;
- (void)_loadPageViewsBasedOnViewModels;
- (void)_informCurrentPageVCDisappear;
- (void)_informNeighborPageVCVisibilityForRelativePosition:(unsigned long long)arg1;
- (void)_informNeighborPageVCsVisibility;
- (void)_informCurrentPageVCVisibilityIfNecessary;
- (void)viewModelsManagerWillForcePagingFromViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)viewModelsManagerDidPageToNilViewModel;
- (void)viewModelsManagerDidHitDismissViewModel;
- (void)_currentPageVCDidStartDisplaying;
- (void)_prepareNewCurrentPageViewController;
- (void)viewModelsManagerDidUpdateViewModel;
- (_Bool)isSwipeDownToDismissDisabled;
- (_Bool)isFullyVisible;
- (id)operaPresentedViewController;
- (id)operaViewControllerView;
- (_Bool)isDismissing;
- (_Bool)shouldDeferUpdatingPageViewControllers;
- (_Bool)shouldNotPassCurrentPageWithScrollRelativePosition:(unsigned long long)arg1;
- (id)lastViewInteraction;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)dummyPageViewControllers;
- (id)pageViewControllerForViewModel:(id)arg1;
- (id)floatingLayerViewControllers;
- (id)fullyVisiblePageIDForTargetContentOffset:(struct CGPoint)arg1 currentContentOffset:(struct CGPoint)arg2;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 swipeDirection:(long long)arg2 gestureRecognizer:(id)arg3;
- (id)pageViewControllerForPageID:(id)arg1;
- (id)pageViewControllerForOperaViewModel:(id)arg1;
- (id)currentFullyAppearedPageViewController;
- (id)currentPageViewController;
- (id)currentViewModel;
- (void)_addPageViewController:(id)arg1 atOffset:(struct CGPoint)arg2;
- (void)shouldLayoutPageViewController:(id)arg1 atOffset:(struct CGPoint)arg2;
- (struct CGPoint)operaScrollViewContentOffsetForCurrentViewModel;
- (struct CGSize)operaPageSize;
- (void)setCurrentViewModel:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)hideBlurOverlay;
- (void)isLooping:(_Bool)arg1;
- (void)showBlurOverlayOnView:(id)arg1;
- (void)restartTimer;
- (void)resume;
- (void)pauseWithOverlay:(_Bool)arg1;
- (id)pageViewName;
- (id)_presentedViewControllerOrTopVCForSilentlyPresentedProtocol;
- (_Bool)_isPresentingSilentlyPresentedAndPauseOperaViewController;
- (_Bool)_isPresentingSilentlyPresentedViewControllerIncludingPause:(_Bool)arg1;
- (void)didTakeScreenRecord;
- (void)didTakeScreenshot;
- (void)viewWillResignActive;
- (void)didBecomeActive;
- (void)didBecomeActivePostponed;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillEnterForeground;
- (void)viewWillEnterBackground;
- (void)viewDidFullyDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (void)_configurationViewModelsToPreloadDidChange;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 eventAnnouncer:(id)arg3 viewModelsManager:(id)arg4 customVolumeController:(id)arg5 notificationCenter:(id)arg6 sharedResourceManager:(id)arg7;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 experimentManager:(id)arg3;
- (id)initWithConfiguration:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

