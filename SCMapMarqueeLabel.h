//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel, UIScrollView;

@interface SCMapMarqueeLabel : UIView
{
    UIScrollView *_scrollView;
    UILabel *_leadingLabel;
    UILabel *_trailingLabel;
    _Bool _enableAutoScroll;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool enableAutoScroll; // @synthesize enableAutoScroll=_enableAutoScroll;
- (void).cxx_destruct;
- (void)_applyMaskWithLeftFade:(_Bool)arg1 rightFade:(_Bool)arg2;
- (void)scrollIfNeeded;
- (void)refresh;
- (_Bool)_shouldScrollLabel;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

