//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SCActionable-Protocol.h"

@class NSString, SCFriendsFeedAnimationHandler;
@protocol SCActionHandling, SCFeedCellViewModel, SCFeedGestureDelegate, SCImageDownloading, SCMediaSendTaskManager;

@interface SCFeedTableViewCell : UITableViewCell <SCActionable>
{
    id <SCActionHandling> _actionHandler;
    id <SCImageDownloading> _imageDownloader;
    id <SCFeedGestureDelegate> _gestureDelegate;
    id <SCFeedCellViewModel> _viewModel;
    SCFriendsFeedAnimationHandler *_animationHandler;
    id <SCActionHandling> _retryActionHandler;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
}

@property(retain, nonatomic) id <SCMediaSendTaskManager> mediaSendTaskManager; // @synthesize mediaSendTaskManager=_mediaSendTaskManager;
@property(retain, nonatomic) id <SCActionHandling> retryActionHandler; // @synthesize retryActionHandler=_retryActionHandler;
@property(retain, nonatomic) SCFriendsFeedAnimationHandler *animationHandler; // @synthesize animationHandler=_animationHandler;
@property(retain, nonatomic) id <SCFeedCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCFeedGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (_Bool)feedCellPanGestureRecognizerShouldBegin;
- (_Bool)longPressGestureRecognizerShouldBegin;
- (_Bool)doubleTapGestureRecognizerShouldBegin;
- (_Bool)delayedTapGestureRecognizerShouldBegin;
- (_Bool)tapGestureRecognizerShouldBegin;
- (void)handleLongPress:(id)arg1;
- (void)handleDelayedTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

