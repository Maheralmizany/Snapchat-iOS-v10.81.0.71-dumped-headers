//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceSOJUInfoFetching-Protocol.h"
#import "SCCommerceStoreInfoFetching-Protocol.h"

@class SCQueuePerformer;
@protocol SCCommerceNetworkRequestHandling;

@interface SCCommerceStoreInfoFetcher : NSObject <SCCommerceStoreInfoFetching, SCCommerceSOJUInfoFetching>
{
    id <SCCommerceNetworkRequestHandling> _requestHandler;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)getProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 query:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)getProductSet:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 query:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getStoreData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getStoreSOJU:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getProductSOJU:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getProductInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithRequestHandler:(id)arg1;

@end

