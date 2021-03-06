//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCLensLoggerConsumptionTrackingProviding, SCPostCaptureLensComponentManagerPool;

@interface SCImageProcessLensCommandFactory : NSObject <SCTraceEnabled>
{
    id <SCPostCaptureLensComponentManagerPool> _componentManagerPool;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
}

+ (id)exportCommandWithLensCommand:(id)arg1;
- (void).cxx_destruct;
- (id)_worldLensProcessingCommandWithLens:(id)arg1 metadata:(id)arg2;
- (id)videoLensProcessingCommandWithLens:(id)arg1 metadata:(id)arg2;
- (id)videoLensProcessingCommandWithEffectDescriptorContainer:(id)arg1 metadata:(id)arg2;
- (id)imageLensProcessingCommandWithLens:(id)arg1 metadata:(id)arg2 overriddenProcessingInfoConfiguration:(id)arg3;
- (id)imageLensProcessingCommandWithEffectDescriptorContainer:(id)arg1 metadata:(id)arg2 overriddenProcessingInfoConfiguration:(id)arg3;
- (id)imageSnap3DLensCommandWithLens:(id)arg1 metadata:(id)arg2 remoteAssetsProvider:(id)arg3 uriServiceProvider:(id)arg4 inMemoryAssetsProvider:(id)arg5 isExportMode:(_Bool)arg6;
- (id)initWithComponentManagerPool:(id)arg1 lensLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

