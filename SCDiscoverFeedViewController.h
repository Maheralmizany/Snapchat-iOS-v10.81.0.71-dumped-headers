//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCognacNotificationHandling-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCDeepLinkableView-Protocol.h"
#import "SCDiscoverFeedActionHandlerDelegate-Protocol.h"
#import "SCDiscoverFeedOperaViewingHandling-Protocol.h"
#import "SCDiscoverFeedQueryCoordinatingDelegate-Protocol.h"
#import "SCDynamicLayoutPresentAnimationControllerDelegate-Protocol.h"
#import "SCDynamicLayoutViewControllerDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCNavigationBarActionHandler-Protocol.h"
#import "SCScrollToEndDetectorDelegate-Protocol.h"
#import "SCSearchCardContainerContentViewControlling-Protocol.h"
#import "SCSearchContentScrollViewProviding-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCStoriesContentViewControlling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class CADisplayLink, NSDate, NSMutableDictionary, NSString, SCDiscoverFeedActionHandler, SCDiscoverFeedAdPrefetchAdaptor, SCDiscoverFeedDeeplinkHandler, SCDiscoverFeedManagementActionSheetActionHandler, SCDiscoverFeedOnboardingDataCoordinator, SCDiscoverFeedPaginationController, SCDiscoverFeedPerformanceLoggerAdaptor, SCDiscoverFeedPrefetchHandler, SCDiscoverFeedSectionCreator, SCDiscoverFeedSectionHeaderActionHandler, SCDiscoverFeedSectionViewAllButtonStates, SCDiscoverFeedView, SCDiscoverFeedViewControllerLoggingAdaptor, SCDynamicLayoutTransitionProvider, SCDynamicLayoutViewController, SCEventListenerAnnouncer, SCFuture, SCGCDBlockTimer, SCImpalaProfilePresenter, SCLazy, SCNotificationOptInDataProvider, SCPreviewTooltipBalloon, SCScrollToEndDetector, SCSearchCardContainerContentViewControllerContext, SCSearchFriendProvider, SCSearchNetworkLogger, SCSearchQueryResultController, SCStories, SCStoriesUnarchiver, SCUserSession, UICollectionViewCell, UIScrollView;
@protocol NavigationDelegate, SCCurrentPageTracker, SCDiscoverFeedDebugInfoDataProviding, SCDiscoverFeedGrapheneMetricsEmitting, SCDiscoverFeedSnapAdsSharedInstanceStud, SCDynamicLayoutUIBuilding, SCEventListener, SCHovaOverscrollDelegate, SCPageNameLogging, SCStartChatDelegate, SCStoriesContentViewControllingDelegate, UIScrollViewDelegate;

