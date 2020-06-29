//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface SCActionMenuItemConfig : NSObject
{
    _Bool _enabled;
    NSString *_title;
    NSAttributedString *_attributedText;
    UIImage *_icon;
    CDUnknownBlockType _tapHandler;
    CDUnknownBlockType _disabledTapHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType disabledTapHandler; // @synthesize disabledTapHandler=_disabledTapHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 enabled:(_Bool)arg3 tapHandler:(CDUnknownBlockType)arg4 disabledTapHandler:(CDUnknownBlockType)arg5;

@end
