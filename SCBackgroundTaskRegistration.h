//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCBackgroundTaskRegistration : NSObject
{
    SCLazy *_lazyGrapheneFlusher;
    _Bool _registrationSucceed;
}

- (void).cxx_destruct;
- (void)_resubmitBGTask;
- (void)submitBGTask;
- (void)handleExpiration:(id)arg1;
- (void)_postBackgroundWakeupNotification:(id)arg1;
- (void)registerBackgroundTask;
- (id)initWithGrapheneFlusher:(id)arg1;

@end

