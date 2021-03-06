//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString, SCDiscoverFeedBadgeRenderInfo, SCDiscoverFeedBadgeTapDestination;

@interface SCDiscoverFeedBadge : SCDocObject <NSCopying>
{
    NSString *_badgeId;
    long long _badgeType;
    NSData *_badgeMetadata;
    SCDiscoverFeedBadgeRenderInfo *_renderInfo;
    SCDiscoverFeedBadgeTapDestination *_tapDestination;
    double _fetchedTimestampInSec;
    double _serverNextRequestTimestampInSec;
    NSString *_streamId;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(readonly, nonatomic) double serverNextRequestTimestampInSec; // @synthesize serverNextRequestTimestampInSec=_serverNextRequestTimestampInSec;
@property(readonly, nonatomic) double fetchedTimestampInSec; // @synthesize fetchedTimestampInSec=_fetchedTimestampInSec;
@property(readonly, copy, nonatomic) SCDiscoverFeedBadgeTapDestination *tapDestination; // @synthesize tapDestination=_tapDestination;
@property(readonly, copy, nonatomic) SCDiscoverFeedBadgeRenderInfo *renderInfo; // @synthesize renderInfo=_renderInfo;
@property(readonly, copy, nonatomic) NSData *badgeMetadata; // @synthesize badgeMetadata=_badgeMetadata;
@property(readonly, nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(readonly, copy, nonatomic) NSString *badgeId; // @synthesize badgeId=_badgeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBadgeId:(id)arg1 badgeType:(long long)arg2 badgeMetadata:(id)arg3 renderInfo:(id)arg4 tapDestination:(id)arg5 fetchedTimestampInSec:(double)arg6 serverNextRequestTimestampInSec:(double)arg7 streamId:(id)arg8;

@end

