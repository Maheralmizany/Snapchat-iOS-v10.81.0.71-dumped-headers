//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupManager-Protocol.h"
#import "SCGroupsStorageV3Delegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, SCArchiveLoader, SCArroyoGroupDataFetcher, SCDataCoordinatorListenerAnnouncer, SCDisposableObserverLifecycle, SCGroupLeaveStateTracker, SCGroupManagerListenerAnnouncer, SCGroupSnapchatterUserIdTracker, SCGroupSyncStateTracker, SCLazy, SCPreferences, SCQueuePerformer, SCSessionRequestManager;
@protocol SCArroyoMessagingMigrationStatusManaging, SCGroupManagerAPI, SCGroupsStorageV3;

@interface SCGroupManager : NSObject <SCTraceEnabled, SCSnapchattersDataRequestListener, SCGroupsStorageV3Delegate, SCGroupManager>
{
    SCArroyoGroupDataFetcher *_arroyoGroupDataFetcher;
    id <SCGroupsStorageV3> _groupStorage;
    id <SCGroupManagerAPI> _managerAPI;
    SCLazy *_groupLogger;
    SCArchiveLoader *_loader;
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
    SCLazy *_arroyoConversationIdsManager;
    id <SCArroyoMessagingMigrationStatusManaging> _migrationStatusManager;
    SCLazy *_feedClearDataManager;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataTracker;
    SCGroupSnapchatterUserIdTracker *_groupSnapchatterUserIdTracker;
    NSMutableDictionary *_updatingGroupNames;
    SCGroupSyncStateTracker *_syncStateTracker;
    SCGroupLeaveStateTracker *_leaveStateTracker;
    long long _dataDiskSyncSources;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCPreferences *_userPreferences;
    NSString *_userId;
    NSString *_username;
    NSDate *_persistedTimestamp;
    _Bool _arroyoIdsFinishedLoading;
    SCGroupManagerListenerAnnouncer *_announcer;
    NSDictionary *_groupsSnapshot;
}

