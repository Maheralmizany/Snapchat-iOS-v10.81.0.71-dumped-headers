//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCOperaInteractionZoneItemImageViewModel : NSObject <NSCopying>
{
    NSString *_imageKey;
    UIColor *_backgroundColor;
    double _borderWidth;
}

@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageKey:(id)arg1 backgroundColor:(id)arg2 borderWidth:(double)arg3;

@end

