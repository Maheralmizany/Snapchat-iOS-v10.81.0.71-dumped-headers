//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBloopsPickerSuperCategory, SCBloopsSticker, SCBloopsStickerPickerAccessory, UIImage, UIViewController;

@protocol SCBloopsStickerPickerAccessoryDelegate <NSObject>
- (void)bloopsStickerPickerAccessoryDidSelectSticker:(SCBloopsSticker *)arg1 index:(unsigned long long)arg2 thumbnailImage:(UIImage *)arg3 center:(struct CGPoint)arg4;
- (void)bloopsStickerPickerAccessoryDidEndShowOnboarding:(SCBloopsStickerPickerAccessory *)arg1 targetChanged:(_Bool)arg2;
- (void)bloopsStickerPickerAccessoryWillStartShowOnboarding:(SCBloopsStickerPickerAccessory *)arg1;
- (UIViewController *)bloopsSrickerAccessoryOnboardinSourceViewController:(SCBloopsStickerPickerAccessory *)arg1;
- (void)bloopsStickerPickerAccessoryDidUpdateHomeTabOnboardingDataSource:(SCBloopsStickerPickerAccessory *)arg1;
- (void)bloopsStickerPickerAccessory:(SCBloopsStickerPickerAccessory *)arg1 categoryDidChange:(SCBloopsPickerSuperCategory *)arg2;
@end