+ (double)estimatedMainLabelWidthWithGroupMoji;
+ (id)dataCoordinatorIdentifier;
@property _Bool arroyoIdsFinishedLoading; // @synthesize arroyoIdsFinishedLoading=_arroyoIdsFinishedLoading;
@property(retain) NSDictionary *groupsSnapshot; // @synthesize groupsSnapshot=_groupsSnapshot;
@property(readonly, nonatomic) SCGroupManagerListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (id)arroyoImplementation;
- (id)v3Implementation;
- (void)_handleBlockOrUnblockForSnapchatter:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didRemoveGroup:(id)arg1;
- (void)didPutGroups:(id)arg1 oldGroups:(id)arg2;
- (void)didPutGroup:(id)arg1 oldGroup:(id)arg2;
- (void)_updateGroupNameAndCreateOnServer:(id)arg1 groupName:(id)arg2 source:(long long)arg3 disableMinimumGroupSize:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)joinGroupWithGroupInviteId:(id)arg1 groupId:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteGroupInvitesWithGroupId:(id)arg1 groupInviteType:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupInviteOnServerWithGroupInviteId:(id)arg1 groupInviteType:(long long)arg2 groupId:(id)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createGroupWithName:(id)arg1 recipients:(id)arg2 creationSource:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateGroupVideoChatParamsWithId:(id)arg1 videoChatParams:(id)arg2;
- (void)updateGroupParticipantLastContentWithId:(id)arg1 participantLastContent:(id)arg2;
- (void)willSendToGroupIds:(id)arg1;
- (void)clearTemporaryGroups;
- (void)clearTemporaryGroupsExcludingGroupIds:(id)arg1;
- (void)updateGroupWithId:(id)arg1 lastInteractionTimestamp:(id)arg2;
- (void)_takeSnapshot;
- (id)_allGroupsFromV3Groups:(id)arg1;
- (id)getNewGroups;
- (id)getRecentGroups;
- (id)getAllGroups;
- (id)getAllGroupsDict;
- (void)getAllGroupsWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)notifyGroupInfoDidChangeForGroup:(id)arg1;
- (void)notifyGroupsDidFinishLoading;
- (void)_notifyGroupsDidFinishLoadingFromDiskWithSource:(long long)arg1;
- (void)notifyGroupDidBeginLeaving:(id)arg1;
- (void)notifyGroupDidGetCreatedOnServer:(id)arg1 initialSOJUMischief:(id)arg2;
- (void)notifyDidJoinGroup:(id)arg1;
- (void)_logUpdatingGroup:(id)arg1 oldGroup:(id)arg2;
- (void)_handleUpdateGroupCompletion:(_Bool)arg1 shouldAnnounceUpdate:(_Bool)arg2 existingGroup:(id)arg3 group:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateGroupsWithGroup:(id)arg1 shouldAnnounceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateGroupsWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIfGroupIsInLeavingState:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)addGroupIfItDoesntExist:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)updateGroupsWithSOJUGroups:(id)arg1;
- (id)DEPRECATED_updateGroup:(id)arg1 groupMetadata:(id)arg2 interactionTimestamp:(id)arg3;
- (id)DEPRECATED_mostRecentGroupByParticipantsIncludingSelf:(id)arg1;
- (id)_DEPRECATED_updateGroupsWithGroup:(id)arg1 oldGroup:(id)arg2;
- (id)DEPRECATED_updateGroupsWithSOJUGroup:(id)arg1;
- (void)grantGroupExemptBlockedUsersWithId:(id)arg1 newBlockedParticipantExceptions:(id)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)updateGroupMentionNotificationWithId:(id)arg1 notificationsOn:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateGroupNotificationWithId:(id)arg1 notificationOn:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addToGroupWithId:(id)arg1 friends:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_makeLeaveGroupRequestWithGroupId:(id)arg1 groupToLeave:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)leaveGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_makeRenameRequestWithGroupId:(id)arg1 oldName:(id)arg2 newName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateGroupNameWithGroup:(id)arg1 oldGroup:(id)arg2 groupName:(id)arg3 completion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateGroupWithId:(id)arg1 groupMetadata:(id)arg2 interactionTimestamp:(id)arg3;
- (void)getGroupByParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)_getV3GroupById:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)_getGroupById:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)getGroupById:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)_v3GroupById:(id)arg1;
- (id)getGroupWithId:(id)arg1;
- (void)_createLocalGroupWithFriends:(id)arg1 creationSource:(long long)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)createLocalGroupWithFriends:(id)arg1 creationSource:(long long)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)_correctNewGroupStatesAfterCreation:(id)arg1 oldGroup:(id)arg2;
- (id)_constructCreateGroupsRequestWithGroups:(id)arg1 groupStoryRequest:(id)arg2 disableMinimumGroupSize:(_Bool)arg3 source:(long long)arg4;
- (void)_makeDeleteGroupInvitesRequestWithGroupId:(id)arg1 groupInviteType:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_makeJoinGroupByGroupInviteRequestWithGroupInviteId:(id)arg1 groupId:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_makeCreateGroupInviteRequestWithGroupInviteId:(id)arg1 groupInviteType:(long long)arg2 groupId:(id)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_makeCreateGroupsRequestWithGroups:(id)arg1 groupStoryRequest:(id)arg2 source:(long long)arg3 disableMinimumGroupSize:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 disableMinimumGroupSize:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createEmptyGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncGroupsWithConversationGroups:(id)arg1;
- (void)clear;
- (_Bool)saveState;
- (void)_updatePersistedTimestampWithArchivedTimestamp:(id)arg1;
- (void)mergeWithLocal:(id)arg1;
- (void)_groupsDataPersistedTimestampWithCompletion:(CDUnknownBlockType)arg1;
- (void)groupsDataPersistedTimestampWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isLoaded;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (void)_didLoadGroupsFromDisk:(id)arg1;
- (void)_performDidLoadGroupsFromDisk:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithSelfUserId:(id)arg1 selfUsername:(id)arg2 arroyoConversationIdsManager:(id)arg3 docObjectContext:(id)arg4 groupLogger:(id)arg5 groupManagerAPI:(id)arg6 groupsDataTracker:(id)arg7 nativeSessionManager:(id)arg8 sessionRequestManager:(id)arg9 snapchattersDataFetcher:(id)arg10 snapchatterUserInfoProvider:(id)arg11 snapchatterPublicInfoFetcher:(id)arg12 snapchattersDataTracker:(id)arg13 userPreferences:(id)arg14 feedClearDataManager:(id)arg15 arroyoSyncedFeedEntriesUpdateEvents:(id)arg16;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

