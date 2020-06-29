//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMagicMomentDepthProvider-Protocol.h"

@class NSString, SCSpectaclesAuxiliaryContentStore;
@protocol SCGallerySnap, SCSpectaclesOfflineDepthFrameQualityProvider;

@interface SCSpectaclesAuxiliaryContentMagicMomentDepthProvider : NSObject <SCMagicMomentDepthProvider>
{
    id <SCGallerySnap> _snap;
    SCSpectaclesAuxiliaryContentStore *_store;
    id <SCSpectaclesOfflineDepthFrameQualityProvider> _depthProvider;
}

- (void).cxx_destruct;
- (id)_depthProvider;
- (long long)depthStatusForFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)depthStatusForMedia;
- (void)prioritizeDepth;
- (void)awaitDepthWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSnap:(id)arg1 auxiliaryContentStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

