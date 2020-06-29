//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSString;

@interface SCCommerceCheckoutPopUpViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_subText;
    NSString *_buttonText;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subText:(id)arg2 buttonText:(id)arg3 error:(id)arg4;

@end
