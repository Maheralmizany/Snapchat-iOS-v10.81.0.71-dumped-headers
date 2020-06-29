//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAnimatorLoadingPersonProcessor.h"

@class NSArray, NSError, NSOperationQueue, NSString, NSValue, SPAnimatorLoadingFaceNeutralizationOperation, SPAnimatorLoadingGenderDetectionOperation, SPAnimatorLoadingPreprocessingOperation, SPAnimatorLoadingResultCacheOperation, SPAnimatorLoadingResultRestoreOperation, SPAnimatorLoadingSegmentationOperation, SPBeautificationOperation, SPFaceDetectionResult, SPGenderResult, SPImage, SPLandmarksExtractionOperation, SPLandmarksValidationOperation, SPPersonTechAnalytics, SPProcessorsManager, SPSharedQueuesHolder, UIImage;
@protocol SPAnalytics, SPImageFetcher, SPRecentImagesService, SPSettings, SPStringsProvider;

@interface SPAnimatorLoadingSinglePersonProcessor : SPAnimatorLoadingPersonProcessor
{
    _Bool _isFromCache;
    _Bool _isResultCached;
    _Bool _imageValidated;
    _Bool _saveImageToCameraRoll;
    unsigned long long _state;
    NSArray *_results;
    NSError *_error;
    NSArray *_personTechAnalyticsResults;
    id <SPImageFetcher> _ffImageFetcher;
    SPImage *_ffImage;
    UIImage *_portraitImage;
    NSValue *_portraitFaceRect;
    UIImage *_faceCenteredImage;
    unsigned long long _faceMode;
    UIImage *_backgroundImage;
    SPGenderResult *_genderResult;
    id <SPSettings> _settings;
    id <SPAnalytics> _analytics;
    id <SPRecentImagesService> _recentImagesService;
    SPSharedQueuesHolder *_sharedQueuesHolder;
    id <SPStringsProvider> _stringsProvider;
    SPPersonTechAnalytics *_personTechAnalytics;
    NSOperationQueue *_operationQueue;
    SPAnimatorLoadingResultRestoreOperation *_resultRestoreOperation;
    SPAnimatorLoadingSegmentationOperation *_segmentationOperation;
    SPAnimatorLoadingFaceNeutralizationOperation *_faceNeutralizationOperation;
    SPLandmarksExtractionOperation *_landmarksOperation;
    SPLandmarksExtractionOperation *_neutralizedFacelandmarksOperation;
    SPLandmarksExtractionOperation *_beutifiedFaceLandmarksOperation;
    SPAnimatorLoadingPreprocessingOperation *_preprocessingOperation;
    SPAnimatorLoadingGenderDetectionOperation *_genderOperation;
    SPBeautificationOperation *_aiBeautificationOperation;
    SPLandmarksValidationOperation *_landmarksValidationOperation;
    SPAnimatorLoadingResultCacheOperation *_resultCacheOperation;
    NSArray *_resultLandmarks;
    NSArray *_landmarksBeforeNeutralization;
    SPFaceDetectionResult *_faceDetectionResult;
    UIImage *_preprocessedImage;
    NSString *_lensId;
    NSString *_appliedLensId;
    SPProcessorsManager *_processorsManager;
}

