//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensLifecycleListenerAnnouncer;

@interface SCLensLifecycleEventBridge : NSObject <SCTraceEnabled, LSAEffectComponentListener>
{
    SCLensLifecycleListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)effectComponent:(id)arg1 didLoadResourcesForEffectId:(id)arg2 applyDelay:(double)arg3;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

