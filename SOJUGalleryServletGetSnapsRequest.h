//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletGetSnapsRequest-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletGetSnapsRequest : SCSojuMessage <SOJUGalleryServletGetSnapsRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSnapIds:(id)arg1 overlayData:(id)arg2 mediaUrl:(id)arg3 thumbnailUrl:(id)arg4 overlayImageUrl:(id)arg5 snapTags:(id)arg6 snapLocation:(id)arg7 encryption:(id)arg8 miniThumbnailBytes:(id)arg9 gzippedOverlayData:(id)arg10 mediaFormat:(id)arg11 sensorBlob:(id)arg12 spectaclesMetadataUrl:(id)arg13 spectaclesSecondaryMetadataUrl:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *encryption; // @dynamic encryption;
@property(readonly, nonatomic) NSNumber *gzippedOverlayData; // @dynamic gzippedOverlayData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *mediaFormat; // @dynamic mediaFormat;
@property(readonly, nonatomic) NSNumber *mediaUrl; // @dynamic mediaUrl;
@property(readonly, nonatomic) NSNumber *miniThumbnailBytes; // @dynamic miniThumbnailBytes;
@property(readonly, nonatomic) NSNumber *overlayData; // @dynamic overlayData;
@property(readonly, nonatomic) NSNumber *overlayImageUrl; // @dynamic overlayImageUrl;
@property(readonly, nonatomic) NSNumber *sensorBlob; // @dynamic sensorBlob;
@property(readonly, nonatomic) NSArray *snapIds; // @dynamic snapIds;
@property(readonly, nonatomic) NSNumber *snapLocation; // @dynamic snapLocation;
@property(readonly, nonatomic) NSNumber *snapTags; // @dynamic snapTags;
@property(readonly, nonatomic) NSNumber *spectaclesMetadataUrl; // @dynamic spectaclesMetadataUrl;
@property(readonly, nonatomic) NSNumber *spectaclesSecondaryMetadataUrl; // @dynamic spectaclesSecondaryMetadataUrl;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *thumbnailUrl; // @dynamic thumbnailUrl;

@end
