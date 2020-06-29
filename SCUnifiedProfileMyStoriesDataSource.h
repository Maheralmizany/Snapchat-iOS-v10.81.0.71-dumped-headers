//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EphemeralMediaDelegate-Protocol.h"
#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileStoriesDataSource-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCLazy, SCMyStories, SCQueuePerformer, SCScopedAccess, SCUnifiedProfileMyStoriesHeaderDataModel, SCUpdateListenerAnnouncer, SCUserSession;
@protocol SCStoriesGrapheneMetricsEmitting;

@interface SCUnifiedProfileMyStoriesDataSource : NSObject <SCStoriesModelUpdateListener, EphemeralMediaDelegate, SCTraceEnabled, SCDataCoordinatorListener, SCCustomStoriesUpdateListener, SCUnifiedProfileStoriesDataSource>
{
    SCUserSession *_userSession;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCMyStories *_myStories;
    NSString *_storyHeaderSubtext;
    SCUnifiedProfileMyStoriesHeaderDataModel *_storyHeaderDataModel;
    NSArray *_storyCollectionDataModels;
    SCLazy *_customStoriesFetcher;
    SCLazy *_ourStoriesAttributionManager;
    id <SCStoriesGrapheneMetricsEmitting> _storiesGrapheneMetricsEmitter;
    SCScopedAccess *_scopedSnapProProfileIdProvider;
    SCScopedAccess *_snapchattersDataFetcher;
    _Bool _shouldShowTooltip;
    SCBehaviorSubject *_sectionDataModelSubject;
    NSString *_storyIdentifier;
    long long _storyType;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) NSString *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;
- (void).cxx_destruct;
- (void)_performAndWaitOnDataSourceQueueIfNeeded:(CDUnknownBlockType)arg1;
- (void)_dispatchAnnounceUpdate:(id)arg1;
- (void)ephemeralMediaSendDidFailForMedia:(id)arg1;
- (void)ephemeralMediaSendDidSucceedForMedia:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidStartForMedia:(id)arg1;
- (void)didUpdatePostableStories;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)_setMyStories:(id)arg1;
- (void)_updateMyStoriesWithStoryHeaderSubtext:(id)arg1 shouldShowTooltip:(_Bool)arg2 updatedDisplayName:(id)arg3;
- (void)_handleFetchAndUpdateMyStoriesWithFetchedCustomStory:(id)arg1 customStorySubtext:(id)arg2;
- (void)_updateCustomStoryDescriptionSubtext:(id)arg1 snapchatterByUserId:(id)arg2;
- (void)_handleFetchAndUpdateMyStoriesWithFetchedCustomStory:(id)arg1;
- (void)_fetchAndUpdateMyStoriesOnPerformerWithUpdateCustomStories:(_Bool)arg1;
- (void)_fetchAndUpdateMyStoriesWithUpdateCustomStories:(_Bool)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (_Bool)canSaveStory;
- (void)dismissTooltip;
- (void)_updateMyStoryAutosaveToggleStatus:(long long)arg1;
- (void)updateAutosaveStoryToggleStatus:(long long)arg1;
- (long long)autosaveStoryStatus;
- (id)myStories;
- (id)storiesSectionDataModelObservable;
- (id)initWithUserSession:(id)arg1 type:(long long)arg2 storyIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
