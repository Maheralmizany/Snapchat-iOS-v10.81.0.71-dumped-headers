//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensRemoteAssetPrefetching-Protocol.h"

@protocol SCLensDataFetcher, SCLensUserProvider, SCPerforming;

@interface SCLensRemoteAssetPrefetcher : NSObject <SCLensRemoteAssetPrefetching>
{
    id <SCLensDataFetcher> _lensDataFetcher;
    id <SCPerforming> _performer;
    id <SCLensUserProvider> _lensUserProvider;
    _Bool _overrideRequestTimingToRequired;
}

- (void).cxx_destruct;
- (id)_bitmoji3DAssetsFromMetadata:(id)arg1;
- (id)_avatar3DAssetFromAsset:(id)arg1;
- (id)_bitmojiAssetsFromAsset:(id)arg1 bitmojiStickers:(id)arg2;
- (id)_assetWithOverrideRequstTimingIfNeededFromAsset:(id)arg1;
- (id)_assetWithAvatarIDFromAsset:(id)arg1;
- (void)_fetchAsset:(id)arg1 lens:(id)arg2 dispatchGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchContentForAsset:(id)arg1 lens:(id)arg2 dispatchGroup:(id)arg3 onFetchAsset:(CDUnknownBlockType)arg4;
- (void)_fetchContentForAssets:(id)arg1 lens:(id)arg2 dispatchGroup:(id)arg3 onFetchAsset:(CDUnknownBlockType)arg4;
- (void)_fetchContentForAssets:(id)arg1 lens:(id)arg2 onFetchAsset:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)fetchAssetsForLens:(id)arg1 onFetchAsset:(CDUnknownBlockType)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)initWithLensDataFetcher:(id)arg1 lensUserProvider:(id)arg2 overrideRequestTimingToRequired:(_Bool)arg3 performer:(id)arg4;
- (id)initWithLensDataFetcher:(id)arg1 lensUserProvider:(id)arg2 overrideRequestTimingToRequired:(_Bool)arg3;

@end

