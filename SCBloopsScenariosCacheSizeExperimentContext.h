//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBloopsScenariosCacheSizeExperimentContext : SCExperimentContext
{
    unsigned long long _previewsCacheSize;
    unsigned long long _videosCacheSize;
    unsigned long long _scenariosCacheSize;
}

@property(readonly, nonatomic) unsigned long long scenariosCacheSize; // @synthesize scenariosCacheSize=_scenariosCacheSize;
@property(readonly, nonatomic) unsigned long long videosCacheSize; // @synthesize videosCacheSize=_videosCacheSize;
@property(readonly, nonatomic) unsigned long long previewsCacheSize; // @synthesize previewsCacheSize=_previewsCacheSize;
- (void)setupParameters;
- (id)experimentName;

@end

