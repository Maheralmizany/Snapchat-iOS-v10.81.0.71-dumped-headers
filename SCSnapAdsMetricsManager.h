//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsAdRenderDataParserMetricsAdapter-Protocol.h"
#import "SCSnapAdsOperationMetricsAdapter-Protocol.h"

@class NSString, SCAdNetworkDebugViewer, SCAdNetworkResponseLogger, SCAdViewDebugViewer, SCSnapAdsAdLifecycleWatermarkEventsTracker;

@interface SCSnapAdsMetricsManager : NSObject <SCSnapAdsOperationMetricsAdapter, SCSnapAdsAdRenderDataParserMetricsAdapter>
{
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_adLifecycleTracker;
    SCAdNetworkDebugViewer *_networkDebugViewer;
    SCAdViewDebugViewer *_adViewDebugViewer;
    SCAdNetworkResponseLogger *_networkResponseLogger;
    _Bool _enableDebugViewer;
}

- (void).cxx_destruct;
- (void)logGetDiskDataLatencyInSec:(double)arg1;
- (void)logGetBatteryDataLatencyInSec:(double)arg1;
- (void)_requestSubmittedAdIdentifiers:(id)arg1 requestType:(unsigned long long)arg2 requestURL:(id)arg3 targetingParams:(id)arg4 debugViewContext:(id)arg5 isPrimary:(_Bool)arg6;
- (void)_requestResolved:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestLatencyInSec:(double)arg4 isPrimary:(_Bool)arg5;
- (void)_createDebugViewer;
- (void)_enableDebugToolsIfNecessary;
- (void)logPetraClickURLUpdate:(_Bool)arg1 latencyInSec:(double)arg2;
- (void)logPetraImpURLUpdate:(_Bool)arg1 latencyInSec:(double)arg2;
- (void)logPetraThirdPartyURLIssue:(long long)arg1 trackURLType:(long long)arg2 triggerType:(long long)arg3;
- (void)logPetraServeResponseSize:(unsigned long long)arg1;
- (void)logPetraRequestSize:(unsigned long long)arg1 requestLatencyInSec:(double)arg2 requestStatusCode:(long long)arg3 requestType:(unsigned long long)arg4 adProductType:(unsigned long long)arg5;
- (void)logPetraSignalIssue:(long long)arg1;
- (void)logPetraSignalFetch:(_Bool)arg1 latencyInSec:(double)arg2 adProductType:(unsigned long long)arg3;
- (void)logPetraSigGenCacheStatus:(long long)arg1;
- (void)logPetraSDKSigGen:(_Bool)arg1 latencyInSec:(double)arg2 isFirstSignal:(_Bool)arg3;
- (void)logPixelTokenFetchLatency:(double)arg1 statusCode:(long long)arg2;
- (void)logInitEndpointCOFFetchLatency:(double)arg1 isPrimary:(_Bool)arg2;
- (void)logInitResponseIssue:(long long)arg1;
- (void)logInitRequestIssue:(long long)arg1 isPrimary:(_Bool)arg2;
- (void)logSnapTokenGenerationLatencyInSec:(double)arg1 isPrimary:(_Bool)arg2;
- (void)logSnapTokenFailedToGenerate:(_Bool)arg1;
- (void)initRequestResolved:(double)arg1 statusCode:(long long)arg2 allUpdatesDeprecationEnabled:(_Bool)arg3 isPrimary:(_Bool)arg4;
- (void)logInitResponse:(id)arg1 isPrimary:(_Bool)arg2;
- (void)logDataInvalid:(unsigned long long)arg1 isPrimaryAdResponse:(_Bool)arg2;
- (id)_stringContextFromEnum:(unsigned long long)arg1;
- (void)adExpired:(id)arg1;
- (void)serverItemResponseIsAdRenderData:(_Bool)arg1 isPrimary:(_Bool)arg2;
- (void)serveInventoryResultInconsistent:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)logAdvertiserIdStatus:(id)arg1 requestType:(unsigned long long)arg2 isPrimary:(_Bool)arg3;
- (void)requestResolvedAdIdentifiers:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(id)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
- (void)requestResolvedAdIdentifiers:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(id)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7 requestSize:(unsigned long long)arg8 responseSize:(unsigned long long)arg9;
- (void)requestSubmittedAdIdentifier:(id)arg1 requestType:(unsigned long long)arg2 requestURL:(id)arg3 targetingParams:(id)arg4 debugViewContext:(id)arg5 isPrimary:(_Bool)arg6;
- (void)logRequestFailedReason:(long long)arg1 adIdentifier:(id)arg2 requestType:(unsigned long long)arg3 isPrimary:(_Bool)arg4;
- (void)trackRequestSubmitted:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestResolved:(id)arg1 statusCode:(long long)arg2 requestLatencyInSec:(double)arg3 enableAllUpdatedDeprecation:(_Bool)arg4 newEUDEligible:(_Bool)arg5 isPrimary:(_Bool)arg6;
- (void)serveItemsMoreThanRequested:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseResolved:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseReceived:(id)arg1 adIdentifier:(id)arg2 isPrimary:(_Bool)arg3;
- (void)serveResponseFinishesDeserializing:(unsigned long long)arg1 responseSize:(long long)arg2 deserializationLatency:(double)arg3 serveItemsCount:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveResponseStartsDeserializing:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestFailed:(id)arg1 errorResponseType:(unsigned long long)arg2 requestType:(unsigned long long)arg3 failedReason:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveRequestSubmitted:(id)arg1 requestURL:(id)arg2 requestType:(unsigned long long)arg3 debugViewContext:(id)arg4 isPrimary:(_Bool)arg5;
@property(readonly, nonatomic) SCSnapAdsAdLifecycleWatermarkEventsTracker *adLifecycleTracker;
- (id)initWithAdLifeCycleTracker:(id)arg1;
- (id)initWithEnableDebugViewerIfNecessary:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

