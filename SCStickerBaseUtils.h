//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCStickerBaseUtils : NSObject
{
}

+ (id)privacySafeStickerIdFromRawId:(id)arg1 stickerType:(unsigned long long)arg2;
+ (unsigned long long)stickerTypeFromSojuEnum:(long long)arg1;
+ (id)tryParseEncodedBitmoji:(id)arg1;
+ (id)parseEncodedBitmoji:(id)arg1;
+ (id)bitmojiIDByStrippingAvatarID:(id)arg1;

@end
