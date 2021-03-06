//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCUserNavigationScope_SCUserNavStartupCompleteScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_contextServicesContainer;
    SCServicesContainer *_contextUserScopedServicesContainer;
    SCServicesContainer *_contextV3ServicesContainer;
    SCServicesContainer *_snapServicesContainer;
    SCServicesContainer *_storyMentionQuickAddPivotsServicesContainer;
    SCServicesContainer *_userFeatureLaunchServicesContainer;
    SCServicesContainer *_userNavStartupCompleteScopeContainer;
    SCServicesContainer *_userSnapSendActivityServicesContainer;
}

@property(readonly, nonatomic) SCServicesContainer *userSnapSendActivityServicesContainer; // @synthesize userSnapSendActivityServicesContainer=_userSnapSendActivityServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *userNavStartupCompleteScopeContainer; // @synthesize userNavStartupCompleteScopeContainer=_userNavStartupCompleteScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *userFeatureLaunchServicesContainer; // @synthesize userFeatureLaunchServicesContainer=_userFeatureLaunchServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *storyMentionQuickAddPivotsServicesContainer; // @synthesize storyMentionQuickAddPivotsServicesContainer=_storyMentionQuickAddPivotsServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *snapServicesContainer; // @synthesize snapServicesContainer=_snapServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *contextV3ServicesContainer; // @synthesize contextV3ServicesContainer=_contextV3ServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *contextUserScopedServicesContainer; // @synthesize contextUserScopedServicesContainer=_contextUserScopedServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *contextServicesContainer; // @synthesize contextServicesContainer=_contextServicesContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

