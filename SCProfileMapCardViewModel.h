//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCProfileMapCardViewModel : NSObject <NSCopying>
{
    NSArray *_cellViewModels;
}

@property(readonly, copy, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellViewModels:(id)arg1;

@end

