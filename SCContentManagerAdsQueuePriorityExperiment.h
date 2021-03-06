//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCContentManagerAdsQueuePriorityExperiment : SCExperimentContext
{
    _Bool _useDefaultPriorityForInternalQueueForAds;
    _Bool _useDefaultPriorityForCallbackQueueForAds;
    _Bool _fetchAdsFromMainThread;
    _Bool _useDefaultPriorityQueueForAdsFetch;
}

@property(readonly, nonatomic) _Bool useDefaultPriorityQueueForAdsFetch; // @synthesize useDefaultPriorityQueueForAdsFetch=_useDefaultPriorityQueueForAdsFetch;
@property(readonly, nonatomic) _Bool fetchAdsFromMainThread; // @synthesize fetchAdsFromMainThread=_fetchAdsFromMainThread;
@property(readonly, nonatomic) _Bool useDefaultPriorityForCallbackQueueForAds; // @synthesize useDefaultPriorityForCallbackQueueForAds=_useDefaultPriorityForCallbackQueueForAds;
@property(readonly, nonatomic) _Bool useDefaultPriorityForInternalQueueForAds; // @synthesize useDefaultPriorityForInternalQueueForAds=_useDefaultPriorityForInternalQueueForAds;
- (void)setupParameters;
- (id)experimentName;

@end

