//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppUserLifecycleEventObserver-Protocol.h"

@class NSString, SCLazy;

@interface SCGroupsAppUserLifecycleObserver : NSObject <SCAppUserLifecycleEventObserver>
{
    SCLazy *_groupsDataRemoteFetcher;
}

- (void).cxx_destruct;
- (void)onUserResumed:(_Bool)arg1 didLaunchWithDataUnavailable:(_Bool)arg2;
- (void)onUserRegistered;
- (void)onAppWillTerminate;
- (void)onAppWillResignActive;
- (void)onAppWillEnterForeground;
- (void)onAppDidFinishLaunching;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActive;
- (void)onUserLoggedIn;
- (id)initWithGroupsDataRemoteFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

