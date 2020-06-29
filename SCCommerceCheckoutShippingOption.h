//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCommerceCurrency;

@interface SCCommerceCheckoutShippingOption : NSObject <NSCopying>
{
    NSString *_identifier;
    SCCommerceCurrency *_price;
    NSString *_title;
    SCCommerceCurrency *_totalTax;
    SCCommerceCurrency *_subtotalPrice;
    SCCommerceCurrency *_totalPrice;
}

@property(readonly, copy, nonatomic) SCCommerceCurrency *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(readonly, copy, nonatomic) SCCommerceCurrency *subtotalPrice; // @synthesize subtotalPrice=_subtotalPrice;
@property(readonly, copy, nonatomic) SCCommerceCurrency *totalTax; // @synthesize totalTax=_totalTax;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) SCCommerceCurrency *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 price:(id)arg2 title:(id)arg3 totalTax:(id)arg4 subtotalPrice:(id)arg5 totalPrice:(id)arg6;

@end
