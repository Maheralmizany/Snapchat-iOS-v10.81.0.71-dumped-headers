//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFeatureSettingsServices, SCLocationARLensNotificationsManager, SCNavigationServices, SCNotificationsServices, SCUserNavStartupCompleteScope, SCUserSessionScope;

@interface SCLocationARLensNotificationsEntryPoint : SCEntryPoint
{
    SCLocationARLensNotificationsManager *_locationARLensNotificationsManager;
    SCUserNavStartupCompleteScope *_userNavStartupCompletedScope;
    SCUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCNotificationsServices *_notificationsServices;
    SCFeatureSettingsServices *_featureSettingsServices;
}

@property(nonatomic) __weak SCFeatureSettingsServices *featureSettingsServices; // @synthesize featureSettingsServices=_featureSettingsServices;
@property(nonatomic) __weak SCNotificationsServices *notificationsServices; // @synthesize notificationsServices=_notificationsServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserNavStartupCompleteScope *userNavStartupCompletedScope; // @synthesize userNavStartupCompletedScope=_userNavStartupCompletedScope;
- (void).cxx_destruct;
- (void)_setupNotificationsManagerIfNecessary;
- (void)begin;

@end
