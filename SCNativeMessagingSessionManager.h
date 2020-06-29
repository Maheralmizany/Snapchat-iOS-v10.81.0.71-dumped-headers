//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSessionDelegate-Protocol.h"
#import "SCNMessagingUploadDelegate-Protocol.h"
#import "SCNativeMessagingSessionManaging-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCArroyoConversationDataUpdateAnnouncer, SCArroyoFeedDataUpdateAnnouncer, SCBehaviorSubject, SCLazy, SCNMessagingSession, SCNMessagingSessionParameters, SCNativeFeedManager, SCNativeSnapManager, SCPreferences, SCUserSession;
@protocol SCNGrpcAuthContextDelegate, SCNMessagingCreateGroupAndInviteDelegate, SCNMessagingKeyProvider, SCNMessagingReEncryptionDelegate, SCNMessagingUploadDelegate, SCPerforming;

@interface SCNativeMessagingSessionManager : NSObject <SCNMessagingSessionDelegate, SCNMessagingUploadDelegate, SCNetworkConnectivityListener, SCNativeMessagingSessionManaging>
{
    SCNMessagingSessionParameters *_nativeSessionParams;
    id <SCNMessagingKeyProvider> _keyProvider;
    id <SCNMessagingReEncryptionDelegate> _reEncryptionDelegateImpl;
    SCLazy *_friendsFeedReadyLogger;
    SCLazy *_ghostToFeedLogger;
    SCLazy *_grapheneLogger;
    SCNMessagingSession *_nativeSession;
    SCArroyoConversationDataUpdateAnnouncer *_conversationDataUpdateAnnouncer;
    SCArroyoFeedDataUpdateAnnouncer *_feedDataUpdateAnnouncer;
    SCUserSession *_userSession;
    SCPreferences *_userPreferences;
    SCNativeFeedManager *_feedManager;
    SCNativeSnapManager *_snapManager;
    id <SCNGrpcAuthContextDelegate> _authContextDelegateImpl;
    id <SCNMessagingUploadDelegate> _uploadDelegateImpl;
    id <SCNMessagingCreateGroupAndInviteDelegate> _createGroupAndInviteDelegateImpl;
    id <SCPerforming> _nativeDispatchPerformer;
    SCBehaviorSubject *_dataWiped;
    SCLazy *_conversationIdsManager;
    SCLazy *_preferences;
}

- (void).cxx_destruct;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)uploadMedia:(id)arg1 callback:(id)arg2;
- (void)onDataWipe:(id)arg1;
- (id)getAuthContextDelegate;
- (void)onConnectionStateChanged:(long long)arg1;
- (id)dataWiped;
- (id)getNativeConversationManager;
- (void)dispose;
- (void)endSession;
- (id)conversationDataUpdateAnnouncer;
- (void)createSession;
- (id)getSnapManager;
- (id)getNativeSession;
- (id)getFeedManager;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 keyProvider:(id)arg2 reEncryptionDelegate:(id)arg3 friendsFeedReadyLogger:(id)arg4 ghostToFeedLogger:(id)arg5 grapheneLogger:(id)arg6 snapTokenProvider:(id)arg7 uploadDelegate:(id)arg8 createGroupAndInviteDelegate:(id)arg9 feedClearDataManager:(id)arg10 nativeDispatchPerformer:(id)arg11 conversationIdsManager:(id)arg12 preferences:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

