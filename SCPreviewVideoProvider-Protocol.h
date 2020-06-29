//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class AVAsset, NSData, NSObject, NSURL;
@protocol OS_dispatch_queue;

@protocol SCPreviewVideoProvider <NSObject, NSCopying>
- (_Bool)checkIsVideoReachable;
- (_Bool)shouldIncludeURLInActiveVideoPaths;
- (long long)codecType;
- (NSData *)exportVideoData;
- (void)exportVideoForURL:(NSURL *)arg1;
- (void)removeBackingTemporaryVideo;
- (NSURL *)cachedWritableURL;
- (NSURL *)writableURL;
- (double)videoDuration;
- (void)newVideoAssetForQueue:(NSObject<OS_dispatch_queue> *)arg1 resultHandler:(void (^)(AVAsset *, NSURL *))arg2;
- (AVAsset *)newVideoAsset;
@end

