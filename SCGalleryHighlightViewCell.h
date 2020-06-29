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

@class CAShapeLayer, NSString, SCGalleryEntrySyncStatusGenerator, SCUserSession, UIButton, UIImageView, UILabel, UIView;
@protocol SCCachingMediaRequest, SCCanceling, SCGalleryHighlightViewCellDelegate, SCGallerySnap;

@interface SCGalleryHighlightViewCell : UICollectionViewCell <SCMemoriesCellUpdating, SCMemoriesCellSelecting, SCMemoriesCellTransitioning, SCMemoriesSyncStatusGeneratorDelegate>
{
    id <SCGallerySnap> _snap;
    SCUserSession *_userSession;
    id <SCCachingMediaRequest> _mediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    UIView *_container;
    UIImageView *_imageView;
    UIImageView *_lagunaIcon;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    CDStruct_bac8f6e9 _mediaScenePath;
    CAShapeLayer *_roundCornerMaskLayer;
    struct CGSize _targetSize;
    UIButton *_deleteButton;
    unsigned long long _cornerToRound;
    UILabel *_videoDurationLabel;
    UIImageView *_badgeView;
    id <SCGalleryHighlightViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryHighlightViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)syncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)setTransitioningInitialImage:(id)arg1;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)setSelectMode:(_Bool)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (unsigned long long)interactionMode;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)_createAndShowBadgeForSnap:(id)arg1;
- (void)_setupVideoThumbnailLabelIfNeeded:(double)arg1;
- (void)_requestImage:(id)arg1;
- (void)_requestThumbnail:(id)arg1;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)roundCorner:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setSnap:(id)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentsUnloaded:(_Bool)arg4 userSession:(id)arg5;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_handleDelete;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

