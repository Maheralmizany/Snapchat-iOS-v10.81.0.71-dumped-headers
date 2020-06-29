//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCSnapAdsIdentifier;

@interface SCSnapAdThirdPartyTrackInfo : NSObject <NSCopying>
{
    _Bool _wasTopSnapFullyViewed;
    SCSnapAdsIdentifier *_adIdentifier;
    unsigned long long _adProductType;
    long long _topSnapMediaDurationInMillis;
    double _topSnapTotalViewTimeInMillis;
    double _topSnapMaxUnobstructedViewTimeInMillis;
    double _topSnapTotalAudibleViewTimeInMillis;
    double _topSnapTotalUnobstructedViewTimeInMillis;
    double _topSnapMaxUnobstructedAudibleViewTimeInMillis;
    double _topSnapTotalUnobstructedAudibleViewTimeInMillis;
    long long _topSnapCappedMaxViewDurationMillis;
    long long _timeSinceAdRenderInMillis;
    long long _adFirstRenderTimestampInMillis;
    long long _firstReactionTimestampInMillis;
    NSArray *_audioQuadrantStates;
    NSArray *_trackURLs;
}

@property(readonly, copy, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
@property(readonly, copy, nonatomic) NSArray *audioQuadrantStates; // @synthesize audioQuadrantStates=_audioQuadrantStates;
@property(readonly, nonatomic) long long firstReactionTimestampInMillis; // @synthesize firstReactionTimestampInMillis=_firstReactionTimestampInMillis;
@property(readonly, nonatomic) long long adFirstRenderTimestampInMillis; // @synthesize adFirstRenderTimestampInMillis=_adFirstRenderTimestampInMillis;
@property(readonly, nonatomic) long long timeSinceAdRenderInMillis; // @synthesize timeSinceAdRenderInMillis=_timeSinceAdRenderInMillis;
@property(readonly, nonatomic) _Bool wasTopSnapFullyViewed; // @synthesize wasTopSnapFullyViewed=_wasTopSnapFullyViewed;
@property(readonly, nonatomic) long long topSnapCappedMaxViewDurationMillis; // @synthesize topSnapCappedMaxViewDurationMillis=_topSnapCappedMaxViewDurationMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedAudibleViewTimeInMillis; // @synthesize topSnapTotalUnobstructedAudibleViewTimeInMillis=_topSnapTotalUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedAudibleViewTimeInMillis; // @synthesize topSnapMaxUnobstructedAudibleViewTimeInMillis=_topSnapMaxUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedViewTimeInMillis; // @synthesize topSnapTotalUnobstructedViewTimeInMillis=_topSnapTotalUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalAudibleViewTimeInMillis; // @synthesize topSnapTotalAudibleViewTimeInMillis=_topSnapTotalAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedViewTimeInMillis; // @synthesize topSnapMaxUnobstructedViewTimeInMillis=_topSnapMaxUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalViewTimeInMillis; // @synthesize topSnapTotalViewTimeInMillis=_topSnapTotalViewTimeInMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationInMillis; // @synthesize topSnapMediaDurationInMillis=_topSnapMediaDurationInMillis;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdIdentifier:(id)arg1 adProductType:(unsigned long long)arg2 topSnapMediaDurationInMillis:(long long)arg3 topSnapTotalViewTimeInMillis:(double)arg4 topSnapMaxUnobstructedViewTimeInMillis:(double)arg5 topSnapTotalAudibleViewTimeInMillis:(double)arg6 topSnapTotalUnobstructedViewTimeInMillis:(double)arg7 topSnapMaxUnobstructedAudibleViewTimeInMillis:(double)arg8 topSnapTotalUnobstructedAudibleViewTimeInMillis:(double)arg9 topSnapCappedMaxViewDurationMillis:(long long)arg10 wasTopSnapFullyViewed:(_Bool)arg11 timeSinceAdRenderInMillis:(long long)arg12 adFirstRenderTimestampInMillis:(long long)arg13 firstReactionTimestampInMillis:(long long)arg14 audioQuadrantStates:(id)arg15 trackURLs:(id)arg16;

@end

