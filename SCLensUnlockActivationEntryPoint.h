//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLensUnlockerService, SCServicesExposer;

@interface SCLensUnlockActivationEntryPoint : SCEntryPoint
{
    SCLensUnlockerService *_unlockerService;
    SCServicesExposer *_unlockActivationServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *unlockActivationServicesExposer; // @synthesize unlockActivationServicesExposer=_unlockActivationServicesExposer;
@property(nonatomic) __weak SCLensUnlockerService *unlockerService; // @synthesize unlockerService=_unlockerService;
- (void).cxx_destruct;
- (void)begin;

@end

