//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCGroupServices, SCServicesExposer, SCSnapchatterServices, SCUserStorageServices;

@interface SCFriendsFeedUpdateServicesEntryPoint : SCEntryPoint
{
    SCUserStorageServices *_userStorageServices;
    SCSnapchatterServices *_snapchatterServices;
    SCGroupServices *_groupServices;
    SCServicesExposer *_friendsFeedUpdateServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *friendsFeedUpdateServicesExposer; // @synthesize friendsFeedUpdateServicesExposer=_friendsFeedUpdateServicesExposer;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
- (void).cxx_destruct;
- (void)begin;

@end
