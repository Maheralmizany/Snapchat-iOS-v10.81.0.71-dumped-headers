//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

#import "SCMemoriesSyncStatusGeneratorDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface SCGalleryStorySnapCell : SCGalleryBaseStorySnapCell <SCMemoriesSyncStatusGeneratorDelegate>
{
    CAShapeLayer *_roundCornerMaskLayer;
    CAShapeLayer *_borderLayer;
    UIImageView *_lagunaIcon;
    UILabel *_videoDurationLabel;
    UIImageView *_badgeView;
}

- (void).cxx_destruct;
- (void)syncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)_createAndShowBadgeForSnap;
- (void)_setupVideoThumbnailLabelIfNeeded;
- (void)roundCorner:(unsigned long long)arg1;
- (void)updateUI;
- (id)sourceViewForOpera;
- (void)setViewModel:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 selectMode:(_Bool)arg3 userSession:(id)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

