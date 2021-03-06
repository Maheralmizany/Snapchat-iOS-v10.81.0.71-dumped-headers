//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersIndexScript : SCDocObject <NSCopying>
{
    unsigned int _type;
    unsigned int _linguisticType;
    NSArray *_indexes;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) unsigned int linguisticType; // @synthesize linguisticType=_linguisticType;
@property(readonly, copy, nonatomic) NSArray *indexes; // @synthesize indexes=_indexes;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned int)arg1 indexes:(id)arg2 linguisticType:(unsigned int)arg3;

@end

