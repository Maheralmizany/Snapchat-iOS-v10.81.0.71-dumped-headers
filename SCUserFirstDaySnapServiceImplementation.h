//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserFirstDaySnapService-Protocol.h"

@class SCDisposableObserver, SCDisposableObserverLifecycle, SCFeatureSettingsService, SCObservable;

@interface SCUserFirstDaySnapServiceImplementation : NSObject <SCUserFirstDaySnapService>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCDisposableObserver *_updatesObserver;
    SCObservable *_allUpdates;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_startObserving:(id)arg1 combine:(id)arg2;
- (void)_updateSnapSentOnFirstDay:(id)arg1;
- (void)_userSentASnap:(id)arg1;
- (_Bool)hasSentSnapsOnFirstDay;
- (id)initWithSnapSendEvents:(id)arg1 featureSettingsService:(id)arg2 allUpdates:(id)arg3;

@end

