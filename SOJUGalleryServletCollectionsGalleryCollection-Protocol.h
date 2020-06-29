//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryEncryptionBlob;

@protocol SOJUGalleryServletCollectionsGalleryCollection <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *priority;
@property(readonly, nonatomic) NSArray *personalizedThumbnailSnapIds;
@property(readonly, nonatomic) NSNumber *isPersonalizedThumbnailEncrypted;
@property(readonly, nonatomic) NSNumber *personalizedThumbnailUrlType;
@property(readonly, nonatomic) NSString *personalizedThumbnailUrl;
@property(readonly, nonatomic) NSNumber *titleOverlayUrlType;
@property(readonly, nonatomic) NSString *titleOverlayUrl;
@property(readonly, nonatomic) NSNumber *isThumbnailEncrypted;
@property(readonly, nonatomic) NSNumber *thumbnailUrlType;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *bitmojiComicId;
@property(readonly, nonatomic) NSNumber *minimumGroupsCountRequirement;
@property(readonly, nonatomic) SOJUGalleryEncryptionBlob *encryption;
@property(readonly, nonatomic) NSNumber *thumbnailFormat;
@property(readonly, nonatomic) NSString *thumbnailUrl;
@property(readonly, nonatomic) NSArray *groups;
@property(readonly, nonatomic) NSNumber *category;
@property(readonly, nonatomic) NSNumber *collectionType;
@property(readonly, nonatomic) NSNumber *expirationTime;
@property(readonly, nonatomic) NSNumber *lastUpdatedTime;
@property(readonly, nonatomic) NSNumber *createTime;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *collectionId;
@end
