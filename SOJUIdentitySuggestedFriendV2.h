//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentitySuggestedFriendV2-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentitySuggestedFriendV2 : SCSojuMessage <SOJUIdentitySuggestedFriendV2>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 storyPrivacy:(id)arg4 bitmojiAvatarId:(id)arg5 metadata:(id)arg6 bitmojiSelfieId:(id)arg7 bitmojiSnapcodeSelfieId:(id)arg8 emojiSymbol:(id)arg9 isPopularAccout:(id)arg10 displayUsername:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(readonly, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(readonly, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @dynamic bitmojiSnapcodeSelfieId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSString *displayUsername; // @dynamic displayUsername;
@property(readonly, nonatomic) NSString *emojiSymbol; // @dynamic emojiSymbol;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isPopularAccout; // @dynamic isPopularAccout;
@property(readonly, nonatomic) NSString *metadata; // @dynamic metadata;
@property(readonly, nonatomic) NSString *storyPrivacy; // @dynamic storyPrivacy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

