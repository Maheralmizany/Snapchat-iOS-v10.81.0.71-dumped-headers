//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUcoAppliedImageContainer-Protocol.h"

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString, NSURL, SCBatchCaptureConfiguration, SCCameraDeepLinkMetadata, SCCognacShareToCameraAttachment, SCCroppingState, SCDepthPhotoAuxiliaryData, SCDiscoverMediaBlob, SCDrawingMetadata, SCFuture, SCInfoStickerDataProvider, SCLensCameraPresenterConfiguration, SCLensConfiguration, SCLensSnap3DAssetMetadata, SCManagedFrameHealthChecker, SCMultiSnapConfiguration, SCPreviewMagicMomentConfiguration, SCPreviewSnapchatGalleryConfiguration, SCQuickStickerImage, SCReplyParameters, SCSpectaclesRectificationConfiguration, SOJUGalleryCropping, UIImage, UIView;
@protocol SCLensRemoteAssetsUploadOperation, SCPreviewFilterDataProvider, SCPreviewVideoProvider, SCSnapSendPreparer;

@interface SCPreviewConfiguration : NSObject <SCUcoAppliedImageContainer>
{
    _Bool _handsFree;
    _Bool _committed;
    NSMutableArray *_listeners;
    unsigned long long _modifiedKeys;
    _Bool _isFromSnapRecovery;
    _Bool _audioPresentInVideo;
    _Bool _audioEnabled;
    _Bool _fromFrontFacingCamera;
    _Bool _fromStoryReply;
    _Bool _withZooming;
    _Bool _savingDisabled;
    _Bool _savingToSnapchatGalleryDisabled;
    _Bool _fingerDownCaptureEnabled;
    _Bool _flashOn;
    _Bool _lowLightBoostEnabledBeforeCapture;
    _Bool _isSnappablesSnap;
    _Bool _hasBakedInSpectaclesLens;
    _Bool _enableRotationalPreview;
    _Bool _fromMischief;
    _Bool _scanInPreviewEnabled;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    unsigned long long _mediaType;
    double _mediaAspectRatio;
    long long _mediaOrientation;
    UIImage *_placeholderImage;
    UIView *_placeholderView;
    UIImage *_spectaclesStereoImage;
    UIImage *_fullScreenImage;
    SCFuture *_fullScreenImageFuture;
    CDUnknownBlockType _snapSaverImageProvider;
    SCFuture *_depthPhotoDataFuture;
    SCDepthPhotoAuxiliaryData *_depthPhotoData;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
    SCFuture *_recordedVideoFuture;
    id <SCPreviewVideoProvider> _videoProvider;
    id <SCPreviewVideoProvider> _stylizedVideoProvider;
    UIImage *_videoOverlayImage;
    UIImage *_videoFirstFrameImage;
    UIImage *_videoThumbnailImage;
    NSString *_audioFilterStyleId;
    unsigned long long _videoPlaybackQuality;
    long long _snapPageSource;
    long long _snapSource;
    long long _cameraFlipsWhileRecording;
    long long _captureSource;
    double _zoomingLevel;
    SCCroppingState *_croppingState;
    SOJUGalleryCropping *_serverGalleryCropping;
    NSArray *_captionsState;
    SCDrawingMetadata *_drawingMetadata;
    NSArray *_stickersState;
    id <SCPreviewFilterDataProvider> _filterDataProvider;
    SCInfoStickerDataProvider *_infoStickerDataProvider;
    SCReplyParameters *_replyParameters;
    SCDiscoverMediaBlob *_discoverSharedMessageBlob;
    long long _lowLightStatus;
    long long _cameraMode;
    long long _gridModeState;
    SCPreviewMagicMomentConfiguration *_magicMomentConfiguration;
    SCLensConfiguration *_liveCameraLensConfiguration;
    NSData *_snappablesData;
    id <SCLensRemoteAssetsUploadOperation> _lensAssetsUploadOperation;
    long long _faceCount;
    SCFuture *_snappablesDataFuture;
    SCFuture *_lensAssetsUploadOperationFuture;
    SCLensConfiguration *_previewLensConfiguration;
    UIImage *_previewLensAppliedImage;
    UIImage *_autoCreativeAppliedImage;
    NSArray *_recordingMetadata;
    NSArray *_recordingDeviceMotionData;
    NSArray *_recordingRawAccelerometerData;
    NSArray *_recordingRawGyroData;
    SCSpectaclesRectificationConfiguration *_spectaclesRectificationConfig;
    SCPreviewSnapchatGalleryConfiguration *_snapchatGalleryConfiguration;
    NSURL *_shareURL;
    NSDate *_creationTime;
    UIImage *_contextFilteredImage;
    UIImage *_stylizedImage;
    NSString *_snapCraftStyleId;
    NSString *_snapAttachmentUrl;
    NSString *_shazamSongTitle;
    NSString *_shazamArtistName;
    long long _shazamSource;
    SCMultiSnapConfiguration *_multiSnapConfiguration;
    SCFuture *_multiSnapConfigurationFuture;
    id <SCSnapSendPreparer> _snapSendPreparer;
    NSNumber *_bounceVideoOffset;
    NSString *_captureSessionID;
    SCManagedFrameHealthChecker *_frameHealthChecker;
    SCCameraDeepLinkMetadata *_deepLinkMetadata;
    SCQuickStickerImage *_quickStickerImage;
    NSString *_prefilledChatMessageInSendTo;
    SCCognacShareToCameraAttachment *_cognacAppAttachment;
    SCLensCameraPresenterConfiguration *_lensCameraPresenterConfiguration;
    struct CGSize _mediaSize;
    struct CGPoint _quickStickerCenter;
}

