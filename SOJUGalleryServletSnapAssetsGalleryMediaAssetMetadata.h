//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletSnapAssetsGalleryMediaAssetMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletSnapAssetsGalleryMediaAssetMetadata : SCSojuMessage <SOJUGalleryServletSnapAssetsGalleryMediaAssetMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMediaType:(id)arg1 captureTime:(id)arg2 mediaFormat:(id)arg3 mediaAttributes:(id)arg4;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *captureTime; // @dynamic captureTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAttributes; // @dynamic mediaAttributes;
@property(readonly, nonatomic) NSString *mediaFormat; // @dynamic mediaFormat;
@property(readonly, nonatomic) NSNumber *mediaType; // @dynamic mediaType;
@property(readonly) Class superclass;

@end

