//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@interface SCAImageProcessError : SCAUserNotTrackedEvent
{
}

- (void)setType:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setProcessor:(id)arg1;
- (void)setDeviceClass:(long long)arg1;
- (void)setAdditionalInfo:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
