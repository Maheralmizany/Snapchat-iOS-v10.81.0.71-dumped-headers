//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable-Protocol.h"
#import "SCDiscoverFeedStoryTileWithVideoConfigurable-Protocol.h"
#import "SCDiscoverFeedTileOperaBaseViewProviding-Protocol.h"
#import "SCDiscoverFeedWhiteSpaceTileGestureHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "SCViewportConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCDiscoverFeedCollectionViewCellTapHandler, SCDiscoverFeedWhiteSpaceImageWithTextView, SCEventListenerAnnouncer, SCLazy, SCNetworkVideoView, UIView;
@protocol SCActionHandling, SCDiscoverFeedWhiteSpaceGestureCoordinating, SCImageDownloading, SCLegacyItemDownloading;

@interface SCDiscoverFeedHeroTileV1Cell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCActionable, SCViewportConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable, SCDiscoverFeedCollectionViewCellAnimating, SCDiscoverFeedTileOperaBaseViewProviding, SCDiscoverFeedWhiteSpaceTileGestureHandling, SCDiscoverFeedStoryTileWithVideoConfigurable>
{
    UIView *_thumbnailRoundedCornerContainer;
    SCDiscoverFeedWhiteSpaceImageWithTextView *_imageWithTextView;
    SCLazy *_subscriptionIconViewLazy;
    SCLazy *_debugViewLazy;
    SCDiscoverFeedCollectionViewCellTapHandler *_thumbnailTapHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCNetworkVideoView *_thumbnailVideoView;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
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
@property(retain, nonatomic) id <SCDiscoverFeedWhiteSpaceGestureCoordinating> gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
- (void).cxx_destruct;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (void)stopVideoPlaybackAndEndSession;
- (_Bool)isVideoThumbnailPlaying;
- (void)restartVideoPlayback;
- (void)resumeVideoPlaybackIfPossible;
- (void)pauseVideoPlaybackIfPossible;
- (void)_handleDebugGesture:(id)arg1;
- (void)_viewModelDidUpdate;
- (void)_removeTrailerViewIfPresent;
- (void)_playViewTrailerIfAvailable:(_Bool)arg1;
- (id)operaBaseView;
- (id)viewToAnimateOnTap:(id)arg1;
- (_Bool)shouldShowBackgroundView;
- (void)layoutSubviews;
- (id)storyCoverImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

