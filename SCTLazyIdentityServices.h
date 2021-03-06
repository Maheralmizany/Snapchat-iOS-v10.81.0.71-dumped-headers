//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTIdentityServices-Protocol.h"

@class NSMutableDictionary, NSString, SCLazy, SCUserSession;

@interface SCTLazyIdentityServices : NSObject <SCTIdentityServices>
{
    SCUserSession *_userSession;
    SCLazy *_usernameToSnapchatterFetcher;
    SCLazy *_snapchatterPublicInfoFetcher;
    SCLazy *_snapchatterFetcher;
    SCLazy *_groupRepository;
    SCLazy *_groupsDataFetcher;
    SCLazy *_nativeSessionManager;
    SCLazy *_arroyoConvoIdsManager;
    NSMutableDictionary *_talkAuthMap;
    NSMutableDictionary *_cognacAuthMap;
    NSMutableDictionary *_talkPartipantIdMappings;
    NSMutableDictionary *_conversationMetadata;
}

- (void).cxx_destruct;
- (void)_ensureArroyoConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureLegacyConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_talkParticipantFromChatGroupParticipant:(id)arg1;
- (void)_storeTalkAuth:(id)arg1 convoId:(id)arg2;
- (_Bool)hasConversationMetadataForConvoId:(id)arg1;
- (id)conversationMetadataForConvoId:(id)arg1;
- (void)setConversationMetadata:(id)arg1 forConvoId:(id)arg2;
- (void)ensureConvoExistsOnServerForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isBestFriendConvoId:(id)arg1;
- (id)displayNameForConvoId:(id)arg1;
- (void)refreshCognac2AuthForCognacId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshCognacAuthForConvoId:(id)arg1 cognacId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cognacAuthForConvoId:(id)arg1 cognacId:(id)arg2;
- (void)getConversationCtxInfoForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTalkAuthForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)talkAuthForConvoId:(id)arg1;
- (void)setPushTalkAuth:(id)arg1 convoId:(id)arg2;
- (void)fetchParticipantsWithUserIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)localParticipantForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localParticipantForConvoId:(id)arg1;
- (void)remoteParticipantsForConvoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteParticipantsForConvoId:(id)arg1;
- (id)initWithUserSession:(id)arg1 usernameToSnapchatterFetcher:(id)arg2 snapchatterPublicInfoFetcher:(id)arg3 snapchattersDataFetcher:(id)arg4 groupSnapchatterRepository:(id)arg5 groupsDataFetcher:(id)arg6 nativeSessionManager:(id)arg7 arroyoConvoIdsManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

