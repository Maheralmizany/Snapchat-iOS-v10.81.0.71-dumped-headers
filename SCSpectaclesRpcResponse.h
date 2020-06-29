//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, MLBRpcError;

@interface SCSpectaclesRpcResponse : NSObject
{
    unsigned char _status;
    unsigned char _requestId;
    unsigned short _methodIndex;
    GPBMessage *_response;
    MLBRpcError *_error;
}

@property(readonly, nonatomic) unsigned char requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) MLBRpcError *error; // @synthesize error=_error;
@property(readonly, nonatomic) GPBMessage *response; // @synthesize response=_response;
@property(readonly, nonatomic) unsigned char status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned short methodIndex; // @synthesize methodIndex=_methodIndex;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValid;
- (id)initWithData:(id)arg1;
- (id)getHummingbirdSessionIdResponse;
- (id)disableHummingbirdResponse;
- (id)enableHummingbirdResponse;
- (id)getAncsActiveStatusResponse;
- (id)getPeerBondStatusResponse;
- (id)removeAllAncsNotificationRulesResponse;
- (id)removeAncsNotificationRuleByIdResponse;
- (id)addAncsNotificationRuleResponse;
- (id)enableIOSContextNotificationsResponse;
- (id)videoModeResponse;
- (id)getGuppyBatteryStatusResponse;
- (id)stillCaptureFpsResponse;
- (id)burstCaptureResponse;
- (id)setLocationEnabledResponse;
- (id)getLocationEnabledResponse;
- (id)getAvailableStorageResponse;
- (id)setContextSideEnabledResponse;
- (id)setContextRgbResponse;
- (id)setContextAnimResponse;
- (id)contextNotificationResponse;
- (id)setAlsWeightsResponse;
- (id)getAlsWeightsResponse;
- (id)unpairResponse;
- (id)availableStoragePercentageResponse;
- (id)getLastCloudUploadTimeResponse;
- (id)enableHevcResponse;
- (id)pairingWaitForUserResponse;
- (id)getUserMediaCountsResponse;
- (id)chargerStateResponse;
- (id)clearContentResponse;
- (id)startUploadToClientResponse;
- (id)getUploadToClientStatusResponse;
- (id)setWifiAPListResponse;
- (id)getWifiAPListResponse;
- (id)setWifiAPResponse;
- (id)revokeRefreshTokenResponse;
- (id)setAuthzCodeResponse;
- (id)getClientIDResponse;
- (id)updateGPSRequestResponse;
- (id)userAssociationResponse;
- (id)peerVerificationResponse;
- (id)encryptionSetupNonceExchangeResponse;
- (id)keyExchangeResponse;
- (id)clearBugResponse;
- (id)feedWatchdogResponse;
- (id)scheduleBackgroundUpdateResponse;
- (id)getBackgroundUpdateParamsResponse;
- (id)cancelBackgroundUpdateResponse;
- (id)untarFirmwareImageResponse;
- (id)applyFirmwareDeltaResponse;
- (id)surfaceFirmwareRecoveryImageResponse;
- (id)getFirmwareUpdateHashResponse;
- (id)bluetoothStopResponse;
- (id)bluetoothStartResponse;
- (id)getResetReasonResponse;
- (id)getMediaCountsResponse;
- (id)getCameraTemperatureResponse;
- (id)bugResponse;
- (id)shipmodeResponse;
- (id)haltResponse;
- (id)watchdogResponse;
- (id)batteryStatusResponse;
- (id)getAlsCalibResponse;
- (id)getFrameColorResponse;
- (id)authChipTestResponse;
- (id)ambaGitResponse;
- (id)imuResponse;
- (id)getTemperatureResponse;
- (id)wifiStopResponse;
- (id)wifiStartResponse;
- (id)getWifiStateResponse;
- (id)getBleAddrResponse;
- (id)getNameResponse;
- (id)getSerialNumberResponse;
- (id)setTimeResponse;
- (id)alsResponse;
- (id)animResponse;
- (id)setLedsResponse;
- (id)setLedResponse;
- (id)flashResponse;
- (id)ambaResponse;
- (id)advertiseResponse;
- (id)setNameResponse;
- (id)boardIdResponse;
- (id)gitResponse;

@end

