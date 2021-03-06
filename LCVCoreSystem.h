//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LCVCoreSystem : NSObject
{
    struct unique_ptr<LabsCV::CoreSystem, std::__1::default_delete<LabsCV::CoreSystem>> pCoreSystem;
    struct function<void (const float &)> mProgressCallback;
    struct function<void (const LabsCV::DepthFrameData &)> mFrameOutputCallback;
    struct future<bool> tmpResult;
}

+ (id)concatSixdof:(id)arg1 toSixdof:(id)arg2;
+ (_Bool)concatLuts:(id)arg1 withRightLut:(id)arg2 withStereoLut:(id)arg3 concatHorizontally:(_Bool)arg4;
+ (_Bool)extractStabilizerData:(id)arg1 withRes:(struct CGSize)arg2 withAutoScale:(_Bool)arg3 withMinFovDeg:(double)arg4 withFocalLength:(double)arg5 withStabilizerOutput:(id)arg6;
+ (_Bool)extractStabilizerData:(id)arg1 withRes:(struct CGSize)arg2 withStabilizerOutput:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)extractDepthForPrimaryCamera:(long long)arg1 withFrameOutputCallback:(CDUnknownBlockType)arg2 withProgressCallback:(CDUnknownBlockType)arg3 prepareForStorage:(_Bool)arg4 extractBothSides:(_Bool)arg5 error:(id *)arg6;
- (void)extractDepthForPrimaryCamera:(long long)arg1 withFrameOutputCallback:(CDUnknownBlockType)arg2 withProgressCallback:(CDUnknownBlockType)arg3 prepareForStorage:(_Bool)arg4 error:(id *)arg5;
- (_Bool)extractCalibration:(id)arg1 error:(id *)arg2;
- (id)initWithExtractionParams:(_Bool)arg1 withCalibrationFilePath:(id)arg2 isSingleFrame:(_Bool)arg3 withClassifierDataPath:(id)arg4 withAdjustmentFilePath:(id)arg5 withContentFilePath:(id)arg6 withFrameCount:(long long)arg7 withVideoFps:(double)arg8 force30Hz:(_Bool)arg9 withImuDataRaw:(id)arg10;
- (id)initWithExtractionParams:(_Bool)arg1 withCalibrationFilePath:(id)arg2;

@end

