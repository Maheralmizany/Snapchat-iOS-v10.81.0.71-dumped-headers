//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceCustomImageInfo-Protocol.h"

@class NSNumber, NSString, SOJUCommerceCustomImageFrame;

@interface SOJUCommerceCustomImageInfo : SCSojuMessage <SOJUCommerceCustomImageInfo>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithExternalImageId:(id)arg1 productImageHeight:(id)arg2 productImageWidth:(id)arg3 customImageFrame:(id)arg4 customImageRotationAngle:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) SOJUCommerceCustomImageFrame *customImageFrame; // @dynamic customImageFrame;
@property(readonly, nonatomic) NSString *customImageRotationAngle; // @dynamic customImageRotationAngle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *externalImageId; // @dynamic externalImageId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *productImageHeight; // @dynamic productImageHeight;
@property(readonly, nonatomic) NSNumber *productImageWidth; // @dynamic productImageWidth;
@property(readonly) Class superclass;

@end

