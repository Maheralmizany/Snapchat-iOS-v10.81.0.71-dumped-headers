//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsScope, SCAddFriendsShareMySnapcodeServices, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope;

@interface SCLegacyAddFriendsEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCSnapchatterServices *_snapchatterServices;
    SCAddFriendsScope *_addFriendsScope;
    SCAddFriendsShareMySnapcodeServices *_addFriendsShareMySnapcodeServices;
    SCServicesExposer *_addFriendsActionHandlerServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *addFriendsActionHandlerServicesExposer; // @synthesize addFriendsActionHandlerServicesExposer=_addFriendsActionHandlerServicesExposer;
@property(nonatomic) __weak SCAddFriendsShareMySnapcodeServices *addFriendsShareMySnapcodeServices; // @synthesize addFriendsShareMySnapcodeServices=_addFriendsShareMySnapcodeServices;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

