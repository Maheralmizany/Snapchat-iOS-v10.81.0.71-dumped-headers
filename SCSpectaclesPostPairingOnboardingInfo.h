//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCSpectaclesPostPairingOnboardingInfo : NSObject
{
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    long long _deviceColor;
    NSString *_pairingSessionId;
    NSString *_deviceId;
}

@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *pairingSessionId; // @synthesize pairingSessionId=_pairingSessionId;
@property(readonly, nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(readonly, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (void).cxx_destruct;
- (id)initWithHardwareVersion:(id)arg1 firmwareVersion:(id)arg2 deviceColor:(long long)arg3 pairingSessionId:(id)arg4 deviceId:(id)arg5;

@end
