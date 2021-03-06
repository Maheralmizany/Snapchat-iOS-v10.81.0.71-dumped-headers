//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletGalleryUrls-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUGalleryServletGalleryUrls : SCSojuMessage <SOJUGalleryServletGalleryUrls>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 type:(id)arg2 mediaUrl:(id)arg3 hdMediaUrl:(id)arg4 thumbnailUrl:(id)arg5 overlayImageUrl:(id)arg6 mediaUploadHeaders:(id)arg7 overlayUploadHeaders:(id)arg8 thumbnailUploadHeaders:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hdMediaUrl; // @dynamic hdMediaUrl;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSDictionary *mediaUploadHeaders; // @dynamic mediaUploadHeaders;
@property(readonly, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(readonly, nonatomic) NSString *overlayImageUrl; // @dynamic overlayImageUrl;
@property(readonly, nonatomic) NSDictionary *overlayUploadHeaders; // @dynamic overlayUploadHeaders;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDictionary *thumbnailUploadHeaders; // @dynamic thumbnailUploadHeaders;
@property(readonly, nonatomic) NSString *thumbnailUrl; // @dynamic thumbnailUrl;
@property(readonly, nonatomic) NSNumber *type; // @dynamic type;

@end

