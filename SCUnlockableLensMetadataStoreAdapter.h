//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilteredMetadataStore-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCLensMemoryMapStorage, SCLensMetadataStoreListenerAnnouncer, SCQueuePerformer;
@protocol SCLensFilterProtocol, SCLensUnlockableDataStoreProtocol;

@interface SCUnlockableLensMetadataStoreAdapter : NSObject <SCTraceEnabled, SCLensFilteredMetadataStore>
{
    id <SCLensUnlockableDataStoreProtocol> _unlockableDataStore;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_announcerPerformer;
    SCLensMetadataStoreListenerAnnouncer *_announcer;
    NSArray *_lenses;
    NSArray *_filteredLenses;
    id <SCLensFilterProtocol> _filter;
    long long _notificationSubscriptionOnceToken;
    SCLensMemoryMapStorage *_lensMemoryStorage;
}

@property(retain, nonatomic) SCLensMemoryMapStorage *lensMemoryStorage; // @synthesize lensMemoryStorage=_lensMemoryStorage;
- (void).cxx_destruct;
- (void)_performAnnouncementBlock:(CDUnknownBlockType)arg1;
- (id)_filteredLensesWithStudioPreviewFromFilteredLenses:(id)arg1 allLenses:(id)arg2;
- (void)_updateLenses;
- (void)_unlockedLensesDataStoreDidUpdate:(id)arg1;
- (_Bool)supportsFilteringForAttribute:(unsigned long long)arg1;
- (void)applyFilter:(id)arg1;
- (void)synchronize;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)stopUpdating;
- (void)startUpdatingWithMode:(unsigned long long)arg1;
- (void)warmUp;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUnlockableDataStore:(id)arg1 announcerPerformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
