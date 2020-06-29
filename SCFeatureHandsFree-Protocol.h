//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCLongPressGestureRecognizer, SCVideoCaptureConfiguration;
@protocol SCCapturer, SCPreviewPresenter;

@protocol SCFeatureHandsFree
@property(readonly, nonatomic) _Bool enabled;
@property(nonatomic) _Bool canEnable;
@property(readonly, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer;
@property(nonatomic) __weak id <SCPreviewPresenter> previewPresenter;
- (void)setCancelBlock:(void (^)(void))arg1;
- (_Bool)shouldDisplayHandsFreeTooltip;
- (_Bool)shouldDisplayMultiSnapTooltip;
- (void)prepareForRecordingWithCapturer:(id <SCCapturer>)arg1 videoCaptureConfiguration:(SCVideoCaptureConfiguration *)arg2;
@end

