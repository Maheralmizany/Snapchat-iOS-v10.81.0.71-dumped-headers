//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SCSnapAdsUserInfoAdapter <NSObject>
- (NSString *)getUserAdId;
- (_Bool)getEnableAdTracking;
- (NSData *)getEncrypedUserData;
- (void)setEncrypedUserData:(NSData *)arg1;
- (NSString *)getRawUserDataV2;
- (NSString *)getRawUserData;
@end

