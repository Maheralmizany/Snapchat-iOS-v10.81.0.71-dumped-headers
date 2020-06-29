//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAdBoltProgressiveDownloadExperimentContext : SCExperimentContext
{
    _Bool _operaIsStreamingFlag;
    _Bool _prepareVideoAssetInOpera;
    _Bool _includePagingAnimationTimeForViewedTime;
    long long _progressiveDownloadMethod;
    unsigned long long _adCMInitialChunkSizeInKB;
    unsigned long long _adCMCacheChunkSizeInKB;
    unsigned long long _adCMPrefetchMS;
}

@property(readonly, nonatomic) _Bool includePagingAnimationTimeForViewedTime; // @synthesize includePagingAnimationTimeForViewedTime=_includePagingAnimationTimeForViewedTime;
@property(readonly, nonatomic) _Bool prepareVideoAssetInOpera; // @synthesize prepareVideoAssetInOpera=_prepareVideoAssetInOpera;
@property(readonly, nonatomic) _Bool operaIsStreamingFlag; // @synthesize operaIsStreamingFlag=_operaIsStreamingFlag;
@property(readonly, nonatomic) unsigned long long adCMPrefetchMS; // @synthesize adCMPrefetchMS=_adCMPrefetchMS;
@property(readonly, nonatomic) unsigned long long adCMCacheChunkSizeInKB; // @synthesize adCMCacheChunkSizeInKB=_adCMCacheChunkSizeInKB;
@property(readonly, nonatomic) unsigned long long adCMInitialChunkSizeInKB; // @synthesize adCMInitialChunkSizeInKB=_adCMInitialChunkSizeInKB;
@property(readonly, nonatomic) long long progressiveDownloadMethod; // @synthesize progressiveDownloadMethod=_progressiveDownloadMethod;
- (void)setupParameters;
- (id)experimentName;

@end

