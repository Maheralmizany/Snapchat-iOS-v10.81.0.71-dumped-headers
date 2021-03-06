//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCAdResponseCache : NSObject
{
    NSMutableDictionary *_cache;
}

@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)_clearExpiredCache:(id)arg1 adResponseType:(long long)arg2;
- (void)_cacheAdResponses:(id)arg1 targetingParameters:(id)arg2 adResponseType:(long long)arg3;
- (void)_cacheUnviewedAdResponse:(id)arg1 targetingParameters:(id)arg2 adResponseType:(long long)arg3;
- (void)clearCache;
- (void)clearExpiredCache:(id)arg1;
- (id)getAdResponse:(id)arg1;
- (void)cacheAdResponses:(id)arg1 targetingParameters:(id)arg2;
- (void)cacheUnviewedAdResponse:(id)arg1 targetingParameters:(id)arg2;
- (id)init;

@end

