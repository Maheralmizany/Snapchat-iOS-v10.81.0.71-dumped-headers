//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCSpectaclesBleMonitorDelegate-Protocol.h"
#import "SCSpectaclesBluetoothMonitorDelegate-Protocol.h"
#import "SCSpectaclesDevice-Protocol.h"
#import "SCSpectaclesDeviceConnectionState-Protocol.h"
#import "SCSpectaclesDeviceFirmwareUpdateConditions-Protocol.h"
#import "SCSpectaclesDeviceInternal-Protocol.h"
#import "SCSpectaclesDeviceName-Protocol.h"
#import "SCSpectaclesPeripheralDelegate-Protocol.h"
#import "SCSpectaclesWifiMonitorDelegate-Protocol.h"

@class NSData, NSDate, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSUUID, SCSpectaclesAmbaWatchdog, SCSpectaclesAncsNotificationSettings, SCSpectaclesBleMonitor, SCSpectaclesBluetoothMonitor, SCSpectaclesCalibration, SCSpectaclesContentStore, SCSpectaclesDeviceConnectionHub, SCSpectaclesDeviceEventListenerAnnouncer, SCSpectaclesFirmwareUpdater, SCSpectaclesRequestMessage, SCSpectaclesTask, SCSpectaclesTaskQueue, SCSpectaclesTransferProgressMonitor, SCSpectaclesWifiMonitor, SCWeakTimer;
@protocol SCPerforming, SCSpectaclesDeviceConnectionState, SCSpectaclesDeviceInternal, SCSpectaclesDeviceName, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion, SCSpectaclesLibraryLogger, SCSpectaclesNetworkClient, SCSpectaclesTweaksConfigProvider;

@interface SCSpectaclesDevice : NSObject <SCSpectaclesDeviceConnectionState, SCSpectaclesDeviceName, SCSpectaclesDeviceFirmwareUpdateConditions, SCSpectaclesDeviceInternal, SCSpectaclesPeripheralDelegate, NSCoding, SCSpectaclesBleMonitorDelegate, SCSpectaclesBluetoothMonitorDelegate, SCSpectaclesWifiMonitorDelegate, SCSpectaclesDevice>
{
    NSDate *_lastRecordingStartTimestamp;
    double _lastRecordingEstimatedEventDuration;
    SCWeakTimer *_deviceUpdateTimer;
    long long _deviceUpdateTimerInterval;
    _Bool _hasSpaceToRecord;
    _Bool _locationEnabled;
    _Bool _ancsNotificationsEnabled;
    _Bool _hasReconciledContentList;
    _Bool _detectedBluetoothOverloadError;
    _Bool _charging;
    _Bool _hasChargingInfo;
    _Bool _peerBondStatus;
    _Bool _shouldRequestCrashReports;
    _Bool _everConnectedToWifi;
    NSString *_serialNumber;
    NSString *_displayName;
    id <SCSpectaclesFirmwareVersion> _firmwareVersion;
    id <SCSpectaclesHardwareVersion> _hardwareVersion;
    NSNumber *_batteryLevel;
    unsigned long long _batteryLevelStatus;
    NSNumber *_guppyBatteryLevel;
    NSNumber *_voltageLevel;
    NSNumber *_storageLevel;
    unsigned long long _storageLevelStatus;
    SCSpectaclesCalibration *_calibration;
    long long _deviceNumber;
    long long _color;
    long long _firstPairedTimestamp;
    long long _lastPairedStatusUpdatedTimestamp;
    long long _lastPairFromUnpairedStateTimestamp;
    long long _lastNameUpdatedTimestamp;
    long long _lastGPSAlmanacUpdatedTimestamp;
    long long _lastConnectedTimestamp;
    long long _nordicTemperature;
    long long _coulombCounterTemperature;
    long long _ambaTemperature;
    long long _wifiTemperature;
    NSDate *_lastTemperatureReportTime;
    unsigned long long _temperatureStatus;
    NSNumber *_wifiFrequency;
    NSDate *_lastUploadAnalyticsLogsTime;
    unsigned long long _lastConnectionFailureReason;
    long long _saveContentToLocation;
    SCSpectaclesAncsNotificationSettings *_ancsFriendNotificationSettings;
    NSSet *_pushMessagePatterns;
    id <SCPerforming> _performer;
    SCWeakTimer *_connectionTimer;
    SCWeakTimer *_encryptionTimer;
    SCWeakTimer *_transitionTimer;
    SCSpectaclesBleMonitor *_bleMonitor;
    SCSpectaclesRequestMessage *_outstandingBluetoothRequest;
    SCSpectaclesBluetoothMonitor *_bluetoothMonitor;
    SCSpectaclesWifiMonitor *_wifiMonitor;
    NSString *_ssidPassword;
    NSString *_countryCode;
    SCSpectaclesTask *_wifiMediaListTask;
    long long _transferDisabledReason;
    SCSpectaclesTransferProgressMonitor *_progressMonitor;
    NSMutableArray *_responseMonitors;
    NSMutableSet *_addAncsRuleRequestMessages;
    SCSpectaclesContentStore *_contentStore;
    SCSpectaclesDeviceEventListenerAnnouncer *_deviceAnnouncer;
    SCSpectaclesDeviceConnectionHub *_connectionHub;
    SCSpectaclesTaskQueue *_taskQueue;
    NSString *_shortDisplayName;
    NSData *_encryptionKey;
    long long _state;
    long long _connectionReason;
    NSUUID *_identifier;
    id <SCSpectaclesTweaksConfigProvider> _tweaksConfigProvider;
    id <SCSpectaclesLibraryLogger> _analyticsLogger;
    long long _numberOfConnectionAttempts;
    long long _lastMediaCountSeenInResponse;
    long long _lastMediaCount;
    NSString *_wifiName;
    NSString *_wifiPassword;
    NSString *_deviceIpAddress;
    SCSpectaclesFirmwareUpdater *_firmwareUpdater;
    SCSpectaclesAmbaWatchdog *_ambaWatchdog;
    long long _capabilities;
    id <SCSpectaclesNetworkClient> _cachedBluetoothClient;
}

