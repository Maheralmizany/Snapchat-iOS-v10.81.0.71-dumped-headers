//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebProxyLayer.h"

@protocol SCWebProxyResponseTransformLayerDelegate;

@interface SCWebProxyResponseTransformLayer : SCWebProxyLayer
{
    id <SCWebProxyResponseTransformLayerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCWebProxyResponseTransformLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1 delegate:(id)arg2;

@end

