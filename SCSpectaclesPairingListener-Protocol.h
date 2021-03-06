//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSpectaclesPairingDeviceInformation;

@protocol SCSpectaclesPairingListener <NSObject>
- (void)pairingDidFail:(unsigned long long)arg1;
- (void)pairingDidSucceedWithDeviceInformation:(SCSpectaclesPairingDeviceInformation *)arg1 alreadyPaired:(_Bool)arg2;
- (void)pairingDidCancelBTPicker;
- (void)pairingDidFindBTPickerDevice;
- (void)pairingDidShowBTPicker;
- (void)pairingBeganSettingUpBTC;
- (void)pairingBeganConnectingBTC;
- (void)pairingBeganRequestingLocation;
- (void)pairingBeganChoosingName;
- (void)pairingRequestsUnpair;
- (void)pairingDidSyncBLE;
- (void)pairingDidConnectBLE;
- (void)pairingBeganConnectingBLE;
- (void)pairingBeganScanning;
- (void)pairingDidStart;
@end

