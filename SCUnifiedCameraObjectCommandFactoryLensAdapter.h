//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedCameraObjectCommandFactory-Protocol.h"

@class NSString, SCImageProcessCommand, SCImageProcessLensCommandFactory;
@protocol SCBundledLensProvider;

@interface SCUnifiedCameraObjectCommandFactoryLensAdapter : NSObject <SCUnifiedCameraObjectCommandFactory>
{
    SCImageProcessLensCommandFactory *_imageProcessLensCommandFactory;
    SCImageProcessCommand *_cachedSmoothingCommand;
    id <SCBundledLensProvider> _bundledLensProvider;
}

- (void).cxx_destruct;
- (id)videoProcessingCommandWithLens:(id)arg1 metadata:(id)arg2;
- (id)videoProcessingCommandWithEffectDescriptorContainer:(id)arg1 metadata:(id)arg2;
- (id)smoothingCommand;
- (id)imageProcessingCommandWithLens:(id)arg1 isColorFilter:(_Bool)arg2 metadata:(id)arg3 overriddenProcessingInfoConfiguration:(id)arg4 isExportable:(_Bool)arg5;
- (id)imageProcessingCommandWithEffectDescriptorContainer:(id)arg1 metadata:(id)arg2 overriddenProcessingInfoConfiguration:(id)arg3;
- (id)exportCommandWithCommand:(id)arg1;
- (id)initWithImageProcessLensCommandFactory:(id)arg1 bundledLensProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

