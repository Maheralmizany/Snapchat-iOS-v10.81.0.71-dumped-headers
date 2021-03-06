//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityUserExistsResponse-Protocol.h"

@class NSNumber, NSString, SOJUFriend, SOJUFriendStories;

@interface SOJUIdentityUserExistsResponse : SCSojuMessage <SOJUIdentityUserExistsResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithExists:(id)arg1 throttled:(id)arg2 logged:(id)arg3 friend:(id)arg4 friendStories:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *exists; // @dynamic exists;
@property(readonly, nonatomic) SOJUFriend *friend; // @dynamic friend;
@property(readonly, nonatomic) SOJUFriendStories *friendStories; // @dynamic friendStories;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *logged; // @dynamic logged;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *throttled; // @dynamic throttled;

@end

