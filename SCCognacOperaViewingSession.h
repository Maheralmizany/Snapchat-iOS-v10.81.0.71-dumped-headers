//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaDataSourceDelegate-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacOperaSessionParticipantTracking-Protocol.h"

@class NSArray, NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacLoadingProgressTracker, SCCognacOperaActionsMenuSession, SCCognacOperaAdViewingSession, SCCognacOperaConfigureSession, SCCognacOperaDataSource, SCCognacOperaInviteSession, SCCognacOperaLeaderboardSession, SCCognacOperaMediaShareSession, SCCognacOperaPlayWithSession, SCCognacOperaSettingsSession, SCCognacOperaTalkSession, SCCognacOperaViewingSessionConfig, SCCognacServiceClient, SCCognacUserAppSessionsUserAppSession, SCWeakTimer;
@protocol SCCognacCypressProxy;

@interface SCCognacOperaViewingSession : NSObject <SCCognacOperaSession, SCCognacOperaDataSourceDelegate, SCCognacOperaSessionParticipantTracking>
{
    SCCognacOperaInviteSession *_inviteSession;
    SCCognacOperaPlayWithSession *_playWithSession;
    SCCognacOperaAdViewingSession *_adViewingSession;
    SCCognacOperaLeaderboardSession *_leaderboardSession;
    SCCognacOperaTalkSession *_talkSession;
    SCCognacOperaSettingsSession *_settingsSession;
    SCCognacOperaActionsMenuSession *_actionsMenuSession;
    SCCognacOperaConfigureSession *_configureSession;
    SCCognacOperaMediaShareSession *_mediaShareSession;
    SCWeakTimer *_keepAliveTimer;
    SCCognacServiceClient *_serviceClient;
    SCCognacUserAppSessionsUserAppSession *_userAppSession;
    _Bool _isResourceBundleLoadedAtGameOpen;
    SCCognacOperaViewingSessionConfig *_config;
    SCCognacLoadingProgressTracker *_loadingProgressTracker;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    NSArray *_subSessions;
    SCCognacOperaDataSource *_dataSource;
    id <SCCognacCypressProxy> _cypressProxy;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) id <SCCognacCypressProxy> cypressProxy; // @synthesize cypressProxy=_cypressProxy;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *subSessions; // @synthesize subSessions=_subSessions;
@property(readonly, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
@property(retain, nonatomic) SCCognacLoadingProgressTracker *loadingProgressTracker; // @synthesize loadingProgressTracker=_loadingProgressTracker;
@property(nonatomic) _Bool isResourceBundleLoadedAtGameOpen; // @synthesize isResourceBundleLoadedAtGameOpen=_isResourceBundleLoadedAtGameOpen;
@property(retain, nonatomic) SCCognacOperaViewingSessionConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)_terminateUserAppSession;
- (void)_createUserAppSession;
- (id)participantInfo;
- (void)_keepAliveTimerDidFire;
- (void)_removeKeepAliveTimer;
- (void)_scheduleKeepAliveTimer;
- (void)cognacOperaDataSourceDidUpdateSessionId:(id)arg1;
- (void)outputLog;
- (void)clearInvitedFriends;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredCypressHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (id)init;
- (void)logGameLoadingScreenDisplayedWithParamDict:(id)arg1;
- (void)logGameCloseEventWithFpsResponseDict:(id)arg1;
- (void)logGameCloseButtonTapEvent;
- (void)logGameCloseAttemptEvent;
- (void)logGameReadyToPlayEvent;
- (void)logGameOpenEvent;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
