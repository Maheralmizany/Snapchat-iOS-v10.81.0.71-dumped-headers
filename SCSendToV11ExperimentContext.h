//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToV11ExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _pillEnabled;
    _Bool _friendsAZEnabled;
    _Bool _updatedSearchEnabled;
    _Bool _updatedConfirmationBarBehaviorEnabled;
    _Bool _updatedAddFriendsEnabled;
    _Bool _removeSearchAddFriendsIf7FriendsOrMoreEnabled;
    _Bool _sigCellHeightEnabled;
    long long _searchBarButton;
}

@property(readonly, nonatomic) _Bool sigCellHeightEnabled; // @synthesize sigCellHeightEnabled=_sigCellHeightEnabled;
@property(readonly, nonatomic) _Bool removeSearchAddFriendsIf7FriendsOrMoreEnabled; // @synthesize removeSearchAddFriendsIf7FriendsOrMoreEnabled=_removeSearchAddFriendsIf7FriendsOrMoreEnabled;
@property(readonly, nonatomic) _Bool updatedAddFriendsEnabled; // @synthesize updatedAddFriendsEnabled=_updatedAddFriendsEnabled;
@property(readonly, nonatomic) _Bool updatedConfirmationBarBehaviorEnabled; // @synthesize updatedConfirmationBarBehaviorEnabled=_updatedConfirmationBarBehaviorEnabled;
@property(readonly, nonatomic) _Bool updatedSearchEnabled; // @synthesize updatedSearchEnabled=_updatedSearchEnabled;
@property(readonly, nonatomic) _Bool friendsAZEnabled; // @synthesize friendsAZEnabled=_friendsAZEnabled;
@property(readonly, nonatomic) _Bool pillEnabled; // @synthesize pillEnabled=_pillEnabled;
@property(readonly, nonatomic) long long searchBarButton; // @synthesize searchBarButton=_searchBarButton;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end

