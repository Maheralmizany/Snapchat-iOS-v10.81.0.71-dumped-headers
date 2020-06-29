//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUDiscoverModerationAudience, SOJUDiscoverModerationBrandSafety;

@protocol SOJUBroadcastArticleMetadata <SCSojuMessage>
@property(readonly, nonatomic) SOJUDiscoverModerationBrandSafety *brandSafety;
@property(readonly, nonatomic) SOJUDiscoverModerationAudience *audience;
@property(readonly, nonatomic) NSString *bitmojiTileTemplateId;
@property(readonly, nonatomic) NSString *videoThumbnailUrl;
@property(readonly, nonatomic) NSString *logoDropShadowColor;
@property(readonly, nonatomic) NSNumber *logoDropShadowEnabled;
@property(readonly, nonatomic) NSString *logoPosition;
@property(readonly, nonatomic) NSString *videoUrl;
@property(readonly, nonatomic) NSString *logoText;
@property(readonly, nonatomic) NSString *logoReadStateOverlayColor;
@property(readonly, nonatomic) NSNumber *mediumV2TileCropPctOffset;
@property(readonly, nonatomic) NSNumber *narrowV2TileCropPctOffset;
@property(readonly, nonatomic) NSNumber *collapsedV2TileCropPctOffset;
@property(readonly, nonatomic) NSNumber *horizontalV2TileCropPctOffset;
@property(readonly, nonatomic) NSNumber *verticalV2TileCropPctOffset;
@property(readonly, nonatomic) NSString *logoUrl;
@property(readonly, nonatomic) NSString *textJustification;
@property(readonly, nonatomic) NSString *trackingId;
@property(readonly, nonatomic) NSNumber *horizontalTileCropPctOffset;
@property(readonly, nonatomic) NSNumber *collapsedTileCropPctOffset;
@property(readonly, nonatomic) NSString *imageUrl;
@property(readonly, nonatomic) NSString *headline;
@property(readonly, nonatomic) NSString *tileId;
@end
