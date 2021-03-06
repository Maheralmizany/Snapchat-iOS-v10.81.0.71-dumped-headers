//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMdpStoriesRetryWithJobschedulerExperimentContext : SCExperimentContext
{
    _Bool _enableStoryRetryUsingJs;
    _Bool _disableUploadNextFailedStory;
    _Bool _useSCCPSignal;
    unsigned long long _retryIntervalInSecs;
    unsigned long long _retryAttempts;
    long long _retryPolicy;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(readonly, nonatomic) _Bool useSCCPSignal; // @synthesize useSCCPSignal=_useSCCPSignal;
@property(readonly, nonatomic) unsigned long long retryAttempts; // @synthesize retryAttempts=_retryAttempts;
@property(readonly, nonatomic) unsigned long long retryIntervalInSecs; // @synthesize retryIntervalInSecs=_retryIntervalInSecs;
@property(readonly, nonatomic) _Bool disableUploadNextFailedStory; // @synthesize disableUploadNextFailedStory=_disableUploadNextFailedStory;
@property(readonly, nonatomic) _Bool enableStoryRetryUsingJs; // @synthesize enableStoryRetryUsingJs=_enableStoryRetryUsingJs;
- (void)setupParameters;
- (id)experimentName;

@end

