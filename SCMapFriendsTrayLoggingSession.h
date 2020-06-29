//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMapFriendsTrayLoggingSession : NSObject
{
    unsigned long long _traySessionId;
    long long _trayType;
    unsigned long long _sessionId;
}

@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void)logTrayActionWithType:(long long)arg1 isBestFriend:(_Bool)arg2 itemAge:(double)arg3 section:(long long)arg4 sectionIndex:(unsigned long long)arg5 sectionCount:(unsigned long long)arg6 sectionItemIndex:(unsigned long long)arg7 sectionItemCount:(unsigned long long)arg8;
- (void)logTrayCloseWithMethod:(long long)arg1 totalTime:(double)arg2 friendTapCount:(unsigned long long)arg3 bestFriendTapCount:(unsigned long long)arg4 searchTapCount:(unsigned long long)arg5 friendActivityStoryViewCount:(unsigned long long)arg6 friendActivityChatCreateCount:(unsigned long long)arg7 friendActivityProfileViewCount:(unsigned long long)arg8 worldUpdateStoryViewCount:(unsigned long long)arg9 bestFriendCount:(unsigned long long)arg10 sectionSummaries:(id)arg11;
- (void)logTrayOpenWithSource:(long long)arg1 bestFriendCount:(unsigned long long)arg2 unseenItemCount:(long long)arg3 sectionSummaries:(id)arg4;
- (id)initWithMapSessionId:(unsigned long long)arg1 trayType:(long long)arg2;

@end

