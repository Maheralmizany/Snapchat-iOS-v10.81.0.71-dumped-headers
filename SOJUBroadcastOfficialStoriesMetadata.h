//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastOfficialStoriesMetadata-Protocol.h"

@class NSString;

@interface SOJUBroadcastOfficialStoriesMetadata : SCSojuMessage <SOJUBroadcastOfficialStoriesMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSafeDisplayName:(id)arg1 emojiSymbol:(id)arg2 trackingId:(id)arg3 userId:(id)arg4 bitmojiAvatarId:(id)arg5 bitmojiAvatarSelfieId:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(readonly, nonatomic) NSString *bitmojiAvatarSelfieId; // @dynamic bitmojiAvatarSelfieId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *emojiSymbol; // @dynamic emojiSymbol;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *safeDisplayName; // @dynamic safeDisplayName;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *trackingId; // @dynamic trackingId;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;

@end

