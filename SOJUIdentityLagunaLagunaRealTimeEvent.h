//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityLagunaLagunaRealTimeEvent-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityLagunaLagunaRealTimeEvent : SCSojuMessage <SOJUIdentityLagunaLagunaRealTimeEvent>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithEventName:(id)arg1 userId:(id)arg2 sessionId:(id)arg3 pairingSessionId:(id)arg4 userInitiationPage:(id)arg5 pairingType:(id)arg6 otherPairedDeviceCount:(id)arg7 durationInMs:(id)arg8 nordicLastBootSession:(id)arg9 deviceId:(id)arg10 deviceBattery:(id)arg11 bleUuid:(id)arg12 bleConnected:(id)arg13 timeOfCapture:(id)arg14 contentName:(id)arg15 hdVideoFileSize:(id)arg16 hdVideoFileName:(id)arg17 sdVideoFileSize:(id)arg18 sdVideoFileName:(id)arg19 thumbnailFileSize:(id)arg20 thumbnailFileName:(id)arg21 firmwareVersion:(id)arg22 ambientLightIntensity:(id)arg23 deviceBatteryAtStart:(id)arg24 deviceBatteryAtEnd:(id)arg25 ambaTemperature:(id)arg26 nordicTemperature:(id)arg27 buttonPressType:(id)arg28 deviceStorage:(id)arg29 transferBatchId:(id)arg30 dataResponseSize:(id)arg31 numberOfSdVideoBeingTransferred:(id)arg32 numberOfHdVideoBeingTransferred:(id)arg33 totalFileSizeTransferred:(id)arg34 transferChannel:(id)arg35 timeOfTransferStartUtc:(id)arg36 timeOfTransferEndUtc:(id)arg37 bluetoothBootTimeInMs:(id)arg38 wifiBootTimeInMs:(id)arg39 updateSessionId:(id)arg40 failureReason:(id)arg41 transferDurationInMs:(id)arg42 downloadDurationInMs:(id)arg43 updateDurationInMs:(id)arg44;

// Remaining properties
@property(readonly, nonatomic) NSNumber *ambaTemperature; // @dynamic ambaTemperature;
@property(readonly, nonatomic) NSNumber *ambientLightIntensity; // @dynamic ambientLightIntensity;
@property(readonly, nonatomic) NSNumber *bleConnected; // @dynamic bleConnected;
@property(readonly, nonatomic) NSString *bleUuid; // @dynamic bleUuid;
@property(readonly, nonatomic) NSNumber *bluetoothBootTimeInMs; // @dynamic bluetoothBootTimeInMs;
@property(readonly, nonatomic) NSString *buttonPressType; // @dynamic buttonPressType;
@property(readonly, nonatomic) NSString *contentName; // @dynamic contentName;
@property(readonly, nonatomic) NSNumber *dataResponseSize; // @dynamic dataResponseSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *deviceBattery; // @dynamic deviceBattery;
@property(readonly, nonatomic) NSNumber *deviceBatteryAtEnd; // @dynamic deviceBatteryAtEnd;
@property(readonly, nonatomic) NSNumber *deviceBatteryAtStart; // @dynamic deviceBatteryAtStart;
@property(readonly, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(readonly, nonatomic) NSNumber *deviceStorage; // @dynamic deviceStorage;
@property(readonly, nonatomic) NSNumber *downloadDurationInMs; // @dynamic downloadDurationInMs;
@property(readonly, nonatomic) NSNumber *durationInMs; // @dynamic durationInMs;
@property(readonly, nonatomic) NSString *eventName; // @dynamic eventName;
@property(readonly, nonatomic) NSString *failureReason; // @dynamic failureReason;
@property(readonly, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hdVideoFileName; // @dynamic hdVideoFileName;
@property(readonly, nonatomic) NSNumber *hdVideoFileSize; // @dynamic hdVideoFileSize;
@property(readonly, nonatomic) NSString *nordicLastBootSession; // @dynamic nordicLastBootSession;
@property(readonly, nonatomic) NSNumber *nordicTemperature; // @dynamic nordicTemperature;
@property(readonly, nonatomic) NSNumber *numberOfHdVideoBeingTransferred; // @dynamic numberOfHdVideoBeingTransferred;
@property(readonly, nonatomic) NSNumber *numberOfSdVideoBeingTransferred; // @dynamic numberOfSdVideoBeingTransferred;
@property(readonly, nonatomic) NSNumber *otherPairedDeviceCount; // @dynamic otherPairedDeviceCount;
@property(readonly, nonatomic) NSString *pairingSessionId; // @dynamic pairingSessionId;
@property(readonly, nonatomic) NSString *pairingType; // @dynamic pairingType;
@property(readonly, nonatomic) NSString *sdVideoFileName; // @dynamic sdVideoFileName;
@property(readonly, nonatomic) NSNumber *sdVideoFileSize; // @dynamic sdVideoFileSize;
@property(readonly, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *thumbnailFileName; // @dynamic thumbnailFileName;
@property(readonly, nonatomic) NSNumber *thumbnailFileSize; // @dynamic thumbnailFileSize;
@property(readonly, nonatomic) NSNumber *timeOfCapture; // @dynamic timeOfCapture;
@property(readonly, nonatomic) NSNumber *timeOfTransferEndUtc; // @dynamic timeOfTransferEndUtc;
@property(readonly, nonatomic) NSNumber *timeOfTransferStartUtc; // @dynamic timeOfTransferStartUtc;
@property(readonly, nonatomic) NSNumber *totalFileSizeTransferred; // @dynamic totalFileSizeTransferred;
@property(readonly, nonatomic) NSString *transferBatchId; // @dynamic transferBatchId;
@property(readonly, nonatomic) NSString *transferChannel; // @dynamic transferChannel;
@property(readonly, nonatomic) NSNumber *transferDurationInMs; // @dynamic transferDurationInMs;
@property(readonly, nonatomic) NSNumber *updateDurationInMs; // @dynamic updateDurationInMs;
@property(readonly, nonatomic) NSString *updateSessionId; // @dynamic updateSessionId;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *userInitiationPage; // @dynamic userInitiationPage;
@property(readonly, nonatomic) NSNumber *wifiBootTimeInMs; // @dynamic wifiBootTimeInMs;

@end

