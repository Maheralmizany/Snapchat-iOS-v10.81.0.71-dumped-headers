//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensExplorerItemModel : NSObject <NSCopying, NSCoding>
{
    NSString *_reuseIdentifier;
    struct CGSize _cellSize;
}

@property(readonly, nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReuseIdentifier:(id)arg1 cellSize:(struct CGSize)arg2;
- (id)initWithCoder:(id)arg1;

@end

