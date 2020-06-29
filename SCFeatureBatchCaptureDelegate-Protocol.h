//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, UIImage;
@protocol SCFeatureBatchCapture, SCManagedRecordedVideo;

@protocol SCFeatureBatchCaptureDelegate
- (unsigned long long)featureBatchCaptureUnsavedSegmentCount:(id <SCFeatureBatchCapture>)arg1;
- (void)featureBatchCapture:(id <SCFeatureBatchCapture>)arg1 previewButtonDidBecomeVisible:(_Bool)arg2;
- (void)featureBatchCaptureDidPressReviewAndEdit:(id <SCFeatureBatchCapture>)arg1;
- (void)featureBatchCapture:(id <SCFeatureBatchCapture>)arg1 didCaptureVideo:(id <SCManagedRecordedVideo>)arg2 withError:(NSError *)arg3;
- (void)featureBatchCapture:(id <SCFeatureBatchCapture>)arg1 didCaptureImage:(UIImage *)arg2 withError:(NSError *)arg3;
@end

