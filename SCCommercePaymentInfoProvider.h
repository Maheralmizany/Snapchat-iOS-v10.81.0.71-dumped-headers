//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommercePaymentInfoFetching-Protocol.h"
#import "SCCommercePaymentInfoMutating-Protocol.h"

@class NSArray, NSDate, NSString, SCCommercePaymentMethodTokenizer, SCQueuePerformer;
@protocol SCCommerceNetworkRequestHandling;

@interface SCCommercePaymentInfoProvider : NSObject <SCCommercePaymentInfoFetching, SCCommercePaymentInfoMutating>
{
    id <SCCommerceNetworkRequestHandling> _requestHandler;
    SCCommercePaymentMethodTokenizer *_tokenizer;
    SCQueuePerformer *_queuePerformer;
    NSArray *_paymentMethods;
    NSDate *_lastFetch;
}

@property(retain, nonatomic) NSDate *lastFetch; // @synthesize lastFetch=_lastFetch;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
- (void).cxx_destruct;
- (void)_replacePaymentMethodWithId:(id)arg1 withPaymentMethod:(id)arg2;
- (void)_postPaymentMethod:(id)arg1 oldPaymentId:(id)arg2 context:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)deletePaymentMethod:(id)arg1 context:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updatePaymentMethod:(id)arg1 paymentIdentifier:(id)arg2 context:(unsigned long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addPaymentMethod:(id)arg1 context:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchPaymentMethodsCompletionQueue:(id)arg1 context:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_shouldRefetch;
- (id)initWithRequestHandler:(id)arg1 tokenizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
