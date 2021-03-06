//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTAudioManager-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCTSingleTaskPerformer, SCTV3SessionWrapper;
@protocol SCTAudioServices;

@interface SCTV3AudioManager : NSObject <SCTAudioManager>
{
    id <SCTAudioServices> _audioServices;
    unsigned long long _audioMode;
    _Bool _proximityEnabled;
    _Bool _webrtcAudioProcessingEnabled;
    NSMutableSet *_wrappersEnablingAudio;
    NSMutableSet *_wrappersEnablingProximity;
    NSMutableSet *_wrappersEnablingWebrtcAudioProcessing;
    NSMutableSet *_cognacWrappersEnablingAudio;
    NSMutableSet *_cognacWrappersEnablingWebrtcAudioProcessing;
    _Bool _shouldPlayHangUpSound;
    SCTV3SessionWrapper *_lastCallingWrapper;
    NSMutableDictionary *_ringingLockTokens;
    NSMutableDictionary *_ringingWrapperState;
    SCTSingleTaskPerformer *_updatePerformer;
}

- (void).cxx_destruct;
- (_Bool)_shouldPlayHangupSoundForReason:(long long)arg1;
- (void)_processPlaybackOfRingingSoundAfterEnablingAudioIfNeeded;
- (void)_processPlaybackOfRingingSound:(id)arg1 reason:(long long)arg2;
- (void)_requestRingingUnlock:(id)arg1;
- (void)_requestRingingLock:(id)arg1;
- (_Bool)_shouldLockRinging:(id)arg1;
- (void)_performUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)cognacSessionWrapperDeactivated:(id)arg1;
- (void)cognacSessionWrapperBackgrounded:(id)arg1;
- (void)cognacSessionWrapperActivated:(id)arg1;
- (void)cognacSessionWrapper:(id)arg1 changedState:(id)arg2;
- (void)callKitWillDeactivateAudioSession:(id)arg1;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (void)releaseCallKitAudioSession;
- (void)requestCallKitAudioSessionWithProximityEnabled:(_Bool)arg1 speakers:(_Bool)arg2;
- (void)callKitIncomingCallStarted;
- (void)callKitAppWillResignActive;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (void)toggleAudioRouteBetweenSpeakerAndEarpiece;
- (void)selectAudioRoute:(id)arg1;
- (id)audioState;
- (id)initWithAudioServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

