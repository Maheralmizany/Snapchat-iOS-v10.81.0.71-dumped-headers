//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsButtonBadgeCountMutating-Protocol.h"
#import "SCAddFriendsButtonBadgeTipsTrigger-Protocol.h"

@class SIGHeaderButtonBadge;

@interface SCAddFriendsButtonMutator : NSObject <SCAddFriendsButtonBadgeCountMutating, SCAddFriendsButtonBadgeTipsTrigger>
{
    SIGHeaderButtonBadge *_addFriendsButtonBadge;
}

- (void).cxx_destruct;
- (void)showFriendSuggestionTip;
- (void)showFriendRequestTip;
- (void)updateUnviewedSuggestionsFriendCount:(unsigned long long)arg1;
- (void)updateBadgedIncomingFriendCount:(unsigned long long)arg1;
- (id)initWithHeaderButtonBadge:(id)arg1;

@end
