//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCAdResponseAdDataV2, SCAdTargetingParameters, SCAdsAdRenderData, SCAdsInitResponse, SCSnapAdsAdServeRequest, SCSnapAdsIdentifier;

@protocol SCSnapAdsOperationMetricsAdapter <NSObject>
- (void)logGetDiskDataLatencyInSec:(double)arg1;
- (void)logGetBatteryDataLatencyInSec:(double)arg1;
- (void)logPetraServeResponseSize:(unsigned long long)arg1;
- (void)logPetraThirdPartyURLIssue:(long long)arg1 trackURLType:(long long)arg2 triggerType:(long long)arg3;
- (void)logPetraClickURLUpdate:(_Bool)arg1 latencyInSec:(double)arg2;
- (void)logPetraImpURLUpdate:(_Bool)arg1 latencyInSec:(double)arg2;
- (void)logPetraRequestSize:(unsigned long long)arg1 requestLatencyInSec:(double)arg2 requestStatusCode:(long long)arg3 requestType:(unsigned long long)arg4 adProductType:(unsigned long long)arg5;
- (void)logPetraSignalIssue:(long long)arg1;
- (void)logPetraSignalFetch:(_Bool)arg1 latencyInSec:(double)arg2 adProductType:(unsigned long long)arg3;
- (void)logPetraSigGenCacheStatus:(long long)arg1;
- (void)logPetraSDKSigGen:(_Bool)arg1 latencyInSec:(double)arg2 isFirstSignal:(_Bool)arg3;
- (void)logPixelTokenFetchLatency:(double)arg1 statusCode:(long long)arg2;
- (void)logInitEndpointCOFFetchLatency:(double)arg1 isPrimary:(_Bool)arg2;
- (void)logInitResponseIssue:(long long)arg1;
- (void)logInitRequestIssue:(long long)arg1 isPrimary:(_Bool)arg2;
- (void)initRequestResolved:(double)arg1 statusCode:(long long)arg2 allUpdatesDeprecationEnabled:(_Bool)arg3 isPrimary:(_Bool)arg4;
- (void)logSnapTokenFailedToGenerate:(_Bool)arg1;
- (void)logSnapTokenGenerationLatencyInSec:(double)arg1 isPrimary:(_Bool)arg2;
- (void)logInitResponse:(SCAdsInitResponse *)arg1 isPrimary:(_Bool)arg2;
- (void)trackRequestSubmitted:(SCAdResponseAdDataV2 *)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestResolved:(SCSnapAdsAdServeRequest *)arg1 statusCode:(long long)arg2 requestLatencyInSec:(double)arg3 enableAllUpdatedDeprecation:(_Bool)arg4 newEUDEligible:(_Bool)arg5 isPrimary:(_Bool)arg6;
- (void)serverItemResponseIsAdRenderData:(_Bool)arg1 isPrimary:(_Bool)arg2;
- (void)serveInventoryResultInconsistent:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)serveItemsMoreThanRequested:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseResolved:(SCAdResponseAdDataV2 *)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseReceived:(SCAdsAdRenderData *)arg1 adIdentifier:(SCSnapAdsIdentifier *)arg2 isPrimary:(_Bool)arg3;
- (void)serveResponseFinishesDeserializing:(unsigned long long)arg1 responseSize:(long long)arg2 deserializationLatency:(double)arg3 serveItemsCount:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveResponseStartsDeserializing:(SCSnapAdsAdServeRequest *)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestFailed:(SCSnapAdsAdServeRequest *)arg1 errorResponseType:(unsigned long long)arg2 requestType:(unsigned long long)arg3 failedReason:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveRequestSubmitted:(SCSnapAdsAdServeRequest *)arg1 requestURL:(NSString *)arg2 requestType:(unsigned long long)arg3 debugViewContext:(NSString *)arg4 isPrimary:(_Bool)arg5;
- (void)logAdvertiserIdStatus:(NSString *)arg1 requestType:(unsigned long long)arg2 isPrimary:(_Bool)arg3;
- (void)requestResolvedAdIdentifiers:(NSArray *)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(NSString *)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7 requestSize:(unsigned long long)arg8 responseSize:(unsigned long long)arg9;
- (void)requestResolvedAdIdentifiers:(NSArray *)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(NSString *)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
- (void)logRequestFailedReason:(long long)arg1 adIdentifier:(SCSnapAdsIdentifier *)arg2 requestType:(unsigned long long)arg3 isPrimary:(_Bool)arg4;
- (void)requestSubmittedAdIdentifier:(SCSnapAdsIdentifier *)arg1 requestType:(unsigned long long)arg2 requestURL:(NSString *)arg3 targetingParams:(SCAdTargetingParameters *)arg4 debugViewContext:(NSString *)arg5 isPrimary:(_Bool)arg6;
@end

