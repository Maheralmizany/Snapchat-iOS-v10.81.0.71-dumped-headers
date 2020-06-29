//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserFeatureDeallocationMonitorDelegate-Protocol.h"

@class SCScopeExposer, SCUserFeatureDeallocationMonitor;

@interface SCUserFeatureLauncher : NSObject <SCUserFeatureDeallocationMonitorDelegate>
{
    SCScopeExposer *_scopeExposer;
    SCUserFeatureDeallocationMonitor *_deallocationMonitor;
}

- (void).cxx_destruct;
- (void)detectedDeallocationOfObjectAssociatedWithScope:(id)arg1;
- (void)endLaunchedFeature;
@property(readonly, nonatomic) id scope;
@property(readonly, nonatomic) _Bool isLaunched;
- (void)launchFeatureWithScope:(id)arg1 owner:(id)arg2;
- (id)initWithScopeExposer:(id)arg1;

@end

