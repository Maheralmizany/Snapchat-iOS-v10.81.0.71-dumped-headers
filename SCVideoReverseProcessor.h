//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoReverseProcessing-Protocol.h"

@class AVAssetReader, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVURLAsset, NSString, NSURL, SCVideoAssetRandomAccessor;

@interface SCVideoReverseProcessor : NSObject <SCVideoReverseProcessing>
{
    AVURLAsset *_videoAsset;
    NSURL *_outputURL;
    double _targetBitrate;
    struct CGSize _targetSize;
    struct CGAffineTransform _targetTransform;
    _Bool _shouldInvolveAudioTrack;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_writerVideoInput;
    AVAssetWriterInput *_writerAudioInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    SCVideoAssetRandomAccessor *_videoAssetRandomAccessor;
}

+ (id)performer;
- (void).cxx_destruct;
- (void)_setupWriterAudioInput;
- (void)_setupWriterVideoInput;
- (void)_finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithVideoAsset:(id)arg1 outputURL:(id)arg2 targetBitrate:(double)arg3 targetSize:(struct CGSize)arg4 targetTransform:(struct CGAffineTransform)arg5 shouldInvolveAudioTrack:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

