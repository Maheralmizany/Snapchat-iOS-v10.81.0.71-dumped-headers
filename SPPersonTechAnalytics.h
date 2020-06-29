//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSValue, SPFaceDetectionResult, SPTechAnalyticsResult;

@interface SPPersonTechAnalytics : NSObject <NSCoding>
{
    NSArray *_croppedLandmarks;
    NSArray *_landmarks;
    NSArray *_headLandmarks;
    NSDictionary *_imageMetadata;
    NSNumber *_faceInRect;
    NSNumber *_wasNeutralFace;
    NSNumber *_neutralFace;
    NSNumber *_mouthIsOpen;
    NSNumber *_faceYawAllowed;
    NSNumber *_faceRollAllowed;
    SPTechAnalyticsResult *_preprocessingResult;
    NSString *_gender;
    NSNumber *_girlProbability;
    NSNumber *_isDepthMapUsed;
    NSNumber *_isFromCache;
    NSNumber *_isBeautified;
    NSNumber *_isDuoMode;
    NSValue *_cropRectOnSource;
    NSValue *_croppedImageSize;
    NSValue *_originalImageSize;
    NSNumber *_isNeutralizationApplied;
    SPFaceDetectionResult *_originalFaceDetectionResult;
    NSNumber *_headYawAngle;
    NSNumber *_headRollAngle;
    NSNumber *_headPitchAngle;
    NSNumber *_faceIlluminationLevel;
    NSNumber *_faceEvenIlluminationFactor;
    NSNumber *_faceRectHeight;
    NSNumber *_faceRectWidth;
    NSArray *_imageFilenames;
    NSArray *_imagesWaitingForSending;
}

@property(retain, nonatomic) NSArray *imagesWaitingForSending; // @synthesize imagesWaitingForSending=_imagesWaitingForSending;
@property(retain, nonatomic) NSArray *imageFilenames; // @synthesize imageFilenames=_imageFilenames;
@property(retain, nonatomic) NSNumber *faceRectWidth; // @synthesize faceRectWidth=_faceRectWidth;
@property(retain, nonatomic) NSNumber *faceRectHeight; // @synthesize faceRectHeight=_faceRectHeight;
@property(retain, nonatomic) NSNumber *faceEvenIlluminationFactor; // @synthesize faceEvenIlluminationFactor=_faceEvenIlluminationFactor;
@property(retain, nonatomic) NSNumber *faceIlluminationLevel; // @synthesize faceIlluminationLevel=_faceIlluminationLevel;
@property(retain, nonatomic) NSNumber *headPitchAngle; // @synthesize headPitchAngle=_headPitchAngle;
@property(retain, nonatomic) NSNumber *headRollAngle; // @synthesize headRollAngle=_headRollAngle;
@property(retain, nonatomic) NSNumber *headYawAngle; // @synthesize headYawAngle=_headYawAngle;
@property(retain, nonatomic) SPFaceDetectionResult *originalFaceDetectionResult; // @synthesize originalFaceDetectionResult=_originalFaceDetectionResult;
@property(retain, nonatomic) NSNumber *isNeutralizationApplied; // @synthesize isNeutralizationApplied=_isNeutralizationApplied;
@property(retain, nonatomic) NSValue *originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(retain, nonatomic) NSValue *croppedImageSize; // @synthesize croppedImageSize=_croppedImageSize;
@property(retain, nonatomic) NSValue *cropRectOnSource; // @synthesize cropRectOnSource=_cropRectOnSource;
@property(retain, nonatomic) NSNumber *isDuoMode; // @synthesize isDuoMode=_isDuoMode;
@property(retain, nonatomic) NSNumber *isBeautified; // @synthesize isBeautified=_isBeautified;
@property(retain, nonatomic) NSNumber *isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) NSNumber *isDepthMapUsed; // @synthesize isDepthMapUsed=_isDepthMapUsed;
@property(retain, nonatomic) NSNumber *girlProbability; // @synthesize girlProbability=_girlProbability;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) SPTechAnalyticsResult *preprocessingResult; // @synthesize preprocessingResult=_preprocessingResult;
@property(retain, nonatomic) NSNumber *faceRollAllowed; // @synthesize faceRollAllowed=_faceRollAllowed;
@property(retain, nonatomic) NSNumber *faceYawAllowed; // @synthesize faceYawAllowed=_faceYawAllowed;
@property(retain, nonatomic) NSNumber *mouthIsOpen; // @synthesize mouthIsOpen=_mouthIsOpen;
@property(retain, nonatomic) NSNumber *neutralFace; // @synthesize neutralFace=_neutralFace;
@property(retain, nonatomic) NSNumber *wasNeutralFace; // @synthesize wasNeutralFace=_wasNeutralFace;
@property(retain, nonatomic) NSNumber *faceInRect; // @synthesize faceInRect=_faceInRect;
@property(copy, nonatomic) NSDictionary *imageMetadata; // @synthesize imageMetadata=_imageMetadata;
@property(retain, nonatomic) NSArray *headLandmarks; // @synthesize headLandmarks=_headLandmarks;
@property(retain, nonatomic) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) NSArray *croppedLandmarks; // @synthesize croppedLandmarks=_croppedLandmarks;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryReprersentation;
- (id)initWithDictionary:(id)arg1;

@end

