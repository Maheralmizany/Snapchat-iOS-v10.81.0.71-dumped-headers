//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCARegistrationUserInitialInfoSuccess : SCAUserTrackedEvent
{
}

- (void)setRegistrationVersion:(long long)arg1;
- (void)setPreferredVerificationMethod:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setEditBirthdayYear:(_Bool)arg1;
- (void)setEditBirthdayMonth:(_Bool)arg1;
- (void)setEditBirthdayDay:(_Bool)arg1;
- (void)setChannelId:(id)arg1;
- (void)setAttemptCount:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end
