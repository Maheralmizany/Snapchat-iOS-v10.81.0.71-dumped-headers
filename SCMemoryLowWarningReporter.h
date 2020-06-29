//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCDisposableObserverLifecycle, SCLazy, SCObservable;

@interface SCMemoryLowWarningReporter : NSObject <SCTraceEnabled>
{
    SCLazy *_grapheneLogger;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCObservable *_appLifecycleEvent;
}

- (void).cxx_destruct;
- (void)_logLowMemory:(id)arg1;
- (void)beginSubscription;
- (id)initWithGrapheneLogger:(id)arg1 appLifecycleEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

