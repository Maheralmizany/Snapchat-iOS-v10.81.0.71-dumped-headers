//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraContentRecoveryAttempt : SCAUserTrackedEvent
{
}

- (void)setSuccess:(_Bool)arg1;
- (void)setRecoveryAttemptCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setContentRecoverySkipReason:(long long)arg1;
- (void)setContentLossReason:(long long)arg1;
- (void)setCaptureToRecoveryTimeSec:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

