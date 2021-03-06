//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCIosChatNotificationPrefetchDedupeExperimentContext : SCExperimentContext
{
    _Bool _skipSyncingForSnap;
    _Bool _processPrefetch;
    _Bool _fetchQueueEnabled;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly) _Bool fetchQueueEnabled; // @synthesize fetchQueueEnabled=_fetchQueueEnabled;
@property(readonly) _Bool processPrefetch; // @synthesize processPrefetch=_processPrefetch;
@property(readonly) _Bool skipSyncingForSnap; // @synthesize skipSyncingForSnap=_skipSyncingForSnap;
- (void)setupParameters;
- (id)experimentName;

@end

