//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBaseMediaMessageOperaDataSourceDelegate-Protocol.h"
#import "SCContextPresenterDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class NSDate, NSString, SCAttachmentsLogger, SCBaseMediaMessageOperaDataSource, SCLazy, SCOperaConfiguration, SCOperaPerfTestsLogger, SCOperaPerformanceTrackingPlugin, SCOperaPlaybackIntentToNextTrackingPlugin, SCOperaViewController, SCOperaViewModel, SCQueuePerformer, SCSnapGrapheneLogger, SCUserSession, UIView, UIViewController;
@protocol NavigationDelegate, SCBaseMediaOperaPresenterDelegate, SCPageNameLogging;

@interface SCBaseMediaOperaPresenter : NSObject <SCOperaEventListener, SCBaseMediaMessageOperaDataSourceDelegate, SCContextPresenterDelegate, SCReportPageViewControllerDelegate>
{
    UIViewController<SCPageNameLogging> *_presentingViewController;
    UIView *_baseView;
    SCBaseMediaMessageOperaDataSource *_dataSource;
    SCOperaViewModel *_operaViewModel;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaViewController *_operaViewController;
    _Bool _willLeaveAppFromPlayer;
    _Bool _isSnapInfinite;
    SCUserSession *_userSession;
    long long _source;
    long long _numScreenshots;
    long long _numScreenRecordings;
    NSDate *_snapViewStartTimestamp;
    NSDate *_storyViewStartTimestamp;
    NSString *_lastReplayedStackId;
    SCQueuePerformer *_performer;
    SCAttachmentsLogger *_attachmentsLogger;
    id <NavigationDelegate> _navigationDelegate;
    long long _snappableInviteAction;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_usernameToSnapchatterFetcher;
    SCLazy *_groupSnapchatterRepository;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    SCOperaPlaybackIntentToNextTrackingPlugin *_playbackIntentToNextPlugin;
    SCOperaPerfTestsLogger *_perfLogger;
    SCSnapGrapheneLogger *_snapGraphene;
    SCLazy *_snapCountDownManager;
    _Bool _didLeaveAppFromPlayer;
    _Bool _isDisplayingMedia;
    _Bool _keepMuteOverrideOnDismiss;
    id <SCBaseMediaOperaPresenterDelegate> _delegate;
    long long _messageType;
    NSString *_currentOperaPageId;
}

