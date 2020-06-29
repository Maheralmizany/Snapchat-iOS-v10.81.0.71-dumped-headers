//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCContextSnapViewMetrics;

@interface SCPlatformAnalyticsMediaViewInfo : NSObject <NSCopying, NSCoding>
{
    double _viewedTimeSecs;
    long long _source;
    long long _inviteAction;
    SCContextSnapViewMetrics *_contextSnapViewMetrics;
    NSString *_mediaId;
    double _rollMaxDegree;
    double _rollMinDegree;
    double _pinchToZoomMillis;
}

@property(readonly, nonatomic) double pinchToZoomMillis; // @synthesize pinchToZoomMillis=_pinchToZoomMillis;
@property(readonly, nonatomic) double rollMinDegree; // @synthesize rollMinDegree=_rollMinDegree;
@property(readonly, nonatomic) double rollMaxDegree; // @synthesize rollMaxDegree=_rollMaxDegree;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) SCContextSnapViewMetrics *contextSnapViewMetrics; // @synthesize contextSnapViewMetrics=_contextSnapViewMetrics;
@property(readonly, nonatomic) long long inviteAction; // @synthesize inviteAction=_inviteAction;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) double viewedTimeSecs; // @synthesize viewedTimeSecs=_viewedTimeSecs;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewedTimeSecs:(double)arg1 source:(long long)arg2 inviteAction:(long long)arg3 contextSnapViewMetrics:(id)arg4 mediaId:(id)arg5 rollMaxDegree:(double)arg6 rollMinDegree:(double)arg7 pinchToZoomMillis:(double)arg8;
- (id)initWithCoder:(id)arg1;

@end

