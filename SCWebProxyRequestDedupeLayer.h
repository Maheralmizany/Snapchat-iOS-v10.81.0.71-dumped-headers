//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebProxyLayer.h"

@class NSMutableDictionary, SCQueuePerformer;
@protocol SCStreamingResponseCacheObserving, SCWebProxyRequestDedupeLayerDelegate;

@interface SCWebProxyRequestDedupeLayer : SCWebProxyLayer
{
    id <SCStreamingResponseCacheObserving> _responseCacheObservable;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_inFlightRequestsByUUID;
    NSMutableDictionary *_pendingRequestsByUUID;
    id <SCWebProxyRequestDedupeLayerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCWebProxyRequestDedupeLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_canExecuteProxyRequest:(id)arg1;
- (id)_dequeuePendingRequestWithUUID:(id)arg1;
- (id)_dequeueUnblockedPendingRequests;
- (void)_didFinishHandlingRequest:(id)arg1;
- (id)_enqueueProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)_executeProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1 delegate:(id)arg2 responseCacheObservable:(id)arg3;

@end

