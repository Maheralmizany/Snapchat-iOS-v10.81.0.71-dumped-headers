//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCTXCssStyle, UIColor;

@interface SCContextV3StyledView : UIView
{
    double _cornerRadius;
    _Bool _explicitlyHidden;
    SCCTXCssStyle *_style;
    long long _styleOptions;
    double _defaultAlpha;
    double _defaultCornerRadius;
    UIColor *_defaultBackgroundColor;
    UIColor *_defaultForegroundColor;
}

@property(retain, nonatomic) UIColor *defaultForegroundColor; // @synthesize defaultForegroundColor=_defaultForegroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(nonatomic) double defaultCornerRadius; // @synthesize defaultCornerRadius=_defaultCornerRadius;
@property(nonatomic) double defaultAlpha; // @synthesize defaultAlpha=_defaultAlpha;
@property(nonatomic) long long styleOptions; // @synthesize styleOptions=_styleOptions;
@property(copy, nonatomic) SCCTXCssStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)viewForShadow;
- (void)applyForegroundColor:(id)arg1;
- (void)applyBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyStyle;
- (void)setImplicitlyHidden:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithOptions:(long long)arg1;

@end

