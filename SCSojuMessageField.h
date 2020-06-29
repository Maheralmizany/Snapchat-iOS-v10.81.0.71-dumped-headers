//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSojuMessageField : NSObject
{
    _Bool _disableToJSON;
    NSString *_fieldName;
    NSString *_jsonFieldNameOverride;
    Class _messageClass;
    unsigned long long _fieldType;
    SEL _fieldSel;
    unsigned long long _fieldSpecifier;
    unsigned long long _jsonNamingStrategy;
    unsigned long long _fieldIndex;
    CDUnknownFunctionPointerType _stringToEnumFunc;
    CDUnknownFunctionPointerType _enumToStringFunc;
    unsigned long long _fasterCodingKey;
}

@property(nonatomic) unsigned long long fasterCodingKey; // @synthesize fasterCodingKey=_fasterCodingKey;
@property(nonatomic) _Bool disableToJSON; // @synthesize disableToJSON=_disableToJSON;
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumToStringFunc; // @synthesize enumToStringFunc=_enumToStringFunc;
@property(readonly, nonatomic) CDUnknownFunctionPointerType stringToEnumFunc; // @synthesize stringToEnumFunc=_stringToEnumFunc;
@property(readonly, nonatomic) unsigned long long fieldIndex; // @synthesize fieldIndex=_fieldIndex;
@property(readonly, nonatomic) unsigned long long jsonNamingStrategy; // @synthesize jsonNamingStrategy=_jsonNamingStrategy;
@property(readonly, nonatomic) unsigned long long fieldSpecifier; // @synthesize fieldSpecifier=_fieldSpecifier;
@property(readonly, nonatomic) SEL fieldSel; // @synthesize fieldSel=_fieldSel;
@property(readonly, nonatomic) unsigned long long fieldType; // @synthesize fieldType=_fieldType;
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=_messageClass;
@property(readonly, copy, nonatomic) NSString *jsonFieldNameOverride; // @synthesize jsonFieldNameOverride=_jsonFieldNameOverride;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldCopyWhenSet;
- (void)appendSHAData:(id)arg1;
- (id)_fieldClassTypeString;
- (Class)_fieldClass;
- (id)initWitFieldSel:(SEL)arg1 jsonFieldNameOverride:(id)arg2 messageClass:(Class)arg3 fieldType:(unsigned long long)arg4 fieldSpecifier:(unsigned long long)arg5 jsonNamingStategy:(unsigned long long)arg6 stringToEnumFunc:(CDUnknownFunctionPointerType)arg7 enumToStringFunc:(CDUnknownFunctionPointerType)arg8 fieldIndex:(unsigned long long)arg9;

@end

