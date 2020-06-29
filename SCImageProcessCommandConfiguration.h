//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCImageProcessCommandConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _isColorFilter;
    NSString *_filterName;
}

@property(readonly, nonatomic) _Bool isColorFilter; // @synthesize isColorFilter=_isColorFilter;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilterName:(id)arg1 isColorFilter:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

@end

