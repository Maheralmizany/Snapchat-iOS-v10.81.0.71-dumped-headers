//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUnlockActivation-Protocol.h"

@class NSString, SCLazy;

@interface SCLensUnlockActivationImpl : NSObject <SCLensUnlockActivation>
{
    SCLazy *_lensUnlocker;
}

- (void).cxx_destruct;
- (id)_activationStateForLens:(id)arg1 activateParams:(id)arg2;
- (id)_unlockerActionFromParams:(id)arg1;
- (void)unlockLensWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithlensUnlocker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
