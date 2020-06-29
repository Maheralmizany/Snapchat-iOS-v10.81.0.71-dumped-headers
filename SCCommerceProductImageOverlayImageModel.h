//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceProductImageOverlayImageModel : NSObject <NSCopying, NSCoding>
{
    NSString *_externalImageId;
    double _rotationAngle;
    struct CGSize _productImageSize;
    struct CGRect _frame;
}

@property(readonly, nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct CGSize productImageSize; // @synthesize productImageSize=_productImageSize;
@property(readonly, copy, nonatomic) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExternalImageId:(id)arg1 productImageSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 rotationAngle:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

