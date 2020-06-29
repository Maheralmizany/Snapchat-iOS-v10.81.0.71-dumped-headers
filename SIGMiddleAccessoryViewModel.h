//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SIGBasicInfoViewModel;

@interface SIGMiddleAccessoryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SIGBasicInfoViewModel *_basic_basicInfoViewModel;
    _Bool _basic_displayStarBadge;
    NSString *_attributed_titleText;
    NSAttributedString *_attributed_attributedDetailText;
}

+ (id)basicWithBasicInfoViewModel:(id)arg1 displayStarBadge:(_Bool)arg2;
+ (id)attributedWithTitleText:(id)arg1 attributedDetailText:(id)arg2;
- (void).cxx_destruct;
- (void)matchBasic:(CDUnknownBlockType)arg1 attributed:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
