//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCComposerFriendsFeedCurrentUserInfoProviding;

@interface SCFriendsFeedStatusConverter : NSObject
{
    id <SCComposerFriendsFeedCurrentUserInfoProviding> _userInfoProvider;
    _Bool _renderCondensed;
}

- (void).cxx_destruct;
- (id)feedStatusForFeedItem:(id)arg1;
- (id)initWithUserInfoProvider:(id)arg1 renderCondensed:(_Bool)arg2;
- (id)initWithUserInfoProvider:(id)arg1;

@end

