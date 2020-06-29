//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCGalleryEntryThumbnailGeneratorDelegate-Protocol.h"
#import "SCGalleryEntryViewCellProtocol-Protocol.h"
#import "SCProgressReceiving-Protocol.h"

@class NSArray, NSString, SCGalleryEntrySyncStatusGenerator, SCGalleryEntryThumbnailGenerator, SCLoadingIndicatorView, SCMemoriesStatusIcon, SCSentinel, SCSpectaclesImageView, SCUserSession, UIImage, UIImageView, UIView;
@protocol SCGalleryEntry;

@interface SCGalleryLagunaStoryViewCell : UICollectionViewCell <SCGalleryEntryThumbnailGeneratorDelegate, SCProgressReceiving, SCGalleryEntryViewCellProtocol>
{
    UIView *_wrapperView;
    UIView *_dayStorySelectedOverlayView;
    UIImageView *_backgroundImageView;
    SCSpectaclesImageView *_dayStoryImageView;
    id <SCGalleryEntry> _lagunaStoryEntry;
    NSArray *_snaps;
    SCLoadingIndicatorView *_spinner;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    _Bool _isEntryClientCompatible;
    SCMemoriesStatusIcon *_incompatibleIcon;
    double _delayOfUpdatingStoryThumbnail;
    _Bool _contentsUnloaded;
    _Bool _selectMode;
    SCSentinel *_sentinel;
    SCUserSession *_userSession;
    CDStruct_bac8f6e9 _mediaScenePath;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    _Bool _selected;
    struct CGAffineTransform _dayStorySelectionScale;
    struct CGAffineTransform _dayStoryLongPressScale;
    _Bool _shouldCrossFade;
    UIImage *_firstThumbnail;
    int _firstThumbnailOrientation;
}

- (void).cxx_destruct;
- (void)_showIncompatibleIcon:(_Bool)arg1;
- (void)reporterWithIdentifier:(id)arg1 didReportProgress:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)_dayStoryImageViewTransform;
- (void)_stopLoading;
- (void)_startLoading;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)setSelectMode:(_Bool)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (unsigned long long)interactionMode;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)roundCorner:(unsigned long long)arg1;
- (void)setEntry:(id)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentsUnloaded:(_Bool)arg4 selectMode:(_Bool)arg5 userSession:(id)arg6;
- (void)_setFullImage:(id)arg1 forSnap:(id)arg2;
- (void)setTransitioningInitialImage:(id)arg1;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
