//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (StatusBarOverlay)
+ (id)readDataAsArrayForKey:(id)arg1;
+ (id)readDataAsDictionaryForKey:(id)arg1;
+ (id)readEncyptedDataAsStringForKey:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3;
+ (id)readDataAsStringForKey:(id)arg1;
+ (id)readEncryptedDataAsDataForKey:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3;
+ (id)readDataAsDataForKey:(id)arg1;
- (void)setStringWithStatusBarOverlay:(id)arg1;
- (_Bool)hasVideo;
- (id)video;
- (_Bool)hasGif;
- (id)gif;
@end

