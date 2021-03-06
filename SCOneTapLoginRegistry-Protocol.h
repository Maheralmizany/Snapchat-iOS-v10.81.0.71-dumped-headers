//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIImage;

@protocol SCOneTapLoginRegistry
- (void)persistBitmojiAvatar:(UIImage *)arg1 selfieId:(NSString *)arg2 avatarId:(NSString *)arg3;
- (void)removeCachedBitmoji;
- (_Bool)isBitmojiCached:(NSString *)arg1 avatarId:(NSString *)arg2;
- (void)persistOneTapLoginToken:(NSString *)arg1 expiry:(long long)arg2;
- (void)optInUserWithId:(NSString *)arg1 username:(NSString *)arg2;
- (_Bool)isUserOptedIn:(NSString *)arg1;
@end

