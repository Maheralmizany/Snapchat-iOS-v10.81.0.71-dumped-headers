//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LCVCameraData, NSArray;
@protocol LSAOfflineDepthDataProviderProtocol, LSAOfflineSixDofDataProviderProtocol;

@interface SCImageProcessLensCommandSpectaclesDepthData : NSObject
{
    id <LSAOfflineDepthDataProviderProtocol> _depth;
    id <LSAOfflineSixDofDataProviderProtocol> _sixDofProvider;
    NSArray *_alignmentData;
    LCVCameraData *_depthCameraData;
    NSArray *_stabilizationFrames;
}

@property(readonly, nonatomic) NSArray *stabilizationFrames; // @synthesize stabilizationFrames=_stabilizationFrames;
@property(readonly, nonatomic) LCVCameraData *depthCameraData; // @synthesize depthCameraData=_depthCameraData;
@property(readonly, nonatomic) NSArray *alignmentData; // @synthesize alignmentData=_alignmentData;
@property(readonly, nonatomic) id <LSAOfflineSixDofDataProviderProtocol> sixDofProvider; // @synthesize sixDofProvider=_sixDofProvider;
@property(readonly, nonatomic) id <LSAOfflineDepthDataProviderProtocol> depth; // @synthesize depth=_depth;
- (void).cxx_destruct;
- (id)initWithDepth:(id)arg1 sixDofProvider:(id)arg2 alignmentData:(id)arg3 depthCameraData:(id)arg4 stabilizationFrames:(id)arg5;

@end

