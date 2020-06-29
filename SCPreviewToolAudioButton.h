//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolButtonBase.h"

@class UIImageView;

@interface SCPreviewToolAudioButton : SCPreviewToolButtonBase
{
    _Bool _audioEnabled;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (void).cxx_destruct;
- (void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 highlighted:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setShowingHighlighted:(_Bool)arg1;
- (void)_updateButtonState;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

