//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPModuleInitialState-Protocol.h"

@class NSString, UIColor;

@interface SPCameraModuleInitialState : NSObject <SPModuleInitialState>
{
    double _maskScaleWidthFactor;
    double _maskHeightToWidthAspect;
    double _maskCenterYInset;
    UIColor *_faceFoundMaskColor;
    UIColor *_faceNotFoundMaskColor;
}

@property(readonly, nonatomic) UIColor *faceNotFoundMaskColor; // @synthesize faceNotFoundMaskColor=_faceNotFoundMaskColor;
@property(readonly, nonatomic) UIColor *faceFoundMaskColor; // @synthesize faceFoundMaskColor=_faceFoundMaskColor;
@property(readonly, nonatomic) double maskCenterYInset; // @synthesize maskCenterYInset=_maskCenterYInset;
@property(readonly, nonatomic) double maskHeightToWidthAspect; // @synthesize maskHeightToWidthAspect=_maskHeightToWidthAspect;
@property(readonly, nonatomic) double maskScaleWidthFactor; // @synthesize maskScaleWidthFactor=_maskScaleWidthFactor;
- (void).cxx_destruct;
- (id)initWithMaskScaleWidthFactor:(double)arg1 maskHeightToWidthAspect:(double)arg2 maskCenterYInset:(double)arg3 faceFoundMaskColor:(id)arg4 faceNotFoundMaskColor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

