//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAMapBrowseAction : SCAUserTrackedEvent
{
}

- (void)setNumberOfZoomSliderUses:(long long)arg1;
- (void)setNumberOfTwoFingerTaps:(long long)arg1;
- (void)setNumberOfTaps:(long long)arg1;
- (void)setNumberOfSingleTapZooms:(long long)arg1;
- (void)setNumberOfPinches:(long long)arg1;
- (void)setNumberOfPans:(long long)arg1;
- (void)setNumberOfDoubleTaps:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end
