//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGallerySnapcodeStickerStyle-Protocol.h"

@class NSString;

@interface SOJUGallerySnapcodeStickerStyle : SCSojuMessage <SOJUGallerySnapcodeStickerStyle>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithType:(id)arg1 username:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(readonly, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end
