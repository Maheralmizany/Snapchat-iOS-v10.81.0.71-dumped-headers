//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCMapEffect : NSObject <NSCopying>
{
    NSArray *_variants;
}

+ (id)withTweakEffectId:(id)arg1 minZoom:(double)arg2;
+ (id)withSCMTWorldEffectSet:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *variants; // @synthesize variants=_variants;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVariants:(id)arg1;
- (id)firstApplicableVariantForZoomLevel:(double)arg1 isClusterSelected:(_Bool)arg2;

@end

