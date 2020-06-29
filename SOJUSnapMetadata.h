//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSnapMetadata-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUMultiSnapMetadata, SOJUSnapAttachment;

@interface SOJUSnapMetadata : SCSojuMessage <SOJUSnapMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIsReply:(id)arg1 cameraFrontFacing:(id)arg2 orientation:(id)arg3 countryCode:(id)arg4 filterId:(id)arg5 lensId:(id)arg6 encGeoData:(id)arg7 captionTextDeprecated:(id)arg8 snapAttachmentDeprecated:(id)arg9 venueId:(id)arg10 snapAttachments:(id)arg11 isInfiniteDuration:(id)arg12 multiSnapMetadata:(id)arg13 checksum:(id)arg14 contextHint:(id)arg15 animatedSnapType:(id)arg16 lensMetadata:(id)arg17 sendSource:(id)arg18 captureDate:(id)arg19 unlockablesSnapInfo:(id)arg20 contextClientInfo:(id)arg21;

// Remaining properties
@property(readonly, nonatomic) NSString *animatedSnapType; // @dynamic animatedSnapType;
@property(readonly, nonatomic) NSNumber *cameraFrontFacing; // @dynamic cameraFrontFacing;
@property(readonly, nonatomic) NSString *captionTextDeprecated; // @dynamic captionTextDeprecated;
@property(readonly, nonatomic) NSNumber *captureDate; // @dynamic captureDate;
@property(readonly, nonatomic) NSString *checksum; // @dynamic checksum;
@property(readonly, nonatomic) NSString *contextClientInfo; // @dynamic contextClientInfo;
@property(readonly, nonatomic) NSString *contextHint; // @dynamic contextHint;
@property(readonly, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *encGeoData; // @dynamic encGeoData;
@property(readonly, nonatomic) NSString *filterId; // @dynamic filterId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(readonly, nonatomic) NSNumber *isReply; // @dynamic isReply;
@property(readonly, nonatomic) NSString *lensId; // @dynamic lensId;
@property(readonly, nonatomic) NSString *lensMetadata; // @dynamic lensMetadata;
@property(readonly, nonatomic) SOJUMultiSnapMetadata *multiSnapMetadata; // @dynamic multiSnapMetadata;
@property(readonly, nonatomic) NSString *orientation; // @dynamic orientation;
@property(readonly, nonatomic) NSString *sendSource; // @dynamic sendSource;
@property(readonly, nonatomic) SOJUSnapAttachment *snapAttachmentDeprecated; // @dynamic snapAttachmentDeprecated;
@property(readonly, nonatomic) NSArray *snapAttachments; // @dynamic snapAttachments;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(readonly, nonatomic) NSString *venueId; // @dynamic venueId;

@end

