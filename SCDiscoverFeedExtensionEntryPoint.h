//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCPlugInScopeExposer, SCServicesExposer;

@interface SCDiscoverFeedExtensionEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_discoverFeedExtensionServicesExposer;
    SCPlugInScopeExposer *_discoverFeedExtensionProviderScopeExposer;
}

@property(retain, nonatomic) SCPlugInScopeExposer *discoverFeedExtensionProviderScopeExposer; // @synthesize discoverFeedExtensionProviderScopeExposer=_discoverFeedExtensionProviderScopeExposer;
@property(retain, nonatomic) SCServicesExposer *discoverFeedExtensionServicesExposer; // @synthesize discoverFeedExtensionServicesExposer=_discoverFeedExtensionServicesExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (id)_plugInExtensionServices;
- (void)begin;

@end
