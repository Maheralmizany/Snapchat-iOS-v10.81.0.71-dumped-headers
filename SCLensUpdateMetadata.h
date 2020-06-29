//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCLensUpdateMetadata : NSObject <NSCopying>
{
    NSNumber *_idValue;
    NSNumber *_clientCacheTtlMinutes;
}

+ (id)_updateMetadataFromResponse:(id)arg1 overrideTtlMinutes:(id)arg2;
+ (id)updateMetadataFromResponses:(id)arg1 overrideClientCacheTtlMinutes:(id)arg2;
+ (id)updateMetadataFromResponses:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes; // @synthesize clientCacheTtlMinutes=_clientCacheTtlMinutes;
@property(readonly, copy, nonatomic) NSNumber *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 clientCacheTtlMinutes:(id)arg2;

@end

