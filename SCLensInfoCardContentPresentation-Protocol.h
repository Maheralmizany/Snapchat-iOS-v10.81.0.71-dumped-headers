//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCLensInfoCardAction, SCLensInfoCardPresentationInfo, UIImage;

@protocol SCLensInfoCardContentPresentation <NSObject>
- (void)presentLensIconImage:(UIImage *)arg1;
- (void)setLensIconLoaderShown:(_Bool)arg1;
- (void)updateAction:(SCLensInfoCardAction *)arg1 atIndex:(unsigned long long)arg2;
- (void)presentInfo:(SCLensInfoCardPresentationInfo *)arg1 withActions:(NSArray *)arg2;
- (void)presentLoader;
- (void)presentErrorWithText:(NSString *)arg1;
@end
