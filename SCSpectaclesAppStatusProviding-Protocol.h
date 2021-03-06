//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSpectaclesAppStatusCoordinatorDeviceState;
@protocol SCSpectaclesAppStatusListener, SCSpectaclesDevice;

@protocol SCSpectaclesAppStatusProviding <NSObject>
- (NSString *)expandedStatusDescriptionForDevice:(id <SCSpectaclesDevice>)arg1;
- (void)removeListener:(id <SCSpectaclesAppStatusListener>)arg1;
- (void)addListener:(id <SCSpectaclesAppStatusListener>)arg1;
- (void)setSpectaclesSettingsOnScreen:(_Bool)arg1;
- (void)setSpectaclesMemoriesOnScreen:(_Bool)arg1;
- (_Bool)isDeviceUpdating:(id <SCSpectaclesDevice>)arg1;
- (_Bool)isDeviceTransferring:(id <SCSpectaclesDevice>)arg1;
- (_Bool)isUserTriggeredStateForDevice:(id <SCSpectaclesDevice>)arg1;
- (_Bool)isBluetoothOn;
- (NSString *)pairingCompleteMessageForConnectedDevice;
- (long long)numberOfConnectedDevices;
- (long long)numberOfPairedDevices;
- (long long)numberOfDevices;
- (id <SCSpectaclesDevice>)pairedDeviceAtIndex:(long long)arg1;
- (id <SCSpectaclesDevice>)connectedDeviceAtIndex:(long long)arg1;
- (id <SCSpectaclesDevice>)deviceAtIndex:(long long)arg1;
- (SCSpectaclesAppStatusCoordinatorDeviceState *)statusForDevice:(id <SCSpectaclesDevice>)arg1;
@end

