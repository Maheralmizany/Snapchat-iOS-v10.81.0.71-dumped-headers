//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MediaReference, NSData, NSString, SDMMediaId, SDMMediaMetadata_LegacyMediaSource, SDMMediaMetadata_MediaDimensions, SDMMediaMetadata_MediaEncryptionInfo;

@interface SDMMediaMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *contentDescriptor; // @dynamic contentDescriptor;
@property(retain, nonatomic) SDMMediaMetadata_MediaDimensions *dimensions; // @dynamic dimensions;
@property(retain, nonatomic) SDMMediaMetadata_MediaEncryptionInfo *encryptionInfo; // @dynamic encryptionInfo;
@property(nonatomic) _Bool frontFacing; // @dynamic frontFacing;
@property(nonatomic) _Bool hasDimensions; // @dynamic hasDimensions;
@property(nonatomic) _Bool hasEncryptionInfo; // @dynamic hasEncryptionInfo;
@property(nonatomic) _Bool hasMediaId; // @dynamic hasMediaId;
@property(nonatomic) _Bool hasMediaReference; // @dynamic hasMediaReference;
@property(nonatomic) _Bool hasSound; // @dynamic hasSound;
@property(retain, nonatomic) SDMMediaMetadata_LegacyMediaSource *legacyMediaSource; // @dynamic legacyMediaSource;
@property(nonatomic) unsigned int mediaDurationMs; // @dynamic mediaDurationMs;
@property(retain, nonatomic) SDMMediaId *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) MediaReference *mediaReference; // @dynamic mediaReference;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(nonatomic) int orientation; // @dynamic orientation;
@property(readonly, nonatomic) int sourceMediaOneOfCase; // @dynamic sourceMediaOneOfCase;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) _Bool zipped; // @dynamic zipped;

@end

