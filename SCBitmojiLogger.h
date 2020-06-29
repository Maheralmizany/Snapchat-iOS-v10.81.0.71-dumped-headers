//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiLogger-Protocol.h"

@class NSString;
@protocol SCGraphene, SCUserTrackedLogger;

@interface SCBitmojiLogger : NSObject <SCBitmojiLogger>
{
    NSString *_bitmojiSessionId;
    id <SCUserTrackedLogger> _logger;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (long long)_blizzardFashionCategoryWithString:(id)arg1;
- (long long)_blizzardOutfitActionTypeWithString:(id)arg1;
- (long long)_blizzardOutfitTypeWithString:(id)arg1;
- (long long)_getBlizzardFlowMode:(unsigned long long)arg1;
- (long long)_deepLinkSourceWithSourceString:(id)arg1;
- (long long)_getBlizzardAvatarBuilderType:(unsigned long long)arg1;
- (long long)_getBlizzardUnlinkResultType:(unsigned long long)arg1;
- (long long)_getBlizzardEditType:(unsigned long long)arg1;
- (long long)_getBlizzardPage:(unsigned long long)arg1;
- (void)logDeepLinkingWithDeepLinkSource:(id)arg1 isUniversalLink:(_Bool)arg2 page:(unsigned long long)arg3;
- (void)logSelfieCancel:(unsigned long long)arg1;
- (void)logSelfieChange:(id)arg1 success:(_Bool)arg2 page:(unsigned long long)arg3;
- (void)logSelfieTap:(id)arg1 page:(unsigned long long)arg2;
- (void)logSelfieView:(unsigned long long)arg1;
- (void)logOutfitActionType:(id)arg1 outfit:(id)arg2 flowMode:(unsigned long long)arg3 avatarBuilderTraitCategory:(id)arg4;
- (void)logChangeOutfit:(id)arg1 outfitType:(id)arg2 flowMode:(unsigned long long)arg3 hasTappedMixAndMatchOutfit:(_Bool)arg4;
- (void)logOutfitCancel:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2;
- (void)logOutfitChange:(id)arg1 success:(_Bool)arg2 page:(unsigned long long)arg3 avatarBuilderType:(unsigned long long)arg4;
- (void)logOutfitView:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2;
- (void)logAvatarChange:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2 flowMode:(unsigned long long)arg3 oldAvatarOptionIds:(id)arg4 avatarOptionIds:(id)arg5;
- (void)logLinkExitToLiveMirror:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2 avatarPredictionsCount:(long long)arg3;
- (void)logLinkExit:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2 avatarPredictionsCount:(long long)arg3;
- (void)logLinkSuccess:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2 avatarPredictionsCount:(long long)arg3;
- (void)logLinkSelectGender:(unsigned long long)arg1 avatarBuilderType:(unsigned long long)arg2;
- (void)logTapLinkButton:(unsigned long long)arg1 bitmojiInstalled:(_Bool)arg2 avatarBuilderType:(unsigned long long)arg3;
- (void)logSeeLinkButton:(unsigned long long)arg1;
- (void)logUnlinkBitmoji:(unsigned long long)arg1 profileSessionId:(id)arg2 page:(unsigned long long)arg3;
- (void)logSettingBitmojiView:(_Bool)arg1 profileSessionId:(id)arg2 page:(unsigned long long)arg3;
- (void)logEditBitmojiExit:(unsigned long long)arg1 page:(unsigned long long)arg2 avatarBuilderType:(unsigned long long)arg3;
- (void)logEditBitmojiSave:(unsigned long long)arg1 page:(unsigned long long)arg2 avatarBuilderType:(unsigned long long)arg3 withEditedAvatar:(_Bool)arg4;
- (void)logEditBitmoji:(unsigned long long)arg1 bitmojiInstalled:(_Bool)arg2 profileSessionId:(id)arg3 page:(unsigned long long)arg4 avatarBuilderType:(unsigned long long)arg5;
- (id)initWithLogger:(id)arg1 graphene:(id)arg2 bitmojiSessionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
