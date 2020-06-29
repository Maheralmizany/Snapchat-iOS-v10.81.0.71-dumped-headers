//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCUserStoriesAdPrefetchExperimentContext : SCExperimentContext
{
    _Bool _userStoriesAdsPrefetchMedia;
    long long _userStoriesAdsPrefetchNumber;
    long long _userStoriesAdsPrefetchStoryScorePercent;
    long long _userStoriesAdPrefetchMinStoriesCount;
    long long _userStoriesAdPrefetchMaxFetchCount;
    long long _userStoriesAdPrefetchDelayInMs;
}

@property(readonly, nonatomic) long long userStoriesAdPrefetchDelayInMs; // @synthesize userStoriesAdPrefetchDelayInMs=_userStoriesAdPrefetchDelayInMs;
@property(readonly, nonatomic) long long userStoriesAdPrefetchMaxFetchCount; // @synthesize userStoriesAdPrefetchMaxFetchCount=_userStoriesAdPrefetchMaxFetchCount;
@property(readonly, nonatomic) long long userStoriesAdPrefetchMinStoriesCount; // @synthesize userStoriesAdPrefetchMinStoriesCount=_userStoriesAdPrefetchMinStoriesCount;
@property(readonly, nonatomic) long long userStoriesAdsPrefetchStoryScorePercent; // @synthesize userStoriesAdsPrefetchStoryScorePercent=_userStoriesAdsPrefetchStoryScorePercent;
@property(readonly, nonatomic) _Bool userStoriesAdsPrefetchMedia; // @synthesize userStoriesAdsPrefetchMedia=_userStoriesAdsPrefetchMedia;
@property(readonly, nonatomic) long long userStoriesAdsPrefetchNumber; // @synthesize userStoriesAdsPrefetchNumber=_userStoriesAdsPrefetchNumber;
- (void)setupParameters;
- (id)experimentName;

@end
