//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MGLAdditions)
+ (id)sp_sizeValueToDict:(id)arg1;
+ (id)sp_rectValueToDict:(id)arg1;
+ (id)grpc_dictionaryFromMetadata:(struct grpc_metadata *)arg1 count:(unsigned long long)arg2;
+ (id)grpc_dictionaryFromMetadataArray:(CDStruct_6f820e53)arg1;
- (unordered_map_4ddb3e61)mgl_propertyMap;
- (id)sp_sizeValue;
- (id)sp_rectValue;
- (long long)indexOfFeedId:(id)arg1;
- (id)objectForLoggingKey:(id)arg1;
- (void)FC_encodeWithCoder:(id)arg1;
- (id)mapValues:(CDUnknownBlockType)arg1;
- (_Bool)allMatch:(CDUnknownBlockType)arg1;
- (_Bool)anyMatch:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;
- (id)json;
- (id)sc_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKeyPath:(id)arg1;
- (void)removeObjectForDeepKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyPath:(id)arg2;
- (void)setObject:(id)arg1 forDeepKey:(id)arg2;
- (id)objectForKeyPath:(id)arg1;
- (id)objectForDeepKey:(id)arg1;
- (struct grpc_metadata *)grpc_metadataArray;
- (_Bool)valuesCaughtUpto:(id)arg1;
- (long long)compareVectorClock:(id)arg1;
- (long long)mediaFilterSubType;
- (_Bool)isSpectaclesLensFilter;
- (_Bool)isUnifiedCameraObject;
- (_Bool)hasMediaCommand;
@end

