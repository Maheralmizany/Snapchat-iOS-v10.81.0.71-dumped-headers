//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCActionSheetDelegate-Protocol.h"
#import "SCBaseMediaOperaPresenterDelegate-Protocol.h"
#import "SCChatCellParentViewControllerDelegate-Protocol.h"
#import "SCChatUIProvider-Protocol.h"
#import "SCChatURLMediaOperaPresenterDelegate-Protocol.h"
#import "SCChatVisibilityProvider-Protocol.h"
#import "SCCognacAppActiveCardControllerDelegate-Protocol.h"
#import "SCCognacChatDockAppPresenting-Protocol.h"
#import "SCCognacChatDockViewControllerDelegate-Protocol.h"
#import "SCCognacNotificationHandling-Protocol.h"
#import "SCCognacOperaPresenterDelegate-Protocol.h"
#import "SCContextOperaPlaylistPluginDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchStoriesPresenterDelegate-Protocol.h"
#import "SCSharedStoryMiniProfilePresenterDelegate-Protocol.h"
#import "SCSharedStoryPresenterDelegate-Protocol.h"
#import "SCTPresencePillTapListener-Protocol.h"
#import "SCTV3ClientDependenciesProvider-Protocol.h"
#import "SCTableControllerInsetUpdater-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileViewControllerLifecycleListener-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSNotificationCenter, NSString, SCActionMenuShareController, SCAppNotification, SCChatCardAnimationContainerView, SCChatContainerView, SCChatInputViewController, SCChatViewHeader, SCChatViewLifeCycleListenerAnnouncer, SCChatViewLogger, SCChatViewOptions, SCCognacAppActiveCardController, SCCognacChatDockDataProvider, SCCognacChatDockViewController, SCCognacChatDrawerCollectionViewSectionDataProvider, SCCognacChatDrawerViewController, SCCognacOperaPresenter, SCLazy, SCTV3PresenceContainer, SCTV3TableContentInsetUpdater, UIView;
@protocol NavigationDelegate, SCCaptureWorkflow, SCChatViewControllerParentDelegate, SCStackChatsDelegate, SCStartChatDelegate, SCTalkClientController;

@interface SCChatBaseViewController : UIViewController <SCCognacOperaPresenterDelegate, SCCognacAppActiveCardControllerDelegate, SCCognacChatDockAppPresenting, SCCognacChatDockViewControllerDelegate, SCTraceEnabled, SCChatCellParentViewControllerDelegate, SCChatUIProvider, SCSharedStoryPresenterDelegate, SCSharedStoryMiniProfilePresenterDelegate, SCSearchStoriesPresenterDelegate, SCChatURLMediaOperaPresenterDelegate, SCTV3ClientDependenciesProvider, UIViewControllerTransitioningDelegate, SCChatVisibilityProvider, SCEventListener, SCTPresencePillTapListener, SCUnifiedProfileViewControllerLifecycleListener, SCUpdateListener, SCBaseMediaOperaPresenterDelegate, SCTableControllerInsetUpdater, SCContextOperaPlaylistPluginDelegate, SCActionSheetDelegate, SCCognacNotificationHandling, SCPageNameLogging>
{
    UIView *_recipientBar;
    UIView *_blurOverlay;
    _Bool _isChatViewCentered;
    double _lastVerticalTranslateUp;
    SCTV3TableContentInsetUpdater *_tableContentInsetUpdater;
    _Bool _deferAllSystemEdgeGestures;
    long long _transitionState;
    UIView *_blueOverlay;
    UIView *_blueUnderlay;
    SCActionMenuShareController *_actionMenuShareController;
    id <SCCaptureWorkflow> _captureWorkflow;
    _Bool _isInPreviewMode;
    _Bool _ignoreScreenshot;
    _Bool _ignoreScreenRecord;
    _Bool _handleLifecycleWhenCentered;
    _Bool _isOperaShowing;
    id <SCChatViewControllerParentDelegate> _parentDelegate;
    SCChatContainerView *_containerView;
    SCTV3PresenceContainer *_presenceContainer;
    NSNotificationCenter *_cognacChatDockEventCenter;
    id <SCTalkClientController> _talkClientController;
    id <SCStartChatDelegate> _delegate;
    id <NavigationDelegate> _navigationDelegate;
    SCAppNotification *_sourceNotification;
    id <SCStackChatsDelegate> _stackChatsDelegate;
    SCChatViewLogger *_lifecycleLogger;
    SCChatViewOptions *_chatViewOptions;
    UIView *_tableContainerView;
    SCChatViewHeader *_header;
    SCChatInputViewController *_chatInputController;
    SCChatCardAnimationContainerView *_contentContainerView;
    SCChatViewLifeCycleListenerAnnouncer *_lifeCycleAnnouncer;
    NSString *_conversationDisplayName;
    SCCognacOperaPresenter *_cognacOperaPresenter;
    SCCognacChatDockViewController *_cognacChatDockViewController;
    SCCognacChatDockDataProvider *_cognacChatDockDataProvider;
    SCCognacAppActiveCardController *_cognacAppActiveCardController;
    SCCognacChatDrawerViewController *_cognacDrawerViewController;
    SCCognacChatDrawerCollectionViewSectionDataProvider *_cognacDrawerDataProvider;
    SCLazy *_cognacChatDockTransitionAnimator;
}

