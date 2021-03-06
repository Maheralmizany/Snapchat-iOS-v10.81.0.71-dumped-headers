//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPrePromptPermissionCustomDialogViewLayoutProviding-Protocol.h"

@class NSString;

@interface SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider : NSObject <SCPrePromptPermissionCustomDialogViewLayoutProviding>
{
}

- (id)_defaultButtonColorForState:(unsigned long long)arg1;
- (id)denyButtonFont;
- (id)denyButtonColorForState:(unsigned long long)arg1;
- (id)allowButtonFont;
- (id)allowButtonColorForState:(unsigned long long)arg1;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

