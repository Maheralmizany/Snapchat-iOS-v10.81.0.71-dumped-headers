//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCCache, SCDisposableObserver, SCSessionRequestManager;
@protocol SCLensUserProvider, SCPerforming;

@interface SC3DBitmojiMetadataStore : NSObject <SCUserSessionScoped>
{
    SCSessionRequestManager *_requestManager;
    id <SCLensUserProvider> _lensUserProvider;
    SCCache *_cache;
    id <SCPerforming> _performer;
    SCDisposableObserver *_avatarIdObserver;
}

- (void).cxx_destruct;
- (id)lensUserProvider;
- (id)_metadataRequestKeyForAvatarId:(id)arg1;
- (id)_avatarAssetsRequestKey:(id)arg1 avatarId:(id)arg2;
- (id)_avatarAssetsCacheKey:(id)arg1 avatarId:(id)arg2;
- (id)_cacheKeyForAvatarId:(id)arg1;
- (id)_deploymentEnvironmentCacheSuffix;
- (id)_getDeploymentEnvironment;
- (id)_parametersForRequest:(id)arg1;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (void)_fetchAvatarAssets:(id)arg1 requestSettings:(id)arg2 requestKey:(id)arg3 avatarId:(id)arg4 userId:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchMetadataWithRequestSettings:(id)arg1 requestKey:(id)arg2 avatarId:(id)arg3 userId:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (double)_cacheExpirationTime;
- (_Bool)isBitmojiLinked;
- (void)_bitmojiAvatarIdDidChange;
- (void)clear;
- (id)getAvatarAssets:(id)arg1 requestSettings:(id)arg2 avatarId:(id)arg3 userId:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)getMetadataWithRequestSettings:(id)arg1 avatarId:(id)arg2 userId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithRequestManager:(id)arg1 lensUserProvider:(id)arg2 bitmojiAvatarProvider:(id)arg3;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

