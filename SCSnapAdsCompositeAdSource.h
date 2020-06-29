//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAdSource-Protocol.h"

@class NSString, SCSnapAdsAdSource;
@protocol SCSnapAdsConfigAdapter;

@interface SCSnapAdsCompositeAdSource : NSObject <SCAdSource>
{
    _Bool _isShadowEnabled;
    SCSnapAdsAdSource *_primary;
    SCSnapAdsAdSource *_shadow;
    id <SCSnapAdsConfigAdapter> _configAdapter;
}

@property(readonly, nonatomic) __weak id <SCSnapAdsConfigAdapter> configAdapter; // @synthesize configAdapter=_configAdapter;
@property(nonatomic) _Bool isShadowEnabled; // @synthesize isShadowEnabled=_isShadowEnabled;
@property(retain, nonatomic) SCSnapAdsAdSource *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) SCSnapAdsAdSource *primary; // @synthesize primary=_primary;
- (void).cxx_destruct;
- (void)adExpired:(id)arg1;
- (void)track:(id)arg1;
- (void)request:(id)arg1;
- (void)initializeWithMetadata:(id)arg1 allUpdatesCompositeAdSourceConfig:(id)arg2;
- (id)initWithPrimaryNetworkManager:(id)arg1 shadowNetworkManager:(id)arg2 pixelTrackingCookieManager:(id)arg3 requestInfoProvider:(id)arg4 primayServeResponseDataStore:(id)arg5 shadowServeResponseDataStore:(id)arg6 persistedDataAdapter:(id)arg7 configAdapter:(id)arg8 networkMetricsManager:(id)arg9 renderDataParserMetricsManager:(id)arg10 snapTokenManager:(id)arg11 petraSignalProvider:(id)arg12 petraWhitelistedPublisherList:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
