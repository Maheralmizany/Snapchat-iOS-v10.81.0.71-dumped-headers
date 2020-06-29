//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAdRecentViewReceipts, SCSnapAdsRequestInfoProvider, SCSnapAdsSerializingNetworkManager, SCSnapAdsServeResponseDataStore;
@protocol SCSnapAdsConfigAdapter, SCSnapAdsOperationMetricsAdapter;

@interface SCSnapAdsAdTracker : NSObject
{
    _Bool _isPrimary;
    SCSnapAdsRequestInfoProvider *_requestInfoProvider;
    id <SCSnapAdsConfigAdapter> _configAdapter;
    SCSnapAdsServeResponseDataStore *_serveResponseDataStore;
    SCAdRecentViewReceipts *_recentViewReceipts;
    SCSnapAdsSerializingNetworkManager *_networkManager;
    id <SCSnapAdsOperationMetricsAdapter> _metricsManager;
}

@property(readonly, nonatomic) __weak id <SCSnapAdsOperationMetricsAdapter> metricsManager; // @synthesize metricsManager=_metricsManager;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) SCSnapAdsSerializingNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(readonly, nonatomic) SCAdRecentViewReceipts *recentViewReceipts; // @synthesize recentViewReceipts=_recentViewReceipts;
@property(readonly, nonatomic) SCSnapAdsServeResponseDataStore *serveResponseDataStore; // @synthesize serveResponseDataStore=_serveResponseDataStore;
@property(readonly, nonatomic) __weak id <SCSnapAdsConfigAdapter> configAdapter; // @synthesize configAdapter=_configAdapter;
@property(readonly, nonatomic) SCSnapAdsRequestInfoProvider *requestInfoProvider; // @synthesize requestInfoProvider=_requestInfoProvider;
- (void).cxx_destruct;
- (void)_handelNetworkResponse:(id)arg1 responseData:(id)arg2 adDemandType:(long long)arg3 error:(id)arg4 request:(id)arg5 requestStartTimestamp:(double)arg6;
- (void)_submitTrackRequest:(id)arg1 debugViewContext:(id)arg2 adDemandType:(long long)arg3;
- (void)_trackProtoSnapAd:(id)arg1 adResponse:(id)arg2 trackSequenceNumber:(long long)arg3;
- (void)trackSnapAd:(id)arg1;
- (id)initWithRequestInfoProvider:(id)arg1 configAdapter:(id)arg2 serveResponseDataStore:(id)arg3 networkManager:(id)arg4 recentViewReceipts:(id)arg5 isPrimary:(_Bool)arg6 metricsManager:(id)arg7;

@end
