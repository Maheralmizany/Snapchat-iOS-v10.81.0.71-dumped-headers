//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCStoriesPlaybackOptimizationsExperiment : SCExperimentContext
{
    _Bool _removeVideoPrepThreadHop;
    _Bool _removeImagePrepThreadHop;
    _Bool _removeVideoAssetLoad;
    _Bool _skipFirstFrameGeneration;
    _Bool _useInMemoryAVAsset;
}

@property(readonly, nonatomic) _Bool useInMemoryAVAsset; // @synthesize useInMemoryAVAsset=_useInMemoryAVAsset;
@property(readonly, nonatomic) _Bool skipFirstFrameGeneration; // @synthesize skipFirstFrameGeneration=_skipFirstFrameGeneration;
@property(readonly, nonatomic) _Bool removeVideoAssetLoad; // @synthesize removeVideoAssetLoad=_removeVideoAssetLoad;
@property(readonly, nonatomic) _Bool removeImagePrepThreadHop; // @synthesize removeImagePrepThreadHop=_removeImagePrepThreadHop;
@property(readonly, nonatomic) _Bool removeVideoPrepThreadHop; // @synthesize removeVideoPrepThreadHop=_removeVideoPrepThreadHop;
- (void)setupParameters;
- (id)experimentName;

@end

