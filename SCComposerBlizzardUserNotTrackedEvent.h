//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSDictionary, NSString;

@interface SCComposerBlizzardUserNotTrackedEvent : SCAUserNotTrackedEvent
{
    NSString *_eventName;
    long long _qos;
    NSDictionary *_parameters;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDictionary;
- (long long)getEventQoS;
- (id)getEventName;
- (id)initWithEventName:(id)arg1 qos:(long long)arg2 parameters:(id)arg3;

@end