@property(retain, nonatomic) SPProcessorsManager *processorsManager; // @synthesize processorsManager=_processorsManager;
@property(retain, nonatomic) NSString *appliedLensId; // @synthesize appliedLensId=_appliedLensId;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) _Bool saveImageToCameraRoll; // @synthesize saveImageToCameraRoll=_saveImageToCameraRoll;
@property(retain, nonatomic) UIImage *preprocessedImage; // @synthesize preprocessedImage=_preprocessedImage;
@property(retain, nonatomic) SPFaceDetectionResult *faceDetectionResult; // @synthesize faceDetectionResult=_faceDetectionResult;
@property(retain, nonatomic) NSArray *landmarksBeforeNeutralization; // @synthesize landmarksBeforeNeutralization=_landmarksBeforeNeutralization;
@property(retain, nonatomic) NSArray *resultLandmarks; // @synthesize resultLandmarks=_resultLandmarks;
@property(retain, nonatomic) SPAnimatorLoadingResultCacheOperation *resultCacheOperation; // @synthesize resultCacheOperation=_resultCacheOperation;
@property(retain, nonatomic) SPLandmarksValidationOperation *landmarksValidationOperation; // @synthesize landmarksValidationOperation=_landmarksValidationOperation;
@property(retain, nonatomic) SPBeautificationOperation *aiBeautificationOperation; // @synthesize aiBeautificationOperation=_aiBeautificationOperation;
@property(retain, nonatomic) SPAnimatorLoadingGenderDetectionOperation *genderOperation; // @synthesize genderOperation=_genderOperation;
@property(retain, nonatomic) SPAnimatorLoadingPreprocessingOperation *preprocessingOperation; // @synthesize preprocessingOperation=_preprocessingOperation;
@property(retain, nonatomic) SPLandmarksExtractionOperation *beutifiedFaceLandmarksOperation; // @synthesize beutifiedFaceLandmarksOperation=_beutifiedFaceLandmarksOperation;
@property(retain, nonatomic) SPLandmarksExtractionOperation *neutralizedFacelandmarksOperation; // @synthesize neutralizedFacelandmarksOperation=_neutralizedFacelandmarksOperation;
@property(retain, nonatomic) SPLandmarksExtractionOperation *landmarksOperation; // @synthesize landmarksOperation=_landmarksOperation;
@property(retain, nonatomic) SPAnimatorLoadingFaceNeutralizationOperation *faceNeutralizationOperation; // @synthesize faceNeutralizationOperation=_faceNeutralizationOperation;
@property(retain, nonatomic) SPAnimatorLoadingSegmentationOperation *segmentationOperation; // @synthesize segmentationOperation=_segmentationOperation;
@property(retain, nonatomic) SPAnimatorLoadingResultRestoreOperation *resultRestoreOperation; // @synthesize resultRestoreOperation=_resultRestoreOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SPPersonTechAnalytics *personTechAnalytics; // @synthesize personTechAnalytics=_personTechAnalytics;
@property(nonatomic) _Bool imageValidated; // @synthesize imageValidated=_imageValidated;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) SPSharedQueuesHolder *sharedQueuesHolder; // @synthesize sharedQueuesHolder=_sharedQueuesHolder;
@property(retain, nonatomic) id <SPRecentImagesService> recentImagesService; // @synthesize recentImagesService=_recentImagesService;
@property(retain, nonatomic) id <SPAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) SPGenderResult *genderResult; // @synthesize genderResult=_genderResult;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool isResultCached; // @synthesize isResultCached=_isResultCached;
- (unsigned long long)faceMode;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) UIImage *faceCenteredImage; // @synthesize faceCenteredImage=_faceCenteredImage;
@property(retain, nonatomic) NSValue *portraitFaceRect; // @synthesize portraitFaceRect=_portraitFaceRect;
@property(retain, nonatomic) UIImage *portraitImage; // @synthesize portraitImage=_portraitImage;
@property(retain, nonatomic) SPImage *ffImage; // @synthesize ffImage=_ffImage;
@property(retain, nonatomic) id <SPImageFetcher> ffImageFetcher; // @synthesize ffImageFetcher=_ffImageFetcher;
@property(retain, nonatomic) NSArray *personTechAnalyticsResults; // @synthesize personTechAnalyticsResults=_personTechAnalyticsResults;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)cleanMemory;
- (void)addTechAnalyticsData:(id)arg1;
- (id)cacheKeyFromImageIdentifier:(id)arg1 lensId:(id)arg2;
- (id)userFriendlyErrorFromTechnical:(id)arg1;
- (void)tryToCacheResult;
- (void)saveImageToGalleryIfNeeded;
- (void)cancel;
- (void)startResultCacheOperation;
- (void)startSegmentationOperation;
- (void)startLandmarkOnBeautifiedFace;
- (void)startAIBeautificationOperation;
- (void)startLandmarksOperationOnNeutralFace;
- (void)startFaceNeutralizationOperation;
- (void)startPreprocessingOperation;
- (void)startGenderDetectionOperation;
- (void)startLandmarksValidationOperation;
- (void)startLandmarksOperation;
- (void)startResultRestorationOperation;
- (void)processImageWithLensId:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithImageFetcher:(id)arg1 ffImage:(id)arg2 preprocessedImage:(id)arg3 faceDetectionResult:(id)arg4 personTechAnalytics:(id)arg5 saveImageToCameraRoll:(_Bool)arg6;

@end

