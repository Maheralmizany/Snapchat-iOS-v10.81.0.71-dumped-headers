//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacyUserServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices, SCUserUpdatesServices;

@interface SCBlizzardUserTokenEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCUserUpdatesServices *_userUpdatesServices;
    SCLegacyUserServices *_legacyUserServices;
    SCServicesExposer *_userTokenServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *userTokenServicesExposer; // @synthesize userTokenServicesExposer=_userTokenServicesExposer;
@property(nonatomic) __weak SCLegacyUserServices *legacyUserServices; // @synthesize legacyUserServices=_legacyUserServices;
@property(nonatomic) __weak SCUserUpdatesServices *userUpdatesServices; // @synthesize userUpdatesServices=_userUpdatesServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_tokenProvider;
- (void)begin;

@end

