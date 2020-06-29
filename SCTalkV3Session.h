//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCallButtonsDelegate-Protocol.h"
#import "SCTCallingControllerDelegate-Protocol.h"
#import "SCTV3SessionWrapperListener-Protocol.h"
#import "SCTalkSession-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCTCallButtons, SCTCallingController, SCTV3CameraManager, SCTV3FullscreenController, SCTV3SessionWrapper, SCTV3SpeechActivityListenerAnnouncer, SCTV3UIController;
@protocol SCTAudioManager, SCTCameraServices, SCTChatPresenceController, SCTIdentityServices, SCTPhoneCallServices, SCTalkSessionDependenciesProvider;

@interface SCTalkV3Session : NSObject <SCTV3SessionWrapperListener, SCTCallingControllerDelegate, SCTCallButtonsDelegate, SCTraceEnabled, SCTalkSession>
{
    NSString *_ownUsername;
    id <SCTalkSessionDependenciesProvider> _deps;
    id <SCTAudioManager> _audioManager;
    id <SCTCameraServices> _cameraServices;
    id <SCTIdentityServices> _identityServices;
    id <SCTPhoneCallServices> _phoneCallServices;
    SCTV3SessionWrapper *_sessionWrapper;
    _Bool _sessionWrapperDisposed;
    SCTV3UIController *_uiController;
    id <SCTChatPresenceController> _presenceController;
    SCTV3FullscreenController *_fullscreenController;
    SCTCallingController *_callingController;
    _Bool _shouldActivateCallingControllerOnCreation;
    SCTV3CameraManager *_cameraManager;
    SCTCallButtons *_callButtons;
    _Bool _isMonologue;
    _Bool _exisitingUsersTooltipShown;
    _Bool _useMetalRenderer;
    _Bool _useAudioRouting;
    NSString *_convoId;
    SCTV3SpeechActivityListenerAnnouncer *_speechActivityAnnouncer;
}

@property(readonly) SCTV3SpeechActivityListenerAnnouncer *speechActivityAnnouncer; // @synthesize speechActivityAnnouncer=_speechActivityAnnouncer;
@property(readonly) NSString *convoId; // @synthesize convoId=_convoId;
- (void).cxx_destruct;
- (id)_createRemoteParticipantStates;
- (_Bool)_isGroupConversation;
- (_Bool)_inChatDependenciesReady;
- (void)_attachPresenceBarPaneIfPossible;
- (id)_setupPresenceBarIfNeeded;
- (void)didPressJoinCall:(unsigned long long)arg1 button:(id)arg2;
- (void)didPressEndCallButton:(id)arg1;
- (void)didPressStartCall:(unsigned long long)arg1 button:(id)arg2;
- (id)fullscreenELMShrinkTargetForCallingController:(id)arg1;
- (void)callingController:(id)arg1 reportLensActive:(_Bool)arg2;
- (id)callEstablishedDateForCallingController:(id)arg1;
- (id)sessionStateForCallingController:(id)arg1;
- (id)localSessionStateForCallingController:(id)arg1;
- (id)speechActivityAnnouncerForCallingController:(id)arg1;
- (id)convoIdForCallingController:(id)arg1;
- (void)sessionWrapper:(id)arg1 updatedSpeechActivity:(id)arg2;
- (void)sessionWrapperDisposed:(id)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (_Bool)TECHDEBT_callInProgress;
- (_Bool)TECHDEBT_expandedLocalMediaMode;
- (void)processTypingActivity:(unsigned long long)arg1;
- (void)setCellViewPosition:(long long)arg1;
- (void)setChatSource:(long long)arg1;
- (id)callingController;
- (id)presenceController;
- (void)refreshParticipants;
- (void)deactivate;
- (void)background;
- (void)activate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConvoId:(id)arg1 ownUsername:(id)arg2 dependencies:(id)arg3 sessionWrapper:(id)arg4 audioManager:(id)arg5 cameraServices:(id)arg6 identityServices:(id)arg7 phoneCallServices:(id)arg8 talkManager:(id)arg9 useMetalRenderer:(_Bool)arg10 useAudioRouting:(_Bool)arg11 presenceEnabled:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

