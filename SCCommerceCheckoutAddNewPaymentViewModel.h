//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSString, SCCommerceCheckoutFlowHeaderViewModel, SCCommerceCheckoutFooterViewModel, SCCommerceCheckoutNewAddressViewModel, SCCommerceCheckoutNewPaymentViewModel, SCCommerceCheckoutPopUpViewModel;

@interface SCCommerceCheckoutAddNewPaymentViewModel : NSObject <NSCopying>
{
    SCCommerceCheckoutFlowHeaderViewModel *_header;
    SCCommerceCheckoutNewPaymentViewModel *_paymentViewModel;
    NSString *_cardType;
    NSAttributedString *_billingAddressSectionHeader;
    NSArray *_billingAddresses;
    SCCommerceCheckoutNewAddressViewModel *_addressViewModel;
    SCCommerceCheckoutFooterViewModel *_footerViewModel;
    SCCommerceCheckoutPopUpViewModel *_errorViewModel;
}

@property(readonly, copy, nonatomic) SCCommerceCheckoutPopUpViewModel *errorViewModel; // @synthesize errorViewModel=_errorViewModel;
@property(readonly, copy, nonatomic) SCCommerceCheckoutFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(readonly, copy, nonatomic) SCCommerceCheckoutNewAddressViewModel *addressViewModel; // @synthesize addressViewModel=_addressViewModel;
@property(readonly, copy, nonatomic) NSArray *billingAddresses; // @synthesize billingAddresses=_billingAddresses;
@property(readonly, copy, nonatomic) NSAttributedString *billingAddressSectionHeader; // @synthesize billingAddressSectionHeader=_billingAddressSectionHeader;
@property(readonly, copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(readonly, copy, nonatomic) SCCommerceCheckoutNewPaymentViewModel *paymentViewModel; // @synthesize paymentViewModel=_paymentViewModel;
@property(readonly, copy, nonatomic) SCCommerceCheckoutFlowHeaderViewModel *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeader:(id)arg1 paymentViewModel:(id)arg2 cardType:(id)arg3 billingAddressSectionHeader:(id)arg4 billingAddresses:(id)arg5 addressViewModel:(id)arg6 footerViewModel:(id)arg7 errorViewModel:(id)arg8;

@end