+ (id)stringForStatusBarActionSource:(long long)arg1;
@property(retain, nonatomic) SCLazy *cognacChatDockTransitionAnimator; // @synthesize cognacChatDockTransitionAnimator=_cognacChatDockTransitionAnimator;
@property(retain, nonatomic) SCCognacChatDrawerCollectionViewSectionDataProvider *cognacDrawerDataProvider; // @synthesize cognacDrawerDataProvider=_cognacDrawerDataProvider;
@property(retain, nonatomic) SCCognacChatDrawerViewController *cognacDrawerViewController; // @synthesize cognacDrawerViewController=_cognacDrawerViewController;
@property(retain, nonatomic) SCCognacAppActiveCardController *cognacAppActiveCardController; // @synthesize cognacAppActiveCardController=_cognacAppActiveCardController;
@property(retain, nonatomic) SCCognacChatDockDataProvider *cognacChatDockDataProvider; // @synthesize cognacChatDockDataProvider=_cognacChatDockDataProvider;
@property(retain, nonatomic) SCCognacChatDockViewController *cognacChatDockViewController; // @synthesize cognacChatDockViewController=_cognacChatDockViewController;
@property(retain, nonatomic) SCCognacOperaPresenter *cognacOperaPresenter; // @synthesize cognacOperaPresenter=_cognacOperaPresenter;
@property(readonly, nonatomic) _Bool isOperaShowing; // @synthesize isOperaShowing=_isOperaShowing;
@property(retain, nonatomic) NSString *conversationDisplayName; // @synthesize conversationDisplayName=_conversationDisplayName;
@property(retain, nonatomic) SCChatViewLifeCycleListenerAnnouncer *lifeCycleAnnouncer; // @synthesize lifeCycleAnnouncer=_lifeCycleAnnouncer;
@property(retain, nonatomic) SCChatCardAnimationContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) SCChatInputViewController *chatInputController; // @synthesize chatInputController=_chatInputController;
@property(retain, nonatomic) SCChatViewHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) SCChatViewOptions *chatViewOptions; // @synthesize chatViewOptions=_chatViewOptions;
@property(nonatomic) _Bool handleLifecycleWhenCentered; // @synthesize handleLifecycleWhenCentered=_handleLifecycleWhenCentered;
@property(nonatomic) _Bool ignoreScreenRecord; // @synthesize ignoreScreenRecord=_ignoreScreenRecord;
@property(nonatomic) _Bool ignoreScreenshot; // @synthesize ignoreScreenshot=_ignoreScreenshot;
@property(nonatomic) _Bool isInPreviewMode; // @synthesize isInPreviewMode=_isInPreviewMode;
@property(retain, nonatomic) SCChatViewLogger *lifecycleLogger; // @synthesize lifecycleLogger=_lifecycleLogger;
@property(nonatomic) __weak id <SCStackChatsDelegate> stackChatsDelegate; // @synthesize stackChatsDelegate=_stackChatsDelegate;
@property(retain, nonatomic) SCAppNotification *sourceNotification; // @synthesize sourceNotification=_sourceNotification;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCTalkClientController> talkClientController; // @synthesize talkClientController=_talkClientController;
@property(retain, nonatomic) NSNotificationCenter *cognacChatDockEventCenter; // @synthesize cognacChatDockEventCenter=_cognacChatDockEventCenter;
@property(retain, nonatomic) SCTV3PresenceContainer *presenceContainer; // @synthesize presenceContainer=_presenceContainer;
@property(retain, nonatomic) SCChatContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCChatViewControllerParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_handleSourceNotificationIfNeeded;
- (void)_showCameraForUsername:(id)arg1 displayName:(id)arg2 doubleTap:(_Bool)arg3 context:(id)arg4;
- (_Bool)chatIsPartiallyVisible;
- (_Bool)chatIsFullyVisible;
- (void)presentProfileForSnapchatter:(id)arg1 addSource:(long long)arg2 page:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switchChatTo:(id)arg1 userId:(id)arg2 deepLinkURL:(id)arg3;
- (id)presentingVC;
- (void)restoreViewAfterSideMenuDisappear;
- (void)prepareSideMenuAppear;
- (void)unifiedProfileDidTeardownSections:(id)arg1;
- (void)unifiedProfileDidUpdateSectionsWithAnimationFinished:(_Bool)arg1;
- (void)unifiedProfileDidSetupSections:(id)arg1;
- (void)unifiedProfileDidDisappear;
- (void)unifiedProfileWillAppear;
- (void)showSendToViewForForwardableViewModel:(id)arg1 userSession:(id)arg2;
- (void)setChatSubpageName:(id)arg1;
- (void)setChatEntryEvent:(long long)arg1;
- (void)setHeaderButtonsAlpha:(double)arg1;
- (id)headerView;
- (void)resetTransitionState;
- (void)prepareForJumpIn;
- (void)actionSheetWillDisappear;
- (void)actionSheetWillAppear;
- (_Bool)isPlayingCognacApp;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (id)activeCognacAppSessionId;
- (_Bool)shouldSuppressKeyboardFromNotBeingVisible;
- (_Bool)isFullScreenPlayerShown;
- (void)updateTableContentInset:(double)arg1;
- (void)searchStoryPresenterDidFinishDismissingStory:(id)arg1;
- (void)searchStoryPresenterWillBeginPresentingStory:(id)arg1;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (_Bool)isCustomPresentationForSearchStoriesPresenter:(id)arg1;
- (void)baseMediaOperaPresenter:(id)arg1 resumedTimerForMessage:(id)arg2;
- (void)baseMediaOperaPresenter:(id)arg1 pausedTimerForMessage:(id)arg2;
- (void)_presentReportViewControllerWithReportType:(long long)arg1;
- (void)baseMediaOperaPresenter:(id)arg1 mediaFailsToDisplay:(id)arg2;
- (void)baseMediaOperaPresenter:(id)arg1 didTapReportForMessage:(id)arg2 shareableMediaComponents:(id)arg3;
- (void)baseMediaOperaPresenter:(id)arg1 didTapSendForMessage:(id)arg2;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
- (void)baseMediaOperaPresenterViewWillResignActive:(id)arg1;
- (void)baseMediaOperaPresenterDidFinishPresentationAnimation:(id)arg1;
- (void)baseMediaOperaPresenterFoundNothingToDisplay:(id)arg1;
- (void)operaURLMediaPresenterDidDisappear;
- (void)operaURLMediaPresenterWillAppear;
- (void)baseMediaOperaPresenter:(id)arg1 didTapFooterBarForMedia:(id)arg2;
- (id)baseMediaOperaPresenter:(id)arg1 thumbnailViewForMedia:(id)arg2 conversationId:(id)arg3;
- (void)contextWillDismiss:(id)arg1;
- (void)contextWillPresent:(id)arg1;
- (void)setBlueOverlayAlpha:(double)arg1;
- (id)blueUnderlay;
- (id)blueOverlay;
- (id)tableView;
- (void)hideBlurOverlay;
- (void)showBlurOverlayOnView:(id)arg1;
- (void)rightButtonPressed;
- (void)leavePreviewMode:(_Bool)arg1;
- (void)enterPreviewMode;
- (void)didAttemptToSendMessage;
- (void)removeRecipientBar:(_Bool)arg1;
- (void)_initInputControllerV3;
- (void)_initInputView;
- (void)initInputView;
- (void)addRecipientBar:(id)arg1;
- (void)updateTableContainerViewTopConstraint;
- (void)sharedStoryPresenterDidDisappear;
- (void)sharedStoryPresenterWillAppear;
- (void)sharedStoryMiniProfileDidDisappear;
- (void)sharedStoryMiniProfileWillAppear;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (void)sccpConnectionStatusChanged;
- (void)releaseMemory;
- (void)viewWillEnterBackground;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (_Bool)isPlayingSnap;
- (void)hideStatusBarFromActionSource:(long long)arg1;
- (void)showStatusBarFromActionSource:(long long)arg1;
- (void)chatInputControllerViewDidChange:(id)arg1;
- (double)_chatHeaderVerticalTranslationUp;
- (_Bool)isHeaderShown;
- (id)chatRecipientUsername;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)chatInputView;
- (void)presencePillTapped:(id)arg1 username:(id)arg2 longPressed:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentAudioRouteActionSheet:(id)arg1;
- (id)chatHeader;
- (_Bool)chatFullyVisibile;
- (id)tableInsetUpdater;
- (void)_updatePresenceContainerLayout;
- (void)setupPresenceContainer;
- (void)setActiveTalkSessionForConversationWithId:(id)arg1 presenceEnabled:(_Bool)arg2;
- (_Bool)presenceEnabled;
- (_Bool)isRTL;
- (id)remoteUserId;
- (id)remoteUsername;
- (_Bool)isGroupConversation;
- (id)conversationId;
- (_Bool)canBeShown;
- (_Bool)shouldDisableScrollOut:(id)arg1;
- (void)viewDidPopFromStack;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidFullyDisappearFromStack:(_Bool)arg1;
- (void)viewDidFullyAppearFromStack:(_Bool)arg1 fromBackground:(_Bool)arg2;
- (void)prepareToBeVisible;
- (void)_setPreferredScreenEdgesDeferringSystemGesturesToAll:(_Bool)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldSuppressKeyboard;
- (void)resumeConversation;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)setupHeader;
- (void)updateHeaderForPreviewMode;
- (void)_setContentContainerViewRoundedCorner;
- (void)_initContentContainerView;
- (void)_initTableContentInsetUpdater;
- (void)viewDidLayoutSubviews;
- (id)shortDescription;
- (void)viewDidLoad;
- (void)loadView;
- (id)pageViewName;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 groupsDataTracker:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 groupSnapchatterRepository:(id)arg6 snapchattersDataMutator:(id)arg7 snapchattersDataProvider:(id)arg8;
- (void)cognacChatDockViewController:(id)arg1 didUpdateChatDockPosition:(unsigned long long)arg2;
- (void)_presentCognacApp:(id)arg1 appInstanceDataModel:(id)arg2 baseView:(id)arg3 context:(unsigned long long)arg4 shareInfo:(id)arg5;
- (void)presentCognacAppWithBuild:(id)arg1 projectId:(id)arg2;
- (void)presentAppWithIndividualContext:(id)arg1 animationBaseView:(id)arg2 context:(unsigned long long)arg3;
- (void)presentAppWithAppInstanceDataModel:(id)arg1 animationBaseView:(id)arg2 context:(unsigned long long)arg3 shareInfo:(id)arg4;
- (_Bool)canPresentApp;
- (void)cognacAppActiveCardController:(id)arg1 didPressJoinButtonForAppId:(id)arg2;
- (void)cognacAppActiveCardController:(id)arg1 didPressNotNowButtonForAppId:(id)arg2;
- (void)cognacAppActiveCardController:(id)arg1 didDismissAppActiveCardForAppId:(id)arg2;
- (void)cognacAppActiveCardController:(id)arg1 didShowAppActiveCardForAppId:(id)arg2;
- (_Bool)shouldSuppressKeyboardForCognacAppActiveCard;
- (void)initCognacAppActiveCard;
- (void)cognacOperaPresenter:(id)arg1 didFinishPresentViewerWithPlayerItem:(id)arg2;
- (void)cognacOperaPresenterDidBeginPresentViewer:(id)arg1;
- (void)cognacOperaPresenter:(id)arg1 willDismissViewerWithParticipantInfo:(id)arg2;
- (void)cognacOperaPresenterDidFinishDismissViewer:(id)arg1;
- (void)_presentCognacAppWithPlayerItem:(id)arg1 playerState:(unsigned long long)arg2 presentationSourceType:(long long)arg3 baseView:(id)arg4 context:(unsigned long long)arg5;
- (void)_handleFetchAppCompletionForNotificationWithAppDataModel:(id)arg1 previousConversationId:(id)arg2 appInstanceId:(id)arg3;
- (void)_presentCognacAppWithNotification:(id)arg1;
- (_Bool)_isValidNotificationToPresentCognacApp:(id)arg1;
- (_Bool)handleCognacInitiateNotificationDismissed:(id)arg1;
- (_Bool)handleNotificationPressedByCognac:(id)arg1;
- (void)handleShakePromptForCognac;
- (void)updateCognacAfterSideMenuDisappear;
- (void)updateCognacAppDockWithCollectionId:(id)arg1 isGroupConversation:(_Bool)arg2;
- (void)prepareCognacDrawer;
- (id)_createCognacChatDockTransitionAnimator;
- (void)initCognacAppDock;
- (void)_dismissPresentingCognacApp;
- (void)dismissCognacAppWhenOffscreenIfNecessary;
- (id)presentingCognacAppSessionId;
- (_Bool)isCognacAppBeingPresented;
- (void)updateCognacWhenViewDidBecomeActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

