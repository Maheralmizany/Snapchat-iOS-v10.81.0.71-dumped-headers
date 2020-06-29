//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVDepthData, AVPortraitEffectsMatte, UIImage;

@interface SCDepthPhotoAuxiliaryData : NSObject
{
    UIImage *_originalImage;
    AVDepthData *_depthData;
    long long _depthDataOrientation;
    AVPortraitEffectsMatte *_portraitEffectsMatte;
}

+ (id)createFromDepthPhotoData:(id)arg1 originalImage:(id)arg2;
@property(readonly, nonatomic) AVPortraitEffectsMatte *portraitEffectsMatte; // @synthesize portraitEffectsMatte=_portraitEffectsMatte;
@property(readonly, nonatomic) long long depthDataOrientation; // @synthesize depthDataOrientation=_depthDataOrientation;
@property(readonly, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(readonly, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void).cxx_destruct;
- (id)initWithOriginalImage:(id)arg1 depthData:(id)arg2 depthDataOrientation:(long long)arg3 portraitEffectsMatte:(id)arg4;
- (id)initWithOriginalImage:(id)arg1 depthData:(id)arg2 depthDataOrientation:(long long)arg3;
- (id)initWithOriginalImage:(id)arg1;

@end
