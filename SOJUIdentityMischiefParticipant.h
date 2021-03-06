//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityMischiefParticipant-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityMischiefParticipant : SCSojuMessage <SOJUIdentityMischiefParticipant>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 display:(id)arg3 color:(id)arg4 joinTimestamp:(id)arg5 videoChatUserId:(id)arg6 mischiefVersion:(id)arg7 bitmojiAvatarId:(id)arg8 bitmojiSelfieId:(id)arg9 bitmojiSnapcodeSelfieId:(id)arg10 colorHex:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(readonly, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(readonly, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @dynamic bitmojiSnapcodeSelfieId;
@property(readonly, nonatomic) NSString *color; // @dynamic color;
@property(readonly, nonatomic) NSString *colorHex; // @dynamic colorHex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *display; // @dynamic display;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *joinTimestamp; // @dynamic joinTimestamp;
@property(readonly, nonatomic) NSNumber *mischiefVersion; // @dynamic mischiefVersion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
@property(readonly, nonatomic) NSNumber *videoChatUserId; // @dynamic videoChatUserId;

@end

