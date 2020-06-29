//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCancelableGroup, SCSentinel, SCWebProxyRequest;
@protocol SCCanceling, SCWebProxyURLProviding;

@interface SCWebProxyExecutableRequest : NSObject
{
    id <SCWebProxyURLProviding> _urlProvider;
    CDUnknownBlockType _updateBlock;
    SCCancelableGroup *_cancelGroup;
    SCSentinel *_executed;
    SCWebProxyRequest *_proxyRequest;
}

@property(readonly, nonatomic) SCWebProxyRequest *proxyRequest; // @synthesize proxyRequest=_proxyRequest;
- (void).cxx_destruct;
- (void)_cancel;
@property(readonly, nonatomic) id <SCCanceling> cancelable;
- (void)executeInRequestHandler:(id)arg1;
- (id)initWithProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;

@end
