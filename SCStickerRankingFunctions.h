//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCStickerRankingFunctions : NSObject
{
}

+ (id)_sortStickers:(id)arg1 bitmojis:(id)arg2 numberOfBitmojisShown:(long long)arg3 numberOfStickersShown:(long long)arg4;
+ (void)_aggregateStickers:(id)arg1 bitmojis:(id)arg2 stickerCounters:(id)arg3 bitmojiCounters:(id)arg4 tagFrequency:(id)arg5 tag:(id)arg6;
+ (void)collectStickerFromSearch:(id)arg1 fuzzySearch:(id)arg2 fuzzyTags:(id)arg3 tagFrequency:(id)arg4 numberOfBitmojisShown:(long long)arg5 numberOfStickersShown:(long long)arg6 rankingMethod:(long long)arg7 shouldIncludeFriendBitmoji:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)gregorianCalendar;

@end

