//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCExperimentManager;

@interface SCLensCacheKeyResolver : NSObject
{
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)_resourceWithType:(long long)arg1 URLString:(id)arg2 signature:(id)arg3 checksum:(id)arg4;
- (void)markLocallyCachedContentUsageForURLString:(id)arg1 resourceType:(long long)arg2 lensID:(id)arg3 checksum:(id)arg4 domain:(id)arg5 expirationDate:(id)arg6 lensCache:(id)arg7 performer:(id)arg8;
- (void)resolveMetadataForURLString:(id)arg1 signature:(id)arg2 checksum:(id)arg3 resourceType:(long long)arg4 cacheDomain:(id)arg5 lensID:(id)arg6 requestTrackingType:(id)arg7 expirationDate:(id)arg8 lensCache:(id)arg9 performer:(id)arg10 competion:(CDUnknownBlockType)arg11;
- (id)initWithExperimentManager:(id)arg1;

@end

