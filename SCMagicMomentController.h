//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol SCMagicMomentControllerDelegate, SCMagicMomentDepthProvider, SCMagicMomentLogger;

@interface SCMagicMomentController : NSObject
{
    unsigned long long _state;
    id <SCMagicMomentControllerDelegate> _delegate;
    _Bool _waitingForDepth;
    _Bool _shouldWaitForFrame;
    CDStruct_1b6d18a9 _lastFrameTime;
    NSNumber *_frameTimeForSaving;
    id <SCMagicMomentDepthProvider> _depthProvider;
    id <SCMagicMomentLogger> _logger;
    _Bool _magicMomentUnavailable;
}

@property(readonly, nonatomic) _Bool magicMomentUnavailable; // @synthesize magicMomentUnavailable=_magicMomentUnavailable;
@property(readonly, copy, nonatomic) NSNumber *frameTimeForSaving; // @synthesize frameTimeForSaving=_frameTimeForSaving;
- (void).cxx_destruct;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)_validateDepth;
- (void)_handleDepthProcessingFinished;
- (void)commandDidRenderFrame;
- (void)didRenderFrameWithTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)resumeMagicMoment;
- (_Bool)pauseMagicMoment;
- (_Bool)magicMomentPaused;
- (void)disableMagicMoment;
- (void)enableMagicMoment;
- (_Bool)magicMomentFailed;
- (_Bool)magicMomentEnabled;
- (id)initWithDelegate:(id)arg1 waitForFrame:(_Bool)arg2 waitForDepth:(_Bool)arg3 depthProvider:(id)arg4 logger:(id)arg5;

@end

