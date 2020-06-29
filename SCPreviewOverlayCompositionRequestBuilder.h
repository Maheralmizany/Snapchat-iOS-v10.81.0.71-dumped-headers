//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCPreviewOverlayCompositionRequestBuilder : NSObject
{
    _Bool _originalImageIncluded;
    _Bool _filteredImageIncluded;
    _Bool _videoOverlayImageIncluded;
    _Bool _captionIncluded;
    _Bool _filterOverlayImageIncluded;
    _Bool _shouldGenerateOverlayImageForMask;
    _Bool _shouldGenerateVideoThumbnailImageWithOverlay;
    _Bool _shouldGenerateLensAppliedImage;
    _Bool _unifiedCameraObjectImageIncluded;
    double _croppingAspectRatio;
    double _maxOutputShortSideLength;
}

+ (id)previewOverlayCompositionRequestFromExistingPreviewOverlayCompositionRequest:(id)arg1;
+ (id)previewOverlayCompositionRequest;
- (id)withMaxOutputShortSideLength:(double)arg1;
- (id)withCroppingAspectRatio:(double)arg1;
- (id)withUnifiedCameraObjectImageIncluded:(_Bool)arg1;
- (id)withShouldGenerateLensAppliedImage:(_Bool)arg1;
- (id)withShouldGenerateVideoThumbnailImageWithOverlay:(_Bool)arg1;
- (id)withShouldGenerateOverlayImageForMask:(_Bool)arg1;
- (id)withFilterOverlayImageIncluded:(_Bool)arg1;
- (id)withCaptionIncluded:(_Bool)arg1;
- (id)withVideoOverlayImageIncluded:(_Bool)arg1;
- (id)withFilteredImageIncluded:(_Bool)arg1;
- (id)withOriginalImageIncluded:(_Bool)arg1;
- (id)build;

@end
