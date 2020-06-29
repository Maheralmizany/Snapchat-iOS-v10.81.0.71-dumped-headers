//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersBlockedSnapchatterFetching-Protocol.h"
#import "SCSnapchattersBlockedSnapchatterSynchronousFetching-Protocol.h"

@protocol SCLegacyBlockedFriendsProvider;

@interface SCLegacyBlockedSnapchattersDataFetcher : NSObject <SCSnapchattersBlockedSnapchatterFetching, SCSnapchattersBlockedSnapchatterSynchronousFetching>
{
    id <SCLegacyBlockedFriendsProvider> _blockedFriendsProvider;
}

- (void).cxx_destruct;
- (id)_blockedSnapchatterWithUsername:(id)arg1;
- (id)_blockedSnapchatterWithUserId:(id)arg1;
- (id)_blockedSnapchatters;
- (_Bool)isBlockedSnapchatterForUserId:(id)arg1;
- (_Bool)isBlockedSnapchatterForUsername:(id)arg1;
- (unsigned long long)blockedSnapchattersCount;
- (void)blockedSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)blockedSnapchatterWithUsername:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockedSnapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBlockedFriendsProvider:(id)arg1;

@end

