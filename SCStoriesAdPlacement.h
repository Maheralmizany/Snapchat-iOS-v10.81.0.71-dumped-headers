//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesAdPlacement : NSObject <NSCopying>
{
    NSString *_adUnitId;
    NSArray *_targetingParameters;
}

@property(readonly, copy, nonatomic) NSArray *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(readonly, copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdUnitId:(id)arg1 targetingParameters:(id)arg2;

@end

