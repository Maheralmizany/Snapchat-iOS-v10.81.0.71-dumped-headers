//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface SCChatAudioNotePreview : UIView
{
    UIView *_discardImageView;
    double _waveformValues[14];
    CADisplayLink *_displayLink;
    double _elapsedTime;
    _Bool _timeoutStarted;
    UIColor *_waveformColor;
    UIColor *_progressArcColor;
    double _progressArcWidth;
    _Bool _isAnimating;
    long long _currentState;
    long long _desiredState;
}

- (void).cxx_destruct;
- (double)_toDeviceLength:(double)arg1 percentageOfScreen:(double)arg2;
- (void)_drawWaveform;
- (void)_drawProgressArc;
- (void)_drawBackground;
- (void)_cleanUpDisplayLink;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
- (void)_displayDidRefresh:(id)arg1;
- (void)_updateProgressArcAttributesForState:(long long)arg1;
- (void)_animateToDesiredStateIfNeeded;
- (void)_performTransition:(CDUnknownBlockType)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAnimationWaveformValues:(double *)arg1;
- (void)startNoteTimeout;
- (void)updateXCoordinate:(double)arg1;
- (void)updateToNormalNoteState;
- (void)updateToCancelNoteState;
- (void)hideAndReleasePreview;
- (void)presentInContainer:(id)arg1 initialXCoordinate:(double)arg2;
- (void)dealloc;
- (id)initWithCustomColor:(id)arg1;

@end

