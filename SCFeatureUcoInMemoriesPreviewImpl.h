//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureUcoInMemoriesPreview-Protocol.h"

@class NSString;

@interface SCFeatureUcoInMemoriesPreviewImpl : SCFeature <SCFeatureUcoInMemoriesPreview>
{
}

- (void)restoreUcoGallerySnapWithUcoAppliedImageContainer:(id)arg1 overlayFormat:(id)arg2;
- (_Bool)snapOverlayContainsUco:(id)arg1;
- (void)processUcoBlobImageContainerForExport:(id)arg1 ucoAppliedImage:(id)arg2 mediaOverlayArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

