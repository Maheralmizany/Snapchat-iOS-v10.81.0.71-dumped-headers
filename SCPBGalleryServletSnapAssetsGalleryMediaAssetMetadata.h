//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPBGalleryServletSnapAssetsGalleryMediaAssetMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long captureTime; // @dynamic captureTime;
@property(retain, nonatomic) NSMutableArray *mediaAttributesArray; // @dynamic mediaAttributesArray;
@property(readonly, nonatomic) unsigned long long mediaAttributesArray_Count; // @dynamic mediaAttributesArray_Count;
@property(copy, nonatomic) NSString *mediaFormat; // @dynamic mediaFormat;
@property(nonatomic) int mediaType; // @dynamic mediaType;

@end

