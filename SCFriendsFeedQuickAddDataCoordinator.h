//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSString, SCDataCoordinatorListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedQuickAddDataCoordinator : NSObject <SCSnapchattersDataRequestListener, SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCLazy *_dataFetcher;
    SCLazy *_dataTracker;
    SCQueuePerformer *_performer;
    NSArray *_cachedSnapchatters;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_refreshAndAnnounce;
- (void)quickAddSectionDataSnapchattersForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracking:(id)arg2;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

