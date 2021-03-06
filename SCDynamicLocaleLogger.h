//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SCDisposableObserverLifecycle, SCLazy;

@interface SCDynamicLocaleLogger : NSObject
{
    NSOperationQueue *_logQueue;
    SCLazy *_graphene;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
}

- (void).cxx_destruct;
- (void)_reportLocalizedStringEvent:(id)arg1;
- (void)reportIsDynamicLocaleAvailable:(_Bool)arg1 locale:(id)arg2 isPrefetched:(_Bool)arg3 isFromRecheck:(_Bool)arg4;
- (void)subscribeLocalizedStringEvent:(id)arg1;
- (id)initWithGraphene:(id)arg1 logQueue:(id)arg2;

@end

