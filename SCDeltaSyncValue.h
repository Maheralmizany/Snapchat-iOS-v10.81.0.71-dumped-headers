//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, SCDeltaSyncKey;

@interface SCDeltaSyncValue : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_string_value;
    _Bool _boolValue_value;
    unsigned long long _longValue_value;
    double _doubleValue_value;
    unsigned long long _epochTimeMs_value;
    NSData *_data_value;
    NSDictionary *_map_value;
    NSArray *_list_value;
    SCDeltaSyncKey *_itemKey_groupKey;
    NSArray *_itemKey_pathComponents;
}

+ (id)stringWithValue:(id)arg1;
+ (id)none;
+ (id)mapWithValue:(id)arg1;
+ (id)longValueWithValue:(unsigned long long)arg1;
+ (id)listWithValue:(id)arg1;
+ (id)itemKeyWithGroupKey:(id)arg1 pathComponents:(id)arg2;
+ (id)epochTimeMsWithValue:(unsigned long long)arg1;
+ (id)doubleValueWithValue:(double)arg1;
+ (id)dataWithValue:(id)arg1;
+ (id)boolValueWithValue:(_Bool)arg1;
- (void).cxx_destruct;
- (void)matchString:(CDUnknownBlockType)arg1 boolValue:(CDUnknownBlockType)arg2 longValue:(CDUnknownBlockType)arg3 doubleValue:(CDUnknownBlockType)arg4 epochTimeMs:(CDUnknownBlockType)arg5 data:(CDUnknownBlockType)arg6 map:(CDUnknownBlockType)arg7 list:(CDUnknownBlockType)arg8 itemKey:(CDUnknownBlockType)arg9 none:(CDUnknownBlockType)arg10;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