+ (double)maxScanPreviewImagePixelSize;
+ (double)maxPreviewImagePixelSize;
@property(retain, nonatomic) SCLensCameraPresenterConfiguration *lensCameraPresenterConfiguration; // @synthesize lensCameraPresenterConfiguration=_lensCameraPresenterConfiguration;
@property(retain, nonatomic) SCCognacShareToCameraAttachment *cognacAppAttachment; // @synthesize cognacAppAttachment=_cognacAppAttachment;
@property(retain, nonatomic) NSString *prefilledChatMessageInSendTo; // @synthesize prefilledChatMessageInSendTo=_prefilledChatMessageInSendTo;
@property(nonatomic) struct CGPoint quickStickerCenter; // @synthesize quickStickerCenter=_quickStickerCenter;
@property(retain, nonatomic) SCQuickStickerImage *quickStickerImage; // @synthesize quickStickerImage=_quickStickerImage;
@property(retain, nonatomic) SCCameraDeepLinkMetadata *deepLinkMetadata; // @synthesize deepLinkMetadata=_deepLinkMetadata;
@property(retain, nonatomic) SCManagedFrameHealthChecker *frameHealthChecker; // @synthesize frameHealthChecker=_frameHealthChecker;
@property(copy, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(retain, nonatomic) NSNumber *bounceVideoOffset; // @synthesize bounceVideoOffset=_bounceVideoOffset;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) _Bool scanInPreviewEnabled; // @synthesize scanInPreviewEnabled=_scanInPreviewEnabled;
@property(retain, nonatomic) SCFuture *multiSnapConfigurationFuture; // @synthesize multiSnapConfigurationFuture=_multiSnapConfigurationFuture;
@property(retain, nonatomic) SCMultiSnapConfiguration *multiSnapConfiguration; // @synthesize multiSnapConfiguration=_multiSnapConfiguration;
@property(nonatomic) long long shazamSource; // @synthesize shazamSource=_shazamSource;
@property(copy, nonatomic) NSString *shazamArtistName; // @synthesize shazamArtistName=_shazamArtistName;
@property(copy, nonatomic) NSString *shazamSongTitle; // @synthesize shazamSongTitle=_shazamSongTitle;
@property(nonatomic) _Bool fromMischief; // @synthesize fromMischief=_fromMischief;
@property(copy, nonatomic) NSString *snapAttachmentUrl; // @synthesize snapAttachmentUrl=_snapAttachmentUrl;
@property(copy, nonatomic) NSString *snapCraftStyleId; // @synthesize snapCraftStyleId=_snapCraftStyleId;
@property(retain, nonatomic) UIImage *stylizedImage; // @synthesize stylizedImage=_stylizedImage;
@property(retain, nonatomic) UIImage *contextFilteredImage; // @synthesize contextFilteredImage=_contextFilteredImage;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(nonatomic) _Bool enableRotationalPreview; // @synthesize enableRotationalPreview=_enableRotationalPreview;
@property(retain, nonatomic) SCPreviewSnapchatGalleryConfiguration *snapchatGalleryConfiguration; // @synthesize snapchatGalleryConfiguration=_snapchatGalleryConfiguration;
@property(retain, nonatomic) SCSpectaclesRectificationConfiguration *spectaclesRectificationConfig; // @synthesize spectaclesRectificationConfig=_spectaclesRectificationConfig;
@property(nonatomic) _Bool hasBakedInSpectaclesLens; // @synthesize hasBakedInSpectaclesLens=_hasBakedInSpectaclesLens;
@property(retain, nonatomic) NSArray *recordingRawGyroData; // @synthesize recordingRawGyroData=_recordingRawGyroData;
@property(retain, nonatomic) NSArray *recordingRawAccelerometerData; // @synthesize recordingRawAccelerometerData=_recordingRawAccelerometerData;
@property(retain, nonatomic) NSArray *recordingDeviceMotionData; // @synthesize recordingDeviceMotionData=_recordingDeviceMotionData;
@property(retain, nonatomic) NSArray *recordingMetadata; // @synthesize recordingMetadata=_recordingMetadata;
@property(retain, nonatomic) UIImage *autoCreativeAppliedImage; // @synthesize autoCreativeAppliedImage=_autoCreativeAppliedImage;
@property(retain, nonatomic) UIImage *previewLensAppliedImage; // @synthesize previewLensAppliedImage=_previewLensAppliedImage;
@property(retain, nonatomic) SCLensConfiguration *previewLensConfiguration; // @synthesize previewLensConfiguration=_previewLensConfiguration;
@property(retain, nonatomic) SCFuture *lensAssetsUploadOperationFuture; // @synthesize lensAssetsUploadOperationFuture=_lensAssetsUploadOperationFuture;
@property(retain, nonatomic) SCFuture *snappablesDataFuture; // @synthesize snappablesDataFuture=_snappablesDataFuture;
@property(nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property(nonatomic) _Bool isSnappablesSnap; // @synthesize isSnappablesSnap=_isSnappablesSnap;
@property(retain, nonatomic) id <SCLensRemoteAssetsUploadOperation> lensAssetsUploadOperation; // @synthesize lensAssetsUploadOperation=_lensAssetsUploadOperation;
@property(copy, nonatomic) NSData *snappablesData; // @synthesize snappablesData=_snappablesData;
@property(retain, nonatomic) SCLensConfiguration *liveCameraLensConfiguration; // @synthesize liveCameraLensConfiguration=_liveCameraLensConfiguration;
@property(retain, nonatomic) SCPreviewMagicMomentConfiguration *magicMomentConfiguration; // @synthesize magicMomentConfiguration=_magicMomentConfiguration;
@property(nonatomic) long long gridModeState; // @synthesize gridModeState=_gridModeState;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long lowLightStatus; // @synthesize lowLightStatus=_lowLightStatus;
@property(nonatomic) _Bool lowLightBoostEnabledBeforeCapture; // @synthesize lowLightBoostEnabledBeforeCapture=_lowLightBoostEnabledBeforeCapture;
@property(nonatomic) _Bool flashOn; // @synthesize flashOn=_flashOn;
@property(nonatomic) _Bool fingerDownCaptureEnabled; // @synthesize fingerDownCaptureEnabled=_fingerDownCaptureEnabled;
@property(nonatomic) _Bool savingToSnapchatGalleryDisabled; // @synthesize savingToSnapchatGalleryDisabled=_savingToSnapchatGalleryDisabled;
@property(nonatomic) _Bool savingDisabled; // @synthesize savingDisabled=_savingDisabled;
@property(retain, nonatomic) SCDiscoverMediaBlob *discoverSharedMessageBlob; // @synthesize discoverSharedMessageBlob=_discoverSharedMessageBlob;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(retain, nonatomic) SCInfoStickerDataProvider *infoStickerDataProvider; // @synthesize infoStickerDataProvider=_infoStickerDataProvider;
@property(retain, nonatomic) id <SCPreviewFilterDataProvider> filterDataProvider; // @synthesize filterDataProvider=_filterDataProvider;
@property(copy, nonatomic) NSArray *stickersState; // @synthesize stickersState=_stickersState;
@property(retain, nonatomic) SCDrawingMetadata *drawingMetadata; // @synthesize drawingMetadata=_drawingMetadata;
@property(retain, nonatomic) NSArray *captionsState; // @synthesize captionsState=_captionsState;
@property(retain, nonatomic) SOJUGalleryCropping *serverGalleryCropping; // @synthesize serverGalleryCropping=_serverGalleryCropping;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(nonatomic) double zoomingLevel; // @synthesize zoomingLevel=_zoomingLevel;
@property(nonatomic) _Bool withZooming; // @synthesize withZooming=_withZooming;
@property(nonatomic) long long captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) long long cameraFlipsWhileRecording; // @synthesize cameraFlipsWhileRecording=_cameraFlipsWhileRecording;
@property(nonatomic) _Bool fromStoryReply; // @synthesize fromStoryReply=_fromStoryReply;
@property(nonatomic) _Bool fromFrontFacingCamera; // @synthesize fromFrontFacingCamera=_fromFrontFacingCamera;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(nonatomic) long long snapPageSource; // @synthesize snapPageSource=_snapPageSource;
@property(nonatomic) unsigned long long videoPlaybackQuality; // @synthesize videoPlaybackQuality=_videoPlaybackQuality;
@property(copy, nonatomic) NSString *audioFilterStyleId; // @synthesize audioFilterStyleId=_audioFilterStyleId;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool audioPresentInVideo; // @synthesize audioPresentInVideo=_audioPresentInVideo;
@property(retain, nonatomic) UIImage *videoThumbnailImage; // @synthesize videoThumbnailImage=_videoThumbnailImage;
@property(retain, nonatomic) UIImage *videoFirstFrameImage; // @synthesize videoFirstFrameImage=_videoFirstFrameImage;
@property(retain, nonatomic) UIImage *videoOverlayImage; // @synthesize videoOverlayImage=_videoOverlayImage;
@property(retain, nonatomic) id <SCPreviewVideoProvider> stylizedVideoProvider; // @synthesize stylizedVideoProvider=_stylizedVideoProvider;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;
@property(retain, nonatomic) SCFuture *recordedVideoFuture; // @synthesize recordedVideoFuture=_recordedVideoFuture;
@property(nonatomic) _Bool isFromSnapRecovery; // @synthesize isFromSnapRecovery=_isFromSnapRecovery;
@property(retain, nonatomic) SCLensSnap3DAssetMetadata *snap3DAssetMetadata; // @synthesize snap3DAssetMetadata=_snap3DAssetMetadata;
@property(retain, nonatomic) SCDepthPhotoAuxiliaryData *depthPhotoData; // @synthesize depthPhotoData=_depthPhotoData;
@property(retain, nonatomic) SCFuture *depthPhotoDataFuture; // @synthesize depthPhotoDataFuture=_depthPhotoDataFuture;
@property(copy, nonatomic) CDUnknownBlockType snapSaverImageProvider; // @synthesize snapSaverImageProvider=_snapSaverImageProvider;
@property(retain, nonatomic) SCFuture *fullScreenImageFuture; // @synthesize fullScreenImageFuture=_fullScreenImageFuture;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIImage *spectaclesStereoImage; // @synthesize spectaclesStereoImage=_spectaclesStereoImage;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long mediaOrientation; // @synthesize mediaOrientation=_mediaOrientation;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) SCBatchCaptureConfiguration *batchCaptureConfiguration; // @synthesize batchCaptureConfiguration=_batchCaptureConfiguration;
- (void).cxx_destruct;
- (_Bool)_shouldUpdateKeyWithName:(id)arg1;
- (_Bool)shouldShowToolbarTimer;
- (_Bool)shouldDisplayTrackingObjectTooltipFromSnapConfiguration;
- (_Bool)isSnapSquareOrLandscape;
- (_Bool)isBatchCapture;
- (_Bool)isSnapWithLens;
- (_Bool)hasSavedBounceState;
- (_Bool)shouldShowMultiSnapView;
- (long long)productMediaType;
- (id)availableVideoProvider;
- (id)currentFullScreenImage;
- (id)fullScreenImageForOverlay:(long long)arg1;
- (_Bool)isQuickSend;
- (_Bool)isInteractiveSnapWithLiveCameraLens;
- (_Bool)isSnap3D;
- (_Bool)isOpenedFromMemoriesTabInMediaDrawer;
- (_Bool)isSnapFromScreenshot;
- (_Bool)isSnapFromKhaleesi;
- (_Bool)isSnapFromCameraRollItem;
- (_Bool)isSnapFromSnapchatGallery;
- (_Bool)isSnapFromiOSPhoto;
- (_Bool)isSnapFromDiscover;
- (_Bool)isSnapFromCamera;
- (_Bool)isSnapCreatedByPhoneCameraMomentAgo;
- (_Bool)isSnapFramed;
- (_Bool)isVideoSnap;
- (_Bool)isImageSnap;
@property(nonatomic) _Bool handsFree;
- (void)forceUpdateMultiSnapConfiguration:(id)arg1;
- (void)addOnCommitListener:(CDUnknownBlockType)arg1 forChangesToKeys:(unsigned long long)arg2;
- (_Bool)isCommitted;
- (void)commit;
- (id)init;
- (_Bool)shallQuickPostViewIncludesAppStory:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

