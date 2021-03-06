//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSError, NSString, SCCommerceCheckoutDataModel, SCQueuePerformer;
@protocol SCCommerceAccountInfoFetching, SCCommerceAccountInfoMutating, SCCommerceCheckoutCoordinating, SCCommerceEditContactDetailsDelegate, SCCommerceEventLogger;

@interface SCCommerceEditContactDetailsBusinessLogic : SCBusinessLogic
{
    id <SCCommerceAccountInfoMutating> _accountMutator;
    id <SCCommerceAccountInfoFetching> _accountFetcher;
    SCCommerceCheckoutDataModel *_checkout;
    SCQueuePerformer *_queuePerformer;
    id <SCCommerceCheckoutCoordinating> _checkoutCoordinator;
    id <SCCommerceEditContactDetailsDelegate> _delegate;
    id <SCCommerceEventLogger> _eventLogger;
    _Bool _onboarding;
    _Bool _loading;
    _Bool _valid;
    NSError *_error;
    NSString *_checkoutPhone;
    NSString *_inputEmail;
    NSString *_inputPhone;
}

- (void).cxx_destruct;
- (void)_updatePhone:(id)arg1;
- (void)_updateEmail:(id)arg1;
- (void)_didUpdateCheckout:(id)arg1 error:(id)arg2;
- (void)_didUpdateContactDetailWithNewDetails:(id)arg1 error:(id)arg2;
- (void)_nextButtonTapped;
- (void)_logButtonTap:(long long)arg1;
- (void)handleAction:(id)arg1;
- (id)viewModel;
- (_Bool)_isValidContactDetails;
- (void)_prefillUserInfoHelper:(id)arg1;
- (void)_prefillUserInfo;
- (id)initWithAccountInfoMutator:(id)arg1 accountInfoFetcher:(id)arg2 checkout:(id)arg3 checkoutCoordinator:(id)arg4 delegate:(id)arg5 onboarding:(_Bool)arg6 eventLogger:(id)arg7;

@end

