//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAdContentDelivery-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCAdContentDeliveryApiImpl : NSObject <SCAdContentDelivery>
{
    SCLazy *_contentDelivery;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)_callMediaDownloadCompletionWithFullPrefetchResult:(id)arg1 success:(_Bool)arg2 contentResult:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchCompleteStreamingContentIfNecessaryForContentResult:(id)arg1 preferredVideoDeliveryMethod:(long long)arg2 contentKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchCompleteContentIfNecessary:(long long)arg1 metrics:(id)arg2 cacheKey:(id)arg3 isVideo:(_Bool)arg4 preferredVideoDeliveryMethod:(long long)arg5 featureType:(long long)arg6 pageInfo:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_retrieveTopContentForMedia:(id)arg1 mediaId:(id)arg2 featureType:(long long)arg3 pageInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_retrieveBottomContentForMedia:(id)arg1 mediaId:(id)arg2 featureType:(long long)arg3 pageInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveContentForAdMedia:(id)arg1 mediaId:(id)arg2 featureType:(long long)arg3 contexts:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)queryContentStatusForAdMedia:(id)arg1 mediaId:(id)arg2;
- (void)downloadContentForAdMedia:(id)arg1 mediaId:(id)arg2 userInitiated:(_Bool)arg3 contexts:(id)arg4 featureType:(long long)arg5 priority:(long long)arg6 expirationDate:(id)arg7 preferredVideoDeliveryMethod:(long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)initWithContentDelivery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

