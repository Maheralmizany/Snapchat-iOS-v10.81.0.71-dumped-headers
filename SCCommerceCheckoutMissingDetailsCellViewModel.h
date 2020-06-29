//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, UIImage;

@interface SCCommerceCheckoutMissingDetailsCellViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    UIImage *_errorImage;
    UIImage *_trailingImage;
    id _action;
}

@property(readonly, copy, nonatomic) id action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) UIImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(readonly, copy, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 errorImage:(id)arg2 trailingImage:(id)arg3 action:(id)arg4;

@end
