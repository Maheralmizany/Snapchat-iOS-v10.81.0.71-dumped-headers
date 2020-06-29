//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverSessionLogging-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCOperaSession-Protocol.h"

@class CADisplayLink, NSArray, NSDictionary, NSMutableSet, NSNotificationCenter, NSSet, NSString, SCDiscoverChannel, SCDiscoverChunk, SCDiscoverEdition, SCDiscoverFeedMiniProfileHandler, SCDiscoverLogger, SCDiscoverOperaMediaManager, SCDiscoverOperaSessionLoggingContext, SCDiscoverRemoteVideoSession, SCDiscoverSharingSession, SCDiscoverSubscriptionSession, SCDiscoverUserProperties, SCEventListenerAnnouncer, SCOperaConfiguration, SCOperaContextLongformViewLogger, SCOperaEventListenerAnnouncer, SCOperaViewController, SCOperaViewInteraction, SCRequestManager, SCStopwatch, SCUserSession;
@protocol NavigationDelegate, SCOperaPlaylistItemController, SCOperaSubscribeActionHandler;

@interface SCSingleDiscoverEditionSession : NSObject <SCOperaSession, SCEventListener, SCEventAnnouncing, SCDiscoverSessionLogging>
{
    SCDiscoverLogger *_logger;
    SCOperaContextLongformViewLogger *_operaLongformLogger;
    SCDiscoverSubscriptionSession *_subscriptionSession;
    SCDiscoverRemoteVideoSession *_remoteVideoSession;
    SCDiscoverUserProperties *_discoverUserProperties;
    SCUserSession *_userSession;
    SCRequestManager *_requestManager;
    NSNotificationCenter *_notificationCenter;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaConfiguration *_operaConfiguration;
    id <SCOperaSubscribeActionHandler> _subscribeActionHandler;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCDiscoverOperaMediaManager *_mediaManager;
    id <NavigationDelegate> _navigationDelegate;
    SCStopwatch *_sessionStopwatch;
    NSSet *_longformViewed;
    NSSet *_loadingScreensViewed;
    NSDictionary *_currentPageContext;
    SCStopwatch *_pageViewStopwatch;
    CADisplayLink *_foregroundDisplayLink;
    _Bool _didShowTapTooltipsWhenUserTapLeftForFirstTime;
    _Bool _editionInitialViewedState;
    NSMutableSet *_dSnapIdsEnabledSkipping;
    _Bool _shouldShowTapToolTipsForCurrentPage;
    _Bool _isShowingOptOutInterstitial;
    _Bool _isShowProfilePresented;
    _Bool _areSubtitlesAvailable;
    _Bool _isShownWithSubtitles;
    SCOperaViewInteraction *_entryInteraction;
    SCEventListenerAnnouncer *_searchEventAnnouncer;
    NSString *_sessionID;
    SCDiscoverOperaSessionLoggingContext *_loggingContext;
    double _sessionTimeViewedSec;
    unsigned long long _channelIndex;
    NSString *_sortOrderId;
    unsigned long long _context;
    NSString *_deepLinkId;
    NSSet *_topSnapsViewed;
    NSString *_subtitlesLocale;
    SCDiscoverEdition *_edition;
    SCDiscoverChannel *_channel;
    NSArray *_adChunks;
    long long _autoAdvanceIndex;
    SCDiscoverSharingSession *_sharingSession;
    SCDiscoverChunk *_currentChunk;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) SCDiscoverChunk *currentChunk; // @synthesize currentChunk=_currentChunk;
