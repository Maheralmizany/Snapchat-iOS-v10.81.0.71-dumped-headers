//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCSpectaclesDeviceConnectionState, SCSpectaclesDeviceInternal, SCSpectaclesDeviceName, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@protocol SCSpectaclesDevice <NSObject>
@property(readonly, nonatomic) id <SCSpectaclesDeviceInternal> internalDevice;
@property(readonly, nonatomic) id <SCSpectaclesDeviceName> name;
@property(readonly, nonatomic) id <SCSpectaclesDeviceConnectionState> connectionState;
@property(readonly, nonatomic) long long color;
@property(readonly, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion;
@property(readonly, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@end

