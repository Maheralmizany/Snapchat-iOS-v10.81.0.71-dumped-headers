//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCLensExplorerSectionConfiguration : NSObject <NSCopying, NSCoding>
{
    double _minimumInteritemSpacing;
    struct UIEdgeInsets _sectionInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimumInteritemSpacing:(double)arg1 sectionInsets:(struct UIEdgeInsets)arg2;
- (id)initWithCoder:(id)arg1;

@end

