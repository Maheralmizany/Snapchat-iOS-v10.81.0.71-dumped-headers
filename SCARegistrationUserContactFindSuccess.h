//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCARegistrationUserContactFindSuccess : SCAUserTrackedEvent
{
}

- (void)setWaitTimeSec:(double)arg1;
- (void)setVerificationType:(long long)arg1;
- (void)setServerDataReady:(_Bool)arg1;
- (void)setRegistrationVersion:(long long)arg1;
- (void)setRecommendedContactCount:(long long)arg1;
- (void)setRecommendedAddCount:(long long)arg1;
- (void)setMaxSeenIndexPos:(long long)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setFriendAddList:(id)arg1;
- (void)setFriendAddCount:(long long)arg1;
- (void)setContactInviteCount:(long long)arg1;
- (void)setContactFoundCount:(long long)arg1;
- (void)setContactBookSize:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

