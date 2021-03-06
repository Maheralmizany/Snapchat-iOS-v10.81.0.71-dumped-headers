//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCDiscoverFeedNewPlaybackExperimentContext : SCExperimentContext
{
    _Bool _vOperaEnabled;
    _Bool _upNextRankingEnabled;
    _Bool _singleTileEnabled;
    _Bool _adEnabled;
    NSString *_feedTypes;
}

@property(readonly, nonatomic) _Bool adEnabled; // @synthesize adEnabled=_adEnabled;
@property(readonly, copy, nonatomic) NSString *feedTypes; // @synthesize feedTypes=_feedTypes;
@property(readonly, nonatomic) _Bool singleTileEnabled; // @synthesize singleTileEnabled=_singleTileEnabled;
@property(readonly, nonatomic) _Bool upNextRankingEnabled; // @synthesize upNextRankingEnabled=_upNextRankingEnabled;
@property(readonly, nonatomic) _Bool vOperaEnabled; // @synthesize vOperaEnabled=_vOperaEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

