//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCMemoriesCellSelecting-Protocol.h"
#import "SCMemoriesCellTransitioning-Protocol.h"
#import "SCMemoriesCellUpdating-Protocol.h"
#import "SCMemoriesSyncStatusGeneratorDelegate-Protocol.h"

@class NSString, SCGalleryEntrySyncStatusGenerator, SCLoadingIndicatorView, SCMemoriesSelectionView, SCMemoriesSnapCellViewModel, SCMemoriesStatusIcon, SCUserSession, UIImageView, UIView;
@protocol SCCachingMediaRequest, SCCanceling;

@interface SCGalleryBaseStorySnapCell : UICollectionViewCell <SCMemoriesCellTransitioning, SCMemoriesCellUpdating, SCMemoriesCellSelecting, SCMemoriesSyncStatusGeneratorDelegate>
{
    id <SCCachingMediaRequest> _mediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    SCMemoriesSelectionView *_selectionView;
    SCLoadingIndicatorView *_loadingIndicator;
    CDUnknownBlockType _miniThumbnailBlock;
    SCMemoriesStatusIcon *_incompatibleIcon;
    _Bool _isActionMenu;
    UIImageView *_imageView;
    SCMemoriesSnapCellViewModel *_viewModel;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    UIView *_containerView;
    SCUserSession *_userSession;
    CDStruct_bac8f6e9 _mediaScenePath;
}

@property(readonly, nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCGalleryEntrySyncStatusGenerator *syncStatusGenerator; // @synthesize syncStatusGenerator=_syncStatusGenerator;
@property(nonatomic) _Bool isActionMenu; // @synthesize isActionMenu=_isActionMenu;
@property(readonly, nonatomic) __weak SCMemoriesSnapCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (unsigned long long)interactionMode;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)syncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)setTransitioningInitialImage:(id)arg1;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)_addIncompatibleIcon;
- (void)_shouldShowLoadingIndicator:(_Bool)arg1;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_cancelMiniThumbnailBlock;
- (void)_updateLoadingIndicator:(_Bool)arg1;
- (void)_requestImage:(id)arg1;
- (void)_requestThumbnail:(id)arg1;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)animateTap:(_Bool)arg1;
- (id)sourceViewForOpera;
- (void)updateIcon;
- (void)updateUI;
- (void)setViewModel:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 selectMode:(_Bool)arg3 userSession:(id)arg4;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

