//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBusinessLogic.h"

#import "SCEventListener-Protocol.h"

@class NSError, NSMutableDictionary, NSString, SCCommerceCheckoutDataModel, SCCommerceStoreDataModel, SCQueuePerformer, SOJUCommerceOrder;
@protocol SCCommerceCartCoordinating, SCCommerceCheckoutCoordinating, SCCommerceCheckoutSummaryDelegate, SCCommerceEventLogger;

@interface SCCommerceCheckoutSummaryBusinessLogic : SCBusinessLogic <SCEventListener>
{
    SCCommerceCheckoutDataModel *_checkout;
    SCCommerceCheckoutDataModel *_lastCheckout;
    SCQueuePerformer *_queuePerformer;
    id <SCCommerceCheckoutCoordinating> _checkoutCoordinator;
    id <SCCommerceCartCoordinating> _cartCoordinator;
    id <SCCommerceCheckoutSummaryDelegate> _delegate;
    id <SCCommerceEventLogger> _eventLogger;
    SCCommerceStoreDataModel *_store;
    _Bool _showLineItems;
    _Bool _showLoading;
    _Bool _isCheckingOut;
    _Bool _checkoutNeedsUpdate;
    _Bool _updateLineItemsOnCheckoutAttempt;
    _Bool _useShippingOptionsOptimization;
    _Bool _checkoutSucceeded;
    _Bool _lensUnlocked;
    NSString *_discountCode;
    NSMutableDictionary *_storedShippingOptions;
    unsigned long long _selectedShippingOption;
    NSError *_error;
    SOJUCommerceOrder *_order;
}

- (void).cxx_destruct;
- (void)_handleLineItemArtifactFetchingFailure:(id)arg1;
- (void)_handleLineItemArtifactFetchingSuccess:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_didFinalizeCheckout:(id)arg1;
- (void)_didFailToFinalizeCheckout:(id)arg1;
- (void)_finalizeCheckout;
- (void)_userDidAttemptCheckoutFinalization;
- (void)_didUpdateCheckoutPreFinalization:(id)arg1 error:(id)arg2;
- (void)_updateFinalCheckoutWithNewDataModel:(id)arg1;
- (void)_updateCheckoutPreFinalization;
- (_Bool)_shouldUpdateCheckoutPreFinalization;
- (void)_updateRemoteCheckoutWithNewDataModel:(id)arg1 action:(id)arg2;
- (void)_didUpdateCheckout:(id)arg1 error:(id)arg2 action:(id)arg3;
- (void)_logButtonTap:(long long)arg1;
- (void)handleAction:(id)arg1;
- (void)_updateCartPricesWithNewDelivery:(unsigned long long)arg1;
- (void)_updateCheckoutWithSelectedShipping:(id)arg1;
- (void)_updateStoredShippingOptions:(id)arg1;
- (id)viewModel;
- (void)updateWithCheckout:(id)arg1;
- (void)_downloadImages;
- (id)initWithStore:(id)arg1 checkout:(id)arg2 checkoutCoordinator:(id)arg3 cartCoordinator:(id)arg4 delegate:(id)arg5 eventLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

