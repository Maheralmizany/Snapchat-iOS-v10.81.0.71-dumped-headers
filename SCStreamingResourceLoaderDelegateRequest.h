//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AVAssetResourceLoadingRequest, SCWebProxyRequest;
@protocol SCCanceling;

@interface SCStreamingResourceLoaderDelegateRequest : NSObject <NSCopying>
{
    AVAssetResourceLoadingRequest *_loadingRequest;
    SCWebProxyRequest *_proxyRequest;
    id <SCCanceling> _cancelable;
}

@property(readonly, nonatomic) id <SCCanceling> cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, copy, nonatomic) SCWebProxyRequest *proxyRequest; // @synthesize proxyRequest=_proxyRequest;
@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLoadingRequest:(id)arg1 proxyRequest:(id)arg2 cancelable:(id)arg3;

@end
