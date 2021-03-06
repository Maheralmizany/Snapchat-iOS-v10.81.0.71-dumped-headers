//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFFrameProducer-Protocol.h"

@class F2FFrameToStartPredictor, NSString, SPThreadSafeMutableContainer;
@protocol FFFrame;

@interface FFProducer : NSObject <FFFrameProducer>
{
    _Bool _started;
    _Bool _processingCompleted;
    unsigned long long _state;
    unsigned long long _totalFramesCount;
    unsigned long long _frameToStart;
    F2FFrameToStartPredictor *_startPredictor;
    SPThreadSafeMutableContainer *_frames;
    id <FFFrame> _firstFrame;
    unsigned long long _frameBytesCount;
}

@property _Bool processingCompleted; // @synthesize processingCompleted=_processingCompleted;
@property unsigned long long frameBytesCount; // @synthesize frameBytesCount=_frameBytesCount;
@property(retain) id <FFFrame> firstFrame; // @synthesize firstFrame=_firstFrame;
@property(retain, nonatomic) SPThreadSafeMutableContainer *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) F2FFrameToStartPredictor *startPredictor; // @synthesize startPredictor=_startPredictor;
@property unsigned long long frameToStart; // @synthesize frameToStart=_frameToStart;
@property(readonly) unsigned long long totalFramesCount; // @synthesize totalFramesCount=_totalFramesCount;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property _Bool started; // @synthesize started=_started;
@property(readonly) unsigned long long framesUsedMemory;
- (id)copyNextFrame;
- (_Bool)hasNextFrame;
- (void)completeProducing;
- (void)restartAfterPause;
- (void)appendFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)frameProcessingStarted:(unsigned long long)arg1;
- (void)framePreloadingFinished;
- (void)framePreloadingStarted;
- (_Bool)isReadyForANewFrame;
- (id)initWithDesiredFPS:(unsigned long long)arg1 framesCount:(unsigned long long)arg2 ratio:(id)arg3 requiredFirstFrames:(id)arg4 requiredFramesAfterReset:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

