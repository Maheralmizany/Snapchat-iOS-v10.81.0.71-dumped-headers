//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemGroupResolver-Protocol.h"
#import "SCOperaPlaylistItemMediaPreparationController-Protocol.h"
#import "SCStoryMediaStateListener-Protocol.h"
#import "SCStreamingURLProviding-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class FBKVOController, FriendStories, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCContextV2Session, SCDisposableObserverLifecycle, SCLegacyStoriesOperaMediaManager, SCObservable, SCOperaPerformanceTrackingPlugin, SCOperaViewModel, SCSearchFriendProvider, SCStreamingResourceLoader, SCUserSession, Story;
@protocol NavigationDelegate, SCDiscoverFeedStoryFetching, SCLegacySingleStoryOperaDataSourceDelegate, SCOperaLabelTextProvider, SCOperaPlaylistItemController, SCOperaViewProvider, SCStreamingURLProviding;

@interface SCLegacySingleStoryOperaDataSource : NSObject <SCStreamingURLProviding, SCTraceEnabled, SCStoryMediaStateListener, SCOperaPlaylistItemMediaPreparationController, SCOperaPlaylistItemGroupResolver>
{
    FBKVOController *_kvoController;
    SCStreamingResourceLoader *_streamingResourceLoader;
    SCDisposableObserverLifecycle *_resourceLoaderObserverLifeCycle;
    NSMutableDictionary *_storyClientIDToViewModelMap;
    long long _viewingType;
    _Bool _isInStoryPlaylistMode;
    _Bool _showViewersTable;
    _Bool _hasPlayedStory;
    long long _viewLocation;
    Story *_firstStoryForcedToDisplay;
    NSMutableArray *_storiesViewedBeforeCurrentAutoAdvanceSession;
    NSMutableArray *_storiesViewedInCurrentAutoAdvanceSession;
    NSMutableArray *_storiesNotViewed;
    NSMutableArray *_storiesInDisplayOrder;
    NSMutableDictionary *_storyClientIdToInjectedStory;
    Story *_firstStoryToDisplay;
    Story *_currentViewingStory;
    Story *_lastStoryUserViewedInCurrentSession;
    _Bool _needToReloadStoriesDisplayOrderWhenPassCurrentStory;
    unsigned long long _indexOfInitialStory;
    NSMutableDictionary *_playlistItemIDToStoryMap;
    _Bool _isInOperaPlaylistMode;
    NSMutableDictionary *_cachedPageProperties;
    NSMutableDictionary *_cachedLensMetadata;
    NSMutableArray *_lensmetadataFetchRequestInProgress;
    NSMutableSet *_storiesViewedBeforeCurrentSession;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCContextV2Session *_contextSession;
    id <SCStreamingURLProviding> _streamingURLProvider;
    CDUnknownBlockType _firstStoryPreparationCompletion;
    id <SCOperaViewProvider> _chromeAvatarProvider;
    id <SCOperaLabelTextProvider> _groupChatTitleProvider;
    id <SCDiscoverFeedStoryFetching> _discoverFeedStoryFetcher;
    SCDisposableObserverLifecycle *_contextCTADataObservableLifecycle;
    NSMutableDictionary *_clientIdToContextCTAData;
    SCOperaViewModel *_lastViewModel;
    NSMutableArray *_generatedViewModels;
    id <SCLegacySingleStoryOperaDataSourceDelegate> _delegate;
    FriendStories *_friendStories;
    SCSearchFriendProvider *_friendProvider;
    SCObservable *_contextCTADataObservable;
    Story *_story;
    SCLegacyStoriesOperaMediaManager *_storiesMediaManager;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
@property(retain, nonatomic) SCLegacyStoriesOperaMediaManager *storiesMediaManager; // @synthesize storiesMediaManager=_storiesMediaManager;
@property(retain, nonatomic) Story *story; // @synthesize story=_story;
@property(retain, nonatomic) SCObservable *contextCTADataObservable; // @synthesize contextCTADataObservable=_contextCTADataObservable;
@property(nonatomic) __weak SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(retain, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
@property(nonatomic) __weak id <SCLegacySingleStoryOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *generatedViewModels; // @synthesize generatedViewModels=_generatedViewModels;
@property(readonly, nonatomic) SCOperaViewModel *lastViewModel; // @synthesize lastViewModel=_lastViewModel;
- (void).cxx_destruct;
- (void)_startMonitoringForResourceLoaderErrors;
- (id)streamingURLForRequestInfo:(id)arg1;
- (void)_announcePlaylistItemMediaStateChangeForStory:(id)arg1;
- (void)removeMediaForItem:(id)arg1;
- (id)_nextStoryAfterStory:(id)arg1;
- (void)_prepareMediaForStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isAdStories;
- (void)extraPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)teardownStoryForItem:(id)arg1;
- (id)storyForItem:(id)arg1;
- (id)_playlistItemIdForStory:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (id)_firstStoryToDisplayForOperaPlaylist;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (id)_storyToInsertAfterStoryWithClientId:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (void)_invokeFirstStoryPreparationCompleteIfNecessary:(id)arg1;
- (void)story:(id)arg1 didChangeMediaState:(long long)arg2;
- (void)_updatePageForStory:(id)arg1;
- (void)_setFirstStoryToDisplayToDefaultValue;
- (void)_updateFirstStoryToDisplay;
- (void)_updateWithCTADataIfNeededForStory:(id)arg1;
- (void)_fetchLensMetadataIfNeededForStory:(id)arg1;
- (id)viewModelWithNextViewModel:(id)arg1;
- (void)_removeViewModelForStory:(id)arg1;
- (id)_pagesPropertiesForStory:(id)arg1;
- (id)_buildViewModelForStory:(id)arg1;
- (void)_updateViewModelsBasedOnCurrentDisplayOrderWithViewModelConnectionUpdate:(_Bool)arg1;
- (void)_useStoriesDisplayOrderToInsertStory:(id)arg1 intoStoriesArray:(id)arg2;
- (void)_updateStoriesViewingOrderBasedOnFriendStories;
- (void)_removeStoryFromStoriesViewingOrder:(id)arg1;
- (id)storyForViewModel:(id)arg1;
- (id)viewModelForStory:(id)arg1;
- (id)pageForStory:(id)arg1;
- (void)_updateStoriesAndViewModels;
- (void)_friendStoriesArrayDidChange:(id)arg1 friendStories:(id)arg2;
- (void)_updateFriendStoriesSnapLoggingInfos:(id)arg1;
@property(readonly, nonatomic) SCOperaViewModel *rootViewModel;
- (unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1;
- (void)injectStory:(id)arg1 afterStory:(id)arg2;
- (void)updateErrorPage:(id)arg1 error:(id)arg2 story:(id)arg3;
- (void)skipStory:(id)arg1 synchronously:(_Bool)arg2;
- (void)_addNewPageProperty:(id)arg1 toPage:(id)arg2;
- (void)didLoadStory:(id)arg1 isOperaPresented:(_Bool)arg2 loadedStoryProperties:(id)arg3 mediaNotLoaded:(_Bool)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)buildViewModels;
- (void)dealloc;
- (void)_fetchRemainingStoriesForFriendStoriesIfNeeded:(id)arg1;
- (void)startToPlayStory:(id)arg1;
- (void)_updateWithNewContextCTAData:(id)arg1;
- (id)initWithChromeAvatarProvider:(id)arg1 groupChatTitleProvider:(id)arg2 resourceLoader:(id)arg3;
- (id)initWithStory:(id)arg1 showViewersTable:(_Bool)arg2 viewingType:(long long)arg3 performanceTrackingPlugin:(id)arg4 isInOperaPlaylistMode:(_Bool)arg5 userSession:(id)arg6 navigationDelegate:(id)arg7 viewLocation:(long long)arg8 chromeAvatarProvider:(id)arg9 groupChatTitleProvider:(id)arg10 contextSession:(id)arg11 resourceLoader:(id)arg12;
- (id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 isInStoryPlaylistMode:(_Bool)arg4 performanceTrackingPlugin:(id)arg5 isInOperaPlaylistMode:(_Bool)arg6 userSession:(id)arg7 navigationDelegate:(id)arg8 viewLocation:(long long)arg9 chromeAvatarProvider:(id)arg10 groupChatTitleProvider:(id)arg11 contextSession:(id)arg12 resourceLoader:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

