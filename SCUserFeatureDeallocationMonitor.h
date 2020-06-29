//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject, SCUserFeatureDeallocationMonitorDelegate;

@interface SCUserFeatureDeallocationMonitor : NSObject
{
    id <NSObject> _owner;
    id _scope;
    id <SCUserFeatureDeallocationMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoringDeallocation;
- (void)startMonitoringDeallocationOfObject:(id)arg1 associatedWithScope:(id)arg2 delegate:(id)arg3;

@end
