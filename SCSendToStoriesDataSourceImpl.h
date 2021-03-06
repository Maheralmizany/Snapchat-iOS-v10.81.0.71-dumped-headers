//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSendToStoriesDataSource-Protocol.h"

@class NSString, SCDataHandler, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCExperimentManager, SCLazy, SCQueuePerformer, SCSelectRecipientsConfiguration;
@protocol OS_dispatch_queue, SCCanceling;

@interface SCSendToStoriesDataSourceImpl : NSObject <SCCustomStoriesUpdateListener, SCEventListener, SCSendToStoriesDataSource>
{
    SCLazy *_customStoriesDataFetcher;
    SCLazy *_appStoryDataCoordinator;
    SCDataHandler *_businessProfileDataHandler;
    SCSelectRecipientsConfiguration *_recipientsConfiguration;
    SCLazy *_snapchattersDataFetcher;
    NSString *_businessHostAccountId;
    NSString *_ourStorySubtext;
    long long _storyPrivacy;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSObject<OS_dispatch_queue> *_announceQueue;
    id <SCCanceling> _businessProfilesObserver;
    SCDisposableObserverLifecycle *_subscription;
    SCQueuePerformer *_performer;
    SCExperimentManager *_experimentManager;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_announceStoriesUpdate;
- (void)didUpdatePostableStories;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)_postableCustomStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isBusinessHostAccount;
- (void)_appendBusinesssStoryDataModels:(id)arg1 toOutputDataModels:(id)arg2;
- (long long)_sendToSelectionItemTypeForCustomStoryType:(long long)arg1;
- (id)_filterStoryDataModels:(id)arg1 query:(id)arg2;
- (_Bool)_shouldShowMyStoryCustom;
- (_Bool)_shouldShowMyStoryFriendsOnly;
- (_Bool)_shouldShowMyStory;
- (_Bool)_shouldShowMyStoryTitle:(id)arg1 query:(id)arg2;
- (void)_fetchAppStoriesWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mapCustomStoryToSendToModel:(id)arg1;
- (void)_processPostableCustomStories:(id)arg1 query:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchHighPriCustomStoriesWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCustomStoriesWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchLiveStoriesWithQuery:(id)arg1 ourStorySubtext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_fetchBusinessStoriesWithQuery:(id)arg1;
- (id)fetchBusinessStoriesWithBusinessIds:(id)arg1;
- (void)fetchAppStoriesWithAppIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPostableCustomStoryWithCustomStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPostableOurStoriesWithOurStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_buildWithMutableResults:(id)arg1 finalViewMoreTheshhold:(unsigned long long)arg2 businessStories:(id)arg3 liveStories:(id)arg4 highPriorityCustomStories:(id)arg5 lowPriorityCustomStories:(id)arg6 appStories:(id)arg7 fetchStartTime:(double)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_fetchPostableStoriesWithQuery:(id)arg1 shouldGenerateModels:(_Bool)arg2 includeOurStories:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)_fetchPostableCommunitySnapsWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)fetchPostableStoriesWithQuery:(id)arg1 includeOurStories:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)fetchPostableCommunitySnapsWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)fetchStoriesViewMoreThresholdWithCompletion:(CDUnknownBlockType)arg1 includeOurStories:(_Bool)arg2 completionQueue:(id)arg3;
- (id)getAppStoriesDataCoordinator;
- (void)_handleUpdatedOurStorySubtext:(id)arg1;
- (void)_performHandleUpdatedOurStorySubtext:(id)arg1;
- (void)dealloc;
- (id)initWithCustomStoriesDataFetcher:(id)arg1 appStoryDataCoordinator:(id)arg2 businessHostAccountId:(id)arg3 storyPrivacy:(long long)arg4 businessProfileDataHandler:(id)arg5 recipientsConfiguration:(id)arg6 snapchattersDataFetcher:(id)arg7 ourStorySubtextObservable:(id)arg8 experimentManager:(id)arg9;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

