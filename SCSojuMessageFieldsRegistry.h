//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCSojuMessageFieldsRegistry : NSObject
{
    NSArray *_fields;
    NSArray *_jsonFieldNames;
    unsigned long long _fasterCodingVersion;
    unsigned long long *_fasterCodingKeys;
}

- (void).cxx_destruct;
- (void)setFasterCodingKey:(unsigned long long)arg1;
- (void)setDisableToJSON;
- (void)appendFieldWithSEL:(SEL)arg1 jsonFieldNameOverride:(id)arg2 jsonNamingStrategy:(unsigned long long)arg3 type:(unsigned long long)arg4 messageClass:(Class)arg5 stringToEnumFunc:(CDUnknownFunctionPointerType)arg6 enumToStringFunc:(CDUnknownFunctionPointerType)arg7 fieldSpecifier:(unsigned long long)arg8;
- (id)jsonFieldNames;
- (unsigned long long *)fasterCodingKeys;
- (unsigned long long)fasterCodingVersion;
- (id)fields;
- (void)freeze;
- (void)dealloc;
- (id)init;

@end
