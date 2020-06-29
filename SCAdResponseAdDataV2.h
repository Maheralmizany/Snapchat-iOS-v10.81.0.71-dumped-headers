//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, SCAdMediaStoryAd, SCAdServeLoggingContext, SCAdTargetingParameters, SCSnapAdsIdentifier, SCThirdPartyTrackInfo;

@interface SCAdResponseAdDataV2 : NSObject <NSCopying, NSCoding>
{
    _Bool _isValid;
    double _resolvedTimeStampMillis;
    double _expireTimeStampMillis;
    unsigned long long _adProductType;
    SCSnapAdsIdentifier *_identifier;
    NSString *_adId;
    NSString *_serveItemId;
    NSString *_lineItemId;
    NSString *_adServeRequestId;
    long long _adType;
    NSArray *_adSnapArray;
    NSArray *_thirdPartyImpressionTrackUrls;
    NSArray *_thirdPartyImpressionClickUrls;
    SCAdMediaStoryAd *_storyAd;
    SCAdServeLoggingContext *_serveLoggingContext;
    SCAdTargetingParameters *_targetingParameters;
    NSData *_adRenderData;
    NSString *_rawUserData;
    NSString *_rawAdData;
    NSString *_protoTrackURL;
    NSData *_viewReceipt;
    long long _adDemandType;
    SCThirdPartyTrackInfo *_thirdPartyTrackInfo;
}

@property(readonly, copy, nonatomic) SCThirdPartyTrackInfo *thirdPartyTrackInfo; // @synthesize thirdPartyTrackInfo=_thirdPartyTrackInfo;
@property(readonly, nonatomic) long long adDemandType; // @synthesize adDemandType=_adDemandType;
@property(readonly, copy, nonatomic) NSData *viewReceipt; // @synthesize viewReceipt=_viewReceipt;
@property(readonly, copy, nonatomic) NSString *protoTrackURL; // @synthesize protoTrackURL=_protoTrackURL;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSData *adRenderData; // @synthesize adRenderData=_adRenderData;
@property(readonly, copy, nonatomic) SCAdTargetingParameters *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(readonly, copy, nonatomic) SCAdServeLoggingContext *serveLoggingContext; // @synthesize serveLoggingContext=_serveLoggingContext;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, copy, nonatomic) SCAdMediaStoryAd *storyAd; // @synthesize storyAd=_storyAd;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionClickUrls; // @synthesize thirdPartyImpressionClickUrls=_thirdPartyImpressionClickUrls;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionTrackUrls; // @synthesize thirdPartyImpressionTrackUrls=_thirdPartyImpressionTrackUrls;
@property(readonly, copy, nonatomic) NSArray *adSnapArray; // @synthesize adSnapArray=_adSnapArray;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *adServeRequestId; // @synthesize adServeRequestId=_adServeRequestId;
@property(readonly, copy, nonatomic) NSString *lineItemId; // @synthesize lineItemId=_lineItemId;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, nonatomic) double expireTimeStampMillis; // @synthesize expireTimeStampMillis=_expireTimeStampMillis;
@property(readonly, nonatomic) double resolvedTimeStampMillis; // @synthesize resolvedTimeStampMillis=_resolvedTimeStampMillis;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResolvedTimeStampMillis:(double)arg1 expireTimeStampMillis:(double)arg2 adProductType:(unsigned long long)arg3 identifier:(id)arg4 adId:(id)arg5 serveItemId:(id)arg6 lineItemId:(id)arg7 adServeRequestId:(id)arg8 adType:(long long)arg9 adSnapArray:(id)arg10 thirdPartyImpressionTrackUrls:(id)arg11 thirdPartyImpressionClickUrls:(id)arg12 storyAd:(id)arg13 isValid:(_Bool)arg14 serveLoggingContext:(id)arg15 targetingParameters:(id)arg16 adRenderData:(id)arg17 rawUserData:(id)arg18 rawAdData:(id)arg19 protoTrackURL:(id)arg20 viewReceipt:(id)arg21 adDemandType:(long long)arg22 thirdPartyTrackInfo:(id)arg23;
- (id)initWithCoder:(id)arg1;

@end

