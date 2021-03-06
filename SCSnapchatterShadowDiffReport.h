//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSnapchatterShadowDiffReport : NSObject <NSCopying>
{
    NSString *_placement;
    unsigned long long _diffCount;
    NSArray *_indexDiffs;
}

@property(readonly, copy, nonatomic) NSArray *indexDiffs; // @synthesize indexDiffs=_indexDiffs;
@property(readonly, nonatomic) unsigned long long diffCount; // @synthesize diffCount=_diffCount;
@property(readonly, copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacement:(id)arg1 diffCount:(unsigned long long)arg2 indexDiffs:(id)arg3;

@end

