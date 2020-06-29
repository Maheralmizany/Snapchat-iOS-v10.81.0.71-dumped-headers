//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityFindFriendsContact-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUSecurityFideliusFriendInfo;

@interface SOJUIdentityFindFriendsContact : SCSojuMessage <SOJUIdentityFindFriendsContact>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithName:(id)arg1 userId:(id)arg2 type:(id)arg3 display:(id)arg4 birthday:(id)arg5 ts:(id)arg6 reverseTs:(id)arg7 direction:(id)arg8 storyPrivacy:(id)arg9 canSeeCustomStories:(id)arg10 pendingSnapsCountDeprecated:(id)arg11 expirationDeprecated:(id)arg12 isSharedStoryDeprecated:(id)arg13 hasCustomDescriptionDeprecated:(id)arg14 sharedStoryIdDeprecated:(id)arg15 localStoryDeprecated:(id)arg16 ignoredLink:(id)arg17 hiddenLink:(id)arg18 addSource:(id)arg19 addSourceType:(id)arg20 friendmojiString:(id)arg21 needsLoveDeprecated:(id)arg22 autoAddedDeprecated:(id)arg23 sojuNewLinkDeprecated:(id)arg24 dontDecayThumbnailDeprecated:(id)arg25 venueDeprecated:(id)arg26 friendmojiSymbols:(id)arg27 friendmojis:(id)arg28 snapStreakCount:(id)arg29 snapStreakExpiration:(id)arg30 bitmojiAvatarId:(id)arg31 potentialHighQualityScoreDeprecated:(id)arg32 pendingChatsCountDeprecated:(id)arg33 bitmojiSelfieId:(id)arg34 canBeSharedByFriendsDeprecated:(id)arg35 fideliusInfo:(id)arg36 bitmojiSnapcodeSelfieId:(id)arg37 studySettings:(id)arg38 isPopular:(id)arg39 isStoryMuted:(id)arg40 isIncomingFriendRequestViewed:(id)arg41 displayUsername:(id)arg42 snapProId:(id)arg43 isCognacNotificationMuted:(id)arg44 isNewContact:(id)arg45 isRecommended:(id)arg46 recommendationScore:(id)arg47;

// Remaining properties
@property(readonly, nonatomic) NSString *addSource; // @dynamic addSource;
@property(readonly, nonatomic) NSString *addSourceType; // @dynamic addSourceType;
@property(readonly, nonatomic) NSNumber *autoAddedDeprecated; // @dynamic autoAddedDeprecated;
@property(readonly, nonatomic) NSString *birthday; // @dynamic birthday;
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(readonly, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(readonly, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @dynamic bitmojiSnapcodeSelfieId;
@property(readonly, nonatomic) NSNumber *canBeSharedByFriendsDeprecated; // @dynamic canBeSharedByFriendsDeprecated;
@property(readonly, nonatomic) NSNumber *canSeeCustomStories; // @dynamic canSeeCustomStories;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *direction; // @dynamic direction;
@property(readonly, nonatomic) NSString *display; // @dynamic display;
@property(readonly, nonatomic) NSString *displayUsername; // @dynamic displayUsername;
@property(readonly, nonatomic) NSNumber *dontDecayThumbnailDeprecated; // @dynamic dontDecayThumbnailDeprecated;
@property(readonly, nonatomic) NSNumber *expirationDeprecated; // @dynamic expirationDeprecated;
@property(readonly, nonatomic) SOJUSecurityFideliusFriendInfo *fideliusInfo; // @dynamic fideliusInfo;
@property(readonly, nonatomic) NSString *friendmojiString; // @dynamic friendmojiString;
@property(readonly, nonatomic) NSArray *friendmojiSymbols; // @dynamic friendmojiSymbols;
@property(readonly, nonatomic) NSArray *friendmojis; // @dynamic friendmojis;
@property(readonly, nonatomic) NSNumber *hasCustomDescriptionDeprecated; // @dynamic hasCustomDescriptionDeprecated;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hiddenLink; // @dynamic hiddenLink;
@property(readonly, nonatomic) NSNumber *ignoredLink; // @dynamic ignoredLink;
@property(readonly, nonatomic) NSNumber *isCognacNotificationMuted; // @dynamic isCognacNotificationMuted;
@property(readonly, nonatomic) NSNumber *isIncomingFriendRequestViewed; // @dynamic isIncomingFriendRequestViewed;
@property(readonly, nonatomic) NSNumber *isNewContact; // @dynamic isNewContact;
@property(readonly, nonatomic) NSNumber *isPopular; // @dynamic isPopular;
@property(readonly, nonatomic) NSNumber *isRecommended; // @dynamic isRecommended;
@property(readonly, nonatomic) NSNumber *isSharedStoryDeprecated; // @dynamic isSharedStoryDeprecated;
@property(readonly, nonatomic) NSNumber *isStoryMuted; // @dynamic isStoryMuted;
@property(readonly, nonatomic) NSNumber *localStoryDeprecated; // @dynamic localStoryDeprecated;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSNumber *needsLoveDeprecated; // @dynamic needsLoveDeprecated;
@property(readonly, nonatomic) NSNumber *pendingChatsCountDeprecated; // @dynamic pendingChatsCountDeprecated;
@property(readonly, nonatomic) NSNumber *pendingSnapsCountDeprecated; // @dynamic pendingSnapsCountDeprecated;
@property(readonly, nonatomic) NSNumber *potentialHighQualityScoreDeprecated; // @dynamic potentialHighQualityScoreDeprecated;
@property(readonly, nonatomic) NSNumber *recommendationScore; // @dynamic recommendationScore;
@property(readonly, nonatomic) NSNumber *reverseTs; // @dynamic reverseTs;
@property(readonly, nonatomic) NSString *sharedStoryIdDeprecated; // @dynamic sharedStoryIdDeprecated;
@property(readonly, nonatomic) NSString *snapProId; // @dynamic snapProId;
@property(readonly, nonatomic) NSNumber *snapStreakCount; // @dynamic snapStreakCount;
@property(readonly, nonatomic) NSNumber *snapStreakExpiration; // @dynamic snapStreakExpiration;
@property(readonly, nonatomic) NSNumber *sojuNewLinkDeprecated; // @dynamic sojuNewLinkDeprecated;
@property(readonly, nonatomic) NSString *storyPrivacy; // @dynamic storyPrivacy;
@property(readonly, nonatomic) NSDictionary *studySettings; // @dynamic studySettings;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *ts; // @dynamic ts;
@property(readonly, nonatomic) NSNumber *type; // @dynamic type;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *venueDeprecated; // @dynamic venueDeprecated;

@end

