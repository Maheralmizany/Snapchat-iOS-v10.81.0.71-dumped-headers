//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapGhostModeTimerControllerDelegate-Protocol.h"

@class NSString, SCEncryptedCache, SCFeatureSettingsService, SCLocationSharingPreferencesListenerAnnouncer, SCMapFSNService, SCMapGhostModeTimerController, SCMapLocationSharingCacheObject, SCMapSerialAsyncBlockPerformer, SCMapUserPreferences, SCQueuePerformer;
@protocol SCMapNotificationPresenting;

@interface SCLocationSharingPreferencesV1 : NSObject <SCMapGhostModeTimerControllerDelegate>
{
    NSString *_userId;
    id <SCMapNotificationPresenting> _notificationPresenter;
    SCMapFSNService *_mapFSNService;
    SCMapUserPreferences *_mapUserPreferences;
    SCFeatureSettingsService *_featureSettingsService;
    SCQueuePerformer *_performer;
    SCMapSerialAsyncBlockPerformer *_asyncBlockPerformer;
    SCMapLocationSharingCacheObject *_mainThreadCacheObject;
    id _clearOnboardTweak;
    unsigned long long _numberOfFailedSyncAttempts;
    _Bool _shouldDisplayGhostModeTimerDoneNotification;
    double _revalidateCachedPrefsRetryInterval;
    SCEncryptedCache *_cache;
    SCLocationSharingPreferencesListenerAnnouncer *_announcer;
    SCMapGhostModeTimerController *_ghostModeTimerController;
    SCMapLocationSharingCacheObject *_performerThreadCacheObject;
}

@property(retain, nonatomic) SCMapLocationSharingCacheObject *performerThreadCacheObject; // @synthesize performerThreadCacheObject=_performerThreadCacheObject;
@property(readonly, nonatomic) SCMapGhostModeTimerController *ghostModeTimerController; // @synthesize ghostModeTimerController=_ghostModeTimerController;
@property(readonly, nonatomic) SCLocationSharingPreferencesListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (void)_clearOnboardedState;
- (void)ghostModeTimerControllerWantsToExitGhostMode:(id)arg1;
- (void)ghostModeTimerController:(id)arg1 wantsToRefreshLocationSharingPreferencesWithCompletion:(CDUnknownBlockType)arg2;
- (void)_displayGhostModeTimerDoneNotificationIfPossible;
- (void)_exitGhostModeBecauseTimerExpired;
- (void)_announcePreferencesSynced;
- (void)_announcePreferencesUpdated;
@property(retain) SCMapLocationSharingCacheObject *mainThreadCacheObject;
- (_Bool)_isExplicitlyInGhostModeOrSimilar;
- (_Bool)_hasPreferences;
- (void)setDidOnboard;
- (void)setGhostMode:(id)arg1 sharingAudience:(id)arg2 selectFriendsIds:(id)arg3 blacklistedFriendIds:(id)arg4 source:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setGhostMode:(_Bool)arg1 duration:(double)arg2 updateType:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setGhostMode:(_Bool)arg1 updateType:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasSetPreferences;
- (id)_friendIdsArrayForPerFriendModeArray:(id)arg1;
- (id)blacklistSharingModeFriendIds;
- (id)customSharingModeFriendIds;
- (int)sharingAudience;
- (_Bool)ghostMode;
- (id)_preferences;
- (void)_updateLocationPreferences:(id)arg1 ghostModeDuration:(double)arg2 updateType:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateLocationPreferences:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)revalidateCachedPreferencesWithSource:(long long)arg1;
- (void)ensureHasPreferencesWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needsPreferencesSync;
- (_Bool)hasFetchedLocationPreferences;
- (void)_syncPreferencesToServerIfNecessaryWithSource:(long long)arg1 updateType:(long long)arg2;
- (void)_updateWithLatestServerPreferencesWithFetchType:(unsigned long long)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_savePerformerThreadCacheObjectToDisk;
- (void)_ensurePreferencesLoadedFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)initWithCurrentUserId:(id)arg1 featureSettingManager:(id)arg2 notificationPresenter:(id)arg3 mapFSNService:(id)arg4 mapUserPreferences:(id)arg5;

@end

