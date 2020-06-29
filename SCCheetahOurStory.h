//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, SCMedia, SCSearchStreamingMediaInfo, SCSearchThumbnail;

@interface SCCheetahOurStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isSensitive;
    _Bool _isShareable;
    _Bool _isPartnered;
    _Bool _isCampusStory;
    _Bool _needDeltaFetch;
    NSArray *_snaps;
    SCSearchThumbnail *_imageThumbnail;
    SCSearchThumbnail *_videoFirstframeThumbnail;
    SCMedia *_videoThumbnail;
    SCSearchStreamingMediaInfo *_videoStreamingThumbnail;
    NSString *_thumbnailSnapId;
    NSString *_title;
    NSString *_category;
    double _displayTimestampSecs;
    NSString *_emoji;
    NSString *_displayGeoInfo;
    NSString *_logoURL;
    NSString *_miniProfileTitle;
    NSString *_miniProfileDescription;
    NSString *_miniProfileIconUrl;
    unsigned long long _totalNumSnaps;
    double _totalDurationSecs;
    NSData *_adPlacementMetadata;
}

@property(readonly, nonatomic) _Bool needDeltaFetch; // @synthesize needDeltaFetch=_needDeltaFetch;
@property(readonly, nonatomic) _Bool isCampusStory; // @synthesize isCampusStory=_isCampusStory;
@property(readonly, copy, nonatomic) NSData *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
@property(readonly, nonatomic) _Bool isPartnered; // @synthesize isPartnered=_isPartnered;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) double totalDurationSecs; // @synthesize totalDurationSecs=_totalDurationSecs;
@property(readonly, nonatomic) unsigned long long totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) NSString *miniProfileIconUrl; // @synthesize miniProfileIconUrl=_miniProfileIconUrl;
@property(readonly, copy, nonatomic) NSString *miniProfileDescription; // @synthesize miniProfileDescription=_miniProfileDescription;
@property(readonly, copy, nonatomic) NSString *miniProfileTitle; // @synthesize miniProfileTitle=_miniProfileTitle;
@property(readonly, copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *displayGeoInfo; // @synthesize displayGeoInfo=_displayGeoInfo;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *thumbnailSnapId; // @synthesize thumbnailSnapId=_thumbnailSnapId;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *videoStreamingThumbnail; // @synthesize videoStreamingThumbnail=_videoStreamingThumbnail;
@property(readonly, copy, nonatomic) SCMedia *videoThumbnail; // @synthesize videoThumbnail=_videoThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *videoFirstframeThumbnail; // @synthesize videoFirstframeThumbnail=_videoFirstframeThumbnail;
@property(readonly, copy, nonatomic) SCSearchThumbnail *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnaps:(id)arg1 imageThumbnail:(id)arg2 videoFirstframeThumbnail:(id)arg3 videoThumbnail:(id)arg4 videoStreamingThumbnail:(id)arg5 thumbnailSnapId:(id)arg6 title:(id)arg7 category:(id)arg8 displayTimestampSecs:(double)arg9 emoji:(id)arg10 displayGeoInfo:(id)arg11 logoURL:(id)arg12 miniProfileTitle:(id)arg13 miniProfileDescription:(id)arg14 miniProfileIconUrl:(id)arg15 totalNumSnaps:(unsigned long long)arg16 totalDurationSecs:(double)arg17 isSensitive:(_Bool)arg18 isShareable:(_Bool)arg19 isPartnered:(_Bool)arg20 adPlacementMetadata:(id)arg21 isCampusStory:(_Bool)arg22 needDeltaFetch:(_Bool)arg23;
- (id)initWithCoder:(id)arg1;

@end

