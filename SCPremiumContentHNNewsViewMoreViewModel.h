//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, UIColor;

@interface SCPremiumContentHNNewsViewMoreViewModel : NSObject <NSCopying>
{
    NSAttributedString *_viewMoreAttributedString;
    NSAttributedString *_statusViewAttributedString;
    unsigned long long _contentInsetPadding;
    UIColor *_contentBackgroundColor;
    UIColor *_cellBackgroundColor;
    SCActionModel *_tapActionModel;
    NSString *_accessibilityLabel;
}

@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(readonly, nonatomic) unsigned long long contentInsetPadding; // @synthesize contentInsetPadding=_contentInsetPadding;
@property(readonly, copy, nonatomic) NSAttributedString *statusViewAttributedString; // @synthesize statusViewAttributedString=_statusViewAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *viewMoreAttributedString; // @synthesize viewMoreAttributedString=_viewMoreAttributedString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewMoreAttributedString:(id)arg1 statusViewAttributedString:(id)arg2 contentInsetPadding:(unsigned long long)arg3 contentBackgroundColor:(id)arg4 cellBackgroundColor:(id)arg5 tapActionModel:(id)arg6 accessibilityLabel:(id)arg7;

@end

