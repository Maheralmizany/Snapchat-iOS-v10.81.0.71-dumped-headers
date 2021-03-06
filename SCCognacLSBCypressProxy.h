//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacCypressProxy-Protocol.h"
#import "SCCognacWebProxyCustomRequestHandler-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface SCCognacLSBCypressProxy : NSObject <SCCognacCypressProxy, SCCognacWebProxyCustomRequestHandler>
{
    NSString *_authKey;
    NSMutableDictionary *_handlerNameToHandlerMap;
    NSMutableArray *_longPollingEventsWaitingToBeSent;
    NSMutableDictionary *_longPollingEventsWaitingForResponse;
    CDUnknownBlockType _longPollingConnectionCompletionBlock;
    NSTimer *_longPollingConnectionTimeoutTimer;
}

- (void).cxx_destruct;
- (void)_handleRequestForLongPollingResponse:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_cancelLongPollingConnectionTimeoutTimer;
- (void)_scheduleLongPollingConnectionTimeoutTimer;
- (void)_finishLongPollingConnetion;
- (void)_beginLongPollingConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_addLongPollingEvent:(id)arg1;
- (void)_handleRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_asyncProcessRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isRequestAuthKeyMatched:(id)arg1;
- (id)URLByAddingQueryItemsToURL:(id)arg1;
- (void)asyncProcessRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)canAsyncProcessRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)matchRequestWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;
- (_Bool)canMatchRequestWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;
- (void)webProxyWillStopWebServer;
- (void)webProxyDidStartWebServer;
- (void)installPlugin:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

