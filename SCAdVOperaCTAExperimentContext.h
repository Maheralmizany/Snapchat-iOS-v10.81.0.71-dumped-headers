//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAdVOperaCTAExperimentContext : SCExperimentContext
{
    _Bool _enableWebCTACard;
    long long _adPillAnimationStyle;
    long long _tapDetectionHeight;
}

@property(readonly, nonatomic) long long tapDetectionHeight; // @synthesize tapDetectionHeight=_tapDetectionHeight;
@property(readonly, nonatomic) long long adPillAnimationStyle; // @synthesize adPillAnimationStyle=_adPillAnimationStyle;
@property(readonly, nonatomic) _Bool enableWebCTACard; // @synthesize enableWebCTACard=_enableWebCTACard;
- (void)setupParameters;
- (id)experimentName;

@end