@property(readonly, nonatomic) SCDiscoverSharingSession *sharingSession; // @synthesize sharingSession=_sharingSession;
@property(readonly, nonatomic) long long autoAdvanceIndex; // @synthesize autoAdvanceIndex=_autoAdvanceIndex;
@property(readonly, copy, nonatomic) NSArray *adChunks; // @synthesize adChunks=_adChunks;
@property(readonly, nonatomic) SCDiscoverChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) SCDiscoverEdition *edition; // @synthesize edition=_edition;
@property(readonly, copy, nonatomic) NSString *subtitlesLocale; // @synthesize subtitlesLocale=_subtitlesLocale;
@property(readonly, nonatomic) NSSet *topSnapsViewed; // @synthesize topSnapsViewed=_topSnapsViewed;
@property(readonly, copy, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *sortOrderId; // @synthesize sortOrderId=_sortOrderId;
@property(readonly, nonatomic) unsigned long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, nonatomic) double sessionTimeViewedSec; // @synthesize sessionTimeViewedSec=_sessionTimeViewedSec;
@property(readonly, nonatomic) SCDiscoverOperaSessionLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)extraPropertiesForChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_currentPlaylistItemFromContext:(id)arg1;
- (void)_logLoadingDsnapWaitTimeForCurrentChunk;
- (void)_logLoadedDsnapWaitTimeForCurrentChunk;
- (void)_logAdOpportunityMissDueToPendingRequestIfNecessaryWithContext:(id)arg1;
- (_Bool)_isLoadingWithContext:(id)arg1;
- (void)_logProductViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logSubscriptionLongformWithContext:(id)arg1 params:(id)arg2;
- (void)_logStoreViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logLongformVideoViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logLongformCameraViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logTopSnapVideoStreamingWithContext:(id)arg1 params:(id)arg2;
- (void)_logDiscoverTopSnapViewWithContext:(id)arg1 params:(id)arg2 isImage:(_Bool)arg3;
- (void)_logEditionView;
- (void)userDidTakeScreenshot;
- (void)viewWillEnterForeground;
- (void)_fetchMediaIfNecessary;
- (void)_fetchMediaIfNecessaryFromNotification;
- (void)_showTapTooltipsForCurrentPageWithId:(id)arg1;
- (void)_onOpenViewEventWithContext:(id)arg1;
- (void)_reportCuratedPublisherStory:(id)arg1 snapId:(id)arg2 action:(long long)arg3;
- (void)_reportHNNewsReadReceiptWithPublisherStory:(id)arg1 snapId:(id)arg2;
- (void)_reportPublisherSnapViewedReadReceiptIfNecessary:(id)arg1;
- (void)_endViewWithContext:(id)arg1 params:(id)arg2;
- (void)_startViewWithContext:(id)arg1 logWaitTime:(_Bool)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (_Bool)shouldHandleEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isViewingArchivedEdition;
- (_Bool)wasFullyViewed;
- (_Bool)becameFullyViewed;
- (double)pageTimeViewedSec;
- (id)lastInteraction;
- (unsigned long long)numLoadingScreensViewed;
- (unsigned long long)numLongformViewed;
- (unsigned long long)numTopSnapsViewed;
- (id)currentLongformVideoId;
- (_Bool)isViewingSubscriptionLongform;
- (_Bool)isViewingStore;
- (_Bool)isViewingContentTopSnapRemoteWebpage;
- (_Bool)isViewingRemoteWebpage;
- (_Bool)isViewingLongformVideo;
- (_Bool)isViewingLongform;
- (_Bool)isViewingTopSnapVideo;
- (_Bool)isViewingTopSnapImage;
- (_Bool)isViewingTopSnap;
@property(readonly, nonatomic) long long sharingState;
- (void)endSession;
- (void)_startSessionTimer;
- (void)beginViewingEdition;
- (void)dealloc;
- (void)_logStartPlayingEdition;
- (void)_setupSubSessions;
- (long long)storyTypeSpecific;
- (long long)exitIntent;
- (long long)entryIntent;
- (long long)entryEvent;
- (_Bool)isShownWithSubtitles;
- (_Bool)areSubtitlesAvailable;
- (_Bool)hasEdition;
- (_Bool)isSubscribed;
- (_Bool)hasBeenFullyViewed;
- (_Bool)isViewingShow;
- (_Bool)isViewingSubscriptionDSnap;
- (_Bool)isViewingAd;
- (unsigned long long)indexOfChunk:(id)arg1;
- (unsigned long long)currentSnapIndexPos;
- (id)currentDSnapId;
@property(readonly, nonatomic) long long actionMenuEntryEvent;
@property(readonly, nonatomic) unsigned long long numSnaps;
@property(readonly, copy, nonatomic) NSString *publisherId;
@property(readonly, copy, nonatomic) NSString *editionId;
@property(readonly, copy, nonatomic) NSString *editionVersion;
@property(readonly, copy, nonatomic) NSArray *chunks;
- (void)teardown;
- (void)clearEventAnnouncer;
- (void)_fetchCatalogForEdition;
- (void)_channelsCallback;
- (id)initWithEventAnnouncer:(id)arg1 edition:(id)arg2 context:(unsigned long long)arg3 channelIndex:(unsigned long long)arg4 sortOrderId:(id)arg5 discoverUserProperties:(id)arg6 userSession:(id)arg7 operaViewController:(id)arg8 operaConfiguration:(id)arg9 sessionStopwatch:(id)arg10 pageViewStopwatch:(id)arg11 subscriptionSession:(id)arg12 remoteVideoSession:(id)arg13 sharingSession:(id)arg14 logger:(id)arg15 operaLongformLogger:(id)arg16 requestManager:(id)arg17 notificationCenter:(id)arg18 playlistItemController:(id)arg19 loggingContext:(id)arg20 deepLinkId:(id)arg21 startWithOpenViewContext:(id)arg22 subscribeActionHandler:(id)arg23 miniProfileHandler:(id)arg24 mediaManager:(id)arg25 navigationDelegate:(id)arg26;
- (id)initWithEventAnnouncer:(id)arg1 edition:(id)arg2 context:(unsigned long long)arg3 channelIndex:(unsigned long long)arg4 sortOrderId:(id)arg5 discoverUserProperties:(id)arg6 userSession:(id)arg7 operaViewController:(id)arg8 operaConfiguration:(id)arg9 playlistItemController:(id)arg10 loggingContext:(id)arg11 deepLinkId:(id)arg12 startWithOpenViewContext:(id)arg13 subscribeActionHandler:(id)arg14 miniProfileHandler:(id)arg15 mediaManager:(id)arg16 navigationDelegate:(id)arg17;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

