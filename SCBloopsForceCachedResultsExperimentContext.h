//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBloopsForceCachedResultsExperimentContext : SCExperimentContext
{
    unsigned long long _categoryType;
    unsigned long long _cacheType;
    unsigned long long _count;
    unsigned long long _limit;
}

@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(readonly, nonatomic) unsigned long long categoryType; // @synthesize categoryType=_categoryType;
- (void)setupParameters;
- (id)experimentName;

@end
