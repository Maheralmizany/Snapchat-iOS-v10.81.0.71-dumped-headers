//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureARBarBottomUIArbitrator-Protocol.h"
#import "SCFeatureCameraBottomUIContender-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SCFeatureCameraUIArbitrator;

@interface SCFeatureARBarBottomUIArbitratorImpl : NSObject <SCFeatureARBarBottomUIArbitrator, SCFeatureCameraBottomUIContender>
{
    NSArray *_contenders;
    NSMutableArray *_contenderConfigs;
    long long _requestedVisibleContenderIndex;
    _Bool _isVisible;
    id <SCFeatureCameraUIArbitrator> _cameraBottomUIArbitrator;
}

@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraBottomUIArbitrator; // @synthesize cameraBottomUIArbitrator=_cameraBottomUIArbitrator;
- (void).cxx_destruct;
- (long long)_indexOfContender:(id)arg1;
- (void)_hideBottomUIForContender:(id)arg1 animated:(_Bool)arg2;
- (void)_didSetNotVisible;
- (void)_showBottomUIForContender:(id)arg1 animated:(_Bool)arg2;
- (void)_didSetVisible;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
- (_Bool)isUIVisibleForContender:(id)arg1;
- (void)requestUIVisible:(_Bool)arg1 animated:(_Bool)arg2 forContender:(id)arg3;
- (id)initWithContenders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

