//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCUnifiedSplitTextView, SCUnifiedSplitTextViewModel;
@protocol SCLegacyItemDownloading;

@interface SCUnifiedProfileIdentityTappableSubtitleView : UIView
{
    SCUnifiedSplitTextView *_foregroundSubtitleView;
    SCUnifiedSplitTextView *_backgroundSubtitleView;
    SCUnifiedSplitTextViewModel *_foregroundSubtitleViewModel;
    SCUnifiedSplitTextViewModel *_backgroundSubtitleViewModel;
    _Bool _isAnimating;
    id <SCLegacyItemDownloading> _infoFetcher;
}

+ (double)heightWithForegroundViewModel:(id)arg1 backgroundViewModel:(id)arg2;
@property(nonatomic) __weak id <SCLegacyItemDownloading> infoFetcher; // @synthesize infoFetcher=_infoFetcher;
- (void).cxx_destruct;
- (void)_handleForegroundTap:(id)arg1;
- (void)setForegroundViewModel:(id)arg1 backgroundViewModel:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutSubtitleSubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
