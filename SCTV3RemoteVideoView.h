//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCLoadingIndicatorView, SCTDimensions, TCVideoView, UILabel;
@protocol TCRendererController;

@interface SCTV3RemoteVideoView : UIView
{
    TCVideoView *_coreVideoView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    long long _state;
    UILabel *_messageLabel;
    UIView *_overlayView;
    UIView *_blurEffectView;
    id <TCRendererController> _rendererController;
    _Bool _useMetalRenderer;
    SCTDimensions *_labelSize;
    NSString *_sinkId;
    long long _mediaStatus;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long mediaStatus; // @synthesize mediaStatus=_mediaStatus;
@property(copy, nonatomic) NSString *sinkId; // @synthesize sinkId=_sinkId;
- (void).cxx_destruct;
- (_Bool)_shouldStartForMediaStatus:(long long)arg1;
- (_Bool)_shouldHideLabel;
- (void)_stopLoadingAnimation;
- (void)_startLoadingAnimation;
- (void)_updateOverlayView;
- (void)_hideOverlayView;
- (void)_showOverlayView;
- (double)_getSizeProgress;
- (void)_updateSubviewConstraints;
- (void)_prepareConstraints;
- (void)_addLoadingIndicatorView;
- (void)_addMessageLabel;
- (void)_addOverlayView;
- (void)_startVideo;
- (void)_startVideoIfPossible;
- (void)_stopVideoIfNeeded;
- (void)dealloc;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useMetalRenderer:(_Bool)arg2 rendererController:(id)arg3;

@end

