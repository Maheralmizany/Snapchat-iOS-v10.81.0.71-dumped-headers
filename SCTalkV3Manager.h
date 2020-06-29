//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCognacSessionWrapperListener-Protocol.h"
#import "SCTPhoneCallListener-Protocol.h"
#import "SCTV3ChatTransportListener-Protocol.h"
#import "SCTV3SessionWrapperDelegate-Protocol.h"
#import "SCTVideoFrameReceiver-Protocol.h"
#import "SCTalkManager-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"
#import "TCV3Logger-Protocol.h"
#import "TCV3PresenceServiceDelegate-Protocol.h"
#import "TCV3TalkCoreDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCTV3ActiveConversationsListenerAnnouncer, SCTV3GlobalConfigurationUpdater, SCTV3MediaStatsViewController, TCV3PresenceService, TCV3TalkCore;
@protocol SCTAudioManager, SCTAudioServices, SCTAvatarServices, SCTCameraServices, SCTIdentityServices, SCTInstrumentationServices, SCTNetworkServices, SCTPhoneCallServices, SCTV3ChatTransportServices, SCTalkRPC;

@interface SCTalkV3Manager : NSObject <SCTVideoFrameReceiver, TCV3TalkCoreDelegate, TCV3PresenceServiceDelegate, TCV3Logger, SCTV3ChatTransportListener, SCTV3SessionWrapperDelegate, SCTPhoneCallListener, SCTCognacSessionWrapperListener, SCUserSessionScoped, SCTalkManager>
{
    NSString *_ownUserId;
    NSString *_ownUsername;
    TCV3TalkCore *_talkCore;
    TCV3PresenceService *_presenceService;
    SCTV3GlobalConfigurationUpdater *_configUpdater;
    NSMutableDictionary *_wrappers;
    NSMutableDictionary *_callStateEmitters;
    NSMutableDictionary *_networkStatusLoggers;
    SCTV3ActiveConversationsListenerAnnouncer *_activeConversationsListenerAnnouncer;
    NSMutableArray *_cognacSessionWrappers;
    NSMutableDictionary *_activatedCognacIds;
    id <SCTV3ChatTransportServices> _chatTransportServices;
    id <SCTIdentityServices> _identityServices;
    id <SCTAudioManager> _audioManager;
    id <SCTAvatarServices> _avatarServices;
    id <SCTAudioServices> _audioServices;
    id <SCTCameraServices> _cameraServices;
    id <SCTInstrumentationServices> _instrumentationServices;
    id <SCTNetworkServices> _networkServices;
    id <SCTPhoneCallServices> _phoneCallServices;
    id <SCTalkRPC> _talkRPC;
    _Bool _metalRendererEnabled;
    _Bool _audioRoutingEnabled;
    SCTV3MediaStatsViewController *_debugStatsViewController;
}

- (void).cxx_destruct;
- (void)_earlyInitTalkCoreIfNeeded;
- (_Bool)_isInvalidated;
- (id)_networkStatusLoggerForConvoId:(id)arg1;
- (id)_callStateEmitterForConvoId:(id)arg1;
- (id)_wrapperForConvoId:(id)arg1;
- (id)_audioManagerCreatingItIfMissing;
- (void)reachabilityChanged:(id)arg1;
- (void)_sccpConnected;
- (void)_sccpDisconnected;
- (long long)_presenceTransportType;
- (void)_initTalkCoreIfNeeded;
- (void)cognacSessionWrapperDeactivated:(id)arg1;
- (void)cognacSessionWrapperBackgrounded:(id)arg1;
- (void)cognacSessionWrapperActivated:(id)arg1;
- (void)cognacSessionWrapper:(id)arg1 changedState:(id)arg2;
- (void)sessionWrapper:(id)arg1 destroyed:(id)arg2;
- (void)onCallIncompatible:(id)arg1 incompatibleRecipients:(id)arg2;
- (void)onCallRequestReceived:(id)arg1 senderUsername:(id)arg2;
- (void)onChatMessageReceived:(id)arg1;
- (void)log:(id)arg1 message:(id)arg2;
- (void)resolveConversationId:(id)arg1 userId:(id)arg2 callback:(id)arg3;
- (void)notifyActiveConversationsChanged;
- (void)fetchUserIdMap:(id)arg1 usernames:(id)arg2 callback:(id)arg3;
- (void)sendPresenceMessage:(id)arg1;
- (void)postDelayedInMainThread:(id)arg1 delayMs:(long long)arg2;
- (void)injectFrame:(struct opaqueCMSampleBuffer *)arg1;
- (id)activeConversations;
- (void)removeActiveConversationsListener:(id)arg1;
- (void)addActiveConversationsListener:(id)arg1;
- (unsigned long long)callStateForConvoId:(id)arg1;
- (_Bool)hasAnyCallingActivity;
- (void)dismissCallsOtherThanConvoId:(id)arg1;
- (void)removeCallStateListener:(id)arg1 convoId:(id)arg2;
- (void)addCallStateListener:(id)arg1 convoId:(id)arg2;
- (void)onPhoneActivityChanged:(_Bool)arg1;
- (id)debugMediaStatsView;
- (id)_DEBUG_activeSessionConvoId;
- (void)_DEBUG_injectScript:(id)arg1;
- (void)_DEBUG_setChatTransportServices:(id)arg1;
- (id)createCognacSessionForCognacId:(id)arg1 cognacServices:(id)arg2 bitmojiEnabled:(_Bool)arg3;
- (id)createCognacSessionForConvoId:(id)arg1 convoMetadata:(id)arg2 cognacId:(id)arg3 cognacServices:(id)arg4 bitmojiEnabled:(_Bool)arg5;
- (id)createHeadlessSessionForConvoId:(id)arg1 convoMetadata:(id)arg2 headessCallServices:(id)arg3;
- (id)createSessionForConvoId:(id)arg1 convoMetadata:(id)arg2 presenceEnabled:(_Bool)arg3 dependencies:(id)arg4;
- (id)audioManager;
- (void)invalidate;
- (id)chatTransportServices;
- (id)identityServices;
- (id)initWithUserId:(id)arg1 username:(id)arg2 audioServices:(id)arg3 avatarServices:(id)arg4 cameraServices:(id)arg5 chatTransportServices:(id)arg6 identityServices:(id)arg7 instrumentationServices:(id)arg8 networkServices:(id)arg9 phoneCallServices:(id)arg10 talkRPC:(id)arg11 metalRendererEnabled:(_Bool)arg12 audioRoutingEnabled:(_Bool)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

