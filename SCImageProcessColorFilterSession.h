//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSData, NSString, SCImageProcessColorFilterSessionListenerAnnouncer, SCImageProcessCommand, SCImageProcessQueue, SCQueuePerformer, UIImage;
@protocol OS_dispatch_semaphore, SCImageProcessCommandMapping, SCImageProcessGLWrapper, SCImageProcessPipelineOutputRendering;

@interface SCImageProcessColorFilterSession : NSObject
{
    SCImageProcessQueue *_queue;
    SCQueuePerformer *_performer;
    SCImageProcessCommand *_backgroundAnimationCommand;
    NSArray *_stackedCommands;
    NSArray *_commands;
    NSArray *_cachedRequestCommands;
    id <SCImageProcessPipelineOutputRendering> _renderer;
    CADisplayLink *_displayLink;
    NSData *_data;
    long long _pixelWidth;
    long long _pixelHeight;
    double _offset;
    NSString *_sessionId;
    struct CGAffineTransform _viewportTransform;
    NSObject<OS_dispatch_semaphore> *_frameRenderSemaphore;
    _Bool _shouldSubmitNewRequest;
    _Bool _shouldRenderContinuously;
    UIImage *_image;
    long long _displayLinkCountDown;
    CDStruct_b28b1787 _blackValueState;
    SCImageProcessColorFilterSessionListenerAnnouncer *_announcer;
    id <SCImageProcessCommandMapping> _commandMapper;
    id <SCImageProcessGLWrapper> _glWrapper;
    unsigned long long _stackedCommandPosition;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)_normalizedTransform:(struct CGAffineTransform)arg1;
- (float)_normalizedDualSwipingCommandOffsetFromOffset:(double)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_generateSessionId;
- (void)_addRequestWithCommandContainer:(id)arg1 useBackgroundAnimationCommand:(_Bool)arg2 imageFilteringCompletionHandler:(CDUnknownBlockType)arg3 croppingAspectRatio:(double)arg4 backgroundColor:(id)arg5 requestCompletionHandler:(CDUnknownBlockType)arg6 resetShouldSubmitNewRequest:(_Bool)arg7;
- (void)_displayLinkCallback:(id)arg1;
- (void)_filterImageWithIndex:(unsigned long long)arg1 croppingAspectRatio:(double)arg2 imageFilteringCompletionHandler:(CDUnknownBlockType)arg3;
- (id)stackedCommandsWithCommandAtIndex:(unsigned long long)arg1;
- (void)startRunning;
- (void)stopRunning;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)cleanupCommandsAndRenderer;
- (void)cleanup;
- (void)dealloc;
- (void)_addUnloadRequestForCommands:(id)arg1;
- (void)_addBackgroundAnimationCommandUnloadRequest;
- (void)_addCachedRequestCommandsUnloadRequest;
- (void)setStackedCommands:(id)arg1;
- (void)setBackgroundAnimationCommand:(id)arg1;
- (void)setOutputCommands:(id)arg1;
- (void)filterImageWithIndex:(unsigned long long)arg1 croppingAspectRatio:(double)arg2 imageFilteringCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBackgroundBlackValue:(double)arg1 duration:(double)arg2;
- (void)setOffset:(double)arg1;
- (void)setShouldRenderContinuously:(_Bool)arg1;
- (void)performForceRenderWithLowFrameRate:(_Bool)arg1;
- (void)setViewportTransform:(struct CGAffineTransform)arg1;
- (void)setRenderer:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1 withScaledImageFuture:(id)arg2;
@property(nonatomic) unsigned long long stackedCommandPosition; // @synthesize stackedCommandPosition=_stackedCommandPosition;
- (id)initWithQueue:(id)arg1 commandMapper:(id)arg2;

@end

