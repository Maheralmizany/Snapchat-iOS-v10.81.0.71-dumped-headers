//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable-Protocol.h"
#import "SCDiscoverFeedStoryTileWithVideoConfigurable-Protocol.h"
#import "SCDiscoverFeedTileOperaBaseViewProviding-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "SCViewportConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugView, SCDiscoverFeedLabelOverlayView, SCEventListenerAnnouncer, SCLazy, SCNetworkImageView, SCNetworkVideo, SCNetworkVideoView, SCRoundedCornerContainerView, UIView;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading;

@interface SCDiscoverFeedStoryCollectionViewCell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCEventAnnouncing, SCEventListener, SCRoundedCornerConfigurable, SCViewModelConfigurable, SCActionable, SCViewportConfigurable, SCDiscoverFeedStoryTileWithVideoConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable, SCDiscoverFeedTileOperaBaseViewProviding>
{
    UIView *_backgroundView;
    SCRoundedCornerContainerView *_thumbnailCornerContainer;
    UIView *_thumbnailCornerContainerContentView;
    SCNetworkImageView *_storyCoverImageView;
    SCNetworkVideoView *_storyCoverVideoView;
    SCLazy *_tileOverlayView;
    SCLazy *_dynamicReplayOverlayViewLazy;
    SCDiscoverFeedLabelOverlayView *_labelOverlayView;
    SCLazy *_logoOverlayViewLazy;
    SCDiscoverFeedDebugView *_debugView;
    SCActionModel *_primaryTapActionModel;
    SCActionModel *_secondaryTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCNetworkVideo *_videoThumbnail;
    _Bool _isVideoThumbnailPlaying;
    _Bool _hasFirstFrameImage;
    struct CGPoint _lastOrigin;
    double _lastOriginCaptureTime;
    SCEventListenerAnnouncer *_eventAnnouncer;
    unsigned long long _roundedCorners;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    struct CGRect _viewportFrame;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCLegacyItemDownloading> videoDownloader; // @synthesize videoDownloader=_videoDownloader;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void).cxx_destruct;
- (void)_calculateCellFrameAndDispatchEventIfNecessary:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_handleLongPressAction:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (void)stopVideoPlaybackAndEndSession;
- (_Bool)isVideoThumbnailPlaying;
- (void)restartVideoPlayback;
- (void)resumeVideoPlaybackIfPossible;
- (void)pauseVideoPlaybackIfPossible;
- (void)_debugGesture:(id)arg1;
- (void)_setupDebugViewIfNeeded:(id)arg1;
- (void)_playVideoThumbnail;
- (void)_setupCoverVideoViewWithVideoThumbnail:(id)arg1;
- (void)_updateWithViewModel:(id)arg1;
- (void)_layoutWithViewModel;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (id)operaBaseView;
- (void)prepareForReuse;
- (void)_handleScrollOutOfScreenAction;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)storyCoverImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

