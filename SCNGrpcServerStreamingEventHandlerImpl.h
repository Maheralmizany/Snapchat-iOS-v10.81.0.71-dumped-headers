//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNGrpcServerStreamingEventHandler-Protocol.h"

@interface SCNGrpcServerStreamingEventHandlerImpl : NSObject <SCNGrpcServerStreamingEventHandler>
{
    CDUnknownBlockType _serverStreamingHandler;
    Class _responseClass;
}

- (void).cxx_destruct;
- (void)onEvent:(_Bool)arg1 response:(id)arg2 status:(id)arg3;
- (id)initWithHandler:(CDUnknownBlockType)arg1 responseClass:(Class)arg2;

@end

