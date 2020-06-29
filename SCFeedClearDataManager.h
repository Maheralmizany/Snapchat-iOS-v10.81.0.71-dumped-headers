//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedClearDataManaging-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDisposableObserverLifecycle, SCLazy, SCPreferences;
@protocol SCPerforming;

@interface SCFeedClearDataManager : NSObject <SCFeedClearDataManaging>
{
    SCPreferences *_userPreferences;
    id <SCPerforming> _performer;
    unsigned long long _syncedSources;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCLazy *_remoteFetcher;
    SCDisposableObserverLifecycle *_observerLifecycle;
    _Bool _shouldClearFeed;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_fetchGroupsFromServer;
- (void)_handleFeedClearDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)setDataWipes:(id)arg1;
- (void)setRemoteGroupFetcher:(id)arg1;
- (void)_loadUserPreferenceIntoMemory;
- (_Bool)_shouldClearDataBasedOnUserPreference;
- (_Bool)shouldClearDataForDataSource:(unsigned long long)arg1;
- (id)initWithUserPreferences:(id)arg1 performer:(id)arg2;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
