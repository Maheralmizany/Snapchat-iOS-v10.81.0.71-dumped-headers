//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGroupInviteUIDependencies;
@protocol SCCognacContextGameInfoProviding, SCContextV2DeepLinkHandler, SCContextV2StoryHandler, SCContextV2UserInfoProvider, SCContextV2ViewsProvider;

@protocol SCContextV2DependencyProvider <NSObject>
@property(readonly, nonatomic) id <SCCognacContextGameInfoProviding> gameInfoProvider;
@property(readonly, nonatomic) SCGroupInviteUIDependencies *groupStickerDependencies;
@property(readonly, nonatomic) id <SCContextV2StoryHandler> storyHandler;
@property(readonly, nonatomic) id <SCContextV2UserInfoProvider> userInfoProvider;
@property(readonly, nonatomic) id <SCContextV2DeepLinkHandler> deepLinkHandler;
@property(readonly, nonatomic) id <SCContextV2ViewsProvider> viewsProvider;
@end

