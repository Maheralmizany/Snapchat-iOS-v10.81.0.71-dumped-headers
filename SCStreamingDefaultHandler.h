//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingRequestManagerHandlerDelegate-Protocol.h"
#import "SCWebProxyAESCBCDecryptionLayerDelegate-Protocol.h"
#import "SCWebProxyCacheLayerDelegate-Protocol.h"
#import "SCWebProxyRequestDedupeLayerDelegate-Protocol.h"
#import "SCWebProxyRequestHandling-Protocol.h"
#import "SCWebProxyRequestTransformLayerDelegate-Protocol.h"
#import "SCWebProxyResponseHeadersTransformLayerDelegate-Protocol.h"
#import "SCWebProxyResponseTransformLayerDelegate-Protocol.h"

@class NSString, SCLazy, SCStreamingRequestManagerHandler, SCWebProxyAESCBCDecryptionLayer, SCWebProxyCacheLayer, SCWebProxyLocalFileLayer, SCWebProxyRequestDedupeLayer, SCWebProxyRequestTransformLayer, SCWebProxyResponseHeadersTransformLayer, SCWebProxyResponseTransformLayer;
@protocol SCStreamingRequestExtraInfoProviding;

@interface SCStreamingDefaultHandler : NSObject <SCWebProxyResponseTransformLayerDelegate, SCWebProxyAESCBCDecryptionLayerDelegate, SCWebProxyCacheLayerDelegate, SCWebProxyResponseHeadersTransformLayerDelegate, SCStreamingRequestManagerHandlerDelegate, SCWebProxyRequestTransformLayerDelegate, SCWebProxyRequestDedupeLayerDelegate, SCWebProxyRequestHandling>
{
    SCLazy *_snapTokenProvider;
    SCWebProxyResponseTransformLayer *_responseTransformLayer;
    SCWebProxyRequestTransformLayer *_requestTransformLayer;
    SCWebProxyResponseHeadersTransformLayer *_responseHeadersTransformLayer;
    SCWebProxyAESCBCDecryptionLayer *_decryptionLayer;
    SCWebProxyLocalFileLayer *_localFileLayer;
    SCWebProxyRequestDedupeLayer *_requestDedupeLayer;
    SCWebProxyCacheLayer *_cacheLayer;
    SCWebProxyResponseTransformLayer *_preCacheResponseTransformLayer;
    SCStreamingRequestManagerHandler *_requestManagerHandler;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
}

@property(readonly, nonatomic) __weak id <SCStreamingRequestExtraInfoProviding> extraInfoProvider; // @synthesize extraInfoProvider=_extraInfoProvider;
- (void).cxx_destruct;
- (id)proxyDedupeLayer:(id)arg1 cacheKeyForProxyRequest:(id)arg2;
- (_Bool)proxyDedupeLayer:(id)arg1 shouldDedupeIfNeededForProxyRequest:(id)arg2;
- (id)requestManagerHandler:(id)arg1 requestManagerInfoForProxyRequest:(id)arg2;
- (void)proxyRequestTransformLayer:(id)arg1 transformProxyRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)proxyResponseHeadersTransformLayer:(id)arg1 transformResponseHeaders:(id)arg2 forProxyRequest:(id)arg3;
- (_Bool)proxyResponseHeadersTransformLayer:(id)arg1 shouldTransformResponseHeadersForProxyRequest:(id)arg2;
- (_Bool)proxyCacheLayer:(id)arg1 shouldDisableCacheWritesForProxyRequest:(id)arg2 responseHeaders:(id)arg3;
- (void)proxyCacheLayer:(id)arg1 didFullyCacheResourceForProxyRequest:(id)arg2 resourceData:(id)arg3;
- (id)proxyCacheLeyer:(id)arg1 cacheKeyForProxyRequest:(id)arg2;
- (id)proxyDecryptionLayer:(id)arg1 unencryptedResourceSizeForProxyRequest:(id)arg2;
- (id)proxyDecryptionLayer:(id)arg1 ivForProxyRequest:(id)arg2;
- (id)proxyDecryptionLayer:(id)arg1 keyForProxyRequest:(id)arg2;
- (_Bool)proxyDecryptionLayer:(id)arg1 shouldDecryptProxyRequest:(id)arg2;
- (void)proxyResponseTransformLayer:(id)arg1 transformProxyResponse:(id)arg2 proxyRequest:(id)arg3 urlProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)proxyResponseTransformLayer:(id)arg1 shouldTransformProxyRequest:(id)arg2;
- (id)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 snapTokenProvider:(id)arg2 extraInfoProvider:(id)arg3 responseCache:(id)arg4 cacheTTL:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

