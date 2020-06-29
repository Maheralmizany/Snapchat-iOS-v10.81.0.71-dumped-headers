//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSession-Protocol.h"
#import "SCProximityDeviceDelegate-Protocol.h"

@class AVAudioSession, AVAudioSessionDataSourceDescription, AVAudioSessionRouteDescription, FBKVOController, MPVolumeView, NSArray, NSNotificationCenter, NSString, SCAudioSessionListenerAnnouncer, SCProximityDevice, UISlider;
@protocol SCPerforming;

@interface SCAudioSessionCore : NSObject <SCAudioSession, SCProximityDeviceDelegate>
{
    AVAudioSessionRouteDescription *_currentRoute;
    float _outputVolume;
    FBKVOController *_kvoController;
    NSString *_secretToken;
    double _cachedNonMuteVolume;
    _Bool _isOverridingMuteSwitch;
    _Bool _secretFeatureOn;
    _Bool _ignoreVolumeChangeFromSettingBounds;
    unsigned long long _interruptionState;
    MPVolumeView *_hiddenVolumeView;
    UISlider *_hiddenVolumeSlider;
    id <SCPerforming> _performer;
    SCProximityDevice *_proximityDevice;
    SCAudioSessionListenerAnnouncer *_announcer;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) SCAudioSessionListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) SCProximityDevice *proximityDevice; // @synthesize proximityDevice=_proximityDevice;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (id)_humanReadableCategoryOptions:(unsigned long long)arg1;
- (id)_formatRoute:(id)arg1 printAllDataSource:(_Bool)arg2;
- (id)_outputPortTypes;
- (_Bool)_isCategorySilencedByMuteSwitch:(id)arg1;
- (id)hiddenVolumeSlider;
- (id)hiddenVolumeView;
- (void)onApplicationDidBecomeActive;
- (void)onAVAudioSessionInterruption:(id)arg1;
- (void)onAVAudioSessionSilenceSecondaryAudioHintNotification:(id)arg1;
- (void)onAVAudioSessionMediaServicesWereReset:(id)arg1;
- (void)onAVAudioSessionMediaServicesWereLost:(id)arg1;
- (void)onAVAudioSessionRouteChanged:(id)arg1;
- (void)onAVAudioSessionVolumeChanged:(id)arg1;
- (void)_cleanNotifications;
- (void)_setupNotifications;
- (void)_updateNonMuteVolume;
- (void)_setBounds;
- (void)proximityDevice:(id)arg1 onProximityStateChange:(_Bool)arg2;
- (void)setProximityMonitoringEnabled:(_Bool)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)debugInfoCurrentRoutes;
- (void)debugInfoWithUploadInfoCompletion:(CDUnknownBlockType)arg1;
- (void)debugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)tryUseFrontMicWithErrorCode:(long long)arg1;
- (id)_builtInMicPort;
- (id)selectedDataSourceName;
- (_Bool)noSoundCheckAudioSessionIsNil;
- (_Bool)userUsingBluetoothOutput;
- (_Bool)userUsingHeadphones;
- (_Bool)isOtherAudioPlaying;
@property(nonatomic) _Bool volumeHUDEnabled;
- (void)checkStatusWithCallbackPerformer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkIsPlayingSoundWithCompletion:(CDUnknownBlockType)arg1;
- (void)setIsOverridingMuteSwitch:(_Bool)arg1;
- (_Bool)isPlayingSound;
- (void)toggleMuteWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRecordPermissionWithLogging:(_Bool)arg1 permissionBlock:(CDUnknownBlockType)arg2;
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;
- (unsigned long long)recordPermission;
- (_Bool)setOutputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setInputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setPreferredInput:(id)arg1 error:(id *)arg2;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)setInputGain:(float)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double preferredIOBufferDuration;
@property(readonly, nonatomic) double IOBufferDuration;
@property(readonly, nonatomic) double outputLatency;
@property(readonly, nonatomic) double inputLatency;
- (void)setOutputVolume:(float)arg1;
@property(readonly, nonatomic) float outputVolume;
@property(readonly, nonatomic) long long outputNumberOfChannels;
@property(readonly, nonatomic) long long inputNumberOfChannels;
@property(readonly, nonatomic) double preferredSampleRate;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *outputDataSource;
@property(readonly, nonatomic) NSArray *outputDataSources;
@property(readonly, nonatomic) AVAudioSessionDataSourceDescription *inputDataSource;
@property(readonly, nonatomic) NSArray *inputDataSources;
@property(readonly, nonatomic) _Bool inputAvailable;
@property(readonly, nonatomic) _Bool inputGainSettable;
@property(readonly, nonatomic) float inputGain;
@property(readonly, nonatomic) long long maximumOutputNumberOfChannels;
@property(readonly, nonatomic) long long maximumInputNumberOfChannels;
- (void)setCurrentRoute:(id)arg1;
@property(readonly, nonatomic) AVAudioSessionRouteDescription *currentRoute;
@property(readonly, nonatomic) _Bool secondaryAudioShouldBeSilencedHint;
@property(readonly, nonatomic) NSString *mode;
@property(readonly, nonatomic) unsigned long long categoryOptions;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) AVAudioSession *session;
- (void)dealloc;
- (id)initWithPerformer:(id)arg1 notificationCenter:(id)arg2 proximityDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

