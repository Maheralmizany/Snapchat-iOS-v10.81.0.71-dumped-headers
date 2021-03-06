//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIFont;

@protocol SCPrePromptPermissionCustomDialogViewLayoutProviding <NSObject>
- (UIFont *)denyButtonFont;
- (UIColor *)denyButtonColorForState:(unsigned long long)arg1;
- (UIFont *)allowButtonFont;
- (UIColor *)allowButtonColorForState:(unsigned long long)arg1;
- (long long)ringColorHexCode;
- (long long)textColorHexCode;
- (long long)boxBackgroundColorHexCode;
- (long long)boxBorderColorHexCode;
- (double)ringEndOpacity;
- (double)ringStartOpacity;
- (double)ringStrokeWidth;
- (double)ringAnimationDuration;
- (double)ringScaleFactor;
- (double)ringWidth;
- (double)buttonHeight;
- (double)marginSize;
- (double)buttonFontSize;
- (double)descriptionFontSize;
- (double)titleFontSize;
- (double)boxCornerRadius;
- (double)boxWidth;
- (_Bool)isDontAllowButtonVisible;
@end

