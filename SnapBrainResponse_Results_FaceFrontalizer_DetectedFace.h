//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SnapBrainResponse_Results_FaceFrontalizer_DetectedFace_BoundingBox;

@interface SnapBrainResponse_Results_FaceFrontalizer_DetectedFace : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapBrainResponse_Results_FaceFrontalizer_DetectedFace_BoundingBox *boundingBox; // @dynamic boundingBox;
@property(nonatomic) float confidence; // @dynamic confidence;
@property(copy, nonatomic) NSData *croppedJpg; // @dynamic croppedJpg;
@property(nonatomic) _Bool hasBoundingBox; // @dynamic hasBoundingBox;
@property(nonatomic) _Bool hasRelativeBoundingBox; // @dynamic hasRelativeBoundingBox;
@property(nonatomic) unsigned int mediaTimestampMs; // @dynamic mediaTimestampMs;
@property(retain, nonatomic) SnapBrainResponse_Results_FaceFrontalizer_DetectedFace_BoundingBox *relativeBoundingBox; // @dynamic relativeBoundingBox;

@end

