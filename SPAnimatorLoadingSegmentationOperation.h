//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "F2FNNOperation.h"

@class NSArray, NSError, NSObject, SPAnimatorLoadingPreprocessingResult, SPFaceSegmentation, SPFaceSegmentationLogger, UIImage;
@protocol OS_dispatch_semaphore;

@interface SPAnimatorLoadingSegmentationOperation : F2FNNOperation
{
    NSError *_error;
    SPFaceSegmentation *_faceSegmentation;
    NSArray *_results;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    UIImage *_sourceImage;
    UIImage *_beautifiedImage;
    UIImage *_depthImage;
    NSArray *_landmarks;
    NSArray *_landmarksBeforeNeutralization;
    SPAnimatorLoadingPreprocessingResult *_preprocessingResult;
    SPFaceSegmentationLogger *_logger;
}

@property(retain, nonatomic) SPFaceSegmentationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPAnimatorLoadingPreprocessingResult *preprocessingResult; // @synthesize preprocessingResult=_preprocessingResult;
@property(retain, nonatomic) NSArray *landmarksBeforeNeutralization; // @synthesize landmarksBeforeNeutralization=_landmarksBeforeNeutralization;
@property(retain, nonatomic) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) UIImage *depthImage; // @synthesize depthImage=_depthImage;
@property(retain, nonatomic) UIImage *beautifiedImage; // @synthesize beautifiedImage=_beautifiedImage;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) SPFaceSegmentation *faceSegmentation; // @synthesize faceSegmentation=_faceSegmentation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)segmentImage;
- (void)performOperation;
- (id)initWithSourceImage:(id)arg1 preprocessingResult:(id)arg2 beautifiedImage:(id)arg3 landmarks:(id)arg4 landmarksBeforeNeutralization:(id)arg5 logger:(id)arg6;

@end

