//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsGetMyDataCache-Protocol.h"

@class NSString;

@interface SCBloopsGetMyDataDummyCache : NSObject <SCBloopsGetMyDataCache>
{
}

- (void)cleanCachedUserBloopsTargetDataForApiVersion:(id)arg1;
- (void)addUserBloopsTargetDataToCache:(id)arg1 apiVersion:(id)arg2 storageType:(unsigned long long)arg3 expirationInterval:(double)arg4;
- (void)getUserBloopsTargetDataFromCacheForApiVersion:(id)arg1 storageType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUserBloopsTargetDataFromCacheForApiVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

