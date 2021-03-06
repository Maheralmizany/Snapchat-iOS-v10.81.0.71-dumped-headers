//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;
@protocol SCGalleryFeaturedStoryThumbnailDownloaderEncryptionDelegate;

@interface SCGalleryFeaturedStoryThumbnailDownloader : NSObject
{
    SCQueuePerformer *_performer;
    id <SCGalleryFeaturedStoryThumbnailDownloaderEncryptionDelegate> _encryptionDelegate;
}

@property(nonatomic) __weak id <SCGalleryFeaturedStoryThumbnailDownloaderEncryptionDelegate> encryptionDelegate; // @synthesize encryptionDelegate=_encryptionDelegate;
- (void).cxx_destruct;
- (void)_requestThumbnailUrl:(id)arg1 collectionId:(id)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requestRedirectThumbnailUrl:(id)arg1 collectionId:(id)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_downloadCompleteHandler:(id)arg1 isEncrypted:(_Bool)arg2 thumbnailType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestThumbnailForEntry:(id)arg1 thumbnailType:(unsigned long long)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

