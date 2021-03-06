//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureCameraTooltipController-Protocol.h"

@class NSString, NSTimer, SCLazy, UIView;
@protocol SCFeatureCameraUIArbitrator;

@interface SCFeatureScanTooltipController : SCFeature <SCFeatureCameraTooltipController>
{
    UIView *_containerView;
    SCLazy *_hintView;
    NSTimer *_hintDisplayTimer;
    _Bool _visible;
    double _timeout;
    NSString *_title;
    NSString *_subtitle;
    double _yOffset;
    id <SCFeatureCameraUIArbitrator> _cameraTooltipArbitrator;
}

@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraTooltipArbitrator; // @synthesize cameraTooltipArbitrator=_cameraTooltipArbitrator;
- (void).cxx_destruct;
- (void)_layoutTooltipView:(id)arg1;
- (void)_hideHintView;
- (void)setTooltipVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
- (void)setYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)setTitleText:(id)arg1 subtitleText:(id)arg2;
- (void)configureWithView:(id)arg1;
- (id)initWithTimeout:(double)arg1;

@end

