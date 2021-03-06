//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCommerceFloatingTextFieldCellViewModel;

@interface SCCommerceCheckoutNewPaymentViewModel : NSObject <NSCopying>
{
    SCCommerceFloatingTextFieldCellViewModel *_cardNumberCell;
    SCCommerceFloatingTextFieldCellViewModel *_expirationCell;
    SCCommerceFloatingTextFieldCellViewModel *_cvcCell;
}

@property(readonly, copy, nonatomic) SCCommerceFloatingTextFieldCellViewModel *cvcCell; // @synthesize cvcCell=_cvcCell;
@property(readonly, copy, nonatomic) SCCommerceFloatingTextFieldCellViewModel *expirationCell; // @synthesize expirationCell=_expirationCell;
@property(readonly, copy, nonatomic) SCCommerceFloatingTextFieldCellViewModel *cardNumberCell; // @synthesize cardNumberCell=_cardNumberCell;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCardNumberCell:(id)arg1 expirationCell:(id)arg2 cvcCell:(id)arg3;

@end

