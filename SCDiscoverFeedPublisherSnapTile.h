//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedPublisherSnapTileBadge;

@interface SCDiscoverFeedPublisherSnapTile : NSObject <NSCopying>
{
    NSString *_titleId;
    NSString *_headline;
    NSString *_imageURL;
    NSString *_logoURL;
    NSString *_videoThumbnailURL;
    NSString *_videoThumbnailFirstFrameURL;
    long long _logoLocationType;
    NSString *_logoReadStateOverlayColor;
    NSString *_showSubtitle;
    long long _showProgress;
    NSString *_bitmojiTileTemplateId;
    SCDiscoverFeedPublisherSnapTileBadge *_tileBadge;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedPublisherSnapTileBadge *tileBadge; // @synthesize tileBadge=_tileBadge;
@property(readonly, copy, nonatomic) NSString *bitmojiTileTemplateId; // @synthesize bitmojiTileTemplateId=_bitmojiTileTemplateId;
@property(readonly, nonatomic) long long showProgress; // @synthesize showProgress=_showProgress;
@property(readonly, copy, nonatomic) NSString *showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(readonly, copy, nonatomic) NSString *logoReadStateOverlayColor; // @synthesize logoReadStateOverlayColor=_logoReadStateOverlayColor;
@property(readonly, nonatomic) long long logoLocationType; // @synthesize logoLocationType=_logoLocationType;
@property(readonly, copy, nonatomic) NSString *videoThumbnailFirstFrameURL; // @synthesize videoThumbnailFirstFrameURL=_videoThumbnailFirstFrameURL;
@property(readonly, copy, nonatomic) NSString *videoThumbnailURL; // @synthesize videoThumbnailURL=_videoThumbnailURL;
@property(readonly, copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *titleId; // @synthesize titleId=_titleId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleId:(id)arg1 headline:(id)arg2 imageURL:(id)arg3 logoURL:(id)arg4 videoThumbnailURL:(id)arg5 videoThumbnailFirstFrameURL:(id)arg6 logoLocationType:(long long)arg7 logoReadStateOverlayColor:(id)arg8 showSubtitle:(id)arg9 showProgress:(long long)arg10 bitmojiTileTemplateId:(id)arg11 tileBadge:(id)arg12;
- (id)xLogObjectInfo;

@end

