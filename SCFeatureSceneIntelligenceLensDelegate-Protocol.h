//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureShazamTrigger-Protocol.h"

@class NSString, SCMachineReadableCodeResult;
@protocol SCLensCameraScreenDataProviderProtocol;

@protocol SCFeatureSceneIntelligenceLensDelegate <SCFeatureShazamTrigger>
- (void)showScanResults:(SCMachineReadableCodeResult *)arg1;
- (void)endDisplayingScanningAnimationWithSuccess:(_Bool)arg1;
- (void)beginDisplayingScanningAnimationFromPoint:(struct CGPoint)arg1;
- (void)setLensIdToSelectIfNoOtherLensSelected:(NSString *)arg1;
- (void)setLensIdToSelect:(NSString *)arg1;
- (void)setLensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg1;
@end

