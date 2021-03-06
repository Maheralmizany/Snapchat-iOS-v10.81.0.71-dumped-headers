//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SCApplicationState, SCNetworkConnectivityAnnouncer;

@interface AMPAppStateProvider : NSObject
{
    SCNetworkConnectivityAnnouncer *_connectivityAnnouncer;
    SCApplicationState *_applicationState;
    NSNumber *_appLaunchSource;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (void)appDidReceivePrefetchTriggerByAppleWithState:(long long)arg1;
- (void)appDidReceivePushNotificationWithSource:(long long)arg1 appState:(long long)arg2;
- (void)_setLaunchSoouce:(long long)arg1 appState:(long long)arg2;
@property(readonly, nonatomic) long long appLaunchSource;
@property(readonly, nonatomic) _Bool isAppInBackground;
@property(readonly, nonatomic) _Bool isConnectedViaWWAN;
@property(readonly, nonatomic) _Bool isConnectedViaWifi;
@property(readonly, nonatomic) _Bool isConnectedToNetwork;
- (id)initWithConnectivityAnnouncer:(id)arg1 applicationState:(id)arg2;

@end

