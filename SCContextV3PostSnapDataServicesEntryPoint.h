//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCServicesExposer, SCUserStorageServices;

@interface SCContextV3PostSnapDataServicesEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCServicesExposer *_contextV3PostSnapDataServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *contextV3PostSnapDataServicesExposer; // @synthesize contextV3PostSnapDataServicesExposer=_contextV3PostSnapDataServicesExposer;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (id)_createPostSnapDataProvider;
- (void)begin;

@end

