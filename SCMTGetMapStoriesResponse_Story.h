//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTGeoBox, SCMTPoint, SCMTThumbnail, SCStoryManifest;

@interface SCMTGetMapStoriesResponse_Story : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTGeoBox *boundingBox; // @dynamic boundingBox;
@property(nonatomic) _Bool hasBoundingBox; // @dynamic hasBoundingBox;
@property(nonatomic) _Bool hasLatlng; // @dynamic hasLatlng;
@property(nonatomic) _Bool hasManifest; // @dynamic hasManifest;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCMTPoint *latlng; // @dynamic latlng;
@property(retain, nonatomic) SCStoryManifest *manifest; // @dynamic manifest;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(copy, nonatomic) NSString *subtitleFmt; // @dynamic subtitleFmt;
@property(retain, nonatomic) SCMTThumbnail *thumbnail; // @dynamic thumbnail;
@property(nonatomic) double timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *titleFmt; // @dynamic titleFmt;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