+ (id)announcerIdentifier;
+ (_Bool)_isVideoForPageWithContext:(id)arg1;
+ (long long)_mediaTypeForPageWithContext:(id)arg1 isDiscoverContent:(_Bool)arg2;
@property(nonatomic) _Bool keepMuteOverrideOnDismiss; // @synthesize keepMuteOverrideOnDismiss=_keepMuteOverrideOnDismiss;
@property(readonly, nonatomic) _Bool isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
@property(readonly, copy, nonatomic) NSString *currentOperaPageId; // @synthesize currentOperaPageId=_currentOperaPageId;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) __weak id <SCBaseMediaOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)contextCardsViewDidAppear:(id)arg1;
- (void)contextPresenter:(id)arg1 wantsCTAToBeHidden:(_Bool)arg2;
- (void)appDidBecomeActiveWhileContextPresented:(id)arg1;
- (void)appWillResignActiveWhileContextPresented:(id)arg1;
- (void)contextCardWasTapped:(id)arg1;
- (void)contextFinishedMediaPresentation:(id)arg1;
- (void)contextBeganMediaPresentation:(id)arg1;
- (void)context:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextWillLeaveApp:(id)arg1;
- (void)contextDidDismissSwipeUpContent:(id)arg1;
- (void)contextWillDismissSwipeUpContent:(id)arg1;
- (void)contextDidPresentSwipeUpContent:(id)arg1;
- (void)contextWillPresentSwipeUpContent:(id)arg1;
- (void)prepareForContextPresentation:(id)arg1 snapWillBePartiallyVisible:(_Bool)arg2;
- (id)actionHandler;
- (_Bool)isPlayingSnap;
- (_Bool)fullScreenIsShown;
- (void)_logOpenV3ChatSnapAttachmentWithMessageId:(id)arg1 context:(id)arg2;
- (void)_didOpenWebViewWithContext:(id)arg1;
- (void)_logVidDidPlayForDiscoverContentIfNeededWithError:(_Bool)arg1;
- (void)_logViewEndForDiscoverContentIfNeeded;
- (void)_logCloseViewForDiscoverContentWithParams:(id)arg1;
- (void)_logStartToPresentForDiscoverContentIfNeeded:(_Bool)arg1;
- (long long)_snapSourceToViewLocation:(long long)arg1;
- (_Bool)_isShowingDiscoverContent;
- (_Bool)_isShowingChatV3SnapStack;
- (_Bool)_isShowingSnap;
- (_Bool)_allowLoadingScreens;
- (_Bool)_isShowingChatV3Snap;
- (_Bool)_isShowingReplyMedia;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (void)viewWillResignActive;
- (_Bool)_isCurrentPageWebView;
- (void)_unarchiveFailureWithMessage:(id)arg1 error:(long long)arg2;
- (void)dismiss;
- (void)_snapchatterForUsername:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_snapchatterForUserId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reportSnapWithMessage:(id)arg1 snapchatter:(id)arg2 conversationId:(id)arg3;
- (void)_reportSnapWithMessage:(id)arg1 username:(id)arg2 conversationId:(id)arg3;
- (void)_reportSnapWithMessage:(id)arg1 userId:(id)arg2 conversationId:(id)arg3;
- (void)_reportSnapWithMessage:(id)arg1 conversationId:(id)arg2;
- (void)reportSnapWithMessageId:(id)arg1 presentingViewController:(id)arg2;
- (void)_logMediaConsumptionWithPageId:(id)arg1;
- (void)_logPlaybackFailureForPageId:(id)arg1 isVideo:(_Bool)arg2 mediaType:(long long)arg3 params:(id)arg4;
- (void)_logMessageViewForMediaId:(id)arg1 messageId:(id)arg2 parameters:(id)arg3;
- (void)_logMediaViewForPageId:(id)arg1 parameters:(id)arg2 context:(id)arg3;
- (void)_logChatMessageV3MediaViewForMediaId:(id)arg1 messageId:(id)arg2 parameters:(id)arg3 source:(long long)arg4;
- (void)_uploadReadReceiptToStoriesDataCoordinator:(id)arg1 creatorUsername:(id)arg2 isPublic:(_Bool)arg3;
- (void)markStoryAsViewed;
- (void)_didFinishViewingMessageWithPageId:(id)arg1 params:(id)arg2;
- (void)_retryFetchMediaFromMedia:(id)arg1;
- (void)_prefetchMediaFromMedia:(id)arg1;
- (void)_openSnapMediaById:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)_shouldHideBaseViewWhenPresented;
- (void)_hideBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (void)_showBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (void)_cleanupOperaVC;
- (void)_finishViewingSnapWithPageID:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)_displayContextForThisSnap;
- (void)_presentMediaWithDataSource:(id)arg1 fromView:(id)arg2 startIndex:(unsigned long long)arg3 shouldDisplayCircleTransition:(_Bool)arg4;
- (void)_unarchiveMediaMessageIfNecessary:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentMessage:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 startIndex:(unsigned long long)arg6 shouldDisplayCircleTransition:(_Bool)arg7 fromSource:(long long)arg8 chatContentMedia:(id)arg9;
- (void)presentChatContentMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 isGroupConversation:(_Bool)arg4 fromPresentingViewController:(id)arg5 fromView:(id)arg6 shouldDisplayCircleTransition:(_Bool)arg7;
- (void)presentMediaMessage:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 startIndex:(unsigned long long)arg6 shouldDisplayCircleTransition:(_Bool)arg7 fromSource:(long long)arg8;
- (id)userSession;
- (void)operaDataSourceFoundNothingToDisplay:(id)arg1;
- (void)operaDataSource:(id)arg1 requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg2;
- (void)operaDataSourceReadyForPlayback:(id)arg1;
@property(readonly, copy, nonatomic) NSString *conversationId;
- (void)updateFooterIfNecessary;
- (void)presentDiscoveryMediaFromViewModel:(id)arg1 fromPresentingViewController:(id)arg2 fromView:(id)arg3 isV3Message:(_Bool)arg4;
- (void)presentGroupSnapStackForConversation:(id)arg1 isGroupConversation:(_Bool)arg2 fromPresentingViewController:(id)arg3 fromView:(id)arg4 fromSource:(long long)arg5 viewableSnapsProvider:(id)arg6;
- (_Bool)_shouldEnableFullContent;
- (id)_operaConfigurationWithOperaViewModel:(id)arg1;
- (void)viewWillEnterForeground:(id)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 snapchattersDataMutator:(id)arg4 snapchattersDataFetcher:(id)arg5 usernameToSnapchatterFetcher:(id)arg6 groupSnapchatterRepository:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
