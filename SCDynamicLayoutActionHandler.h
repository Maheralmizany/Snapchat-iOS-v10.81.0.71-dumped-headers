//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAnnouncing-Protocol.h"
#import "SCDiscoverFeedActionHandling-Protocol.h"
#import "SCDynamicLayoutViewControllerDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCDiscoverFeedBadgeCoordinator, SCEventListenerAnnouncer, SCFuture, SCLazy, SCUserSession, UIViewController;
@protocol SCActionHandling, SCDiscoverFeedActionHandling, SCDiscoverFeedDataFetching, SCDiscoverFeedDataMutating, SCDiscoverFeedGrapheneMetricsEmitting, SCDiscoverFeedOperaViewingHandling, SCDiscoverFeedSnapAdsSharedInstanceStud, SCDiscoverFeedStoriesPrefetching, SCDiscoverFeedStoryPositionProviding, SCDynamicLayoutUIBuilding, SCImageDownloading, SCLegacyItemDownloading, SCPageNameLogging, SCPremiumFeedNavigationDelegate;

@interface SCDynamicLayoutActionHandler : NSObject <SCDynamicLayoutViewControllerDelegate, SCEventListener, SCDiscoverFeedActionHandling, SCAnnouncing, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCLazy *_snapTokenProvider;
    SCFuture *_sectionExtensionServices;
    id <SCDiscoverFeedActionHandling> _discoverFeedActionHandler;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    id <SCDynamicLayoutUIBuilding> _dynamicLayoutUIBuilder;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _shouldEnablePublisherProfiles;
    NSString *_bitmojiAvatarId;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    UIViewController<SCPageNameLogging> *_previousPresentingViewController;
    id <SCDiscoverFeedOperaViewingHandling> _previousOperaViewingHandler;
    id <SCDiscoverFeedStoryPositionProviding> _previousStoryPositionProvider;
    id <SCDiscoverFeedStoriesPrefetching> _storiesPrefetcher;
    id <SCDiscoverFeedGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCDiscoverFeedBadgeCoordinator *_discoverFeedBadgeCoordinator;
    id <SCActionHandling> _sectionHeaderActionHandler;
    id <SCPremiumFeedNavigationDelegate> _premiumFeedNavigationDelegate;
    SCLazy *_bloopsAPI;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    id <SCDiscoverFeedStoryPositionProviding> _storyPositionProvider;
    id <SCDiscoverFeedOperaViewingHandling> _operaViewingHandler;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCDiscoverFeedOperaViewingHandling> operaViewingHandler; // @synthesize operaViewingHandler=_operaViewingHandler;
@property(retain, nonatomic) id <SCDiscoverFeedStoryPositionProviding> storyPositionProvider; // @synthesize storyPositionProvider=_storyPositionProvider;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_logDismissFloatingBadge:(id)arg1;
- (void)_logOpenFloatingBadge:(id)arg1;
- (void)_logPivotFromSectionHeaderForChannel:(id)arg1;
- (void)_presentDynamicLayoutViewControllerForFeedTypes:(id)arg1 pageTitle:(id)arg2 channelId:(id)arg3 querySource:(id)arg4 pageType:(unsigned long long)arg5 sourceView:(id)arg6 sender:(id)arg7 badgeMetadata:(id)arg8;
- (void)didDismissDynamicLayoutViewController;
- (void)updateTransitionMode:(long long)arg1;
- (void)updateDismissBaseView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 snapTokenProvider:(id)arg2 sectionExtensionServices:(id)arg3 discoverFeedActionHandler:(id)arg4 discoverFeedDataFetcher:(id)arg5 discoverFeedDataMutator:(id)arg6 dynamicLayoutUIBuilder:(id)arg7 imageDownloader:(id)arg8 videoDownloader:(id)arg9 bitmojiAvatarId:(id)arg10 snapAdsSharedInstance:(id)arg11 storiesPrefetcher:(id)arg12 discoverFeedBadgeCoordinator:(id)arg13 sectionHeaderActionHandler:(id)arg14 premiumFeedNavigationDelegate:(id)arg15 bloopsAPI:(id)arg16 grapheneMetricsEmitter:(id)arg17;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

