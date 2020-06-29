//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataFetcherFactory-Protocol.h"
#import "SCLensMainDataFetcherStorage-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCExperimentManager, SCFeatureSettingsService, SCLensCacheClearTracker, SCLensDataDiskSpaceTracker, SCLensDataFetcher, SCLensDataFetcherEventsTracker, SCLensDownloadOperationFactory, SCLensDownloadTracker, SCLensLoadingConcurrencyResolver, SCLensURLDataFetcher;
@protocol SCLensIconInMemoryCache, SCLensUserProvider, SCPerforming;

@interface SCLensDataFetcherFactory : NSObject <SCUserSessionScoped, SCLensMainDataFetcherStorage, SCLensDataFetcherFactory>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCLensDownloadTracker *_downloadTracker;
    SCLensCacheClearTracker *_cacheClearTracker;
    SCLensURLDataFetcher *_urlDataFetcher;
    SCLensDownloadOperationFactory *_operationsFactory;
    id <SCLensUserProvider> _lensUserProvider;
    SCExperimentManager *_experimentManager;
    SCLensDataDiskSpaceTracker *_diskTracker;
    unsigned long long _maxConcurrentRequestsCount;
    SCLensLoadingConcurrencyResolver *_warmupConcurrencyResolver;
    SCLensLoadingConcurrencyResolver *_lensContentConcurrencyResolver;
    SCLensLoadingConcurrencyResolver *_lensIconConcurrencyResolver;
    SCLensLoadingConcurrencyResolver *_lensAssetConcurrencyResolver;
    SCLensLoadingConcurrencyResolver *_lensOverlayConcurrencyResolver;
    id <SCPerforming> _performer;
    SCLensDataFetcherEventsTracker *_eventsTracker;
    id <SCLensIconInMemoryCache> _lensIconInMemoryCache;
    SCLensDataFetcher *_cachedMainDataFetcher;
}

- (void).cxx_destruct;
- (id)lensOverlayConcurrencyResolver;
- (id)lensAssetConcurrencyResolver;
- (id)lensIconConcurrencyResolver;
- (id)lensContentConcurrencyResolver;
- (id)warmupConcurrencyResolver;
- (void)reset;
- (id)lensDataFetcherWithStrategyFactory:(id)arg1 lensDataFetcherUIState:(id)arg2;
@property(readonly, nonatomic) SCLensDataFetcher *cachedMainDataFetcher;
- (id)initWithFeatureSettingsService:(id)arg1 downloadTracker:(id)arg2 cacheClearTracker:(id)arg3 urlDataFetcher:(id)arg4 operationsFactory:(id)arg5 lensUserProvider:(id)arg6 lensIconInMemoryCache:(id)arg7 experimentManager:(id)arg8;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
