//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCSnapcodeServicesControllerDelegate-Protocol.h"

@class NSString, SCActiveUserSessionScope, SCNavigationServices, SCSnapcodeSettingsScope;

@interface SCSnapcodeSettingsScopeEntryPoint : SCEntryPoint <SCSnapcodeServicesControllerDelegate>
{
    SCActiveUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCSnapcodeSettingsScope *_snapcodeSettingsScope;
}

@property(nonatomic) __weak SCSnapcodeSettingsScope *snapcodeSettingsScope; // @synthesize snapcodeSettingsScope=_snapcodeSettingsScope;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCActiveUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)snapcodeServicesControllerDidDealloc:(id)arg1;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
