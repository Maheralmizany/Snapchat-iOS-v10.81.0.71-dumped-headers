//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsBillingAddress;

@protocol SOJUPaymentsCreditCard <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *isDeviceAuthorized;
@property(readonly, nonatomic) SOJUPaymentsBillingAddress *billingAddress;
@property(readonly, nonatomic) NSString *expirationMonth;
@property(readonly, nonatomic) NSString *expirationYear;
@property(readonly, nonatomic) NSString *last4;
@property(readonly, nonatomic) NSString *cardType;
@property(readonly, nonatomic) NSString *adAccountId;
@property(readonly, nonatomic) NSString *idValue;
@end

