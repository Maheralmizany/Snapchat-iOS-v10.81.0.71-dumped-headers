//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryInfoStickerStyle, SOJUGalleryPoint;

@protocol SOJUGallerySticker <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *isFlipped;
@property(readonly, nonatomic) NSNumber *isSponsored;
@property(readonly, nonatomic) NSNumber *isTranslateCenterOfSticker;
@property(readonly, nonatomic) NSString *externalSrcUrl;
@property(readonly, nonatomic) NSNumber *isAnimated;
@property(readonly, nonatomic) SOJUGalleryInfoStickerStyle *infoStickerStyle;
@property(readonly, nonatomic) NSString *infoStickerType;
@property(readonly, nonatomic) NSNumber *isPositionCenterOfSticker;
@property(readonly, nonatomic) NSArray *trackingTrajectory;
@property(readonly, nonatomic) NSNumber *isTracking;
@property(readonly, nonatomic) NSNumber *scale;
@property(readonly, nonatomic) NSNumber *isRotationRadians;
@property(readonly, nonatomic) NSNumber *rotation;
@property(readonly, nonatomic) SOJUGalleryPoint *position;
@property(readonly, nonatomic) NSNumber *relativeHeight;
@property(readonly, nonatomic) NSNumber *relativeWidth;
@property(readonly, nonatomic) NSString *stickerId;
@property(readonly, nonatomic) NSString *packId;
@property(readonly, nonatomic) NSString *emoji;
@property(readonly, nonatomic) NSString *type;
@end

