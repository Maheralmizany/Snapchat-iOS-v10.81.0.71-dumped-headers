//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCMultiScopeExposer, SCServicesExposer;

@interface SCContextOperaServicesEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_contextOperaServicesExposer;
    SCMultiScopeExposer *_operaActionPerformerProviderScopeExposer;
    SCMultiScopeExposer *_ctaScopeExposer;
}

@property(retain, nonatomic) SCMultiScopeExposer *ctaScopeExposer; // @synthesize ctaScopeExposer=_ctaScopeExposer;
@property(retain, nonatomic) SCMultiScopeExposer *operaActionPerformerProviderScopeExposer; // @synthesize operaActionPerformerProviderScopeExposer=_operaActionPerformerProviderScopeExposer;
@property(retain, nonatomic) SCServicesExposer *contextOperaServicesExposer; // @synthesize contextOperaServicesExposer=_contextOperaServicesExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

