//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMT1Sticker;

@interface SCMTGlobalLeaderboardScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMT1Sticker *actionSticker; // @dynamic actionSticker;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;
@property(nonatomic) int lastAcquiredEggColor; // @dynamic lastAcquiredEggColor;
@property(copy, nonatomic) NSString *lastAcquiredLocality; // @dynamic lastAcquiredLocality;
@property(nonatomic) int score; // @dynamic score;

@end

