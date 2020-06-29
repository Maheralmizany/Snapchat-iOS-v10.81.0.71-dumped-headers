//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCLegacyUserServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_legacyUserServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *legacyUserServicesExposer; // @synthesize legacyUserServicesExposer=_legacyUserServicesExposer;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_tooltipsProvider;
- (id)_propertiesMutator;
- (id)_propertiesProvider;
- (id)_migrationTracker;
- (void)begin;

@end
