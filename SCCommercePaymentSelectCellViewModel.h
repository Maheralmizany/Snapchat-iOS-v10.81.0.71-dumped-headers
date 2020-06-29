//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString;

@interface SCCommercePaymentSelectCellViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    NSAttributedString *_name;
    NSString *_brandName;
    NSAttributedString *_lastFourDigits;
    NSAttributedString *_expiration;
}

@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSAttributedString *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSAttributedString *lastFourDigits; // @synthesize lastFourDigits=_lastFourDigits;
@property(readonly, copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(readonly, copy, nonatomic) NSAttributedString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 brandName:(id)arg2 lastFourDigits:(id)arg3 expiration:(id)arg4 isSelected:(_Bool)arg5;

@end
