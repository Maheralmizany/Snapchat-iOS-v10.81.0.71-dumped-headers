//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCStoriesCachedSummaryInfoProviding-Protocol.h"

@class NSDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCLazy, SCMyStories, SCQueuePerformer;

@interface SCStoriesCachedSummaryInfoProvider : NSObject <SCDataCoordinatorListener, SCStoriesCachedSummaryInfoProviding>
{
    NSString *_currentUserId;
    SCMyStories *_myStories;
    SCLazy *_storiesDataCoordinator;
    NSDictionary *_summaries;
    SCQueuePerformer *_announcePerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSDictionary *_lastAnnouncedSummaries;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_handleFetchedSummaries:(id)arg1;
- (void)_updateSummaries;
- (id)storiesSummaryInfoForStoryId:(id)arg1;
- (void)warmUpCache;
- (id)initWithStoriesDataCoordinator:(id)arg1 legacyStories:(id)arg2 currentUserId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

