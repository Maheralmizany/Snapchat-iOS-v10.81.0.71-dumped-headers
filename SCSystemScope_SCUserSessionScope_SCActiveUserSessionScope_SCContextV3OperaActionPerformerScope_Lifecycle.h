//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCContextV3OperaActionPerformerScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_contextV3OperaActionPerformerScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *contextV3OperaActionPerformerScopeContainer; // @synthesize contextV3OperaActionPerformerScopeContainer=_contextV3OperaActionPerformerScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
