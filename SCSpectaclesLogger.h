//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesAppLogger-Protocol.h"
#import "SCSpectaclesAppPairingLogger-Protocol.h"
#import "SCSpectaclesLibraryLogger-Protocol.h"

@class NSDate, NSString, SCSpectaclesRealTimeEventLogger;
@protocol SCGraphene;

@interface SCSpectaclesLogger : NSObject <SCSpectaclesLibraryLogger, SCSpectaclesAppLogger, SCSpectaclesAppPairingLogger>
{
    SCSpectaclesRealTimeEventLogger *_realTimeLogger;
    id <SCGraphene> _graphene;
    NSDate *_deviceStatusAnalyticsLastUpdatedTime;
}

+ (double)_roundToNearestTenth:(double)arg1;
+ (long long)_convertPairingTypeFromSource:(unsigned long long)arg1;
+ (long long)_convertFirmwareErrorType:(id)arg1;
+ (long long)_convertFirmwareCrashType:(id)arg1;
+ (long long)_convertNrfUnexpectedResponseReason:(unsigned long long)arg1;
+ (long long)_convertBtcState:(unsigned long long)arg1;
+ (long long)_convertBleState:(unsigned long long)arg1;
+ (long long)_convertGetHdCancelSource:(unsigned long long)arg1;
+ (long long)_convertGetHdStartSource:(unsigned long long)arg1;
+ (long long)_convertPairingFailureReason:(unsigned long long)arg1;
+ (long long)_convertPairingCancellationSource:(unsigned long long)arg1;
+ (long long)_convertPairingSource:(unsigned long long)arg1;
+ (long long)_convertFrameColor:(long long)arg1;
+ (long long)_convertUpdateFailureReason:(unsigned long long)arg1;
+ (long long)_convertOnboardingExitSource:(unsigned long long)arg1;
+ (long long)_convertOnboardingPage:(unsigned long long)arg1;
+ (long long)_convertOnboardingSource:(unsigned long long)arg1;
+ (long long)_convertContentComponent:(unsigned long long)arg1;
+ (long long)_convertInterruptReason:(unsigned long long)arg1;
+ (long long)_convertButtonPressType:(unsigned long long)arg1;
+ (long long)_convertTransferType:(unsigned long long)arg1;
+ (long long)_convertTransferChannel:(long long)arg1;
+ (long long)_convertWifiStatus:(unsigned long long)arg1;
+ (id)_stringForButtonPressType:(unsigned long long)arg1;
@property(retain, nonatomic) NSDate *deviceStatusAnalyticsLastUpdatedTime; // @synthesize deviceStatusAnalyticsLastUpdatedTime=_deviceStatusAnalyticsLastUpdatedTime;
@property(retain, nonatomic) id <SCGraphene> graphene; // @synthesize graphene=_graphene;
@property(retain, nonatomic) SCSpectaclesRealTimeEventLogger *realTimeLogger; // @synthesize realTimeLogger=_realTimeLogger;
- (void).cxx_destruct;
- (void)logContextNotificationSettingsChanged:(id)arg1 numAllFriends:(unsigned long long)arg2;
- (void)logContextNotificationSettingsOff;
- (void)logContextNotificationSettingsOn:(id)arg1 numAllFriends:(unsigned long long)arg2;
- (void)logSpectaclesConnectionSuccessForPairing:(id)arg1;
- (void)logSpectaclesConnectionStartForPairing:(id)arg1;
- (void)logRealTimePairingAnalyticsEvent:(unsigned long long)arg1 pairingSessionInfo:(id)arg2;
- (void)logPairingNeedHelpPressed:(id)arg1;
- (void)_logPairingBackupDetectedNotificationPressed;
- (void)logPairingInactiveAlertSupportSiteLinkPressed:(id)arg1;
- (void)logPairingInactiveAlertKeepPairingPressed:(id)arg1;
- (void)logPairingInactiveAlertShown:(id)arg1;
- (void)logPairingCancel:(id)arg1 cancellationSource:(unsigned long long)arg2;
- (void)logPairingRetry:(id)arg1;
- (void)logPairingFailure:(id)arg1 failureReason:(unsigned long long)arg2;
- (void)logPairingSuccessful:(id)arg1;
- (void)logPairingBleSynced:(id)arg1;
- (void)logPairingTermsOfServiceClosed:(id)arg1;
- (void)logPairingTermsOfServiceOpened:(id)arg1;
- (void)logPairingLocationPermissionEnabled:(_Bool)arg1 pairingSessionInfo:(id)arg2;
- (void)logPairingNameChanged:(id)arg1;
- (void)logPairingNameDialogDisplayed:(id)arg1;
- (void)logPairingBleConnected:(id)arg1;
- (void)logPairingBackupDetected:(id)arg1;
- (void)logPairingBackupStart:(id)arg1 failureReason:(unsigned long long)arg2;
- (void)logPairingBleDetected:(id)arg1;
- (void)logPairingStarted:(id)arg1;
- (void)_populatePairingEventParameters:(id)arg1 pairingSessionInfo:(id)arg2;
- (void)_populateGrapheneMetric:(id)arg1 pairingSessionInfo:(id)arg2;
- (void)logBoomboxStoryView:(id)arg1 durationSec:(double)arg2 numVideos:(unsigned long long)arg3 numPhotos:(unsigned long long)arg4 deviceId:(id)arg5 firmwareVersion:(id)arg6 hardwareVersion:(id)arg7 deviceColor:(long long)arg8 sessionId:(id)arg9 viewSource:(long long)arg10;
- (void)logBoomboxSnapView:(id)arg1 lensInfo:(id)arg2 entryId:(id)arg3 durationSec:(double)arg4 fileType:(long long)arg5 deviceId:(id)arg6 firmwareVersion:(id)arg7 hardwareVersion:(id)arg8 deviceColor:(long long)arg9 sessionId:(id)arg10 viewSource:(long long)arg11;
- (void)logHomeWifiRefreshTokenInvalid:(id)arg1;
- (void)logHomeWifiUploadUpdate:(id)arg1 updateType:(long long)arg2;
- (void)logHomeWifiRemoveNetwork:(id)arg1;
- (void)logHomeWifiShareFlowFailed:(id)arg1 isResharingCredentials:(_Bool)arg2 failureReason:(long long)arg3;
- (void)logHomeWifiShareFlowConnected:(id)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiShareFlowShared:(id)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiShareFlowStarted:(id)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiViewOpened:(id)arg1 numAddedNetworks:(long long)arg2;
- (void)_populateConnectionEventParameters:(id)arg1 connectionInfo:(id)arg2;
- (void)logSpectaclesConnectionFailureForTransfer:(id)arg1 failureReason:(id)arg2;
- (void)logSpectaclesConnectionSuccessForUpdate:(id)arg1;
- (void)logSpectaclesConnectionStartForUpdate:(id)arg1;
- (void)logRealTimeFirmwareUpdateFailureWithDeviceID:(id)arg1 updateSessionID:(id)arg2 firmwareVersion:(id)arg3 failureReason:(id)arg4 updateIsActive:(_Bool)arg5;
- (void)logRealTimeFirmwareUpdateSuccessWithDeviceID:(id)arg1 updateSessionID:(id)arg2 newFirmwareVersion:(id)arg3 downloadDurationInMs:(long long)arg4 transferDurationInMs:(long long)arg5 updateDurationInMs:(long long)arg6 updateIsActive:(_Bool)arg7;
- (void)logFirmwareUpdateFailed:(id)arg1 reason:(unsigned long long)arg2;
- (void)logFirmwareUpdateSucceeded:(id)arg1;
- (void)logFirmwareUpdateFlashStarted:(id)arg1;
- (void)logFirmwareUpdateScheduled:(id)arg1;
- (void)logFirmwareUpdatePatchApplyFinished:(id)arg1;
- (void)logFirmwareUpdatePatchApplyStarted:(id)arg1;
- (void)logFirmwareUpdatePatchTransferFinished:(id)arg1;
- (void)logFirmwareUpdatePatchTransferStarted:(id)arg1;
- (void)logFirmwareUpdatePatchDownloadFinished:(id)arg1;
- (void)logFirmwareUpdatePatchDownloadStarted:(id)arg1;
- (void)logFirmwareUpdateBinaryRevertFinished:(id)arg1;
- (void)logFirmwareUpdateBinaryRevertStarted:(id)arg1;
- (void)logFirmwareUpdateStarted:(id)arg1;
- (void)_populateAndLogFirmwareUpdateSessionEvent:(id)arg1 info:(id)arg2;
- (void)logFirmwareUpdatePromptDismissed:(id)arg1 promptAccepted:(_Bool)arg2;
- (void)logFirmwareUpdatePromptShown:(id)arg1;
- (void)logFirmwareUpdateSeen:(id)arg1;
- (void)logFirmwareUpdateChecked:(id)arg1;
- (void)_populateAndLogFirmwareUpdateEvent:(id)arg1 device:(id)arg2;
- (void)_populateSpectaclesTrackedEvent:(id)arg1 device:(id)arg2;
- (void)logNotificationDisplayed:(id)arg1 withSystem:(_Bool)arg2;
- (void)_populateTransferEventParameters:(id)arg1 notification:(id)arg2;
- (void)_logCustomExportForContentId:(id)arg1 lensInfo:(id)arg2 action:(long long)arg3 source:(long long)arg4 cancellationSource:(long long)arg5 shareChannel:(id)arg6;
- (void)logCustomExportForContentId:(id)arg1 lensInfo:(id)arg2 source:(long long)arg3 action:(long long)arg4 shareChannel:(id)arg5;
- (void)logCustomExportCancel:(id)arg1 source:(long long)arg2 cancellationSource:(long long)arg3;
- (void)logCustomExportStart:(id)arg1 source:(long long)arg2;
- (void)logSpectaclesTransferHDFlowCancelled:(id)arg1 fromSource:(unsigned long long)arg2;
- (void)logSpectaclesTransferHDFlowStarted:(id)arg1 fromSource:(unsigned long long)arg2;
- (void)logHDFlowStartedWithBatchId:(id)arg1;
- (void)logSpectaclesTransferHDButtonPressed:(id)arg1 fromSource:(unsigned long long)arg2;
- (void)_populateGetHdEventFlowParameters:(id)arg1 getHdSessionInfo:(id)arg2;
- (void)_populateGetHdEventParameters:(id)arg1 getHdSessionInfo:(id)arg2;
- (void)logSettingsUserVisitedCommerceWebsiteWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logSettingsUserPressedSaveToMemoriesAndCameraRoll:(id)arg1;
- (void)logSettingsUserPressedSaveToMemories:(id)arg1;
- (void)logSettingsUserPressedCheckUpdate:(id)arg1;
- (void)logSettingsUserPressedRestartDevice:(id)arg1;
- (void)logSettingsUserPressedUnpairDevice:(id)arg1;
- (void)logSettingsUserPressedForgetDevice:(id)arg1;
- (void)logSettingsUserPressedClearContent:(id)arg1;
- (void)logSettingsUserConnectDeviceSuccess:(id)arg1;
- (void)logSettingsUserConnectDeviceFailure:(id)arg1 failureReason:(long long)arg2;
- (void)logSettingsUserPressedConnectDevice:(id)arg1;
- (void)logSettingsUserRenamedDeviceCancel:(id)arg1;
- (void)logSettingsUserRenamedDeviceSuccess:(id)arg1;
- (void)logSettingsUserRenamedDeviceOpen:(id)arg1;
- (void)logSettingsUserPressedManageDevice:(id)arg1;
- (void)logSettingsUserAddedSpectacles;
- (void)logSettingsUserVisitedGettingStartedPage;
- (void)logSettingsUserVisitedNeedHelpPage;
- (void)logUserExitSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logUserEnterSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)_logSpectaclesSettingsDeviceActionWithType:(long long)arg1 device:(id)arg2 failureReason:(long long)arg3;
- (void)_logSpectaclesSettingsDeviceActionWithType:(long long)arg1 device:(id)arg2;
- (void)_logSpectaclesSettingsActionWithType:(long long)arg1;
- (void)logOnboardingExit:(id)arg1 exitSource:(unsigned long long)arg2;
- (void)logOnboardingPageChange:(id)arg1;
- (void)logOnboardingStart:(id)arg1;
- (void)_populateOnboardingEventParameters:(id)arg1 onboardingSessionInfo:(id)arg2;
- (void)logDeviceStatusUpdate:(id)arg1 videoCount:(long long)arg2;
- (void)logSpectaclesConnectionFailureForUpdate:(id)arg1 failureReason:(id)arg2;
- (void)logSpectaclesConnectionSuccessForTransfer:(id)arg1;
- (void)logSpectaclesConnectionStartForTransfer:(id)arg1;
- (void)logContentCaptureErrorForDevice:(id)arg1 reason:(unsigned long long)arg2 timeOfCapture:(id)arg3;
- (void)logDebugReport:(id)arg1 deviceId:(id)arg2 firmwareErrorType:(id)arg3 firmwareCrashType:(id)arg4 transferSessionId:(id)arg5 pairingSessionId:(id)arg6 updateSessionId:(id)arg7 firmwareVersion:(id)arg8 hardwareVersion:(id)arg9 frameColor:(long long)arg10;
- (void)logNrfUnexpectedResponse:(id)arg1 reason:(unsigned long long)arg2;
- (void)logDeviceUnpaired:(id)arg1 reason:(unsigned long long)arg2;
- (void)logCorruptContent:(id)arg1 device:(id)arg2 corruptionSource:(unsigned long long)arg3;
- (void)logTransferFailureWithTransferChannel:(long long)arg1 transferBatchID:(id)arg2;
- (void)logRealTimeBatchTransferWithBatchId:(id)arg1 deviceStorage:(id)arg2 numberOfHdVideoBeingTransferred:(id)arg3 firmwareVersion:(id)arg4 transferChannel:(id)arg5 deviceBatteryAtStart:(id)arg6 deviceBatteryAtEnd:(id)arg7 timeOfTransferStartUtc:(id)arg8 timeOfTransferEndUtc:(id)arg9 deviceID:(id)arg10 isCharging:(_Bool)arg11 bluetoothBootTimeInMs:(id)arg12 wifiBootTimeInMs:(id)arg13 nordicTemperature:(id)arg14 coulombControlTemperature:(id)arg15 ambaTemperature:(id)arg16 wifiTemperature:(id)arg17 temperatureReportUpdateUtc:(id)arg18 wifiConnectionStatus:(unsigned long long)arg19 transferType:(unsigned long long)arg20 isAutomaticTransfer:(_Bool)arg21;
- (void)logRealTimeCaptureEventBatch;
- (void)logRealTimeCaptureEventForContent:(id)arg1 name:(id)arg2 metadata:(id)arg3;
- (void)logContentCaptureForSession:(id)arg1 metadata:(id)arg2 contentId:(id)arg3;
- (void)logMetadataTransferForSession:(id)arg1 timeSinceTransferBegan:(id)arg2 fileSize:(long long)arg3 contentId:(id)arg4;
- (void)logFileTransferForSession:(id)arg1 timeSinceTransferBegan:(id)arg2;
- (void)logTransferSessionInterrupted:(id)arg1 reason:(unsigned long long)arg2 hdVideos:(long long)arg3 photos:(long long)arg4 wifiConnectionStatus:(unsigned long long)arg5;
- (void)logTransferSessionFinished:(id)arg1 hdVideos:(long long)arg2 photos:(long long)arg3 wifiConnectionStatus:(unsigned long long)arg4;
- (void)logTransferSessionStart:(id)arg1 bluetoothBootTimeInMs:(id)arg2 wifiBootTimeInMs:(id)arg3 wifiConnectionStatus:(unsigned long long)arg4;
- (void)_populateTransferSessionParameters:(id)arg1 transferSession:(id)arg2;
- (void)_populateTransferEventParameters:(id)arg1 info:(id)arg2;
- (void)_populateTransferEventParameters:(id)arg1 transferSession:(id)arg2;
- (void)_populateSpectaclesTempTrackedEvent:(id)arg1 device:(id)arg2;
- (void)_populateSpectaclesContentCaptureErrorEvent:(id)arg1 device:(id)arg2 errorType:(unsigned long long)arg3 timeOfCapture:(id)arg4;
- (void)_updateSpectaclesContextNotificationSettingEvent:(id)arg1 withAppSettings:(id)arg2 numAllFriends:(unsigned long long)arg3;
- (id)initWithRequestManager:(id)arg1 graphene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

