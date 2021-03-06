//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCContentManagerExperimentContext : SCExperimentContext
{
    _Bool _useListOfQueues;
    _Bool _useUnzipOnDownloadState;
    _Bool _shouldAllowReRegister;
    _Bool _stopCachingOfStreamingAssets;
    _Bool _useDefaultPriorityForInitQueue;
    _Bool _useDefaultPriorityForInternalQueueForChat;
    _Bool _useDefaultPriorityForCallbackQueueForChat;
    _Bool _useDefaultPriorityForInternalQueueForStories;
    _Bool _useDefaultPriorityForCallbackQueueForStories;
    _Bool _stopMainThreadQueryForStories;
    unsigned long long _numberOfQueuesPerMediaContextType;
    unsigned long long _timeInHoursAfterConsumptionToExpireStoryContent;
}

@property(readonly, nonatomic) _Bool stopMainThreadQueryForStories; // @synthesize stopMainThreadQueryForStories=_stopMainThreadQueryForStories;
@property(readonly, nonatomic) _Bool useDefaultPriorityForCallbackQueueForStories; // @synthesize useDefaultPriorityForCallbackQueueForStories=_useDefaultPriorityForCallbackQueueForStories;
@property(readonly, nonatomic) _Bool useDefaultPriorityForInternalQueueForStories; // @synthesize useDefaultPriorityForInternalQueueForStories=_useDefaultPriorityForInternalQueueForStories;
@property(readonly, nonatomic) _Bool useDefaultPriorityForCallbackQueueForChat; // @synthesize useDefaultPriorityForCallbackQueueForChat=_useDefaultPriorityForCallbackQueueForChat;
@property(readonly, nonatomic) _Bool useDefaultPriorityForInternalQueueForChat; // @synthesize useDefaultPriorityForInternalQueueForChat=_useDefaultPriorityForInternalQueueForChat;
@property(readonly, nonatomic) _Bool useDefaultPriorityForInitQueue; // @synthesize useDefaultPriorityForInitQueue=_useDefaultPriorityForInitQueue;
@property(readonly, nonatomic) _Bool stopCachingOfStreamingAssets; // @synthesize stopCachingOfStreamingAssets=_stopCachingOfStreamingAssets;
@property(readonly, nonatomic) _Bool shouldAllowReRegister; // @synthesize shouldAllowReRegister=_shouldAllowReRegister;
@property(readonly, nonatomic) _Bool useUnzipOnDownloadState; // @synthesize useUnzipOnDownloadState=_useUnzipOnDownloadState;
@property(readonly, nonatomic) unsigned long long timeInHoursAfterConsumptionToExpireStoryContent; // @synthesize timeInHoursAfterConsumptionToExpireStoryContent=_timeInHoursAfterConsumptionToExpireStoryContent;
@property(readonly, nonatomic) unsigned long long numberOfQueuesPerMediaContextType; // @synthesize numberOfQueuesPerMediaContextType=_numberOfQueuesPerMediaContextType;
@property(readonly, nonatomic) _Bool useListOfQueues; // @synthesize useListOfQueues=_useListOfQueues;
- (void)setupParameters;
- (id)experimentName;

@end

