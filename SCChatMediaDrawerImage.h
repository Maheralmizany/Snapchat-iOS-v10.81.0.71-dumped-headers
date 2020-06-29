//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatMediaDrawerBaseMedia.h"

@class UIImage;

@interface SCChatMediaDrawerImage : SCChatMediaDrawerBaseMedia
{
    UIImage *_image;
}

- (void).cxx_destruct;
- (_Bool)_shouldResizeBeforeUploading;
- (double)maxPixelSizeForUpload;
- (id)miniThumbnailData;
- (double)duration;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareUploadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelThumbnailFetchRequest;
- (void)_fetchOriginalImageDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchOriginalImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImageWithSize:(struct CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPHAsset:(id)arg1;

@end
