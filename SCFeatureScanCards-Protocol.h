//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCFeatureScanCardsCameraDelegate, SCFeatureSceneIntelligenceLensDelegate, SCMainCameraScanDelegate;

@protocol SCFeatureScanCards <NSObject>
@property(nonatomic) __weak id <SCFeatureSceneIntelligenceLensDelegate> lensDelegate;
@property(nonatomic) __weak id <SCMainCameraScanDelegate> mainCameraScanDelegate;
@property(nonatomic) __weak id <SCFeatureScanCardsCameraDelegate> delegate;
- (void)stopScanningAnimation;
- (void)setToState:(unsigned long long)arg1;
@end

