//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCStickerLowerCameosTeaserPriorityExperimentContext : SCExperimentContext
{
    _Bool _shouldLowerCameosTeaserPriority;
    long long _stickerCategoryBackfillMax;
    long long _cameosOnboardingPlacement;
    long long _cameosOnboardedPlacement;
}

@property(readonly, nonatomic) long long cameosOnboardedPlacement; // @synthesize cameosOnboardedPlacement=_cameosOnboardedPlacement;
@property(readonly, nonatomic) long long cameosOnboardingPlacement; // @synthesize cameosOnboardingPlacement=_cameosOnboardingPlacement;
@property(readonly, nonatomic) long long stickerCategoryBackfillMax; // @synthesize stickerCategoryBackfillMax=_stickerCategoryBackfillMax;
@property(readonly, nonatomic) _Bool shouldLowerCameosTeaserPriority; // @synthesize shouldLowerCameosTeaserPriority=_shouldLowerCameosTeaserPriority;
- (void)setupParameters;
- (id)experimentName;

@end

