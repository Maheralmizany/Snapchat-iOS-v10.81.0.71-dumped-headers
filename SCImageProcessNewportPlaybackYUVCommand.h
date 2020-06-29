//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessNewportYUVCommand.h"

@interface SCImageProcessNewportPlaybackYUVCommand : SCImageProcessNewportYUVCommand
{
    int _cameraParam;
    int _chrominanceCameraParam;
    unsigned long long _stereoCamera;
}

- (void)bindChrominanceParamsWithPresentationTime:(CDStruct_1b6d18a9)arg1 outputHeight:(double)arg2;
- (void)bindLuminanceParamsWithPresentationTime:(CDStruct_1b6d18a9)arg1 outputHeight:(double)arg2;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithStereoCamera:(unsigned long long)arg1;

@end

