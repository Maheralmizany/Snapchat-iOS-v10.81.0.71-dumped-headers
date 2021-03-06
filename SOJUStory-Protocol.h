//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUCaption, SOJUSnapConnectAttributes, SOJUSnapCreatorAttribution, SOJUSponsoredSlugPosAndText, SOJUSponsoredStoryMetadata, SOJUStoryFrame;

@protocol SOJUStory <SCSojuMessage>
@property(readonly, nonatomic) NSString *curationSourceStoryId;
@property(readonly, nonatomic) NSString *firstFrameVideoContentUrl;
@property(readonly, nonatomic) NSString *overlayContentUrl;
@property(readonly, nonatomic) NSString *videoContentUrl;
@property(readonly, nonatomic) NSString *contextClientInfo;
@property(readonly, nonatomic) NSString *thumbnailCo;
@property(readonly, nonatomic) NSString *overlayCo;
@property(readonly, nonatomic) NSString *mediaCo;
@property(readonly, nonatomic) NSString *legacyZippedCo;
@property(readonly, nonatomic) NSString *captureSessionId;
@property(readonly, nonatomic) NSString *contentObject;
@property(readonly, nonatomic) NSString *comment;
@property(readonly, nonatomic) SOJUSnapCreatorAttribution *repostAttribution;
@property(readonly, nonatomic) SOJUSnapConnectAttributes *snapConnectAttributes;
@property(readonly, nonatomic) NSString *unlockablesSnapInfo;
@property(readonly, nonatomic) NSString *lensMetadata;
@property(readonly, nonatomic) NSString *largeThumbnailUrl;
@property(readonly, nonatomic) NSString *animatedSnapType;
@property(readonly, nonatomic) NSString *contextHint;
@property(readonly, nonatomic) NSString *filterLensId;
@property(readonly, nonatomic) NSString *filterGeofilterId;
@property(readonly, nonatomic) NSArray *ruleFileParameters;
@property(readonly, nonatomic) NSString *mediaD2sUrl;
@property(readonly, nonatomic) SOJUAudioStitch *audioStitch;
@property(readonly, nonatomic) NSNumber *brandFriendliness;
@property(readonly, nonatomic) NSString *venueId;
@property(readonly, nonatomic) NSNumber *isInfiniteDuration;
@property(readonly, nonatomic) NSNumber *isPublic;
@property(readonly, nonatomic) NSString *snapAttachmentUrl;
@property(readonly, nonatomic) NSNumber *isOfficialStory;
@property(readonly, nonatomic) SOJUBroadcastAttribution *attribution;
@property(readonly, nonatomic) NSArray *unlockablesVendorTags;
@property(readonly, nonatomic) NSString *encGeoData;
@property(readonly, nonatomic) NSString *submissionId;
@property(readonly, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug;
@property(readonly, nonatomic) NSNumber *isSponsored;
@property(readonly, nonatomic) NSNumber *adCanFollow;
@property(readonly, nonatomic) NSNumber *needsAuth;
@property(readonly, nonatomic) SOJUAdPlacementMetadata *adPlacementMetadata;
@property(readonly, nonatomic) NSNumber *isShared;
@property(readonly, nonatomic) SOJUSponsoredStoryMetadata *sponsoredStoryMetadata;
@property(readonly, nonatomic) NSString *storyFilterId;
@property(readonly, nonatomic) NSArray *unlockables;
@property(readonly, nonatomic) NSString *filterId;
@property(readonly, nonatomic) NSNumber *zipped;
@property(readonly, nonatomic) SOJUCaption *caption;
@property(readonly, nonatomic) NSString *captionTextDisplay;
@property(readonly, nonatomic) NSNumber *timeLeft;
@property(readonly, nonatomic) NSNumber *time;
@property(readonly, nonatomic) NSNumber *mediaType;
@property(readonly, nonatomic) NSString *thumbnailUrl;
@property(readonly, nonatomic) NSString *thumbnailIv;
@property(readonly, nonatomic) NSString *mediaIv;
@property(readonly, nonatomic) NSString *mediaUrl;
@property(readonly, nonatomic) NSString *mediaKey;
@property(readonly, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) SOJUStoryFrame *framing;
@property(readonly, nonatomic) NSNumber *timestamp;
@property(readonly, nonatomic) NSString *clientId;
@property(readonly, nonatomic) NSNumber *matureContent;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *idValue;
@end

