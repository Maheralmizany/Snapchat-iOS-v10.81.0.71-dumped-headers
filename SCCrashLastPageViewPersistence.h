//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCrashLastPageViewPersistence-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCLazy;

@interface SCCrashLastPageViewPersistence : NSObject <SCTraceEnabled, SCCrashLastPageViewPersistence>
{
    NSOperationQueue *_lastPageViewWriterQueue;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    SCLazy *_preferences;
    NSString *_lastPageViewFromLastAppSession;
}

- (void).cxx_destruct;
- (void)_didChangeCurrentPageEvent:(id)arg1;
- (id)lastPageViewFromLastAppSession;
- (void)subscribeOnCurrentPageEvent:(id)arg1;
- (id)initWithWriterQueue:(id)arg1 preferences:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

