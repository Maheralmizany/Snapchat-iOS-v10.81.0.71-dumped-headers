//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsTargetsService-Protocol.h"

@class NSString, SCBloopsFriendsAPI, SCLazy, SCPreferences, SCQueuePerformer;
@protocol OS_dispatch_group;

@interface SCBloopsTargetsServiceImpl : NSObject <SCBloopsTargetsService>
{
    SCLazy *_uploadManager;
    SCLazy *_contentDelivery;
    SCBloopsFriendsAPI *_friendsAPI;
    SCLazy *_bloopsAPI;
    SCQueuePerformer *_performer;
    NSObject<OS_dispatch_group> *_uploadTargetGroup;
    SCPreferences *_userPreferences;
    SCLazy *_friendsBloopsCache;
    SCLazy *_getMyDataCache;
    SCLazy *_headIconService;
    _Bool _needFriendsBloopsTargetUpdate;
}

@property(nonatomic) _Bool needFriendsBloopsTargetUpdate; // @synthesize needFriendsBloopsTargetUpdate=_needFriendsBloopsTargetUpdate;
- (void).cxx_destruct;
- (void)_clearUserBloopsTargetPolicy;
- (id)_tweakedUserBloopsData:(id)arg1;
- (void)_processTargetData:(id)arg1 preferRawImageTarget:(_Bool)arg2 error:(id)arg3 callbackPerformer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_isValidKey:(id)arg1 iv:(id)arg2;
- (void)_downloadTargetByDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_uploadTarget:(id)arg1 uniqueMediaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getProcessedBloopsTargetForDescriptor:(id)arg1 friendBloopsGender:(long long)arg2 hairStyle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getImageBloopsTargetForDescriptor:(id)arg1 friendBloopsGender:(long long)arg2 hairStyle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateUserBloopsTargetPolicy:(id)arg1 hairStyle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteUserBloopsTarget:(CDUnknownBlockType)arg1;
- (void)_getBloopsTargetFromFriendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getCashedFriendsBloopsDataArrayForUsers:(id)arg1 inConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getFriendsBloopsDataArrayForUsers:(id)arg1 inConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateUserBloopsTarget:(id)arg1 genderType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getUserBloopsTargetWithSDKVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBloopsUserIconForTarget:(id)arg1 iconSize:(struct CGSize)arg2 callbackPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)obtainUserTargetWithCallBackPerformer:(id)arg1 preferRawImageTarget:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obtainUserBloopsTargetPolicyWithCallbackPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBloopsTargetFromFriendData:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getFriendsBloopsDataArrayForUsers:(id)arg1 inConversation:(id)arg2 callbackPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateUserBloopsTargetPolicy:(id)arg1 hairStyle:(id)arg2 callbackPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteUserBloopsTargetWithCallbackPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserBloopsTarget:(id)arg1 genderType:(long long)arg2 callbackPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithUploadManager:(id)arg1 contentDelivery:(id)arg2 friendsAPI:(id)arg3 bloopsAPI:(id)arg4 userPreferences:(id)arg5 friendsBloopsCache:(id)arg6 getMyDataCache:(id)arg7 headIconService:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

