//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerWriteStream-Protocol.h"

@class NSOperationQueue, SCDisposableObserverLifecycle, SCPublishSubject;

@interface SCResourceLoaderWriteStream : NSObject <SCNContentManagerWriteStream>
{
    NSOperationQueue *_mointoringQueue;
    SCPublishSubject *_streamDataObservable;
    SCDisposableObserverLifecycle *_streamLifeCycle;
}

- (void).cxx_destruct;
- (void)free;
- (void)setError:(long long)arg1 message:(id)arg2;
- (void)putBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)stopMonitoringForUpdates;
- (void)startMonitoringForUpdates:(CDUnknownBlockType)arg1;
- (id)initWithMonitoringQueue:(id)arg1;

@end

