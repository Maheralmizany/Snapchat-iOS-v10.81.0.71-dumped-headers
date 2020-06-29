//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;
@protocol SCSendPreviewMediaView;

@protocol SCSendPreviewViewModel <NSObject>
- (long long)shareType;
- (UIView<SCSendPreviewMediaView> *)mediaView;
- (long long)viewStyle;

@optional
- (NSString *)chatMessage;
- (void)setPreviewBlobImage:(UIImage *)arg1;
- (struct UIEdgeInsets)mediaViewInsets;
- (NSString *)subtitle;
- (NSString *)title;
- (double)mediaViewAspectRatio;
@end

