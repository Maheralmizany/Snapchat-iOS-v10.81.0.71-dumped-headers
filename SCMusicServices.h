//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCMusicServices : NSObject
{
    SCLazy *_repository;
    SCLazy *_experiments;
    SCLazy *_trackImageLoader;
    SCLazy *_trackAudioLoader;
    SCLazy *_trackAudioPlayer;
    SCLazy *_trackWaveformSampler;
}

@property(readonly, nonatomic) SCLazy *trackWaveformSampler; // @synthesize trackWaveformSampler=_trackWaveformSampler;
@property(readonly, nonatomic) SCLazy *trackAudioPlayer; // @synthesize trackAudioPlayer=_trackAudioPlayer;
@property(readonly, nonatomic) SCLazy *trackAudioLoader; // @synthesize trackAudioLoader=_trackAudioLoader;
@property(readonly, nonatomic) SCLazy *trackImageLoader; // @synthesize trackImageLoader=_trackImageLoader;
@property(readonly, nonatomic) SCLazy *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) SCLazy *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)initWithRepository:(id)arg1 experiments:(id)arg2 trackImageLoader:(id)arg3 trackAudioLoader:(id)arg4 trackAudioPlayer:(id)arg5 trackWaveformSampler:(id)arg6;

@end

