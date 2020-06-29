//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupInviteServiceChatIntegration-Protocol.h"

@class NSString;
@protocol SCComposerNetworkingClientProtocol, SCGroupLogger, SCGroupManagerAPI, SCGroupsDataCreating, SCGroupsDataFetching, SCGroupsDataMutating;

@interface SCGroupInviteServiceChatIntegrationImpl : NSObject <SCGroupInviteServiceChatIntegration>
{
    id <SCGroupsDataCreating> _groupsDataCreator;
    id <SCGroupsDataFetching> _groupsDataFetcher;
    id <SCGroupManagerAPI> _groupManagerAPI;
    id <SCGroupsDataMutating> _groupsDataMutator;
    id <SCGroupLogger> _groupLogger;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
}

- (void).cxx_destruct;
- (void)_presentJoinGroupByInviteCreatorNotParticipantAlertView;
- (void)_presentJoinGroupByInviteGroupFullAlertView;
- (void)_presentJoinGroupByInviteFailureAlertView;
- (void)_presentAlertViewWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)sendGroupInviteUpdatedMessage:(id)arg1 toGroupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendGroupInvite:(id)arg1 toUsernames:(id)arg2 groupIds:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)leaveGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renameGroupWithId:(id)arg1 toTitle:(id)arg2;
- (void)joinChatWithGroupInviteId:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createGroupInviteIdForExistingGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createEmptyChatForGroupStickerWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isMemberOfGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithGroupsDataCreator:(id)arg1 groupsDataFetcher:(id)arg2 groupsDataMutator:(id)arg3 groupManagerAPI:(id)arg4 groupLogger:(id)arg5 networkingClient:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

