//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensSmartUnlock-Protocol.h"

@class NSString, SCLazy, SCLensCameraPresenterConfiguration;
@protocol SCLensCarouselSmartUnlockGatingStatus;

@interface SCFeatureLensSmartUnlockImpl : SCFeature <SCFeatureLensSmartUnlock>
{
    SCLazy *_lensUnlocker;
    id <SCLensCarouselSmartUnlockGatingStatus> _lensCarouselSmartUnlockGatingStatus;
    SCLensCameraPresenterConfiguration *_lensCameraPresenterConfiguration;
}

- (void).cxx_destruct;
- (_Bool)_shouldUnlockLens:(id)arg1;
- (void)_handleLensIdCodeUnlockForLens:(id)arg1;
- (void)_handleMachineReadableCodeUnlockForLens:(id)arg1;
- (unsigned long long)_unlockSource;
- (void)performSmartUnlockForLens:(id)arg1;
- (void)didShareSnapWithLens:(id)arg1;
- (void)didSaveSnapWithLens:(id)arg1;
- (void)didSendSnapWithLens:(id)arg1;
- (id)initWithLensUnlocker:(id)arg1 lensCameraPresenterConfiguration:(id)arg2 lensCarouselSmartUnlockGatingStatus:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
