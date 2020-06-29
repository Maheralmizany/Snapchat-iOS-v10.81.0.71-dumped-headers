//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGallerySnapcodeStickerStyle, SOJUGalleryStoryInviteStickerStyle, SOJUGalleryTopicStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@protocol SOJUGalleryInfoStickerStyle <SCSojuMessage>
@property(readonly, nonatomic) SOJUGalleryStoryInviteStickerStyle *storyinvite;
@property(readonly, nonatomic) SOJUGalleryTopicStickerStyle *topic;
@property(readonly, nonatomic) SOJUGallerySnapcodeStickerStyle *snapcode;
@property(readonly, nonatomic) SOJUGalleryRequestStickerStyle *request;
@property(readonly, nonatomic) SOJUGalleryMentionStickerStyle *mention;
@property(readonly, nonatomic) SOJUGalleryGroupInfoFilterStyle *group;
@property(readonly, nonatomic) SOJUGalleryVenueFilterInfoStyle *venue;
@property(readonly, nonatomic) SOJUGalleryRatingStickerStyle *rating;
@property(readonly, nonatomic) SOJUGalleryAltitudeInfoFilterStyle *altitude;
@property(readonly, nonatomic) NSString *weather;
@property(readonly, nonatomic) SOJUGalleryDateInfoFilter *date;
@end

