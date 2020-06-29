//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCDiscoverEditionsOperaDataSource, SCDiscoverEditionsSession, SCEventListenerAnnouncer, SCUserSession;
@protocol NavigationDelegate;

@interface SCOperaPlaylistEditionsPlugin : SCOperaPlaylistFeaturePlugin <SCEventListener, SCEventAnnouncing>
{
    SCDiscoverEditionsOperaDataSource *_editionsOperaDataSource;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCEventListenerAnnouncer *_searchEventAnnouncer;
    SCDiscoverEditionsSession *_editionsSession;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) SCDiscoverEditionsSession *editionsSession; // @synthesize editionsSession=_editionsSession;
- (void).cxx_destruct;
- (_Bool)shouldUseExtendedResetToCamera;
- (id)currentEdition;
- (_Bool)currentEditionBecameFullyViewed;
- (void)teardown;
- (id)prefetchRequestHandler;
- (id)type;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (id)playlistDataSource;
- (id)extraPropertiesProvider;
- (id)initWithUserSession:(id)arg1 context:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 loggingContext:(id)arg4 startWithAttachment:(_Bool)arg5 deepLinkId:(id)arg6 navigationDelegate:(id)arg7 enableAutoAdvance:(_Bool)arg8 subscribeActionHandler:(id)arg9 miniProfileHandler:(id)arg10 operaNavigationStyle:(long long)arg11;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
