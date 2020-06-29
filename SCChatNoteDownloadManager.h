//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCChatNoteDownloadManager : NSObject
{
    NSMutableDictionary *_downloadItems;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_logStep:(long long)arg1 mediaId:(id)arg2 startTimestamp:(double)arg3 success:(_Bool)arg4;
- (void)_fetchMediaV3DidSucceedForMediaId:(id)arg1;
- (id)_animationMediaIdForNoteMediaId:(id)arg1;
- (long long)mediaStateForMediaId:(id)arg1;
- (_Bool)_isAnimationMediaInCache:(id)arg1;
- (void)fetchMediaFromCacheWithMediaId:(id)arg1 encryptionDict:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchMediaFromV3CacheWithMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateNoteAnimationFramesWithAnimationData:(id)arg1 forMediaId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)processMediaWithViewModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_updateDownloadItemWithMediaId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)coverAnimationImagesForMediaId:(id)arg1;
- (id)init;

@end
