//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeeplinkShareControllerDelegate-Protocol.h"
#import "SCDiscoverSessionLogging-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCLongformShowOperaDataSourceDelegate-Protocol.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCOperaSession-Protocol.h"

@class NSDictionary, NSSet, NSString, SCDiscoverLogger, SCDiscoverOperaSessionLoggingContext, SCEventListenerAnnouncer, SCImpalaShowProfilePresenter, SCImpalaShowProfilePresenterOperaDelegate, SCLongformShowOperaDataModel, SCOperaEventListenerAnnouncer, SCOperaObservablePlaybackEvent, SCOperaViewController, SCOperaViewInteraction, SCStopwatch, SCUserSession;
@protocol NavigationDelegate, SCOperaPlaylistItemController;

@interface SCLongformShowOperaSession : NSObject <SCDeeplinkShareControllerDelegate, SCOperaPlaylistItemExtraPropertiesProvider, SCOperaSession, SCEventAnnouncing, SCDiscoverSessionLogging, SCLongformShowOperaDataSourceDelegate>
{
    SCOperaEventListenerAnnouncer *_operaEventAnnouncer;
    SCEventListenerAnnouncer *_announcer;
    SCImpalaShowProfilePresenter *_showProfilePresenter;
    SCImpalaShowProfilePresenterOperaDelegate *_showProfilePresenterDelegate;
    SCOperaObservablePlaybackEvent *_chapterPresentingShowProfile;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCDiscoverLogger *_logger;
    SCLongformShowOperaDataModel *_currentShow;
    SCOperaObservablePlaybackEvent *_currentChapter;
    SCOperaObservablePlaybackEvent *_previousChapter;
    NSDictionary *_currentPageContext;
    long long _chapterIndexPos;
    NSSet *_longformViewed;
    SCStopwatch *_showSnapViewTimeStopwatch;
    SCStopwatch *_showSessionStopwatch;
    double _currMediaDisplayTime;
    SCOperaViewInteraction *_entryInteraction;
    _Bool _isViewingFirstSnap;
    NSString *_sessionID;
    SCDiscoverOperaSessionLoggingContext *_loggingContext;
    long long _actionMenuEntryEvent;
    double _sessionTimeViewedSec;
    NSSet *_topSnapsViewed;
    unsigned long long _channelIndex;
    unsigned long long _numSnaps;
    NSString *_sortOrderId;
    unsigned long long _context;
    NSString *_deepLinkId;
    NSString *_editionVersion;
    NSString *_editionId;
    NSString *_publisherId;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *editionVersion; // @synthesize editionVersion=_editionVersion;
@property(readonly, copy, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *sortOrderId; // @synthesize sortOrderId=_sortOrderId;
@property(readonly, nonatomic) unsigned long long numSnaps; // @synthesize numSnaps=_numSnaps;
@property(readonly, nonatomic) unsigned long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, nonatomic) NSSet *topSnapsViewed; // @synthesize topSnapsViewed=_topSnapsViewed;
@property(readonly, nonatomic) double sessionTimeViewedSec; // @synthesize sessionTimeViewedSec=_sessionTimeViewedSec;
@property(readonly, nonatomic) long long actionMenuEntryEvent; // @synthesize actionMenuEntryEvent=_actionMenuEntryEvent;
@property(readonly, nonatomic) SCDiscoverOperaSessionLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)didFinishShareSession;
- (void)_updatePlaylistItemIfNecessaryForCurrentChapter:(id)arg1 previousChapter:(id)arg2;
- (id)_longformShowOperaDataModelForContext:(id)arg1;
- (void)_logStoryFeedItemActionForContext:(id)arg1 params:(id)arg2 event:(id)arg3;
- (void)_announceFeedItemActionEventForShowIfNecessary:(id)arg1 actionType:(long long)arg2 interactionContext:(long long)arg3;
- (void)_updateNotificationStatusWithContext:(id)arg1 params:(id)arg2;
- (void)_updateSubscribeStatusForContext:(id)arg1 params:(id)arg2;
- (void)_sendShowProfileForContext:(id)arg1;
- (void)_displayShowProfileForContext:(id)arg1;
- (id)currentChapterIdentifier;
- (double)pageTimeViewedSec;
- (unsigned long long)numTopSnapsViewed;
- (unsigned long long)numLongformViewed;
- (id)lastInteraction;
- (long long)storyTypeSpecific;
- (long long)entryIntent;
- (long long)exitIntent;
- (long long)entryEvent;
@property(readonly, copy, nonatomic) NSString *subtitlesLocale;
- (_Bool)isShownWithSubtitles;
- (_Bool)areSubtitlesAvailable;
- (_Bool)isViewingShow;
- (_Bool)isViewingTopSnapVideo;
- (_Bool)isViewingContentTopSnapRemoteWebpage;
- (_Bool)isViewingTopSnapImage;
- (_Bool)isViewingTopSnap;
- (_Bool)isViewingSubscriptionLongform;
- (_Bool)isViewingSubscriptionDSnap;
- (_Bool)isViewingStore;
- (_Bool)isViewingRemoteWebpage;
- (_Bool)isViewingLongformVideo;
- (_Bool)isViewingLongform;
- (_Bool)isViewingAd;
- (_Bool)isSubscribed;
- (unsigned long long)indexOfChunk:(id)arg1;
- (_Bool)hasEdition;
- (_Bool)hasBeenFullyViewed;
- (unsigned long long)currentSnapIndexPos;
- (id)currentLongformVideoId;
- (id)currentDSnapId;
- (void)_endSnapViewForContext:(id)arg1 params:(id)arg2 event:(id)arg3;
- (void)_endEditionViewForContext:(id)arg1 params:(id)arg2 event:(id)arg3;
- (void)_handleLongformPlaybackEventForContext:(id)arg1 params:(id)arg2 event:(id)arg3;
- (void)_startEditionViewForContext:(id)arg1 show:(id)arg2;
- (void)_startEditionViewIfNecessaryForContext:(id)arg1 params:(id)arg2 event:(id)arg3;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setEventAnnouncer:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 viewLocation:(long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
