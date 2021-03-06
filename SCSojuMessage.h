//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSojuMessage-Protocol.h"

@class NSString, SCSojuMessageFieldsRegistry;

@interface SCSojuMessage : NSObject <SCSojuMessage>
{
    SCSojuMessageFieldsRegistry *_fieldsRegistry;
    void **_fields;
}

+ (void)loadSelectorsIfNeeded;
+ (id)messageFromDictionary:(id)arg1;
+ (_Bool)canInitFromProto;
+ (void)registerMessageFields:(id)arg1;
+ (id)fieldsRegistry;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (void)mergePropertiesFromObject:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)preferFasterCoding;
@property(readonly, copy) NSString *description;
- (id)toJson;
- (id)toDictionary;
- (void)_visitFields:(CDUnknownBlockType)arg1 willSerializeToJSON:(_Bool)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithFieldValues:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

