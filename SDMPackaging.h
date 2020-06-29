//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SDMPackaging_Overlay, SDMPackaging_PackagedImage, SDMPackaging_PackagedVideo;

@interface SDMPackaging : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOverlay; // @dynamic hasOverlay;
@property(nonatomic) _Bool hasPackagedImage; // @dynamic hasPackagedImage;
@property(nonatomic) _Bool hasPackagedVideo; // @dynamic hasPackagedVideo;
@property(copy, nonatomic) NSString *latestHash; // @dynamic latestHash;
@property(copy, nonatomic) NSString *latestPackageId; // @dynamic latestPackageId;
@property(retain, nonatomic) NSMutableArray *latestPackageVariantsArray; // @dynamic latestPackageVariantsArray;
@property(readonly, nonatomic) unsigned long long latestPackageVariantsArray_Count; // @dynamic latestPackageVariantsArray_Count;
@property(retain, nonatomic) SDMPackaging_Overlay *overlay; // @dynamic overlay;
@property(nonatomic) int packageFormat; // @dynamic packageFormat;
@property(copy, nonatomic) NSString *packageURL; // @dynamic packageURL;
@property(retain, nonatomic) SDMPackaging_PackagedImage *packagedImage; // @dynamic packagedImage;
@property(retain, nonatomic) SDMPackaging_PackagedVideo *packagedVideo; // @dynamic packagedVideo;

@end
