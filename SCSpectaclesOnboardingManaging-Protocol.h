//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSpectaclesOnboardingFlow, SCSpectaclesPostPairingOnboardingInfo;
@protocol SCSpectaclesOnboardingDownloadableContentProviding;

@protocol SCSpectaclesOnboardingManaging <NSObject>
- (id <SCSpectaclesOnboardingDownloadableContentProviding>)videoProvider:(SCSpectaclesOnboardingFlow *)arg1;
- (SCSpectaclesOnboardingFlow *)newLagunaPhotoUpdateFlow;
- (SCSpectaclesOnboardingFlow *)newSettingsOnboardingFlow;
- (SCSpectaclesOnboardingFlow *)newPairingOnboardingFlow:(SCSpectaclesPostPairingOnboardingInfo *)arg1;
- (void)warmupPairingOnboarding:(SCSpectaclesPostPairingOnboardingInfo *)arg1;
- (void)warmupSettingsOnboarding;
- (_Bool)shouldShowUpdateOnboarding;
- (_Bool)shouldShowPairingOnboarding:(SCSpectaclesPostPairingOnboardingInfo *)arg1;
@end
