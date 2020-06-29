//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FLAnimatedImageGenerating-Protocol.h"

@class NSDictionary, NSString, SCCachingMediaManager, UIImage;
@protocol SCCachingImageGeneratingDelegate, SCCachingMediaEntity, SCCachingMediaLogger;

@interface SCCachingImageGenerating : NSObject <FLAnimatedImageGenerating>
{
    id <SCCachingMediaEntity> _entity;
    SCCachingMediaManager *_cachingMediaManager;
    SCCachingImageGenerating *_sourceImageGenerating;
    long long _sourceLevel;
    struct CGSize _targetSize;
    id <SCCachingMediaLogger> _logger;
    _Bool _shouldOverrideOrientation;
    _Bool _scaleToRemoveWhiteBorder;
    unsigned long long _count;
    unsigned long long _imageFormat;
    id <SCCachingImageGeneratingDelegate> _delegate;
    long long _overrideOrientation;
    double _scaleFactor;
    NSDictionary *_images;
    UIImage *_decodedImage;
}

+ (id)defaultOperationQueue;
@property(retain) UIImage *decodedImage; // @synthesize decodedImage=_decodedImage;
@property(copy) NSDictionary *images; // @synthesize images=_images;
@property(nonatomic) _Bool scaleToRemoveWhiteBorder; // @synthesize scaleToRemoveWhiteBorder=_scaleToRemoveWhiteBorder;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) long long overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(nonatomic) _Bool shouldOverrideOrientation; // @synthesize shouldOverrideOrientation=_shouldOverrideOrientation;
@property(nonatomic) __weak id <SCCachingImageGeneratingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long imageFormat; // @synthesize imageFormat=_imageFormat;
- (void).cxx_destruct;
- (void)_generateMoreImagesAtIndex:(unsigned long long)arg1 decodeRequest:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)imageAtIndex:(unsigned long long)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)_transformImageIfNeeded:(id)arg1;
- (id)decodeImageWithPerformer:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasDecoded;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImages:(id)arg1 decodedImage:(id)arg2;
- (id)initWithImages:(id)arg1 decodedImage:(id)arg2 targetSize:(struct CGSize)arg3 sourceImageGenerating:(id)arg4 sourceLevel:(long long)arg5 count:(unsigned long long)arg6 logger:(id)arg7;
- (id)initWithImages:(id)arg1 decodedImage:(id)arg2 entity:(id)arg3 cachingMediaManager:(id)arg4 sourceLevel:(long long)arg5 count:(unsigned long long)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

