//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

@class UIImageView, UILabel;

@interface SCGalleryLagunaStorySnapCell : SCGalleryBaseStorySnapCell
{
    UIImageView *_highlightIcon;
    UIImageView *_imageOverlay;
    UILabel *_videoDurationLabel;
}

- (void).cxx_destruct;
- (void)_setupVideoThumbnailLabelIfNeeded;
- (void)updateIcon;
- (void)updateUI;
- (id)sourceViewForOpera;
- (void)setViewModel:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 selectMode:(_Bool)arg3 userSession:(id)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
