//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAMapUserLocationSharingSetting : SCAUserTrackedEvent
{
}

- (void)setSource:(long long)arg1;
- (void)setPreviousLocationSharingSetting:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setLocationSharingSettingUpdateType:(long long)arg1;
- (void)setLocationSharingSetting:(long long)arg1;
- (void)setHasUserOnboarded:(_Bool)arg1;
- (void)setDurationOfGhostModeSeconds:(long long)arg1;
- (void)setCustomFriendCount:(long long)arg1;
- (void)setBlacklistFriendCount:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

