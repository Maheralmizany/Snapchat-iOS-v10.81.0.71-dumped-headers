//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendmojiServices, SCNetworkImageServices, SCSnapchatterSelectionScope, SCSortableSnapchatterServices, SCUserSessionScope;

@interface SCSnapchatterSelectionEntryPoint : SCEntryPoint
{
    SCSnapchatterSelectionScope *_snapchatterSelectionScope;
    SCUserSessionScope *_userSessionScope;
    SCSortableSnapchatterServices *_sortableSnapchatterServices;
    SCNetworkImageServices *_networkImageServices;
    SCFriendmojiServices *_friendmojiServices;
}

@property(nonatomic) __weak SCFriendmojiServices *friendmojiServices; // @synthesize friendmojiServices=_friendmojiServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCSortableSnapchatterServices *sortableSnapchatterServices; // @synthesize sortableSnapchatterServices=_sortableSnapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCSnapchatterSelectionScope *snapchatterSelectionScope; // @synthesize snapchatterSelectionScope=_snapchatterSelectionScope;
- (void).cxx_destruct;
- (void)begin;

@end

