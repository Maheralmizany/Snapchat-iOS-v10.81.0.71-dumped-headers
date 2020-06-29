//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "SCViewportConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugView, SCDiscoverFeedLabelOverlayView, SCDiscoverFeedPublisherStoryProgressBarView, SCDiscoverFeedWhiteSpaceProfileRowView, SCEventListenerAnnouncer, SCLazy, SCNetworkImageView, SCRoundedCornerContainerView, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCPremiumContentListViewCollectionViewCell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCActionable, SCViewportConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable, SCDiscoverFeedCollectionViewCellAnimating>
{
    UIView *_thumbnailCornerContainerContentView;
    UIView *_backgroundView;
    SCRoundedCornerContainerView *_thumbnailCornerContainer;
    SCNetworkImageView *_storyCoverImageView;
    SCDiscoverFeedPublisherStoryProgressBarView *_progressBarView;
    SCDiscoverFeedWhiteSpaceProfileRowView *_profileRowView;
    SCDiscoverFeedLabelOverlayView *_labelOverlayView;
    UILabel *_viewCountLabel;
    UIImageView *_subscriptionIconImageView;
    SCLazy *_dynamicReplayOverlayViewLazy;
    SCDiscoverFeedDebugView *_debugView;
    SCActionModel *_primaryTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    struct CGRect _viewportFrame;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (id)viewToAnimateOnTap:(id)arg1;
- (void)_calculateCellFrameAndDispatchEventIfNecessary:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_handleLongPressAction:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_debugGesture:(id)arg1;
- (void)_setupDebugViewIfNeeded:(id)arg1;
- (void)_updateWithViewModel:(id)arg1;
- (void)_layoutWithViewModel;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
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

