//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCContextUserScopedServices, SCNetworkImageServices, SCObservableRegistry, SCScopeExposer, SCServicesExposer;

@interface SCContextV3ServicesEntryPoint : SCEntryPoint
{
    SCObservableRegistry *_actionProviderRegistry;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCContextUserScopedServices *_contextUserScopedServices;
    SCNetworkImageServices *_networkImageServices;
    SCScopeExposer *_actionPerformerProviderScopeExposer;
    SCServicesExposer *_contextV3ServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *contextV3ServicesExposer; // @synthesize contextV3ServicesExposer=_contextV3ServicesExposer;
@property(retain, nonatomic) SCScopeExposer *actionPerformerProviderScopeExposer; // @synthesize actionPerformerProviderScopeExposer=_actionPerformerProviderScopeExposer;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCContextUserScopedServices *contextUserScopedServices; // @synthesize contextUserScopedServices=_contextUserScopedServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (id)end;
- (id)createExcludedCardsProvider;
- (id)createTappableElementsProvider;
- (id)createActionHandlerProvider;
- (id)createPostSnapProviderWithActionHandlerProvider:(id)arg1;
- (id)createCtaProvider;
- (void)begin;

@end

