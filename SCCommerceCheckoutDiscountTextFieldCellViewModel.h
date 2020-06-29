//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIFont;

@interface SCCommerceCheckoutDiscountTextFieldCellViewModel : NSObject <NSCopying>
{
    NSString *_placeholderText;
    NSString *_inputText;
    UIFont *_textFieldFont;
    NSString *_buttonText;
}

@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) UIFont *textFieldFont; // @synthesize textFieldFont=_textFieldFont;
@property(readonly, copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(readonly, copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlaceholderText:(id)arg1 inputText:(id)arg2 textFieldFont:(id)arg3 buttonText:(id)arg4;

@end
