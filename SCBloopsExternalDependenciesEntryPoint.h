//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBloopsServices, SCConversationServices, SCLegacyLensDataFetcherServices, SCUserFeatureConfigurationServices, SCUserNavStartupCompleteScope, SCUserSessionScope;

@interface SCBloopsExternalDependenciesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCBloopsServices *_bloopsServices;
    SCLegacyLensDataFetcherServices *_legacyLensDataFetcherServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCConversationServices *_conversationServices;
    SCUserNavStartupCompleteScope *_startupCompleteScope;
}

@property(nonatomic) __weak SCUserNavStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCLegacyLensDataFetcherServices *legacyLensDataFetcherServices; // @synthesize legacyLensDataFetcherServices=_legacyLensDataFetcherServices;
@property(nonatomic) __weak SCBloopsServices *bloopsServices; // @synthesize bloopsServices=_bloopsServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

