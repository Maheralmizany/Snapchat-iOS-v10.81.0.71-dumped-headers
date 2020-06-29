//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SCQueuePerformer, SCSnapAdsAdSourceConfig, SCSnapAdsPixelTrackingCookieManager, SCSnapAdsRequestInfoProvider, SCSnapAdsSerializingNetworkManager;
@protocol SCPetraSignalProvider, SCSnapAdsConfigAdapter, SCSnapAdsOperationMetricsAdapter, SCSnapAdsPersistedDataAdapter, SCSnapAdsSnapTokenAdapter;

@interface SCSnapAdsInitializer : NSObject
{
    SCQueuePerformer *_performer;
    NSNumber *_lastInitUpdateTimestampInSec;
    _Bool _isPrimary;
    SCSnapAdsAdSourceConfig *_adSourceConfig;
    NSString *_sessionId;
    SCSnapAdsRequestInfoProvider *_requestInfoProvider;
    SCSnapAdsSerializingNetworkManager *_networkManager;
    SCSnapAdsPixelTrackingCookieManager *_pixelTrackingCookieManager;
    id <SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
    id <SCSnapAdsOperationMetricsAdapter> _metricsManager;
    id <SCSnapAdsConfigAdapter> _configAdapter;
    id <SCSnapAdsSnapTokenAdapter> _snapTokenAdapter;
    id <SCPetraSignalProvider> _petraSignalProvider;
}

@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) __weak id <SCPetraSignalProvider> petraSignalProvider; // @synthesize petraSignalProvider=_petraSignalProvider;
@property(readonly, nonatomic) __weak id <SCSnapAdsSnapTokenAdapter> snapTokenAdapter; // @synthesize snapTokenAdapter=_snapTokenAdapter;
@property(readonly, nonatomic) __weak id <SCSnapAdsConfigAdapter> configAdapter; // @synthesize configAdapter=_configAdapter;
@property(readonly, nonatomic) __weak id <SCSnapAdsOperationMetricsAdapter> metricsManager; // @synthesize metricsManager=_metricsManager;
@property(readonly, nonatomic) __weak id <SCSnapAdsPersistedDataAdapter> persistedDataAdapter; // @synthesize persistedDataAdapter=_persistedDataAdapter;
@property(readonly, nonatomic) SCSnapAdsPixelTrackingCookieManager *pixelTrackingCookieManager; // @synthesize pixelTrackingCookieManager=_pixelTrackingCookieManager;
@property(readonly, nonatomic) SCSnapAdsSerializingNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(readonly, nonatomic) SCSnapAdsRequestInfoProvider *requestInfoProvider; // @synthesize requestInfoProvider=_requestInfoProvider;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SCSnapAdsAdSourceConfig *adSourceConfig; // @synthesize adSourceConfig=_adSourceConfig;
- (void).cxx_destruct;
- (void)_handleSnapTokenFetchFailure:(id)arg1;
- (void)_initWithAllUpdatedDeprecationEnabled:(id)arg1 defaultAdSourceConfig:(id)arg2 initEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateLastInitRequestTimestampHelper:(double)arg1;
- (void)_updateLastInitRequestTimestamp:(double)arg1;
- (void)_saveAndPersistAdSourceConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleInitResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleNetworkResponse:(id)arg1 error:(id)arg2 responseStatusCode:(long long)arg3 requestEndpoint:(id)arg4 requestStartTimestamp:(double)arg5 requestSize:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_initWithMetadata:(id)arg1 defaultAdSourceConfig:(id)arg2 initEndpoint:(id)arg3 snapToken:(id)arg4 snapTokenFetchingLatencyInSec:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_initWithMetadata:(id)arg1 allUpdatesAdSourceConfig:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initializeWithMetadata:(id)arg1 allUpdatesAdSourceConfig:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestInfoProvider:(id)arg1 configAdapter:(id)arg2 networkManager:(id)arg3 pixelTrackingCookieManager:(id)arg4 persistedDataAdapter:(id)arg5 metricsManager:(id)arg6 snapTokenAdapter:(id)arg7 petraSignalProvider:(id)arg8 isPrimary:(_Bool)arg9;

@end