+ (_Bool)supportsPsychomantisWithFirmware:(id)arg1 hardware:(id)arg2;
+ (long long)_capabilitiesWithFirmware:(id)arg1 hardware:(id)arg2;
@property(retain, nonatomic) id <SCSpectaclesNetworkClient> cachedBluetoothClient; // @synthesize cachedBluetoothClient=_cachedBluetoothClient;
@property(readonly, nonatomic) long long capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) _Bool everConnectedToWifi; // @synthesize everConnectedToWifi=_everConnectedToWifi;
@property(retain, nonatomic) SCSpectaclesAmbaWatchdog *ambaWatchdog; // @synthesize ambaWatchdog=_ambaWatchdog;
@property(retain, nonatomic) SCSpectaclesFirmwareUpdater *firmwareUpdater; // @synthesize firmwareUpdater=_firmwareUpdater;
@property(copy, nonatomic) NSString *deviceIpAddress; // @synthesize deviceIpAddress=_deviceIpAddress;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(nonatomic) long long lastMediaCount; // @synthesize lastMediaCount=_lastMediaCount;
@property(nonatomic) long long lastMediaCountSeenInResponse; // @synthesize lastMediaCountSeenInResponse=_lastMediaCountSeenInResponse;
@property(nonatomic) long long numberOfConnectionAttempts; // @synthesize numberOfConnectionAttempts=_numberOfConnectionAttempts;
@property(nonatomic) __weak id <SCSpectaclesLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider; // @synthesize tweaksConfigProvider=_tweaksConfigProvider;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long connectionReason; // @synthesize connectionReason=_connectionReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(copy, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(retain, nonatomic) SCSpectaclesTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) SCSpectaclesDeviceConnectionHub *connectionHub; // @synthesize connectionHub=_connectionHub;
@property(retain, nonatomic) SCSpectaclesDeviceEventListenerAnnouncer *deviceAnnouncer; // @synthesize deviceAnnouncer=_deviceAnnouncer;
@property(retain, nonatomic) SCSpectaclesContentStore *contentStore; // @synthesize contentStore=_contentStore;
@property(retain, nonatomic) NSMutableSet *addAncsRuleRequestMessages; // @synthesize addAncsRuleRequestMessages=_addAncsRuleRequestMessages;
@property(retain, nonatomic) NSMutableArray *responseMonitors; // @synthesize responseMonitors=_responseMonitors;
@property(nonatomic) _Bool shouldRequestCrashReports; // @synthesize shouldRequestCrashReports=_shouldRequestCrashReports;
@property(retain, nonatomic) SCSpectaclesTransferProgressMonitor *progressMonitor; // @synthesize progressMonitor=_progressMonitor;
@property(nonatomic) long long transferDisabledReason; // @synthesize transferDisabledReason=_transferDisabledReason;
@property(retain, nonatomic) SCSpectaclesTask *wifiMediaListTask; // @synthesize wifiMediaListTask=_wifiMediaListTask;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(retain, nonatomic) SCSpectaclesWifiMonitor *wifiMonitor; // @synthesize wifiMonitor=_wifiMonitor;
@property(retain, nonatomic) SCSpectaclesBluetoothMonitor *bluetoothMonitor; // @synthesize bluetoothMonitor=_bluetoothMonitor;
@property(retain, nonatomic) SCSpectaclesRequestMessage *outstandingBluetoothRequest; // @synthesize outstandingBluetoothRequest=_outstandingBluetoothRequest;
@property(retain, nonatomic) SCSpectaclesBleMonitor *bleMonitor; // @synthesize bleMonitor=_bleMonitor;
@property(retain, nonatomic) SCWeakTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) SCWeakTimer *encryptionTimer; // @synthesize encryptionTimer=_encryptionTimer;
@property(retain, nonatomic) SCWeakTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) NSSet *pushMessagePatterns; // @synthesize pushMessagePatterns=_pushMessagePatterns;
@property(nonatomic) _Bool peerBondStatus; // @synthesize peerBondStatus=_peerBondStatus;
@property(readonly, nonatomic) SCSpectaclesAncsNotificationSettings *ancsFriendNotificationSettings; // @synthesize ancsFriendNotificationSettings=_ancsFriendNotificationSettings;
@property(nonatomic) long long saveContentToLocation; // @synthesize saveContentToLocation=_saveContentToLocation;
@property(nonatomic) unsigned long long lastConnectionFailureReason; // @synthesize lastConnectionFailureReason=_lastConnectionFailureReason;
@property(retain, nonatomic) NSDate *lastUploadAnalyticsLogsTime; // @synthesize lastUploadAnalyticsLogsTime=_lastUploadAnalyticsLogsTime;
@property(nonatomic) _Bool hasChargingInfo; // @synthesize hasChargingInfo=_hasChargingInfo;
@property(nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic) _Bool detectedBluetoothOverloadError; // @synthesize detectedBluetoothOverloadError=_detectedBluetoothOverloadError;
@property(nonatomic) _Bool hasReconciledContentList; // @synthesize hasReconciledContentList=_hasReconciledContentList;
@property(nonatomic) unsigned long long temperatureStatus; // @synthesize temperatureStatus=_temperatureStatus;
@property(retain, nonatomic) NSDate *lastTemperatureReportTime; // @synthesize lastTemperatureReportTime=_lastTemperatureReportTime;
@property(nonatomic) long long wifiTemperature; // @synthesize wifiTemperature=_wifiTemperature;
@property(nonatomic) long long ambaTemperature; // @synthesize ambaTemperature=_ambaTemperature;
@property(nonatomic) long long coulombCounterTemperature; // @synthesize coulombCounterTemperature=_coulombCounterTemperature;
@property(nonatomic) long long nordicTemperature; // @synthesize nordicTemperature=_nordicTemperature;
@property(nonatomic) _Bool ancsNotificationsEnabled; // @synthesize ancsNotificationsEnabled=_ancsNotificationsEnabled;
@property(nonatomic) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
@property(nonatomic) long long lastConnectedTimestamp; // @synthesize lastConnectedTimestamp=_lastConnectedTimestamp;
@property(nonatomic) long long lastGPSAlmanacUpdatedTimestamp; // @synthesize lastGPSAlmanacUpdatedTimestamp=_lastGPSAlmanacUpdatedTimestamp;
@property(nonatomic) long long lastNameUpdatedTimestamp; // @synthesize lastNameUpdatedTimestamp=_lastNameUpdatedTimestamp;
@property(readonly, nonatomic) long long lastPairFromUnpairedStateTimestamp; // @synthesize lastPairFromUnpairedStateTimestamp=_lastPairFromUnpairedStateTimestamp;
@property(nonatomic) long long lastPairedStatusUpdatedTimestamp; // @synthesize lastPairedStatusUpdatedTimestamp=_lastPairedStatusUpdatedTimestamp;
@property(nonatomic) long long firstPairedTimestamp; // @synthesize firstPairedTimestamp=_firstPairedTimestamp;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(nonatomic) long long deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(copy, nonatomic) SCSpectaclesCalibration *calibration; // @synthesize calibration=_calibration;
@property(nonatomic) _Bool hasSpaceToRecord; // @synthesize hasSpaceToRecord=_hasSpaceToRecord;
@property(nonatomic) unsigned long long storageLevelStatus; // @synthesize storageLevelStatus=_storageLevelStatus;
@property(retain, nonatomic) NSNumber *storageLevel; // @synthesize storageLevel=_storageLevel;
@property(retain, nonatomic) NSNumber *voltageLevel; // @synthesize voltageLevel=_voltageLevel;
@property(retain, nonatomic) NSNumber *guppyBatteryLevel; // @synthesize guppyBatteryLevel=_guppyBatteryLevel;
@property(nonatomic) unsigned long long batteryLevelStatus; // @synthesize batteryLevelStatus=_batteryLevelStatus;
@property(retain, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) id <SCSpectaclesHardwareVersion> hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) id <SCSpectaclesFirmwareVersion> firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (void)_checkCapabilities;
- (_Bool)supportsImuData;
- (_Bool)supportsSuspendingWifiWhileRecording;
- (_Bool)supportsBluetoothTransferWhileRecording;
- (_Bool)supportsContextNotification;
- (_Bool)supportsUploadLogFile;
- (_Bool)supportsManualUnpair;
- (_Bool)supportsAnalyticsLogs;
- (_Bool)supportsHevc;
- (_Bool)supportsHomeWiFi;
- (_Bool)supportsProtectedWifi;
- (_Bool)supportsAutomaticStartAsNeededDeletion;
- (_Bool)supportsTaskBatching;
- (_Bool)supportsBatchRequests;
- (_Bool)supportsPsychomantis;
- (_Bool)allowsPassiveUpdates;
- (void)peripheral:(id)arg1 didFailWithError:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveEncryptionResponse:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveResponse:(id)arg2;
- (void)peripheralDidOpenStream:(id)arg1;
- (void)peripheralRequiresEncryptionSetup:(id)arg1;
- (void)addDeviceIdleAnalyticsRequest:(CDUnknownBlockType)arg1;
- (void)addDeviceLogsRequest:(CDUnknownBlockType)arg1;
- (id)_addRefreshContentRequest;
- (void)addRefreshContentRequestIfNecessary;
- (void)firmwareUpdaterSendRequest:(id)arg1;
- (void)firmwareUploadTaskDidFail;
- (void)firmwareUploadTaskDidSucceed;
- (void)_addStereoCalibrationDataRequestIfNeeded;
- (unsigned long long)_unpairReasonFromConnectionFailure;
- (void)requestLastCloudUploadTime;
- (void)setWifiAPList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestWifiAPList;
- (void)sendAccessToken:(id)arg1 refreshToken:(id)arg2 expirationTimeMs:(long long)arg3 userId:(id)arg4;
- (void)sendAuthzCode:(id)arg1 codeVerifier:(id)arg2 redirectUri:(id)arg3;
- (void)requestClientId;
- (void)shareWifiCredentialsWithSSID:(id)arg1 password:(id)arg2;
- (void)cancelShareWifiCredentials;
- (void)shareWifiCredentials;
- (void)contentListReconciled;
- (void)reset;
- (void)manualUnpairWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)unpairWithReason:(unsigned long long)arg1;
- (void)deactivate;
- (void)activate;
- (void)removeCorruptContent:(id)arg1;
- (void)_adoptBabyDevice:(id)arg1;
- (void)adoptBabyDevice:(id)arg1 performer:(id)arg2;
- (void)setTransferDisabled:(_Bool)arg1 forReason:(long long)arg2;
- (_Bool)_transferDisabled;
- (void)setPeripheralDisplayName;
- (void)clearCrashReport;
- (void)requestCrashReport;
- (void)resetConnectionTimer;
- (void)ambaWatchdogKick;
- (void)requestWiFiDisconnection;
- (void)requestWiFiConnectionWithSsidPassword:(id)arg1 countryCode:(id)arg2 connectionReason:(long long)arg3;
- (void)requestBluetoothDisconnection;
- (void)requestBluetoothConnection:(long long)arg1;
- (void)_transitionToState:(long long)arg1;
- (void)_transitionToState:(long long)arg1 afterRequest:(id)arg2 afterTime:(double)arg3;
- (void)_transitionToState:(long long)arg1 afterTime:(double)arg2;
- (void)_transitionToStateTimeoutComplete:(id)arg1;
- (unsigned long long)_handleDeviceStatus:(id)arg1;
- (_Bool)_handleMediaCount:(long long)arg1;
- (void)_handleAmbaCrashed;
- (_Bool)_crashDetectedInResponse:(id)arg1;
- (void)_handleResponse:(id)arg1;
- (unsigned int)_colorIntForHexString:(id)arg1;
- (unsigned int)_blueValueForHexString:(id)arg1;
- (unsigned int)_greenValueForHexString:(id)arg1;
- (unsigned int)_redValueForHexString:(id)arg1;
- (void)_passMonitorsResponse:(id)arg1;
- (void)_addResponseMonitorWithHandler:(CDUnknownBlockType)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 timeoutBlock:(CDUnknownBlockType)arg4;
- (void)clearContentWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)savePushMessagePattern:(id)arg1;
- (void)requestPeerBondStatus;
- (void)removeAllAncsNotificationRules;
- (void)_requestAddAncsRule;
- (void)addAncsNotificationSettings:(id)arg1;
- (void)sendContextNotificationForSourceId:(id)arg1;
- (void)sendContextNotificationWithAnimation:(id)arg1;
- (void)_sendDeviceReset;
- (void)_sendDeviceUpdateRequest;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_stopEncryptionSetupTimer;
- (void)_startEncryptionSetupTimer;
- (void)_stopConnectionTimeout;
- (void)_startConnectionTimeout;
- (void)_connectionDidTimeout;
- (void)_disableDeviceUpdates;
- (void)_setDeviceUpdatesInterval:(long long)arg1;
- (void)_setupDeviceUpdates;
- (_Bool)wifiCanUse5GhzChannelInAllCountries;
- (_Bool)wifiHasDeviceReliableWiFiNotification;
- (void)wifiDidDisconnect;
- (void)wifiDidConnect:(id)arg1;
- (void)wifiDidBoot;
- (void)wifiMonitorSendRequest:(id)arg1;
- (void)bluetoothDetectedOverload;
- (void)bluetoothNeedsPicker;
- (void)bluetoothDidDisconnect:(id)arg1;
- (void)bluetoothDidConnect:(id)arg1;
- (void)bleMonitor:(id)arg1 didDisconnectPeripheral:(id)arg2 reason:(long long)arg3;
- (void)bleMonitor:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)bleMonitor:(id)arg1 didFindPeripheral:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateGPSAlmanac:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *wifiFrequency; // @synthesize wifiFrequency=_wifiFrequency;
- (void)expectWiFiNetworkConnection;
- (_Bool)wifiBooted;
- (unsigned long long)storagelevelStatus;
@property(readonly, nonatomic) id <SCSpectaclesDeviceInternal> internalDevice;
@property(readonly, nonatomic) id <SCSpectaclesDeviceName> name;
@property(readonly, nonatomic) id <SCSpectaclesDeviceConnectionState> connectionState;
- (void)switchToHomeWifi:(id)arg1 wifiPassword:(id)arg2;
- (id)undownloadedHdContent;
- (_Bool)hasHdContentToDownload;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)setupContentWithCache:(id)arg1;
- (void)setupFirstWithPerformer:(id)arg1 analyticsLogger:(id)arg2 progressMonitor:(id)arg3 tweaksConfigProvider:(id)arg4;
- (void)setupWithCentralManager:(id)arg1;
- (id)initWithBabyDevice:(id)arg1 performer:(id)arg2 tweaksConfigProvider:(id)arg3;
- (id)initWithSerialNumber:(id)arg1 displayName:(id)arg2 color:(long long)arg3 firstPairedTimestamp:(long long)arg4 lastPairedStatusUpdatedTimestamp:(long long)arg5 lastNameUpdatedTimestamp:(long long)arg6 deviceNumber:(long long)arg7 firmwareVersion:(id)arg8 hardwareVersion:(id)arg9 tweaksConfigProvider:(id)arg10;
- (id)initInternal;
- (_Bool)tryingToConnectWiFi;
- (_Bool)tryingToConnectBTForContentTransfer;
- (_Bool)tryingToConnectBTDeviceRecording;
- (_Bool)tryingToConnectBT;
- (_Bool)connectedOverWiFi;
- (_Bool)connectedOverBT;
- (_Bool)connectedOverBLE;
- (_Bool)connectedOverBTOrWiFi;
- (_Bool)connectedOverBLEOrWiFi;
- (_Bool)isActive;
- (_Bool)isUnpaired;
- (id)wifiDisplayName;
- (id)bluetoothDisplayName;
- (id)bleDisplayName;
- (id)displayNameWithoutEmoji;
- (id)emoji;
@property(readonly, nonatomic) long long requiredBatteryLevelForFirmwareUpdate;
@property(readonly, nonatomic) _Bool tooHotForFirmwareUpdate;
@property(readonly, nonatomic) _Bool tooColdForFirmwareUpdate;
@property(readonly, nonatomic) _Bool hasEnoughBatteryForFirmwareUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

