//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUCommerceCurrencyAmount, SOJUCommerceOrderProduct, SOJUCommerceOrderProductsCommerceOrderProduct;

@protocol SOJUCommerceOrderBillingItem <SCSojuMessage>
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *unitPrice;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *strikethroughLinePrice;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *taxPrice;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *price;
@property(readonly, nonatomic) SOJUCommerceCurrencyAmount *costDeprecated;
@property(readonly, nonatomic) NSNumber *quantity;
@property(readonly, nonatomic) SOJUCommerceOrderProductsCommerceOrderProduct *commerceOrderProduct;
@property(readonly, nonatomic) SOJUCommerceOrderProduct *product;
@property(readonly, nonatomic) NSString *billingItemId;
@end

