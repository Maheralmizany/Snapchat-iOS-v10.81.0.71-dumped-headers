//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUGalleryServletGallerySyncRequest <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *mediaFormat;
@property(readonly, nonatomic) NSNumber *snapTags;
@property(readonly, nonatomic) NSNumber *miniThumbnailBytes;
@property(readonly, nonatomic) NSString *syncToken;
@property(readonly, nonatomic) NSNumber *highSeqnum;
@property(readonly, nonatomic) NSNumber *lowSeqnum;
@property(readonly, nonatomic) NSNumber *sojuInitSync;
@property(readonly, nonatomic) NSNumber *pageSize;
@property(readonly, nonatomic) NSNumber *overlayImageUrl;
@property(readonly, nonatomic) NSNumber *thumbnailUrl;
@property(readonly, nonatomic) NSNumber *mediaUrl;
@property(readonly, nonatomic) NSNumber *lastSeqnum;
@property(readonly, nonatomic) NSNumber *clientCompatVersion;
@end

