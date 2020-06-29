//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStory-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUCaption, SOJUSnapConnectAttributes, SOJUSnapCreatorAttribution, SOJUSponsoredSlugPosAndText, SOJUSponsoredStoryMetadata, SOJUStoryFrame;

@interface SOJUStory : SCSojuMessage <SOJUStory>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 username:(id)arg2 matureContent:(id)arg3 clientId:(id)arg4 timestamp:(id)arg5 framing:(id)arg6 mediaId:(id)arg7 mediaKey:(id)arg8 mediaUrl:(id)arg9 mediaIv:(id)arg10 thumbnailIv:(id)arg11 thumbnailUrl:(id)arg12 mediaType:(id)arg13 time:(id)arg14 timeLeft:(id)arg15 captionTextDisplay:(id)arg16 caption:(id)arg17 zipped:(id)arg18 filterId:(id)arg19 unlockables:(id)arg20 storyFilterId:(id)arg21 sponsoredStoryMetadata:(id)arg22 isShared:(id)arg23 adPlacementMetadata:(id)arg24 needsAuth:(id)arg25 adCanFollow:(id)arg26 isSponsored:(id)arg27 sponsoredSlug:(id)arg28 submissionId:(id)arg29 encGeoData:(id)arg30 unlockablesVendorTags:(id)arg31 attribution:(id)arg32 isOfficialStory:(id)arg33 snapAttachmentUrl:(id)arg34 isPublic:(id)arg35 isInfiniteDuration:(id)arg36 venueId:(id)arg37 brandFriendliness:(id)arg38 audioStitch:(id)arg39 mediaD2sUrl:(id)arg40 ruleFileParameters:(id)arg41 filterGeofilterId:(id)arg42 filterLensId:(id)arg43 contextHint:(id)arg44 animatedSnapType:(id)arg45 largeThumbnailUrl:(id)arg46 lensMetadata:(id)arg47 unlockablesSnapInfo:(id)arg48 snapConnectAttributes:(id)arg49 repostAttribution:(id)arg50 comment:(id)arg51 contentObject:(id)arg52 captureSessionId:(id)arg53 legacyZippedCo:(id)arg54 mediaCo:(id)arg55 overlayCo:(id)arg56 thumbnailCo:(id)arg57 contextClientInfo:(id)arg58 videoContentUrl:(id)arg59 overlayContentUrl:(id)arg60 firstFrameVideoContentUrl:(id)arg61 curationSourceStoryId:(id)arg62;

// Remaining properties
@property(readonly, nonatomic) NSNumber *adCanFollow; // @dynamic adCanFollow;
@property(readonly, nonatomic) SOJUAdPlacementMetadata *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(readonly, nonatomic) NSString *animatedSnapType; // @dynamic animatedSnapType;
@property(readonly, nonatomic) SOJUBroadcastAttribution *attribution; // @dynamic attribution;
@property(readonly, nonatomic) SOJUAudioStitch *audioStitch; // @dynamic audioStitch;
@property(readonly, nonatomic) NSNumber *brandFriendliness; // @dynamic brandFriendliness;
@property(readonly, nonatomic) SOJUCaption *caption; // @dynamic caption;
@property(readonly, nonatomic) NSString *captionTextDisplay; // @dynamic captionTextDisplay;
@property(readonly, nonatomic) NSString *captureSessionId; // @dynamic captureSessionId;
@property(readonly, nonatomic) NSString *clientId; // @dynamic clientId;
@property(readonly, nonatomic) NSString *comment; // @dynamic comment;
@property(readonly, nonatomic) NSString *contentObject; // @dynamic contentObject;
@property(readonly, nonatomic) NSString *contextClientInfo; // @dynamic contextClientInfo;
@property(readonly, nonatomic) NSString *contextHint; // @dynamic contextHint;
@property(readonly, nonatomic) NSString *curationSourceStoryId; // @dynamic curationSourceStoryId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *encGeoData; // @dynamic encGeoData;
@property(readonly, nonatomic) NSString *filterGeofilterId; // @dynamic filterGeofilterId;
@property(readonly, nonatomic) NSString *filterId; // @dynamic filterId;
@property(readonly, nonatomic) NSString *filterLensId; // @dynamic filterLensId;
@property(readonly, nonatomic) NSString *firstFrameVideoContentUrl; // @dynamic firstFrameVideoContentUrl;
@property(readonly, nonatomic) SOJUStoryFrame *framing; // @dynamic framing;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(readonly, nonatomic) NSNumber *isOfficialStory; // @dynamic isOfficialStory;
@property(readonly, nonatomic) NSNumber *isPublic; // @dynamic isPublic;
@property(readonly, nonatomic) NSNumber *isShared; // @dynamic isShared;
@property(readonly, nonatomic) NSNumber *isSponsored; // @dynamic isSponsored;
@property(readonly, nonatomic) NSString *largeThumbnailUrl; // @dynamic largeThumbnailUrl;
@property(readonly, nonatomic) NSString *legacyZippedCo; // @dynamic legacyZippedCo;
@property(readonly, nonatomic) NSString *lensMetadata; // @dynamic lensMetadata;
@property(readonly, nonatomic) NSNumber *matureContent; // @dynamic matureContent;
@property(readonly, nonatomic) NSString *mediaCo; // @dynamic mediaCo;
@property(readonly, nonatomic) NSString *mediaD2sUrl; // @dynamic mediaD2sUrl;
@property(readonly, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(readonly, nonatomic) NSString *mediaIv; // @dynamic mediaIv;
@property(readonly, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(readonly, nonatomic) NSNumber *mediaType; // @dynamic mediaType;
@property(readonly, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(readonly, nonatomic) NSNumber *needsAuth; // @dynamic needsAuth;
@property(readonly, nonatomic) NSString *overlayCo; // @dynamic overlayCo;
@property(readonly, nonatomic) NSString *overlayContentUrl; // @dynamic overlayContentUrl;
@property(readonly, nonatomic) SOJUSnapCreatorAttribution *repostAttribution; // @dynamic repostAttribution;
@property(readonly, nonatomic) NSArray *ruleFileParameters; // @dynamic ruleFileParameters;
@property(readonly, nonatomic) NSString *snapAttachmentUrl; // @dynamic snapAttachmentUrl;
@property(readonly, nonatomic) SOJUSnapConnectAttributes *snapConnectAttributes; // @dynamic snapConnectAttributes;
@property(readonly, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @dynamic sponsoredSlug;
@property(readonly, nonatomic) SOJUSponsoredStoryMetadata *sponsoredStoryMetadata; // @dynamic sponsoredStoryMetadata;
@property(readonly, nonatomic) NSString *storyFilterId; // @dynamic storyFilterId;
@property(readonly, nonatomic) NSString *submissionId; // @dynamic submissionId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *thumbnailCo; // @dynamic thumbnailCo;
@property(readonly, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(readonly, nonatomic) NSString *thumbnailUrl; // @dynamic thumbnailUrl;
@property(readonly, nonatomic) NSNumber *time; // @dynamic time;
@property(readonly, nonatomic) NSNumber *timeLeft; // @dynamic timeLeft;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSArray *unlockables; // @dynamic unlockables;
@property(readonly, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(readonly, nonatomic) NSArray *unlockablesVendorTags; // @dynamic unlockablesVendorTags;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
@property(readonly, nonatomic) NSString *venueId; // @dynamic venueId;
@property(readonly, nonatomic) NSString *videoContentUrl; // @dynamic videoContentUrl;
@property(readonly, nonatomic) NSNumber *zipped; // @dynamic zipped;

@end

