//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCServicesExposer;

@interface SCScanGTQProviderServicesEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCServicesExposer *_scanGTQProviderServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *scanGTQProviderServicesExposer; // @synthesize scanGTQProviderServicesExposer=_scanGTQProviderServicesExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (id)_scanGTQProvider;
- (void)begin;

@end

