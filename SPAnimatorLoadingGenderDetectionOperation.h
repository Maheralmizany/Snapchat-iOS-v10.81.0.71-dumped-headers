//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "F2FNNOperation.h"

@class NSError, NSObject, NSValue, SPGenderResult, UIImage;
@protocol OS_dispatch_semaphore, SPGenderClassifier;

@interface SPAnimatorLoadingGenderDetectionOperation : F2FNNOperation
{
    NSError *_error;
    id <SPGenderClassifier> _genderClassifier;
    SPGenderResult *_genderResult;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    UIImage *_image;
    NSValue *_faceRectValue;
}

@property(retain, nonatomic) NSValue *faceRectValue; // @synthesize faceRectValue=_faceRectValue;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) SPGenderResult *genderResult; // @synthesize genderResult=_genderResult;
@property(retain, nonatomic) id <SPGenderClassifier> genderClassifier; // @synthesize genderClassifier=_genderClassifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithImage:(id)arg1 faceRectValue:(id)arg2;

@end
