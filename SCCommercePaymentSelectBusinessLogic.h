//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSArray, NSError, SCCommerceCheckoutDataModel, SCQueuePerformer;
@protocol SCCommerceCheckoutCoordinating, SCCommerceEventLogger, SCCommercePaymentInfoFetching, SCCommercePaymentSelectDelegate;

@interface SCCommercePaymentSelectBusinessLogic : SCBusinessLogic
{
    SCCommerceCheckoutDataModel *_checkout;
    SCQueuePerformer *_queuePerformer;
    NSArray *_allPaymentMethods;
    NSError *_error;
    _Bool _isLoading;
    id <SCCommercePaymentInfoFetching> _paymentInfoFetcher;
    id <SCCommercePaymentSelectDelegate> _delegate;
    id <SCCommerceCheckoutCoordinating> _checkoutCoordinator;
    id <SCCommerceEventLogger> _eventLogger;
}

- (void).cxx_destruct;
- (void)_updateCheckoutObject:(id)arg1 error:(id)arg2;
- (void)_logButtonTap:(long long)arg1;
- (void)handleAction:(id)arg1;
- (void)_downloadImages;
- (id)viewModel;
- (void)fetchPaymentMethods:(id)arg1;
- (id)initWithCheckout:(id)arg1 delegate:(id)arg2 paymentFetcher:(id)arg3 checkoutCoordinator:(id)arg4 eventLogger:(id)arg5;

@end

