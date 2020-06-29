//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSMutableSet, NSString, SCLazy, SCQueuePerformer;
@protocol SCFriendsFeedDataCoordinating, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesFriendsFeedUpdateMonitor : NSObject <SCDataCoordinatorListener>
{
    id <SCFriendsFeedDataCoordinating> _friendsFeedDataCoordinator;
    SCLazy *_storiesDataCoordinator;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricEmitter;
    SCQueuePerformer *_performer;
    NSMutableSet *_unidirectionalFriends;
}

- (void).cxx_destruct;
- (void)_handleFriendsFeedsChange:(_Bool)arg1 loggingPrefix:(id)arg2;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithFriendsFeedDataCoordinator:(id)arg1 storiesDataCoordinator:(id)arg2 grapheneMetricEmitter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

