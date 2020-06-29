//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRecipientListsNetworkServiceCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;

@interface SCRecipientListsNetworkService : NSObject <SCRecipientListsNetworkServiceCoordinating, SCTraceEnabled>
{
    SCLazy *_grpcService;
    SCLazy *_snapTokenProvider;
}

- (void).cxx_destruct;
- (void)processDeleteListsDataRequest:(id)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)processUpdateListsDataRequest:(id)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)processCreateListsDataRequest:(id)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)processFetchAllListsDataRequest:(id)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithSnapTokenProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
