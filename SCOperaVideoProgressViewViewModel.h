//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCOperaVideoProgressViewViewModel : NSObject <NSCopying>
{
    _Bool _disableProgressViewMinimizedState;
    NSString *_progressViewText;
    double _progressBarNonVideoViewedTime;
    double _progressBarDurationSec;
    UIColor *_completedProgressBarColor;
    UIColor *_completedProgressLabelTextColor;
    UIColor *_remainingProgressBarColor;
    UIColor *_remainingProgressBarTappedColor;
    UIColor *_remainingProgressLabelTextColor;
}

@property(readonly, copy, nonatomic) UIColor *remainingProgressLabelTextColor; // @synthesize remainingProgressLabelTextColor=_remainingProgressLabelTextColor;
@property(readonly, copy, nonatomic) UIColor *remainingProgressBarTappedColor; // @synthesize remainingProgressBarTappedColor=_remainingProgressBarTappedColor;
@property(readonly, copy, nonatomic) UIColor *remainingProgressBarColor; // @synthesize remainingProgressBarColor=_remainingProgressBarColor;
@property(readonly, copy, nonatomic) UIColor *completedProgressLabelTextColor; // @synthesize completedProgressLabelTextColor=_completedProgressLabelTextColor;
@property(readonly, copy, nonatomic) UIColor *completedProgressBarColor; // @synthesize completedProgressBarColor=_completedProgressBarColor;
@property(readonly, nonatomic) _Bool disableProgressViewMinimizedState; // @synthesize disableProgressViewMinimizedState=_disableProgressViewMinimizedState;
@property(readonly, nonatomic) double progressBarDurationSec; // @synthesize progressBarDurationSec=_progressBarDurationSec;
@property(readonly, nonatomic) double progressBarNonVideoViewedTime; // @synthesize progressBarNonVideoViewedTime=_progressBarNonVideoViewedTime;
@property(readonly, copy, nonatomic) NSString *progressViewText; // @synthesize progressViewText=_progressViewText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProgressViewText:(id)arg1 progressBarNonVideoViewedTime:(double)arg2 progressBarDurationSec:(double)arg3 disableProgressViewMinimizedState:(_Bool)arg4 completedProgressBarColor:(id)arg5 completedProgressLabelTextColor:(id)arg6 remainingProgressBarColor:(id)arg7 remainingProgressBarTappedColor:(id)arg8 remainingProgressLabelTextColor:(id)arg9;

@end

