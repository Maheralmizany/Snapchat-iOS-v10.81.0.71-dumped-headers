//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryInfoStickerStyle-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGallerySnapcodeStickerStyle, SOJUGalleryStoryInviteStickerStyle, SOJUGalleryTopicStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@interface SOJUGalleryInfoStickerStyle : SCSojuMessage <SOJUGalleryInfoStickerStyle>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithDate:(id)arg1 weather:(id)arg2 altitude:(id)arg3 rating:(id)arg4 venue:(id)arg5 group:(id)arg6 mention:(id)arg7 request:(id)arg8 snapcode:(id)arg9 topic:(id)arg10 storyinvite:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) SOJUGalleryAltitudeInfoFilterStyle *altitude; // @dynamic altitude;
@property(readonly, nonatomic) SOJUGalleryDateInfoFilter *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUGalleryGroupInfoFilterStyle *group; // @dynamic group;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUGalleryMentionStickerStyle *mention; // @dynamic mention;
@property(readonly, nonatomic) SOJUGalleryRatingStickerStyle *rating; // @dynamic rating;
@property(readonly, nonatomic) SOJUGalleryRequestStickerStyle *request; // @dynamic request;
@property(readonly, nonatomic) SOJUGallerySnapcodeStickerStyle *snapcode; // @dynamic snapcode;
@property(readonly, nonatomic) SOJUGalleryStoryInviteStickerStyle *storyinvite; // @dynamic storyinvite;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUGalleryTopicStickerStyle *topic; // @dynamic topic;
@property(readonly, nonatomic) SOJUGalleryVenueFilterInfoStyle *venue; // @dynamic venue;
@property(readonly, nonatomic) NSString *weather; // @dynamic weather;

@end

