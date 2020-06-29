//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SCCloudFS, SCSentinel;
@protocol SCCloudFSFileEntity;

@interface SCCloudFSFile : NSObject
{
    id <SCCloudFSFileEntity> _entity;
    NSString *_UUID;
    NSString *_leaseToken;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isAvailableLocally
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isSynced
    NSURL *_baseURL;
    SCSentinel *_sentinel;
    SCCloudFS *_cloudFS;
}

+ (id)sharedPerformer;
+ (id)fileURLForRepresentation:(id)arg1 baseURL:(id)arg2;
- (void).cxx_destruct;
- (void)invalidate;
- (id)downloadWithMediaScenePath:(CDStruct_bac8f6e9)arg1 progressQueue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 resultQueue:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)fileURLForRepresentation:(id)arg1;
- (void)markAsSynced;
- (_Bool)isSynced;
- (_Bool)isAvailableLocally;
- (void)dealloc;
- (id)initWithCloudFS:(id)arg1 baseURL:(id)arg2 leaseToken:(id)arg3 isAvailableLocally:(_Bool)arg4 isSynced:(_Bool)arg5 entity:(id)arg6;
- (id)assetURLWithAssetDescriptor:(long long)arg1;
@property(readonly, copy, nonatomic) NSURL *renderedLowresMediaURL;
@property(readonly, copy, nonatomic) NSURL *mediaOverlayURL;
@property(readonly, copy, nonatomic) NSURL *mediaURL;

@end

