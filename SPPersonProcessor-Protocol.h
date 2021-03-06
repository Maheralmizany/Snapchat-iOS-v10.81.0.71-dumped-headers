//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSNumber, NSString, NSValue, SPGenderResult, SPHairStyleModel, SPImage, UIImage;
@protocol SPImageFetcher, SPPersonProcessorOutput;

@protocol SPPersonProcessor <NSObject>
@property(retain, nonatomic) NSString *appliedLensId;
@property(retain, nonatomic) NSString *lensId;
@property(nonatomic) _Bool saveImageToCameraRoll;
@property(nonatomic) _Bool skipValidation;
@property(readonly, nonatomic) NSNumber *faceMode;
@property(readonly, nonatomic) unsigned long long faceInitialMode;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) NSValue *portraitFaceRect;
@property(readonly, nonatomic) UIImage *portraitImage;
@property(readonly, nonatomic) UIImage *faceCenteredImage;
@property(readonly, nonatomic) _Bool isResultCached;
@property(readonly, nonatomic) _Bool isFromCache;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *results;
@property(readonly, nonatomic) SPHairStyleModel *hairStyle;
@property(readonly, nonatomic) SPGenderResult *genderResult;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) SPImage *ffImage;
@property(readonly, nonatomic) id <SPImageFetcher> ffImageFetcher;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *personTechAnalyticsResults;
- (void)setupHairStyle:(SPHairStyleModel *)arg1;
- (void)setupGender:(unsigned long long)arg1;
- (void)updatePersonsAnalyticsImageMetadata;
- (void)processImageWithLensId:(NSString *)arg1;
- (void)processImage;
- (void)removeOutput:(id <SPPersonProcessorOutput>)arg1;
- (void)addOutput:(id <SPPersonProcessorOutput>)arg1;
@end

