//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceCheckoutShippingOption-Protocol.h"

@class NSString, SOJUCommerceCurrencyAmount;

@interface SOJUCommerceCheckoutShippingOption : SCSojuMessage <SOJUCommerceCheckoutShippingOption>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 price:(id)arg2 title:(id)arg3 checkout:(id)arg4 totalTax:(id)arg5 totalPrice:(id)arg6 subtotalPrice:(id)arg7;

// Remaining properties
@property(readonly, nonatomic) NSString *checkout; // @dynamic checkout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *price; // @dynamic price;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *subtotalPrice; // @dynamic subtotalPrice;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *totalPrice; // @dynamic totalPrice;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *totalTax; // @dynamic totalTax;

@end
