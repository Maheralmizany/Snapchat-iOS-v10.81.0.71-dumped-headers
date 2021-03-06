//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCQueuePerformer, SCStoriesProtobufRequestManager;

@interface SCStoriesBatchStoryNetworkRequester : NSObject
{
    SCQueuePerformer *_performer;
    SCStoriesProtobufRequestManager *_requestManager;
    SCLazy *_endpointManager;
}

- (void).cxx_destruct;
- (id)_createRequestWithSnapAccessToken:(id)arg1 userIds:(id)arg2 userIdToSequence:(id)arg3 ignoreBlockerStories:(_Bool)arg4;
- (void)fetchStoriesWithUserIds:(id)arg1 userIdToSequence:(id)arg2 ignoreBlockerStories:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithProtobufRequestManager:(id)arg1 endpointManager:(id)arg2 grapheneMetricsEmitter:(id)arg3;

@end

