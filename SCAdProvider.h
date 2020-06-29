//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCAdResponseCache, SCUserSession;

@interface SCAdProvider : NSObject <SCUserSessionScoped>
{
    SCAdResponseCache *_adResponseCache;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)cacheUnviewedAdData:(id)arg1;
- (void)_logCacheHit:(_Bool)arg1 adProductType:(unsigned long long)arg2;
- (void)_logPublisherMultiAuctionResponse:(long long)arg1 receivedAdResponseCount:(long long)arg2 adProductType:(unsigned long long)arg3;
- (void)_logMultiAuctionAdResponseMetrics:(id)arg1 adRequestClientIds:(id)arg2 adProductType:(unsigned long long)arg3;
- (void)_handleAdFetchedFailure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleAdFetchedSuccessWithResponses:(id)arg1 targetingParameters:(id)arg2 adRequestClientIds:(id)arg3 adProductType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleErrorResponse:(id)arg1 predefinedAdRequestClientIdList:(id)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_handleAdResponses:(id)arg1 targetingParametersList:(id)arg2 adsPreferences:(id)arg3 adProductType:(unsigned long long)arg4 loggingContext:(id)arg5 isFromShowPage:(_Bool)arg6 predefinedAdRequestClientIdList:(id)arg7 engagement:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (void)_adWithTargetingParametersList:(id)arg1 adsPreferences:(id)arg2 adProductType:(unsigned long long)arg3 loggingContext:(id)arg4 isFromShowPage:(_Bool)arg5 predefinedAdRequestClientIdList:(id)arg6 engagement:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)adWithTargetingParametersList:(id)arg1 adsPreferences:(id)arg2 adProductType:(unsigned long long)arg3 loggingContext:(id)arg4 isFromShowPage:(_Bool)arg5 predefinedAdRequestClientIdList:(id)arg6 engagement:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)adWithTargetingParameters:(id)arg1 adsPreferences:(id)arg2 adProductType:(unsigned long long)arg3 loggingContext:(id)arg4 isFromShowPage:(_Bool)arg5 predefinedAdRequestClientId:(id)arg6 engagement:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

