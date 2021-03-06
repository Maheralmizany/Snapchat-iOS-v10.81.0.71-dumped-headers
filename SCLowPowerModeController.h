//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, User;

@interface SCLowPowerModeController : NSObject
{
    NSDate *_startTime;
    NSDate *_appStartTime;
    User *_currentUser;
    double _timeInLowPowerMode;
    _Bool _appInLowPowerMode;
}

+ (_Bool)isOSInLowPowerMode;
+ (id)shared;
- (void).cxx_destruct;
- (void)lowPowerModeChanged;
- (void)flushEvent;
- (void)showNotification;
- (void)resetWithShowNotification;
- (id)init;
- (_Bool)shouldSuspendAppEarlier;
- (void)didEnterBackground;
- (void)willEnterForeground;
@property _Bool isAppInLowPowerMode; // @synthesize isAppInLowPowerMode=_appInLowPowerMode;

@end

