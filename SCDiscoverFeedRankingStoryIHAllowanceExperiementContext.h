//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedRankingStoryIHAllowanceExperiementContext : SCExperimentContext
{
    unsigned long long _dfRankingStoryIHAllowanceExplorationStoryCount;
    unsigned long long _dfRankingStoryIHAllowanceCuratedHeroTileCount;
    unsigned long long _dfRankingStoryIHAllowanceHappeningNowCount;
}

@property(readonly, nonatomic) unsigned long long dfRankingStoryIHAllowanceHappeningNowCount; // @synthesize dfRankingStoryIHAllowanceHappeningNowCount=_dfRankingStoryIHAllowanceHappeningNowCount;
@property(readonly, nonatomic) unsigned long long dfRankingStoryIHAllowanceCuratedHeroTileCount; // @synthesize dfRankingStoryIHAllowanceCuratedHeroTileCount=_dfRankingStoryIHAllowanceCuratedHeroTileCount;
@property(readonly, nonatomic) unsigned long long dfRankingStoryIHAllowanceExplorationStoryCount; // @synthesize dfRankingStoryIHAllowanceExplorationStoryCount=_dfRankingStoryIHAllowanceExplorationStoryCount;
- (void)setupParameters;
- (id)experimentName;

@end

