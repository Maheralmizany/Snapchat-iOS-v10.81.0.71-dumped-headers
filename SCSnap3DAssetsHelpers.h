//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnap3DAssetsHelpers : NSObject
{
}

+ (void)_prefetchLensWithId:(id)arg1 singleLensDataFetcher:(id)arg2 lensUnlocker:(id)arg3;
+ (void)prefetchLensAssetsForLensMetadata:(id)arg1 lensDataPrefetcher:(id)arg2 singleLensDataFetcher:(id)arg3 lensUnlocker:(id)arg4 origin:(unsigned long long)arg5;
+ (void)prefetchLensAssetsForEncodedLensMetadata:(id)arg1 lensDataPrefetcher:(id)arg2 singleLensDataFetcher:(id)arg3 lensUnlocker:(id)arg4 origin:(unsigned long long)arg5;

@end
