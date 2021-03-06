//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2UserInfoProvider-Protocol.h"

@class NSString, SCLazy;

@interface SCContextV2UserInfoProvider : NSObject <SCContextV2UserInfoProvider>
{
    NSString *_currentUserId;
    SCLazy *_legacyFriendsService;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_synchronousSnapchatterFetcher;
    SCLazy *_userBirthdayProvider;
    SCLazy *_userCountryCodeProvider;
    _Bool _hasMinimumFriendCountToLogFriendStatistics;
}

@property _Bool hasMinimumFriendCountToLogFriendStatistics; // @synthesize hasMinimumFriendCountToLogFriendStatistics=_hasMinimumFriendCountToLogFriendStatistics;
- (void).cxx_destruct;
- (id)_hasMinimumFriendCountToLogFriendStatistics;
- (id)_snapchattersForUserIds:(id)arg1;
- (long long)userFriendCount;
- (id)fetchDisplayFirstNameForUsername:(id)arg1;
- (id)userCountryCode;
- (void)fetchUserAgeWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMentionStatisticsForUsernames:(id)arg1 andUserIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCurrentUserId:(id)arg1 legacyFriendsService:(id)arg2 snapchattersDataFetcher:(id)arg3 synchronousSnapchatterFetcher:(id)arg4 userBirthdayProvider:(id)arg5 userCountryCodeProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

