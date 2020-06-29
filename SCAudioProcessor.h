//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetTrack, AVAudioMix, NSString, SCAudioProcessWavFileMixer;
@protocol SCAudioProcessorProcessingWrapper;

@interface SCAudioProcessor : NSObject
{
    AVAudioMix *_audioMix;
    struct SCAudioProcessorTapContext *_tapContext;
    int _usageType;
    id <SCAudioProcessorProcessingWrapper> _processingWrapper;
    SCAudioProcessWavFileMixer *_wavFileMixer;
    NSString *_backgroundAudioFilePath;
    AVAssetTrack *_audioAssetTrack;
}

@property(readonly, nonatomic) AVAssetTrack *audioAssetTrack; // @synthesize audioAssetTrack=_audioAssetTrack;
- (void).cxx_destruct;
- (void)setBackgroundAudioFilePath:(id)arg1;
- (void)setParametersWithAudioFilterStyleId:(id)arg1;
@property(readonly, nonatomic) AVAudioMix *audioMix;
- (id)initWithAudioAssetTrack:(id)arg1 processingWrapper:(id)arg2 usageType:(int)arg3;

@end

