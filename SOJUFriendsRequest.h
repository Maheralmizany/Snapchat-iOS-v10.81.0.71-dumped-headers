//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUFriendsRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUFriendsRequest : SCSojuMessage <SOJUFriendsRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithFriendsSyncToken:(id)arg1 requestTokenOnlyDeprecated:(id)arg2 addedFriendsSyncToken:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *addedFriendsSyncToken; // @dynamic addedFriendsSyncToken;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *friendsSyncToken; // @dynamic friendsSyncToken;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *requestTokenOnlyDeprecated; // @dynamic requestTokenOnlyDeprecated;
@property(readonly) Class superclass;

@end

