//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"
#import "SCStoryMediaStateListener-Protocol.h"

@class NSArray, NSDate, NSString, NSURL, SCDiscoverFeedSectionKey, SCDiscoverFeedStory, SCMapStoriesInfo, SCSearchDynamicStoriesInfo, SCStoryActionsConfiguration, SCStoryAdStreamInfo;

@interface FriendStories : NSObject <SCStoryMediaStateListener, NSCoding, SCMediaOwnerProtocol>
{
    _Bool _storiesObserverAdded;
    _Bool _local;
    _Bool _shared;
    _Bool _hasCustomDescriptionForLiveStory;
    _Bool _isSearchDynamicStories;
    _Bool _isBusinessStories;
    _Bool _isHighlightStories;
    _Bool _isPromotedStories;
    _Bool _hasFetchedMoreStories;
    _Bool _showViewingJIT;
    _Bool _hasUserStartedViewingUnviewedStories;
    _Bool _hasUserStartedViewingStories;
    long long _unviewedSingleIconMediaState;
    SCStoryAdStreamInfo *_adStreamInfo;
    long long _batchState;
    long long _unviewedBatchState;
    NSString *_sharedId;
    NSDate *_mostRecentStoryTimestamp;
    NSArray *_stories;
    NSString *_displayName;
    long long _loadContext;
    long long _unviewedLoadContext;
    SCMapStoriesInfo *_mapViewingInfo;
    NSString *_officialTrackingId;
    SCSearchDynamicStoriesInfo *_searchDynamicStoriesInfo;
    SCDiscoverFeedStory *_cheetahStory;
    SCDiscoverFeedSectionKey *_sectionKey;
    unsigned long long _discoverFeedItemPos;
    NSString *_trackingId;
    NSString *_profileDescription;
    NSString *_deepLinkURL;
    SCStoryActionsConfiguration *_actionsConfiguration;
    NSString *_atomicUsername;
    NSURL *_unviewedSingleIconURL;
    unsigned long long _numSnapsToLoadBeforeAllowViewing;
    unsigned long long _tapToLoadCount;
}

