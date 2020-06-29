//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SCSpectaclesTweaksConfigProvider <NSObject>
- (_Bool)enableAutomaticContentWiFiTransfer;
- (long long)automaticContentTransferBatteryThreshold;
- (_Bool)enableAutomaticContentTransferWithBatteryThreshold;
- (_Bool)enableBackgroundContentHdVideoBTCTransfer;
- (_Bool)enableBackgroundContentPictureBTCTransfer;
- (_Bool)skipWiFiSSIDCheckWhenImporting;
- (unsigned long long)mockTemperatureStatus;
- (unsigned long long)mockStorageLevelStatus;
- (unsigned long long)mockBatteryLevelStatus;
- (_Bool)restrictRSSIWhenScanning;
- (_Bool)alwaysShowOnboardingAfterPairing;
- (long long)mockGuppyBatteryLevel;
- (long long)mockCoulombCounterTemperature;
- (long long)mockDeviceBatteryLevel;
- (NSString *)hermosaWhitelistedDeviceName;
- (_Bool)hermosaEnabled;
- (_Bool)gateLowEndDevices;
- (_Bool)disableContentDeletion;
- (NSNumber *)newportBurstFrame;
- (_Bool)newportEnableBurst;
- (_Bool)enableMultiSnapForNewport;
- (_Bool)enableMultiSnap;
- (_Bool)keepAliveInBackground;
- (_Bool)disableProdAuthentication;
- (_Bool)disableEncryption;
- (_Bool)disableBluetooth;
- (_Bool)setupBleNotifications;
@end
