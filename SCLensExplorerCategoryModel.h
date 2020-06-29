//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCLensExplorerCategoryModel : NSObject <NSCopying, NSCoding>
{
    unsigned long long _category;
    NSArray *_sections;
    NSString *_name;
    unsigned long long _sortingOrder;
}

@property(readonly, nonatomic) unsigned long long sortingOrder; // @synthesize sortingOrder=_sortingOrder;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(unsigned long long)arg1 sections:(id)arg2 name:(id)arg3 sortingOrder:(unsigned long long)arg4;

@end
