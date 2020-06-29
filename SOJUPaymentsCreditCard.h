//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUPaymentsCreditCard-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsBillingAddress;

@interface SOJUPaymentsCreditCard : SCSojuMessage <SOJUPaymentsCreditCard>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 adAccountId:(id)arg2 cardType:(id)arg3 last4:(id)arg4 expirationYear:(id)arg5 expirationMonth:(id)arg6 billingAddress:(id)arg7 isDeviceAuthorized:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *adAccountId; // @dynamic adAccountId;
@property(readonly, nonatomic) SOJUPaymentsBillingAddress *billingAddress; // @dynamic billingAddress;
@property(readonly, nonatomic) NSString *cardType; // @dynamic cardType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *expirationMonth; // @dynamic expirationMonth;
@property(readonly, nonatomic) NSString *expirationYear; // @dynamic expirationYear;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *isDeviceAuthorized; // @dynamic isDeviceAuthorized;
@property(readonly, nonatomic) NSString *last4; // @dynamic last4;
@property(readonly) Class superclass;

@end
