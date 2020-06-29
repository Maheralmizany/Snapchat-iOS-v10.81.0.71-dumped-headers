//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCEventAnnouncing-Protocol.h"

@class NSDictionary, NSString, SCDiscoverFeedCollection, SCEventListenerAnnouncer, SCOperaViewController, SCOperaViewInteraction;
@protocol SCDiscoverFeedDataFetching, SCOperaPlaylistItemController;

@interface SCDiscoverFeedStoryLoggingOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCEventAnnouncing>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCOperaViewInteraction *_interactionAtDismissal;
    _Bool _isInterstitialAtDismissal;
    _Bool _isResuming;
    long long _overrideEntryEvent;
    long long _source;
    long long _itemLayout;
    NSDictionary *_fieldsOverrideDict;
    SCDiscoverFeedCollection *_discoverFeedCollection;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    _Bool _wasShowProfilePresented;
    _Bool _wasShowProfileDismissed;
    _Bool _upNextIsOpen;
    _Bool _isDismissing;
    long long _interactionContext;
    long long _navigationStyle;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_isOpeningInterstitialStory:(id)arg1;
- (long long)_sourceForCurrentEvent:(id)arg1;
- (id)extraDataDictForNewViewSessionWithExtraData:(id)arg1 event:(id)arg2 context:(id)arg3 params:(id)arg4;
- (void)teardown;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)setOperaViewController:(id)arg1;
- (id)registeredEventsForOperaSession;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithSource:(long long)arg1 itemLayout:(long long)arg2 interactionContext:(long long)arg3 fieldsOverrideDict:(id)arg4 discoverFeedCollection:(id)arg5 discoverFeedDataFetcher:(id)arg6 navigationStyle:(long long)arg7;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
