//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, UIImage;

@interface SCQuickStickerImage : NSObject <NSCopying>
{
    unsigned long long _subtype;
    UIImage *_defaultImage_image;
    NSString *_customizedImage_imageId;
    UIImage *_customizedImage_image;
    NSData *_customizedImage_imageData;
    double _customizedImage_centerX;
    double _customizedImage_centerY;
    double _customizedImage_rotation;
}

+ (id)defaultImageWithImage:(id)arg1;
+ (id)customizedImageWithImageId:(id)arg1 image:(id)arg2 imageData:(id)arg3 centerX:(double)arg4 centerY:(double)arg5 rotation:(double)arg6;
- (void).cxx_destruct;
- (void)matchDefaultImage:(CDUnknownBlockType)arg1 customizedImage:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

