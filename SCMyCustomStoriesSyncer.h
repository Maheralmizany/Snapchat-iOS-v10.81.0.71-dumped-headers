//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesUpdateListener-Protocol.h"

@class NSMutableSet, NSString, SCGroupStoryCollection, SCLazy, SCMyContributionStoriesCollection, SCQueuePerformer, SCStoriesUnarchiver;
@protocol SCStoriesGrapheneMetricsEmitting;

@interface SCMyCustomStoriesSyncer : NSObject <SCCustomStoriesUpdateListener>
{
    SCMyContributionStoriesCollection *_myStoriesCollection;
    SCGroupStoryCollection *_groupStoryCollection;
    SCLazy *_docObjectContext;
    SCStoriesUnarchiver *_storiesUnarchiver;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    NSString *_currentUserId;
    NSMutableSet *_missingMetadataCustomStoryIds;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)didUpdatePostableStories;
- (void)_handleCustomStoriesUpdateWithPublicationIds:(id)arg1;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)_updateMyCumtomStoriesWithCustomStoriesFromFriendStoriesStorage:(id)arg1;
- (void)_syncMyCustomStoriesWithCustomStoryPlaybackSequenceFetchResult:(id)arg1;
- (void)_syncMyCustomStoriesWithStoryIds:(id)arg1;
- (void)syncMyCustomStoriesWithStoryIds:(id)arg1;
- (void)_syncMyCustomStories;
- (void)syncMyCustomStories;
- (id)initWithMyStoriesCollection:(id)arg1 groupStoryCollection:(id)arg2 customStoriesDataFetcher:(id)arg3 docObjectContext:(id)arg4 storiesUnarchiver:(id)arg5 grapheneMetricsEmitter:(id)arg6 currentUserId:(id)arg7;

@end

