//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPreviewContextImageClassifierConfidenceInfo : NSObject <NSCopying>
{
    _Bool _isEligible;
    float _confidence;
    NSString *_category;
}

@property(readonly, nonatomic) _Bool isEligible; // @synthesize isEligible=_isEligible;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCategory:(id)arg1 confidence:(float)arg2 isEligible:(_Bool)arg3;

@end

