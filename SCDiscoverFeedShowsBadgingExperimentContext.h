//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedShowsBadgingExperimentContext : SCExperimentContext
{
    _Bool _showsBadgingEnabled;
    long long _badgeDisplayDelayInSec;
}

@property(readonly, nonatomic) long long badgeDisplayDelayInSec; // @synthesize badgeDisplayDelayInSec=_badgeDisplayDelayInSec;
@property(readonly, nonatomic) _Bool showsBadgingEnabled; // @synthesize showsBadgingEnabled=_showsBadgingEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

