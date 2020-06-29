//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceAddNewPaymentDelegate-Protocol.h"
#import "SCCommerceCheckoutSummaryDelegate-Protocol.h"
#import "SCCommerceEditContactDetailsDelegate-Protocol.h"
#import "SCCommercePaymentSelectDelegate-Protocol.h"
#import "SCCommerceShippingSelectDelegate-Protocol.h"

@class SCCommerceStoreDataModel, SCQueuePerformer;
@protocol SCCommerceAccountInfoFetching, SCCommerceAccountInfoMutating, SCCommerceCartCoordinating, SCCommerceCheckoutCoordinating, SCCommerceCheckoutDelegate, SCCommerceCheckoutRouting, SCCommercePaymentInfoFetching, SCCommercePaymentInfoMutating;

@interface SCCommerceCheckoutWorkflow : NSObject <SCCommerceCheckoutSummaryDelegate, SCCommercePaymentSelectDelegate, SCCommerceAddNewPaymentDelegate, SCCommerceEditContactDetailsDelegate, SCCommerceShippingSelectDelegate>
{
    SCCommerceStoreDataModel *_store;
    id <SCCommerceCheckoutDelegate> _delegate;
    id <SCCommerceCheckoutRouting> _routing;
    id <SCCommerceAccountInfoFetching> _accountInfoFetcher;
    id <SCCommerceAccountInfoMutating> _accountInfoMutator;
    id <SCCommercePaymentInfoFetching> _paymentInfoFetcher;
    id <SCCommercePaymentInfoMutating> _paymentInfoMutator;
    id <SCCommerceCheckoutCoordinating> _checkoutCoordinator;
    id <SCCommerceCartCoordinating> _cartCoordinator;
    SCQueuePerformer *_queuePerformer;
    _Bool _checkoutDidSucceed;
    _Bool _onboarding;
}

- (void).cxx_destruct;
- (void)editShippingSelectNavigateNext:(id)arg1;
- (void)editShippingSelectNavigateBack:(id)arg1 onboarding:(_Bool)arg2;
- (void)addNewPaymentNavigateSummary:(id)arg1 onboarding:(_Bool)arg2;
- (void)addNewPaymentNavigateBack:(id)arg1 onboarding:(_Bool)arg2;
- (void)editAddNewPaymentMethod:(id)arg1;
- (void)editPaymentSelectNavigateBack:(id)arg1;
- (void)editContactDetailsDismiss:(id)arg1;
- (void)editContactDetailsNavigateNext:(id)arg1;
- (void)editContactDetailsNavigateBack:(id)arg1;
- (void)checkoutSummaryCheckoutDidComplete:(id)arg1;
- (void)checkoutSummaryCheckoutDidFinalizeCheckout:(id)arg1;
- (void)checkoutSummaryEditContactDetails:(id)arg1;
- (void)checkoutSummarySelectShippingMethod:(id)arg1;
- (void)checkoutSummaryAddPaymentMethod:(id)arg1;
- (void)checkoutSummarySelectPaymentMethod:(id)arg1;
- (void)checkoutSummaryNavigateBack:(id)arg1;
- (void)_presentAddNewPaymentScreen:(id)arg1 style:(id)arg2 onboarding:(_Bool)arg3;
- (void)_presentSelectPaymentMethodScreen:(id)arg1 style:(id)arg2;
- (void)_presentShippingScreen:(id)arg1 style:(id)arg2 onboarding:(_Bool)arg3;
- (void)_presentEditDetailsScreen:(id)arg1 style:(id)arg2 onboarding:(_Bool)arg3;
- (void)_presentSummaryScreen:(id)arg1 style:(id)arg2;
- (void)_presentInitialSummaryScreen:(id)arg1 style:(id)arg2;
- (void)_displayInitialPageForDataModel:(id)arg1;
- (void)_didCreateCheckout:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3;
- (void)_createCheckoutWithDetails:(id)arg1 shippingAddress:(id)arg2 paymentMethod:(id)arg3 isFallback:(_Bool)arg4;
- (unsigned long long)checkoutShouldUseOnboardingFlow:(id)arg1;
- (void)_createInitialCheckout:(_Bool)arg1;
- (void)_checkoutDidFinalize;
- (void)end;
- (void)begin;
- (id)initWithStore:(id)arg1 delegate:(id)arg2 router:(id)arg3 accountInfoFetcher:(id)arg4 accountInfoMutator:(id)arg5 paymentInfoFetcher:(id)arg6 paymentInfoMutator:(id)arg7 checkoutCoordinator:(id)arg8 cartCoordinator:(id)arg9;

@end

