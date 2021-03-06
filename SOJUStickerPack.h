//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SCStickerPack-Protocol.h"
#import "SOJUStickerPack-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGeofence, SOJUStickerPackContextualMetadata;

@interface SOJUStickerPack : SCSojuMessage <SCStickerPack, SOJUStickerPack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithPackId:(id)arg1 categoryId:(id)arg2 iconUrl:(id)arg3 iconVersion:(id)arg4 url:(id)arg5 version:(id)arg6 active:(id)arg7 type:(id)arg8 capabilities:(id)arg9 target:(id)arg10 superCategory:(id)arg11 geofence:(id)arg12 unlockablePreviewImgUrl:(id)arg13 title:(id)arg14 unlockExpirationTimeInSec:(id)arg15 contextualPackMetadata:(id)arg16 unlockableId:(id)arg17 isExpandable:(id)arg18 metadataUrl:(id)arg19 expirationTtlInSec:(id)arg20;
@property(readonly, nonatomic) NSString *metadataURLString;
@property(readonly, nonatomic) long long versionIntegerValue;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *active; // @dynamic active;
@property(readonly, nonatomic) NSArray *capabilities; // @dynamic capabilities;
@property(readonly, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(readonly, nonatomic) SOJUStickerPackContextualMetadata *contextualPackMetadata; // @dynamic contextualPackMetadata;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *expirationTtlInSec; // @dynamic expirationTtlInSec;
@property(readonly, nonatomic) SOJUGeofence *geofence; // @dynamic geofence;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(readonly, nonatomic) NSNumber *iconVersion; // @dynamic iconVersion;
@property(readonly, nonatomic) NSNumber *isExpandable; // @dynamic isExpandable;
@property(readonly, nonatomic) NSString *metadataUrl; // @dynamic metadataUrl;
@property(readonly, nonatomic) NSString *packId; // @dynamic packId;
@property(readonly, nonatomic) NSString *superCategory; // @dynamic superCategory;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *target; // @dynamic target;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSNumber *unlockExpirationTimeInSec; // @dynamic unlockExpirationTimeInSec;
@property(readonly, nonatomic) NSString *unlockableId; // @dynamic unlockableId;
@property(readonly, nonatomic) NSString *unlockablePreviewImgUrl; // @dynamic unlockablePreviewImgUrl;
@property(readonly, nonatomic) NSString *url; // @dynamic url;
@property(readonly, nonatomic) NSNumber *version; // @dynamic version;

@end

