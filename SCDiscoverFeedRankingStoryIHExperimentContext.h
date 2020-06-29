//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedRankingStoryIHExperimentContext : SCExperimentContext
{
    unsigned long long _storyIHLongImpressionCountThreshold;
    unsigned long long _storyIHTotalImpressionTimeThresholdSeconds;
    unsigned long long _storyIHExplorationStoryLongImpressionCountThreshold;
    unsigned long long _storyIHExplorationStoryTotalImpressionTimeThresholdSeconds;
    unsigned long long _storyIHCuratedHeroTileLongImpressionCountThreshold;
    unsigned long long _storyIHCuratedHeroTileTotalImpressionTimeThresholdSeconds;
    unsigned long long _storyIHHappeningNowLongImpressionCountThreshold;
    unsigned long long _storyIHHappeningNowTotalImpressionTimeThresholdSeconds;
}

@property(readonly, nonatomic) unsigned long long storyIHHappeningNowTotalImpressionTimeThresholdSeconds; // @synthesize storyIHHappeningNowTotalImpressionTimeThresholdSeconds=_storyIHHappeningNowTotalImpressionTimeThresholdSeconds;
@property(readonly, nonatomic) unsigned long long storyIHHappeningNowLongImpressionCountThreshold; // @synthesize storyIHHappeningNowLongImpressionCountThreshold=_storyIHHappeningNowLongImpressionCountThreshold;
@property(readonly, nonatomic) unsigned long long storyIHCuratedHeroTileTotalImpressionTimeThresholdSeconds; // @synthesize storyIHCuratedHeroTileTotalImpressionTimeThresholdSeconds=_storyIHCuratedHeroTileTotalImpressionTimeThresholdSeconds;
@property(readonly, nonatomic) unsigned long long storyIHCuratedHeroTileLongImpressionCountThreshold; // @synthesize storyIHCuratedHeroTileLongImpressionCountThreshold=_storyIHCuratedHeroTileLongImpressionCountThreshold;
@property(readonly, nonatomic) unsigned long long storyIHExplorationStoryTotalImpressionTimeThresholdSeconds; // @synthesize storyIHExplorationStoryTotalImpressionTimeThresholdSeconds=_storyIHExplorationStoryTotalImpressionTimeThresholdSeconds;
@property(readonly, nonatomic) unsigned long long storyIHExplorationStoryLongImpressionCountThreshold; // @synthesize storyIHExplorationStoryLongImpressionCountThreshold=_storyIHExplorationStoryLongImpressionCountThreshold;
@property(readonly, nonatomic) unsigned long long storyIHTotalImpressionTimeThresholdSeconds; // @synthesize storyIHTotalImpressionTimeThresholdSeconds=_storyIHTotalImpressionTimeThresholdSeconds;
@property(readonly, nonatomic) unsigned long long storyIHLongImpressionCountThreshold; // @synthesize storyIHLongImpressionCountThreshold=_storyIHLongImpressionCountThreshold;
- (void)setupParameters;
- (id)experimentName;

@end

