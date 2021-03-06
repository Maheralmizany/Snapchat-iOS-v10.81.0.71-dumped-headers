//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppUserLifecycleEventObserver-Protocol.h"

@class NSString, SCLazy;
@protocol SCStoriesGhostToStoriesMetricsEmitting;

@interface SCStoriesAppUserLifecycleObserver : NSObject <SCAppUserLifecycleEventObserver>
{
    SCLazy *_storiesFetcher;
    _Bool _needsFullFetch;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToMyStoriesMetricsEmitter;
    id <SCStoriesGhostToStoriesMetricsEmitting> _ghostToFriendStoriesMetricsEmitter;
}

- (void).cxx_destruct;
- (void)_cancelGhostToStoriesLogging;
- (void)onAppWillTerminate;
- (void)onAppWillResignActive;
- (void)onAppDidFinishLaunching;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onUserResumed:(_Bool)arg1 didLaunchWithDataUnavailable:(_Bool)arg2;
- (void)onUserRegistered;
- (void)onUserLoggedIn;
- (id)initWithStoriesFetcher:(id)arg1 ghostToMyStoriesMetricsEmitter:(id)arg2 ghostToFriendStoriesMetricsEmitter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

