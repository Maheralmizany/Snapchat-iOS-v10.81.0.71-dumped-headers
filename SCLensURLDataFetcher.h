//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, SCLazy, SCLensCacheKeyResolver, SCLensRequestManager;
@protocol SCLensDataFetchRanking, SCLensDataFetchRanking><SCLensDataFetchRankingÐ¡ontextProviding, SCPerforming;

@interface SCLensURLDataFetcher : NSObject
{
    SCLazy *_lensCache;
    id <SCPerforming> _performer;
    SCLensRequestManager *_requestManager;
    NSFileManager *_fileManager;
    SCLensCacheKeyResolver *_cacheKeyResolver;
    id <SCLensDataFetchRanking><SCLensDataFetchRankingÐ¡ontextProviding> _lensDataFetchRanker;
}

- (void).cxx_destruct;
- (id)_resourceWithType:(long long)arg1 URLString:(id)arg2 signature:(id)arg3 checksum:(id)arg4;
@property(readonly, nonatomic) id <SCLensDataFetchRanking> fetchRanker;
- (id)requestKeyForPath:(id)arg1;
- (void)_logCacheMetric:(id)arg1 value:(long long)arg2 type:(id)arg3 event:(id)arg4;
- (void)logCacheUsageWithEvent:(id)arg1;
- (void)removeContentForURL:(id)arg1 checksum:(id)arg2 cacheKey:(id)arg3 resourceType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeExpiredContentWithCacheCondition:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markLocallyCachedContentUsageForURL:(id)arg1 resourceType:(long long)arg2 lensID:(id)arg3 checksum:(id)arg4 domain:(id)arg5 expirationDate:(id)arg6;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (void)_requestDidFinishWithData:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchWithManagedLocalUrl:(id)arg1 requestKey:(id)arg2 metadata:(id)arg3 resourceUrlString:(id)arg4 requestSettings:(id)arg5 cacheKeyType:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (id)_fetchURLContentDataPath:(id)arg1 withType:(long long)arg2 signature:(id)arg3 checksum:(id)arg4 lensID:(id)arg5 cacheDomain:(id)arg6 expirationDate:(id)arg7 requestSettings:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)fetchURLContentDataPath:(id)arg1 lensID:(id)arg2 cacheDomain:(id)arg3 expirationDate:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)fetchURLImage:(id)arg1 lensID:(id)arg2 cacheDomain:(id)arg3 expirationDate:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)resetCache:(CDUnknownBlockType)arg1;
- (id)initWithRequestManager:(id)arg1 fileManager:(id)arg2 lensCache:(id)arg3 fetchRanker:(id)arg4 cacheKeyResolver:(id)arg5 performer:(id)arg6;
- (id)initWithRequestManager:(id)arg1 lensCache:(id)arg2 fetchRanker:(id)arg3 cacheKeyResolver:(id)arg4;

@end
