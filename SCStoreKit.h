//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString;

@interface SCStoreKit : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableDictionary *_availableProducts;
    NSMapTable *_productsRequestIds;
}

+ (_Bool)canMakePayments;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_postNotificationOnMainThread:(id)arg1 userInfo:(id)arg2;
- (void)failedTransaction:(id)arg1 inQueue:(id)arg2;
- (void)finishTransactionForProductIdentifier:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (id)transactions;
- (id)productWithID:(id)arg1;
- (_Bool)paymentQueueContainsPaymentId:(id)arg1;
- (void)refreshAppStoreReceipt;
- (_Bool)initiatePaymentRequestForProductWithIdentifier:(id)arg1 andApplicationUsername:(id)arg2;
- (_Bool)initiatePaymentRequestForProductWithIdentifier:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)restorePurchases;
- (id)availableProducts;
- (void)setAvailableProducts:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)startProductRequestWithProductIdentifiers:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

