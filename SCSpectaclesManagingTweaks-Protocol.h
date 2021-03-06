//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCSpectaclesCrashLogger, SCSpectaclesDevice, SCSpectaclesTweaksConfigProvider;

@protocol SCSpectaclesManagingTweaks <NSObject>
@property(readonly, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider;
@property(retain, nonatomic) id <SCSpectaclesCrashLogger> crashLogger;
- (void)crashDetected;
- (void)updateMockStorageLevelStatus:(unsigned long long)arg1;
- (void)updateMockTemperatureStatus:(unsigned long long)arg1;
- (void)updateMockBatteryLevelStatus:(unsigned long long)arg1;
- (void)unpairDevicesWithError;
- (void)addRefreshContentTasks;
- (void)requestCurrentDeviceLogs:(void (^)(NSString *))arg1;
- (NSString *)deviceStateShortCode:(id <SCSpectaclesDevice>)arg1;
- (NSString *)device0StateShortCode;
- (double)lastTransferSpeed;
- (NSString *)deviceManagerStateShortCode;
- (NSString *)pairingStateShortCode;
@end

