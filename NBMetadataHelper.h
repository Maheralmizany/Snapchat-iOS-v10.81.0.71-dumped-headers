//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary;

@interface NBMetadataHelper : NSObject
{
    NSDictionary *_countryToIndex;
    NSCache *_metadataCache;
}

+ (id)jsonObjectFromZippedDataWithBytes:(char *)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3;
+ (_Bool)hasValue:(id)arg1;
+ (id)countryCodeFromRegionCode:(id)arg1;
+ (id)regionCodeFromCountryCode:(id)arg1;
+ (id)CN2CCodeMap;
+ (id)CCode2CNMap;
+ (id)countryCodeToRegionCodeMap;
@property(retain, nonatomic) NSCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(readonly, nonatomic) NSDictionary *countryToIndex; // @synthesize countryToIndex=_countryToIndex;
- (void).cxx_destruct;
- (id)arrayFromZippedDataAtUncompressedOffset:(int)arg1 usize:(int)arg2 regionCode:(id)arg3;
- (id)getMetadataForRegionCode:(id)arg1;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;
- (id)getMetadataForRegion:(id)arg1;
- (id)getAllMetadata;
- (void)lowMemoryWarning:(id)arg1;
- (id)init;

@end

