//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, SCMapsSlippyGetShouldPerformActionRequest, SCMapsSlippyUpdateReactionRequest;
@protocol GRPCProtoResponseHandler;

@protocol SCMapsSlippySlippy2 <NSObject>
- (GRPCUnaryProtoCall *)updateReactionWithMessage:(SCMapsSlippyUpdateReactionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getShouldPerformActionWithMessage:(SCMapsSlippyGetShouldPerformActionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

