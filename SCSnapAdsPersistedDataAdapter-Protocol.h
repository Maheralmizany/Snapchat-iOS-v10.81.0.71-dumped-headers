//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString, SCSnapAdsAdSourceConfig;

@protocol SCSnapAdsPersistedDataAdapter
- (void)setAdvertiserId:(NSString *)arg1;
- (NSString *)getAdvertiserId;
- (void)setUserPixelToken:(NSString *)arg1;
- (NSString *)getUserPixelToken;
- (void)setAdSessionId:(NSString *)arg1;
- (NSString *)getAdSessionId;
- (void)setAdSourceConfig:(SCSnapAdsAdSourceConfig *)arg1 enablePreferenceStore:(_Bool)arg2;
- (SCSnapAdsAdSourceConfig *)getAdSourceConfig:(_Bool)arg1;
- (NSData *)getEncryptedUserData;
- (void)setEncryptedUserData:(NSData *)arg1;
- (NSString *)getRawUserDataV2;
- (NSString *)getRawUserData;
@end
