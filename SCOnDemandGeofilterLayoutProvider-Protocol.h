//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIFont, UIImage;

@protocol SCOnDemandGeofilterLayoutProvider <NSObject>
- (NSString *)productType;
- (NSString *)mockBackgroundImageUrl;
- (UIImage *)newUserViewBackButtonHighlightedImage;
- (UIImage *)newUserViewBackButtonImage;
- (UIColor *)newUserViewIntroTextLabelDescriptionColor;
- (UIFont *)newUserViewTextLabelTitleFont;
- (NSString *)newUserViewIntroTextLabelTitleColor;
- (NSString *)newUserViewIntroTextTitle;
- (NSString *)newUserViewIntroTextDescription;
- (NSString *)newUserViewContinueButtonTitle;
- (double)newUserViewTextLabelBodyFontSize;
- (double)newUserViewTextLabelTitleFontSize;
- (double)newUserViewTextLabelBottomPadding;
- (double)newUserViewContinueButtonBottomPadding;
- (double)newUserViewContainerBottomPadding;
@end

