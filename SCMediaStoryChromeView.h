//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCStoryChromeViewModel, UILabel;

@interface SCMediaStoryChromeView : UIView
{
    UILabel *_chromeTitleLabel;
    UILabel *_chromeSubtitleLabel;
    SCStoryChromeViewModel *_storyChromeViewModel;
}

@property(retain, nonatomic) SCStoryChromeViewModel *storyChromeViewModel; // @synthesize storyChromeViewModel=_storyChromeViewModel;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_initChromeLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end
