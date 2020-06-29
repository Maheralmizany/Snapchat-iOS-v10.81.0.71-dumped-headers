//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessNewportBoomboxRGBCommand : SCImageProcessCommand
{
    int _cameraParam;
    int _lensCenterXParam;
    int _lensCenterYParam;
    int _radiusParam;
    unsigned long long _stereoCamera;
    _Bool _overrideOrientationToDownMirrored;
}

@property(nonatomic) _Bool overrideOrientationToDownMirrored; // @synthesize overrideOrientationToDownMirrored=_overrideOrientationToDownMirrored;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithStereoCamera:(unsigned long long)arg1;

@end

