//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, SCADirectSnapDiscard, SCBatchCaptureConfiguration, SCCameraDeepLinkMetadata, SCCameraOverlayView, SCCameraScreenshotLogger, SCCameraViewController, SCFeatureReference, SCFuture, SCManagedCapturerState, SCManagedFrameHealthChecker, SCMultiSnapConfiguration, SCPreviewConfiguration, SCQuickCaptionManager, SCReplyParameters, UIImage;
@protocol SCCameraLensesUIControlling, SCCameraPreviewEventDelegate, SCChatQuickCaptionDelegate, SCFeatureAppAttachment, SCFeatureSnapReply, SCLensCameraScreenDataProviderProtocol, SCPreviewFeatureScanDelegate, SCPreviewTransitioningDelegate, SCSnapSendPreparer, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@protocol SCPreviewPresenter <NSObject>
@property(readonly, nonatomic) SCPreviewConfiguration *previewConfiguration;
- (long long)getSnapPageSource;
- (void)logDirectSnapCreateForBatchCaptureWithBatchCaptureSessionID:(NSString *)arg1;
- (void)prepareBatchCaptureLoggingWithConfiguration:(SCBatchCaptureConfiguration *)arg1 cameraOverlayView:(SCCameraOverlayView *)arg2 managedCapturerState:(SCManagedCapturerState *)arg3 captionManager:(SCQuickCaptionManager *)arg4 lensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg5 lensesUIController:(id <SCCameraLensesUIControlling>)arg6 snapReplyFeature:(id <SCFeatureSnapReply>)arg7 gameAttachmentFeature:(id <SCFeatureAppAttachment>)arg8;
- (void)configureWithBatchCaptureConfiguration:(SCBatchCaptureConfiguration *)arg1 cameraOverlayView:(SCCameraOverlayView *)arg2 managedCapturerState:(SCManagedCapturerState *)arg3 captionManager:(SCQuickCaptionManager *)arg4 lensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg5 lensesUIController:(id <SCCameraLensesUIControlling>)arg6 snapReplyFeature:(id <SCFeatureSnapReply>)arg7 gameAttachmentFeature:(id <SCFeatureAppAttachment>)arg8;
- (void)setScreenshotLogger:(SCCameraScreenshotLogger *)arg1;
- (void)setCaptureDiscardRelatedData:(SCADirectSnapDiscard *)arg1;
- (void)setAudioPresentInVideo:(_Bool)arg1;
- (void)setIsFromSnapRecovery:(_Bool)arg1 recoveredCaptureSessionId:(NSString *)arg2;
- (void)setDeepLinkMetadata:(SCCameraDeepLinkMetadata *)arg1;
- (void)setCameraFlipsWhileRecording:(long long)arg1;
- (void)setStartRecordingTimestamp:(NSDate *)arg1;
- (void)setDepthPhotoDataFuture:(SCFuture *)arg1 isDepthCameraModeActive:(_Bool)arg2;
- (void)setPlaceholderImage:(UIImage *)arg1;
- (void)setFrameHealthChecker:(SCManagedFrameHealthChecker *)arg1;
- (void)setCaptureSource:(long long)arg1;
- (void)setFingerDownCaptureEnabled:(_Bool)arg1;
- (void)setCaptureSessionID:(NSString *)arg1;
- (void)setSnapPageSource:(long long)arg1;
- (void)setMediaAspectRatio:(double)arg1;
- (void)setMediaSize:(struct CGSize)arg1;
- (void)setLevelerModeActive:(_Bool)arg1;
- (void)setBatchCaptureModeActive:(_Bool)arg1;
- (void)setPortraitModeActive:(_Bool)arg1;
- (void)setTimerModeActive:(_Bool)arg1;
- (void)setNightModeActive:(_Bool)arg1 nightModeHidden:(_Bool)arg2;
- (void)setLowLightBoostEnabledBeforeCapture:(_Bool)arg1;
- (void)setDidZoomWhileFilming:(_Bool)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setDidFilmSelf:(_Bool)arg1 flashActive:(_Bool)arg2;
- (void)setSnapSendPreparer:(id <SCSnapSendPreparer>)arg1;
- (void)setMultiSnapConfigurationFuture:(SCFuture *)arg1;
- (void)setMultiSnapConfiguration:(SCMultiSnapConfiguration *)arg1;
- (void)setReplyParameters:(SCReplyParameters *)arg1 cameraViewType:(long long)arg2;
- (NSDate *)startRecordingTimestamp;
- (_Bool)handsFree;
- (long long)cameraFlipsWhileRecording;
- (void)presentPreviewViewController:(SCCameraViewController *)arg1 transitionController:(id <SCPreviewTransitioningDelegate>)arg2 completion:(void (^)(void))arg3;
- (void)loadPreviewViewController;
- (void)createPreviewViewController:(id <SendSnapNavigationControllerDelegate>)arg1 quickCaptionDelegate:(id <SCChatQuickCaptionDelegate>)arg2 startChatDelegate:(id <SCStartChatDelegate>)arg3 featureScanDelegate:(id <SCPreviewFeatureScanDelegate>)arg4 cameraPreviewDelegate:(id <SCCameraPreviewEventDelegate>)arg5 widenedFOVFeature:(SCFeatureReference *)arg6;
- (void)configureWithVideoFuture:(SCFuture *)arg1 cameraOverlayView:(SCCameraOverlayView *)arg2 managedCapturerState:(SCManagedCapturerState *)arg3 captionManager:(SCQuickCaptionManager *)arg4 lensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg5 lensesUIController:(id <SCCameraLensesUIControlling>)arg6 snapReplyFeature:(id <SCFeatureSnapReply>)arg7 gameAttachmentFeature:(id <SCFeatureAppAttachment>)arg8;
- (void)configureWithImageFuture:(SCFuture *)arg1 cameraOverlayView:(SCCameraOverlayView *)arg2 managedCapturerState:(SCManagedCapturerState *)arg3 captionManager:(SCQuickCaptionManager *)arg4 lensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg5 lensesUIController:(id <SCCameraLensesUIControlling>)arg6 snapReplyFeature:(id <SCFeatureSnapReply>)arg7 gameAttachmentFeature:(id <SCFeatureAppAttachment>)arg8;
@end