+ (id)friendStoriesFromSoju:(id)arg1;
+ (id)storiesFromStoryDoc:(id)arg1;
+ (id)storiesFromManifest:(id)arg1 username:(id)arg2 viewingInfo:(id)arg3 reportedIds:(id)arg4 enableStreaming:(_Bool)arg5 elementsType:(unsigned long long)arg6;
@property unsigned long long tapToLoadCount; // @synthesize tapToLoadCount=_tapToLoadCount;
@property unsigned long long numSnapsToLoadBeforeAllowViewing; // @synthesize numSnapsToLoadBeforeAllowViewing=_numSnapsToLoadBeforeAllowViewing;
@property(nonatomic) _Bool hasUserStartedViewingStories; // @synthesize hasUserStartedViewingStories=_hasUserStartedViewingStories;
@property(nonatomic) _Bool hasUserStartedViewingUnviewedStories; // @synthesize hasUserStartedViewingUnviewedStories=_hasUserStartedViewingUnviewedStories;
@property(retain) NSURL *unviewedSingleIconURL; // @synthesize unviewedSingleIconURL=_unviewedSingleIconURL;
@property(copy) NSString *atomicUsername; // @synthesize atomicUsername=_atomicUsername;
@property(retain) SCStoryActionsConfiguration *actionsConfiguration; // @synthesize actionsConfiguration=_actionsConfiguration;
@property(copy) NSString *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
@property(copy) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property _Bool showViewingJIT; // @synthesize showViewingJIT=_showViewingJIT;
@property _Bool hasFetchedMoreStories; // @synthesize hasFetchedMoreStories=_hasFetchedMoreStories;
@property _Bool isPromotedStories; // @synthesize isPromotedStories=_isPromotedStories;
@property(readonly, copy) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property _Bool isHighlightStories; // @synthesize isHighlightStories=_isHighlightStories;
@property _Bool isBusinessStories; // @synthesize isBusinessStories=_isBusinessStories;
@property unsigned long long discoverFeedItemPos; // @synthesize discoverFeedItemPos=_discoverFeedItemPos;
@property(copy) SCDiscoverFeedSectionKey *sectionKey; // @synthesize sectionKey=_sectionKey;
@property(copy) SCDiscoverFeedStory *cheetahStory; // @synthesize cheetahStory=_cheetahStory;
@property(copy) SCSearchDynamicStoriesInfo *searchDynamicStoriesInfo; // @synthesize searchDynamicStoriesInfo=_searchDynamicStoriesInfo;
@property _Bool isSearchDynamicStories; // @synthesize isSearchDynamicStories=_isSearchDynamicStories;
@property(copy) NSString *officialTrackingId; // @synthesize officialTrackingId=_officialTrackingId;
@property(retain) SCMapStoriesInfo *mapViewingInfo; // @synthesize mapViewingInfo=_mapViewingInfo;
@property long long unviewedLoadContext; // @synthesize unviewedLoadContext=_unviewedLoadContext;
@property long long loadContext; // @synthesize loadContext=_loadContext;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(retain) NSDate *mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property _Bool hasCustomDescriptionForLiveStory; // @synthesize hasCustomDescriptionForLiveStory=_hasCustomDescriptionForLiveStory;
@property(getter=isShared) _Bool shared; // @synthesize shared=_shared;
@property(copy) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(getter=isLocal) _Bool local; // @synthesize local=_local;
@property long long unviewedBatchState; // @synthesize unviewedBatchState=_unviewedBatchState;
@property long long batchState; // @synthesize batchState=_batchState;
@property(retain) SCStoryAdStreamInfo *adStreamInfo; // @synthesize adStreamInfo=_adStreamInfo;
@property long long unviewedSingleIconMediaState; // @synthesize unviewedSingleIconMediaState=_unviewedSingleIconMediaState;
- (void).cxx_destruct;
- (_Bool)enableCriticalModeWhenLoading;
- (void)removeStoriesFromStoriesArrayWithStories:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeStoryFromStoriesArrayWithStory:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)addStoryToStoriesArrayWithStory:(id)arg1 index:(unsigned long long)arg2;
@property(copy) NSString *username;
- (void)story:(id)arg1 didChangeMediaState:(long long)arg2;
- (id)mediaFileNames;
- (id)cacheMediaIds;
- (void)setIconMediaState:(long long)arg1;
- (void)fetchSingleIconMediaIfNecessaryUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSingleIconMediaIfNecessaryUserInitiated:(_Bool)arg1;
- (void)iconWithCompletion:(CDUnknownBlockType)arg1;
- (id)cacheKey;
- (unsigned long long)numberOfLoadedSnapsNeededBeforeViewingForViewingType:(long long)arg1 useLatestConfig:(_Bool)arg2;
- (unsigned long long)numberOfLoadedStoryMediaNeededForUnviewedLoadedStateUseLatestConfig:(_Bool)arg1;
- (unsigned long long)numberOfLoadedStoryMediaNeededForLoadedStateUseLatestConfig:(_Bool)arg1;
- (_Bool)isFullyViewed;
- (id)userDisplayName;
- (_Bool)replyEnabledForStory:(id)arg1;
- (_Bool)_shouldDisableSwipeUpToChatOnStory:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)clearExpiredStorySnapsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)resetFriendsStoryStateUseLatestConfig:(_Bool)arg1;
- (void)resetFriendsStoryState;
- (void)removeStoriesWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeStoriesWithClientIds:(id)arg1;
- (unsigned long long)numLoadedSnapsInThreshold:(unsigned long long)arg1;
- (id)unviewedStories;
- (_Bool)containsSharedStory;
- (_Bool)onlyContainsUnviewedStories;
- (_Bool)hasUnviewedStories;
- (_Bool)hasStories;
- (void)fetchStory:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)firstStoryToPlayForViewingType:(long long)arg1;
- (id)storyWithThumbnailToDisplayWithViewingType:(long long)arg1;
- (id)storyForStorySnapId:(id)arg1;
- (unsigned long long)numberOfSnapsRemainingForViewingType:(long long)arg1;
- (long long)_indexOfViewingStory;
- (long long)_indexOfFirstUnviewedStory;
- (id)_mostRecentUnviewedStory;
- (_Bool)_adjustedUserInitiatedWithCurrentUserInitiated:(_Bool)arg1 loadStartIndex:(long long)arg2 loadCurrentIndex:(long long)arg3 loadContext:(long long)arg4;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 startAtIndex:(long long)arg3 loadContext:(long long)arg4 userInitiated:(_Bool)arg5 viewLocation:(long long)arg6;
- (void)fetchMediaForBatch:(unsigned long long)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 userInitiated:(_Bool)arg4 offset:(long long)arg5 viewLocation:(long long)arg6;
- (void)resetMostRecentStoryInfo;
- (void)_updateWithStories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithFriendStories:(id)arg1;
- (void)_handleChangetoStories:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)totalTimeLeftForViewingType:(long long)arg1;
- (double)totalTimeForViewingType:(long long)arg1;
- (void)_removeIndividualStoriesObservers:(id)arg1;
- (void)_addIndividualStoriesObservers:(id)arg1;
- (void)addStoriesObservers;
- (void)didDecodeObject;
- (void)dealloc;
- (id)initWithFriendStories:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetDiskLoadingState;
- (id)initWithCoder:(id)arg1;
- (id)friendsFeedId;
@property(readonly) _Bool isMapStories;
- (_Bool)isShareable;
- (_Bool)canDeleteStorySnaps;
- (_Bool)isSaveable;
- (_Bool)isNormalFriendStories;
- (id)cache;
- (id)initWithStoriesArray:(id)arg1;
- (id)initWithStoriesArray:(id)arg1 shared:(_Bool)arg2;
- (id)initWithoutObservers;
- (id)init;
- (void)incorporateFullManifest:(id)arg1 intoPreviewManifest:(id)arg2 reportedIds:(id)arg3 enableStreaming:(_Bool)arg4 elementsType:(unsigned long long)arg5;
- (id)cellId;
- (long long)storyType;
- (long long)storyTypeSpecific;
- (id)buildPlaceholderLoadingStory;
- (void)removePlaceholderLoadingStory;
- (void)addPlaceholderLoadingStoryWithTotalDuration:(double)arg1;
@property(readonly) unsigned long long hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToFriendStories:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)resetUserStartedViewingStoriesStateUseLatestConfig:(_Bool)arg1;
- (void)setHasUserStartedViewingStories:(_Bool)arg1 forViewingType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
