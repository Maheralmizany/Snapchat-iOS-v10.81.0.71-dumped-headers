//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SCLongPressLoadingArcConfiguration : NSObject
{
    long long _direction;
    UIColor *_color;
    double _animationStartLineWidth;
    double _animationEndLineWidth;
    double _strokeSecondsPerCycle;
    double _strokeStartPercent;
    double _strokeEndPercent;
    double _secondsPerCycle;
    double _rotationStartAngle;
    double _rotationEndAngle;
    struct UIOffset _edgeOffsets;
}

@property(nonatomic) double rotationEndAngle; // @synthesize rotationEndAngle=_rotationEndAngle;
@property(nonatomic) double rotationStartAngle; // @synthesize rotationStartAngle=_rotationStartAngle;
@property(nonatomic) double secondsPerCycle; // @synthesize secondsPerCycle=_secondsPerCycle;
@property(nonatomic) double strokeEndPercent; // @synthesize strokeEndPercent=_strokeEndPercent;
@property(nonatomic) double strokeStartPercent; // @synthesize strokeStartPercent=_strokeStartPercent;
@property(nonatomic) double strokeSecondsPerCycle; // @synthesize strokeSecondsPerCycle=_strokeSecondsPerCycle;
@property(nonatomic) double animationEndLineWidth; // @synthesize animationEndLineWidth=_animationEndLineWidth;
@property(nonatomic) double animationStartLineWidth; // @synthesize animationStartLineWidth=_animationStartLineWidth;
@property(nonatomic) struct UIOffset edgeOffsets; // @synthesize edgeOffsets=_edgeOffsets;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)configureInnerArc;
- (void)configureOutterArc;
- (id)initWithInner;
- (id)initWithOutter;

@end

