//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SCMapAltitudeSliderView : UIView
{
    UIView *_trackView;
    UIView *_sliderContainerView;
    UIView *_sliderTabView;
    UILabel *_sliderTextView;
    double _percentage;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

