//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens;
@protocol SCLensDataFetcher;

@protocol SCLensDataFetcherEventsListener <NSObject>
- (void)didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:(id <SCLensDataFetcher>)arg1;
- (void)didClearCacheFromTweaksForLensDataFetcher:(id <SCLensDataFetcher>)arg1;
- (void)didClearCacheForLensDataFetcher:(id <SCLensDataFetcher>)arg1;
- (void)lensDataFetcher:(id <SCLensDataFetcher>)arg1 didFinishLoadingContentForLens:(SCLens *)arg2 successfully:(_Bool)arg3;
@end

