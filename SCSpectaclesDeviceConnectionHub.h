//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCSpectaclesPeripheral, SCSpectaclesTweaksConfigProvider;

@interface SCSpectaclesDeviceConnectionHub : NSObject
{
    id <SCSpectaclesTweaksConfigProvider> _tweaksConfigProvider;
    id <SCSpectaclesPeripheral> _peripheral;
}

@property(retain, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider; // @synthesize tweaksConfigProvider=_tweaksConfigProvider;
@property(retain, nonatomic) id <SCSpectaclesPeripheral> peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;
- (id)_myUUID;
- (void)requestLastCloudUploadTime;
- (void)requestWifiAPList;
- (void)sendAccessToken:(id)arg1 refreshToken:(id)arg2 expirationTimeMs:(long long)arg3 userId:(id)arg4;
- (void)sendAuthzCode:(id)arg1 codeVerifier:(id)arg2 redirectUri:(id)arg3;
- (void)requestClientId;
- (void)shareWifiCredentialsWithSSID:(id)arg1 password:(id)arg2;
- (void)clearCrashReport;
- (void)ambaWatchdogKick;
- (void)sendDeviceInfoRequestWithSupportsHevc:(_Bool)arg1 useExtendedFormat:(_Bool)arg2 enableLocation:(_Bool)arg3;
- (void)sendStopBTRequest;
- (id)sendStartBTRequestWithBluetoothDisplayName:(id)arg1;
- (void)sendRequest:(id)arg1;

@end

