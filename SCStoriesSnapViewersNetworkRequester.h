//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCQueuePerformer, SCStoriesProtobufRequestManager;
@protocol SCStoriesCircumstanceEngine;

@interface SCStoriesSnapViewersNetworkRequester : NSObject
{
    SCStoriesProtobufRequestManager *_requestManager;
    id <SCStoriesCircumstanceEngine> _storiesCircumstanceEngine;
    NSString *_currentUserId;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_createRequestWithSnapAccessToken:(id)arg1 batchSnapsByType:(id)arg2;
- (void)_fetchViewerInfoWithBatchSnapsByType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchViewerInfoWithBatchSnapsByType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProtobufRequestManager:(id)arg1 grapheneMetricsEmitter:(id)arg2 storiesCircumstanceEngine:(id)arg3 currentUserId:(id)arg4;

@end

