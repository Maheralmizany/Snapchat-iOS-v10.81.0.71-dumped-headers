//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAd.h"

@class GADAdVideoController, UIView;

@interface GADBannerAd : GADAd
{
    UIView *_adView;
    GADAdVideoController *_videoController;
}

@property(readonly, nonatomic) GADAdVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 adView:(id)arg2 responseInfo:(id)arg3 videoController:(id)arg4;

@end