@interface SCDiscoverFeedViewController : UIViewController <SCDynamicLayoutPresentAnimationControllerDelegate, UICollectionViewDelegate, SCSearchQueryResultControllerDelegate, SCScrollToEndDetectorDelegate, SCDiscoverFeedActionHandlerDelegate, SCTraceEnabled, SCShakeToReportDelegate, SCUpdateListener, SCDiscoverFeedQueryCoordinatingDelegate, UIViewControllerTransitioningDelegate, SCDiscoverFeedOperaViewingHandling, SCDataCoordinatorListener, SCEventListener, SCDynamicLayoutViewControllerDelegate, SwipeView, SCDeepLinkableView, SCSearchCardContainerContentViewControlling, SCSearchContentScrollViewProviding, SCStoriesContentViewControlling, SCCognacNotificationHandling, SCNavigationBarActionHandler>
{
    SCLazy *_discoverFeedQueryCoordinator;
    SCDiscoverFeedSectionCreator *_sectionCreator;
    id <SCEventListener> _discoverFeedEventsListenerReAnnouncer;
    SCDiscoverFeedActionHandler *_actionHandler;
    SCDiscoverFeedSectionHeaderActionHandler *_sectionHeaderActionHandler;
    SCDiscoverFeedDeeplinkHandler *_deeplinkHandler;
    SCDiscoverFeedPaginationController *_paginationController;
    SCScrollToEndDetector *_scrollToBottomDetector;
    SCLazy *_bitmojiAvatarProvider;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    _Bool _userInteractionInitiatedReloadInProgress;
    NSDate *_showedMoreViewTimestamp;
    CDUnknownBlockType _triggerReorderAfterThreshold;
    SCSearchNetworkLogger *_networkLogger;
    double _yOffsetBeforeScrolling;
    struct CGPoint _lastScrollOffset;
    double _lastScrollOffsetCapturedTime;
    _Bool _isFirstViewDidFullyAppear;
    id <SCDiscoverFeedDebugInfoDataProviding> _debugInfoDataProvider;
    SCDiscoverFeedSectionViewAllButtonStates *_sectionViewAllButtonStates;
    NSMutableDictionary *_feedViewReadyLoggingDictionary;
    CADisplayLink *_displayLink;
    SCGCDBlockTimer *_viewAllButtonStateResetThresholdTimer;
    _Bool _isContentLoaded;
    SCLazy *_discoverTooltipManager;
    SCLazy *_interestSelectionDataCoordinatorLazy;
    _Bool _loadingPersonalizedRefresh;
    _Bool _didTapNotificationToEnter;
    SCDiscoverFeedPerformanceLoggerAdaptor *_performanceLoggerAdaptor;
    SCDiscoverFeedViewControllerLoggingAdaptor *_viewControllerLoggingAdaptor;
    SCDiscoverFeedAdPrefetchAdaptor *_adPrefetchAdapter;
    CDUnknownBlockType _friendStoryFetchCompletionHandler;
    SCGCDBlockTimer *_contentLongLoadingTimer;
    _Bool _hasSetupS2DFTime;
    double _lastPTRTime;
    UICollectionViewCell *_newSingleTileCell;
    _Bool _startPlayBySwipeUp;
    double _singleTileSwipeUpThreashold;
    _Bool _isVisible;
    _Bool _isPresenting;
    SCSearchCardContainerContentViewControllerContext *_cardContainerContext;
    id <SCHovaOverscrollDelegate> _hovaOverscrollDelegate;
    id <UIScrollViewDelegate> _scrollingDelegate;
    id <SCStoriesContentViewControllingDelegate> _storiesContentViewControllerDelegate;
    long long _discoverFeedPageEntryType;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    UIViewController<SCPageNameLogging> *_parentController;
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchQueryResultController *_queryResultController;
    SCLazy *_snapTokenProvider;
    SCLazy *_imageDownloader;
    SCLazy *_friendStoriesPlaybackDataProvider;
    SCLazy *_storiesLegacyPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_friendStoriesDataCoordinator;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_discoverFeedBadgeCoordinator;
    SCLazy *_discoverFeedBadgeReadyStateManager;
    SCFuture *_sectionExtensionServices;
    SCLazy *_friendStoriesReplayManager;
    SCLazy *_collapseManager;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCLazy *_readReceiptCoordinator;
    SCStories *_legacyStories;
    SCLazy *_storiesDataCoordinator;
    SCSearchFriendProvider *_friendProvider;
    SCDiscoverFeedPrefetchHandler *_discoverFeedPrefetchHandler;
    SCNotificationOptInDataProvider *_optInProvider;
    id <SCCurrentPageTracker> _currentPageTracker;
    SCDiscoverFeedView *_cheetahStoriesView;
    id <SCDynamicLayoutUIBuilding> _dynamicLayoutUIBuilder;
    id <SCDiscoverFeedGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCDynamicLayoutViewController *_dynamicLayoutViewController;
    SCDiscoverFeedActionHandler *_showsPageActionHandler;
    SCDynamicLayoutTransitionProvider *_dynamicLayoutTransitionProvider;
    SCDiscoverFeedOnboardingDataCoordinator *_managementOnboardingDataCoordinator;
    SCDiscoverFeedManagementActionSheetActionHandler *_discoverFeedManagementActionSheetActionHandler;
    SCPreviewTooltipBalloon *_discoverFeedManagementTooltip;
    SCLazy *_bloopsAPI;
    SCLazy *_bloopsReenactmentService;
    SCImpalaProfilePresenter *_impalaProfilePresenter;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCImpalaProfilePresenter *impalaProfilePresenter; // @synthesize impalaProfilePresenter=_impalaProfilePresenter;
@property(retain, nonatomic) SCLazy *bloopsReenactmentService; // @synthesize bloopsReenactmentService=_bloopsReenactmentService;
@property(retain, nonatomic) SCLazy *bloopsAPI; // @synthesize bloopsAPI=_bloopsAPI;
@property(retain, nonatomic) SCPreviewTooltipBalloon *discoverFeedManagementTooltip; // @synthesize discoverFeedManagementTooltip=_discoverFeedManagementTooltip;
@property(retain, nonatomic) SCDiscoverFeedManagementActionSheetActionHandler *discoverFeedManagementActionSheetActionHandler; // @synthesize discoverFeedManagementActionSheetActionHandler=_discoverFeedManagementActionSheetActionHandler;
@property(retain, nonatomic) SCDiscoverFeedOnboardingDataCoordinator *managementOnboardingDataCoordinator; // @synthesize managementOnboardingDataCoordinator=_managementOnboardingDataCoordinator;
@property(retain, nonatomic) SCDynamicLayoutTransitionProvider *dynamicLayoutTransitionProvider; // @synthesize dynamicLayoutTransitionProvider=_dynamicLayoutTransitionProvider;
@property(retain, nonatomic) SCDiscoverFeedActionHandler *showsPageActionHandler; // @synthesize showsPageActionHandler=_showsPageActionHandler;
@property(retain, nonatomic) SCDynamicLayoutViewController *dynamicLayoutViewController; // @synthesize dynamicLayoutViewController=_dynamicLayoutViewController;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) id <SCDiscoverFeedGrapheneMetricsEmitting> grapheneMetricsEmitter; // @synthesize grapheneMetricsEmitter=_grapheneMetricsEmitter;
@property(retain, nonatomic) id <SCDynamicLayoutUIBuilding> dynamicLayoutUIBuilder; // @synthesize dynamicLayoutUIBuilder=_dynamicLayoutUIBuilder;
@property(retain, nonatomic) SCDiscoverFeedView *cheetahStoriesView; // @synthesize cheetahStoriesView=_cheetahStoriesView;
@property(retain, nonatomic) id <SCCurrentPageTracker> currentPageTracker; // @synthesize currentPageTracker=_currentPageTracker;
@property(retain, nonatomic) SCNotificationOptInDataProvider *optInProvider; // @synthesize optInProvider=_optInProvider;
@property(retain, nonatomic) SCDiscoverFeedPrefetchHandler *discoverFeedPrefetchHandler; // @synthesize discoverFeedPrefetchHandler=_discoverFeedPrefetchHandler;
@property(retain, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(retain, nonatomic) SCLazy *storiesDataCoordinator; // @synthesize storiesDataCoordinator=_storiesDataCoordinator;
@property(retain, nonatomic) SCStories *legacyStories; // @synthesize legacyStories=_legacyStories;
@property(retain, nonatomic) SCLazy *readReceiptCoordinator; // @synthesize readReceiptCoordinator=_readReceiptCoordinator;
@property(retain, nonatomic) SCStoriesUnarchiver *storiesUnarchiver; // @synthesize storiesUnarchiver=_storiesUnarchiver;
@property(retain, nonatomic) SCLazy *collapseManager; // @synthesize collapseManager=_collapseManager;
@property(retain, nonatomic) SCLazy *friendStoriesReplayManager; // @synthesize friendStoriesReplayManager=_friendStoriesReplayManager;
@property(retain, nonatomic) SCFuture *sectionExtensionServices; // @synthesize sectionExtensionServices=_sectionExtensionServices;
@property(retain, nonatomic) SCLazy *discoverFeedBadgeReadyStateManager; // @synthesize discoverFeedBadgeReadyStateManager=_discoverFeedBadgeReadyStateManager;
@property(retain, nonatomic) SCLazy *discoverFeedBadgeCoordinator; // @synthesize discoverFeedBadgeCoordinator=_discoverFeedBadgeCoordinator;
@property(retain, nonatomic) SCLazy *discoverFeedDataCoordinator; // @synthesize discoverFeedDataCoordinator=_discoverFeedDataCoordinator;
@property(retain, nonatomic) SCLazy *friendStoriesDataCoordinator; // @synthesize friendStoriesDataCoordinator=_friendStoriesDataCoordinator;
@property(retain, nonatomic) SCLazy *storiesMediaCoordinator; // @synthesize storiesMediaCoordinator=_storiesMediaCoordinator;
@property(retain, nonatomic) SCLazy *storiesLegacyPlaybackDataProvider; // @synthesize storiesLegacyPlaybackDataProvider=_storiesLegacyPlaybackDataProvider;
@property(retain, nonatomic) SCLazy *friendStoriesPlaybackDataProvider; // @synthesize friendStoriesPlaybackDataProvider=_friendStoriesPlaybackDataProvider;
@property(retain, nonatomic) SCLazy *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCLazy *snapTokenProvider; // @synthesize snapTokenProvider=_snapTokenProvider;
@property(retain, nonatomic) SCSearchQueryResultController *queryResultController; // @synthesize queryResultController=_queryResultController;
@property(retain, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) long long discoverFeedPageEntryType; // @synthesize discoverFeedPageEntryType=_discoverFeedPageEntryType;
@property(nonatomic) __weak id <SCStoriesContentViewControllingDelegate> storiesContentViewControllerDelegate; // @synthesize storiesContentViewControllerDelegate=_storiesContentViewControllerDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate; // @synthesize hovaOverscrollDelegate=_hovaOverscrollDelegate;
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext; // @synthesize cardContainerContext=_cardContainerContext;
- (void).cxx_destruct;
- (void)_displayBadgeIfPossible:(id)arg1;
- (void)_scheduleDisplayBadge:(id)arg1;
- (void)_setBadgeReadyAndScheduleDisplayBadgeIfNecessary:(id)arg1;
- (void)_setDiscoverFeedStoriesReadyAndScheduleDisplayBadgeIfNecessary;
- (void)_handleFetchedBadges:(id)arg1;
- (void)_fetchBadgeIfNecessaryWithSessionId:(id)arg1;
- (void)_prefetchPivotSwipePageIfNecessary:(id)arg1;
- (id)_createDiscoverTooltipManager;
- (void)_hideTooltip;
- (void)_showTooltip;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (id)activeCognacAppSessionId;
- (id)_currentSections;
- (void)_scrollToStory:(id)arg1;
- (void)_resetCarouselSectionsOffset;
- (void)_sendActionModelToActionHandler:(id)arg1 fromSourceView:(id)arg2;
- (void)_handleStoryLookupSuccessResponseWithStory:(id)arg1 feedType:(int)arg2 sectionKey:(id)arg3 identifier:(id)arg4 notificationId:(id)arg5;
- (void)_lookupStory:(id)arg1 feedType:(int)arg2 sectionKey:(id)arg3 identifier:(id)arg4 cheetahStory:(id)arg5;
- (void)_handleDiscoverFeedStoryNotificationPressed:(id)arg1;
- (void)_updateChunkLoaderPrefetchedSnaps:(id)arg1;
- (void)_playNotificationFriendStory:(id)arg1 friendStories:(id)arg2 itemSource:(long long)arg3 notificationId:(id)arg4;
- (void)_fetchUncachedFriendStoryWithNotification:(id)arg1 itemSource:(long long)arg2;
- (void)_checkAvailableFriendStoryAndPlay:(id)arg1;
- (void)_handleDiscoverFeedFriendStoryNotificationPressed:(id)arg1;
- (void)handleNotificationPressed:(id)arg1;
- (void)_updateItemLoadedStatus;
- (void)_updateOnboardingEntryPointViewWithSubmissionStatus:(unsigned long long)arg1;
- (void)_refreshWithPersonalizedFeed;
- (void)_refreshWithPersonalizedFeed:(_Bool)arg1 isPullToRefresh:(_Bool)arg2;
- (void)_refreshIfNecessaryWithPersonalizedFeed:(_Bool)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_prefetchFirstSnapMediaForVisibleCheetahStoriesIfNeccesary;
- (void)_resumeAllVideoPlaybackIfNeccesary;
- (void)_pauseAllVideoPlaybackIfNeccesary;
- (id)defaultProjectNameV2;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)_startPageView;
- (void)_handleDidStartToDisplayStoryWithIndexPath:(id)arg1;
- (void)storiesActionHandler:(id)arg1 willFinishPlaylistForFeedType:(unsigned long long)arg2;
- (void)storiesActionHandler:(id)arg1 willPlayStory:(id)arg2 currentFriendUserName:(id)arg3;
- (void)viewDidAppearWithDeepLinkInfo:(id)arg1;
- (void)_didTapPageLevelDebugButton;
- (void)resetViewAllButtonStates;
- (void)_setupViewAllButtonStatesThresholdTimer;
- (void)_clearViewAllButtonStatesThresholdTimer;
- (void)_performUpdatesForReOrder;
- (void)_setNoReOrderThresholdTimer;
- (void)_clearHovaStoryBadge;
- (void)_stopPullToRefresh;
- (void)_didFinishLoading;
- (void)_fetchHeadStories;
- (void)_fetchFreshStoriesIfNeeded;
- (void)_fetchStoriesForAllSectionsWithQuerySource:(id)arg1 sectionExtensionServices:(id)arg2;
- (void)_fetchStoriesForAllSectionsWithQuerySource:(id)arg1;
- (void)_reorderForPTRThreshold;
- (_Bool)_shouldDisablePullToRefresh;
- (void)scrollToTopWithAnimation:(_Bool)arg1;
- (void)_resetScrollStateWithAnimationIfNeededWithQuerySource:(id)arg1;
- (void)_handleScrollViewDidScrollWithScrollView:(id)arg1;
- (id)_calculateFirstCellIndexPathBasedOnSectionIdentifier:(id)arg1;
- (_Bool)_isSingleTileNeedToPlayWithIndexPath:(id)arg1;
- (void)_viewReadyForQuerySource:(id)arg1 contentReadyType:(long long)arg2;
- (id)_resultContentReadyType;
- (void)_announceSectionOrder;
- (void)_handleIsVisibleIfNecessary;
- (void)didTearDownStory;
- (void)didDismissStory;
- (void)_animateInNewSingleTileIfNecessary;
- (void)_prepareSingleTileForPopUpAnimationAtIndexPath:(id)arg1;
- (void)_singleTileFeedDidStartToDismissStoryAtIndexPath:(id)arg1 dismissalSwipeDirection:(long long)arg2 transitionMode:(long long)arg3 actionHandler:(id)arg4;
- (void)didStartToDismissStoryAtIndexPath:(id)arg1 dismissalSwipeDirection:(long long)arg2 transitionMode:(long long)arg3 actionHandler:(id)arg4;
- (void)_startToPlayStoryStoryAtIndexPath:(id)arg1;
- (void)didStartToDisplayStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2;
- (void)_fetchInterestSubmissionStateForOnboardingDataCoordinator:(id)arg1;
- (void)_logInfiniteLoadingEventIfNecessary;
- (void)_startContentLongLoadingTimer;
- (void)_invalidateContentLongLoadingTimer;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)searchQueryResultControllerDidSkipUpdateQueryResult:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)discoverQueryCoordinator:(id)arg1 didReceiveServerResponseForQuery:(id)arg2;
- (void)discoverQueryCoordinator:(id)arg1 didFailForQuery:(id)arg2 error:(id)arg3 statusCodeToDisplay:(id)arg4;
- (void)scrollToEndDetector:(id)arg1 scrollViewWillReachEnd:(id)arg2;
- (void)didDismissDynamicLayoutViewController;
- (void)_updatePreferredScreenEdgesDeferringSystemGestures;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navigationBarButtonItems;
@property(readonly, nonatomic) _Bool isViewingStory;
- (_Bool)isLoading;
- (void)_refreshByPullToRefresh;
- (void)refreshByPullToRefresh;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)removeOldExtensionFileForCurrentUser;
- (void)_applicationDidEnterBackground;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)handleUserTriggeredNavigationAction:(long long)arg1;
- (void)_saveStoriesToDiskIfNeeded;
- (void)viewDidFullyDisappear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidPartiallyDisappear;
- (void)_emitFriendStoriesListViewImpressionMetricsIfNecessary;
- (void)viewDidFullyAppear;
- (void)viewDidPartiallyAppear;
- (id)initWithUserSession:(id)arg1 snapTokenProvider:(id)arg2 navigationDelegate:(id)arg3 startChatDelegate:(id)arg4 storiesDataCoordinator:(id)arg5 friendStoriesPlaybackDataProvider:(id)arg6 storiesMediaCoordinator:(id)arg7 storiesLegacyPlaybackDataProvider:(id)arg8 storiesUnarchiver:(id)arg9 legacyStories:(id)arg10 readReceiptCoordinator:(id)arg11 friendStoriesDataCoordinator:(id)arg12 discoverFeedDataCoordinator:(id)arg13 discoverFeedBadgeCoordinator:(id)arg14 discoverFeedBadgeReadyStateManager:(id)arg15 friendStoriesReplayManager:(id)arg16 sectionExtensionServices:(id)arg17 discoverFeedActionHandler:(id)arg18 discoverFeedPrefetchHandler:(id)arg19 discoverFeedQueryCoordinator:(id)arg20 imageDownloader:(id)arg21 collapseManager:(id)arg22 discoverFeedEventsAnnouncer:(id)arg23 optInProvider:(id)arg24 currentPageTracker:(id)arg25 bitmojiAvatarProvider:(id)arg26 snapAdsSharedInstance:(id)arg27 dynamicLayoutUIBuilder:(id)arg28 bloopsAPI:(id)arg29 bloopsReenactmentService:(id)arg30 grapheneMetricsEmitter:(id)arg31;
- (id)_impressionViewItemWithIdentifier:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3 itemPos:(long long)arg4 hasVideoThumbnail:(_Bool)arg5 tileAutoPlayed:(_Bool)arg6 sectionIdentifier:(id)arg7 hasReplayOverlay:(_Bool)arg8 storyLoggingInfo:(id)arg9;
- (id)_updateImpressItemForCollectionViewCell:(id)arg1 frame:(struct CGRect)arg2 indexPath:(id)arg3 itemPos:(long long)arg4 storyTileWithVideoConfigurable:(id)arg5 date:(id)arg6;
- (void)updateImpressionItems;
- (void)_presentPublicUserProfile:(id)arg1 businessProfile:(id)arg2 presentingViewController:(id)arg3;
- (id)_impalaPublisherProfileActionHandlerWithPresentingViewController:(id)arg1;
- (id)_impalaShowProfileActionHandlerWithPresentingViewController:(id)arg1;
- (void)_initDiscoverFeedManagementActionSheetActionHandlerAndPresent:(_Bool)arg1;
- (void)removeDiscoverFeedManagementTooltip;
- (void)didTapDiscoverFeedManagementButton;
- (id)toolTipForDiscoverFeedManagement;
- (void)_initiateDynamicLayoutPresentationFromSection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didSwipeToShowsPage;
- (void)setupShowsPageIfNecessary;
- (void)cancelDynamicLayoutPresentation;
- (void)finishDynamicLayoutPresentation;
- (void)initiateDynamicLayoutPresentationFromSection:(id)arg1;
- (void)presentPremiumPageAnimatedWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
