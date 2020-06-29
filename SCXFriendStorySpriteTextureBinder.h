//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXRenderLayer;
@protocol SCImageDownloading;

@interface SCXFriendStorySpriteTextureBinder : NSObject
{
    SCXRenderLayer *_renderLayer;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_imageFetcherForThumbnailImage:(id)arg1 userId:(id)arg2;
- (void)bindTextureIfNeededToSprite:(id)arg1;
- (id)initWithRenderLayer:(id)arg1 imageDownloader:(id)arg2;

@end
