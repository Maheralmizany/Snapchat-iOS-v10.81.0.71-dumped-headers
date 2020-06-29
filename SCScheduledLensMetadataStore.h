//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensMetadataStoreUpdating-Protocol.h"
#import "SCLensScheduleRequestProviderDelegate-Protocol.h"
#import "SCScheduledLensControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCArchiveUtils, SCDisposableObserverLifecycle, SCExperimentManager, SCLensMetadataFetcher, SCQueuePerformer, SCScheduledLensController, SCScheduledLensMetadataStoreListenerAnnouncer, SCSessionRequestManager;
@protocol SCLensUserProvider;

@interface SCScheduledLensMetadataStore : NSObject <SCUserSessionScoped, SCScheduledLensControllerDelegate, SCTraceEnabled, SCLensScheduleRequestProviderDelegate, SCLensMetadataStoreUpdating>
{
    NSArray *_scheduledLenses;
    NSArray *_scheduledRearLenses;
    SCQueuePerformer *_performer;
    SCScheduledLensMetadataStoreListenerAnnouncer *_announcer;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCExperimentManager *_experimentManager;
    SCLensMetadataFetcher *_scheduledLensDataFetcher;
    SCScheduledLensController *_scheduledLensController;
    SCSessionRequestManager *_requestManager;
    id <SCLensUserProvider> _lensUserProvider;
    SCArchiveUtils *_archiveUtils;
}

+ (unsigned long long)_fetchTypeFromUpdatingMode:(unsigned long long)arg1;
+ (void)removeSavedStateWithArchiveUtils:(id)arg1;
+ (id)storeFromSavedStateWithRequestManager:(id)arg1 lensUserProvider:(id)arg2 archiveUtils:(id)arg3 lensMetadataStoreEvents:(id)arg4 experimentManager:(id)arg5;
@property(retain, nonatomic) SCArchiveUtils *archiveUtils; // @synthesize archiveUtils=_archiveUtils;
@property(retain, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCScheduledLensController *scheduledLensController; // @synthesize scheduledLensController=_scheduledLensController;
@property(retain, nonatomic) SCLensMetadataFetcher *scheduledLensDataFetcher; // @synthesize scheduledLensDataFetcher=_scheduledLensDataFetcher;
- (void).cxx_destruct;
- (void)_collectCachedDataSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronize;
- (void)_fetchDataIfNeededWithNextScheduleFetchDate:(id)arg1 updatingMode:(unsigned long long)arg2;
- (void)stopUpdating;
- (void)startUpdatingWithMode:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clear;
- (id)rearLensIdToChecksumMapForRequestProvider:(id)arg1;
- (id)lensIdToChecksumMapForRequestProvider:(id)arg1;
- (void)scheduledLensController:(id)arg1 didUpdatePreCachedData:(id)arg2;
- (void)scheduledLensController:(id)arg1 didUpdateActiveData:(id)arg2 activeRearData:(id)arg3 preselectedLensId:(id)arg4;
- (void)_subscribeForMetadataStoreEvents:(id)arg1;
- (void)restoreSavedState;
- (void)saveState;
- (void)_ensureNonNilObjectsWithState:(id)arg1;
- (id)initWithRequestManager:(id)arg1 lensUserProvider:(id)arg2 archiveUtils:(id)arg3 lensMetadataStoreEvents:(id)arg4 experimentManager:(id)arg5;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
