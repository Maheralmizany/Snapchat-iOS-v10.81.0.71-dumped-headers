//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCCommerceStoreDataModel;

@interface SCCommerceProductSet : NSObject <NSCopying>
{
    NSString *_productSetId;
    SCCommerceStoreDataModel *_store;
    NSArray *_products;
}

@property(readonly, copy, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, copy, nonatomic) SCCommerceStoreDataModel *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *productSetId; // @synthesize productSetId=_productSetId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductSetId:(id)arg1 store:(id)arg2 products:(id)arg3;

@end
