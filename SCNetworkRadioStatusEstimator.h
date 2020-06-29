//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkConnectivityListener-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCNetworkRadioStatusEstimator : NSObject <SCNetworkConnectivityListener>
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_startedActivities;
    NSMutableDictionary *_completedActivities;
    NSMutableArray *_networkConnectivityChanges;
    NSMutableDictionary *_startedBackgroundActivities;
    NSMutableDictionary *_completedBackgroundActivities;
    NSMutableArray *_backgroundNetworkConnectivityChanges;
    NSDate *_appForegroundedTimestamp;
    NSDate *_appBackgroundedTimestamp;
    unsigned long long _totalWWANReceivedBytesWhenAppSessionStart;
    unsigned long long _totalWWANSentBytesWhenAppSessionStart;
    unsigned long long _totalWIFIReceivedBytesWhenAppSessionStart;
    unsigned long long _totalWIFISentBytesWhenAppSessionStart;
    long long _currentNetworkConnectivityStatus;
    long long _networkConnectivityStatusOnAppOpen;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_backgroundAppSessionNetworkUsageWithStartTime:(id)arg1 endTime:(id)arg2 networkConnectivityWhenBackgroundRunningStart:(long long)arg3 networkConnectivityWhenBackgroundRunningFinish:(long long)arg4;
- (id)backgroundAppSessionNetworkUsageWithStartTime:(id)arg1 endTime:(id)arg2 networkConnectivityWhenBackgroundRunningStart:(long long)arg3 networkConnectivityWhenBackgroundRunningFinish:(long long)arg4;
- (id)_networkUsageFromAppOpenUntilTimestamp:(id)arg1 withConnectivityStatus:(long long)arg2;
- (id)_networkUsageFromAppOpenUntilTimestamp:(id)arg1 onAppBackground:(_Bool)arg2;
- (id)networkUsageFromAppOpenUntilTimestamp:(id)arg1 onAppBackground:(_Bool)arg2;
- (void)_didEnterBackgroundWithTimestamp:(id)arg1;
- (void)_didEnterForegroundWithTimestamp:(id)arg1;
- (void)didEnterForegroundWithTimestamp:(id)arg1;
- (void)_didFinishNetworkActivity:(id)arg1 timestamp:(id)arg2 activityAttributionKey:(id)arg3 succeeded:(_Bool)arg4 inBackground:(_Bool)arg5;
- (void)_didStartNetworkActivity:(id)arg1 timestamp:(id)arg2 activityAttributionKey:(id)arg3 inBackground:(_Bool)arg4;
- (id)networkActivityAttributionKeyForRequest:(id)arg1 requestType:(long long)arg2 trackingInfo:(id)arg3;
- (id)networkActivityAttributionKeyForBCOV;
- (id)networkActivityAttributionKeyForRemoteVideoPlayer;
- (id)networkActivityIdentifierForRequest:(id)arg1 trackingInfo:(id)arg2;
- (id)renewedNetworkActivityIdentifierForBCOV;
- (id)renewedNetworkActivityIdentifierForRemoteVideoPlayer;
- (id)renewedNetworkActivityIdentifierForType:(unsigned long long)arg1;
- (void)_logFinishedNetworkActivity:(id)arg1 endTime:(id)arg2 activityAttributionKey:(id)arg3 succeeded:(_Bool)arg4;
- (void)logFinishedNetworkActivity:(id)arg1 endTime:(id)arg2 activityAttributionKey:(id)arg3 succeeded:(_Bool)arg4;
- (void)_logStartedNetworkActivity:(id)arg1 startTime:(id)arg2 activityAttributionKey:(id)arg3;
- (void)logStartedNetworkActivity:(id)arg1 startTime:(id)arg2 activityAttributionKey:(id)arg3;
- (void)_networkConnectivityStatusDidChange:(long long)arg1 atTime:(id)arg2 inBackground:(_Bool)arg3;
- (void)_networkConnectivityStatusDidChange:(long long)arg1 atTime:(id)arg2;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (_Bool)_shouldEnableNetworkRadioStatusEstimator;
- (void)_resetNetworkTrafficStatisticsData;
- (void)dealloc;
- (id)_initWithQueuePerformer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

