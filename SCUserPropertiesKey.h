//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCUserPropertiesKey : NSObject <NSCopying>
{
    unsigned long long _itemId;
    NSString *_kind;
}

@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemId:(unsigned long long)arg1 kind:(id)arg2;

@end

