//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTGeoBox, SCMTPoint, SCMTPointOfInterest_DiscoverInfo, SCMTThumbnail, SCStoryManifest;

@interface SCMTSearchCards_PoiRow : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTGeoBox *boundingBox; // @dynamic boundingBox;
@property(retain, nonatomic) SCMTPointOfInterest_DiscoverInfo *discoverInfo; // @dynamic discoverInfo;
@property(nonatomic) _Bool hasBoundingBox; // @dynamic hasBoundingBox;
@property(nonatomic) _Bool hasDiscoverInfo; // @dynamic hasDiscoverInfo;
@property(nonatomic) _Bool hasLatlng; // @dynamic hasLatlng;
@property(nonatomic) _Bool hasManifest; // @dynamic hasManifest;
@property(nonatomic) _Bool hasThumb; // @dynamic hasThumb;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCMTPoint *latlng; // @dynamic latlng;
@property(retain, nonatomic) SCStoryManifest *manifest; // @dynamic manifest;
@property(copy, nonatomic) NSString *subtitleFmt; // @dynamic subtitleFmt;
@property(retain, nonatomic) SCMTThumbnail *thumb; // @dynamic thumb;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *titleFmt; // @dynamic titleFmt;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

