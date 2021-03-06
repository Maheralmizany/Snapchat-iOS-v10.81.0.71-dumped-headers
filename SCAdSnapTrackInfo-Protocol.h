//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SCAdSnapTrackInfo <NSObject>
@property(readonly, nonatomic) double adFirstRenderTimestamp;
@property(readonly, nonatomic) long long deltaInMillis;
@property(readonly, nonatomic) NSArray *collectionItemInteractions;
@property(readonly, copy, nonatomic) NSString *deepLinkURI;
@property(readonly, nonatomic) long long deepLinkFallBackToAppStoreCount;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview;
@property(readonly, nonatomic) long long deepLinkFromCardCount;
@property(readonly, copy, nonatomic) NSNumber *webViewInitialPageLoadStatusCode;
@property(readonly, nonatomic) _Bool isPixelCookieAvailable;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds;
@property(readonly, nonatomic) _Bool loadedOnExit;
@property(readonly, nonatomic) _Bool loadedOnEntry;
@property(readonly, nonatomic) long long longformReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long longformMediaDurationMillis;
@property(readonly, nonatomic) double longformMaxViewedDurationInMillis;
@property(readonly, nonatomic) long long topSnapReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapUnCappedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapCappedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapTimeViewedMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationMillis;
@property(readonly, nonatomic) NSArray *maxMediaVolumeForMediaPlayback;
@property(readonly, nonatomic) NSArray *audioQuadrantStates;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) unsigned long long swipeCount;
@property(readonly, copy, nonatomic) NSString *skipEvent;
@property(readonly, nonatomic) long long snapIndex;
@property(readonly, nonatomic) long long adType;
@property(readonly, copy, nonatomic) NSString *adKey;
@end

