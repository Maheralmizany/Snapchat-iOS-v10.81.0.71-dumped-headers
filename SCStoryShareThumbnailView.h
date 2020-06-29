//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSingleMediaThumbnailView-Protocol.h"
#import "SCSnapchatterCardViewDelegate-Protocol.h"

@class SCBaseMediaThumbnailView, SCContributionStoryPublisherMediaCardView, SCSnapchatterCardView, SCStorySnapMessageThumbnailViewModel, UILabel, UIViewController;
@protocol SCChatCellGestureDelegate><SCPageNameLogging, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCStoryShareThumbnailView : UIView <SCSnapchatterCardViewDelegate, SCChatSingleMediaThumbnailView>
{
    UILabel *_unviewableLabel;
    UIView *_blurView;
    UILabel *_blurLabel;
    UILabel *_storyInfoLabel;
    SCSnapchatterCardView *_snapchatterMediaCard;
    SCContributionStoryPublisherMediaCardView *_contributionStoryPublisherMediaCard;
    UIView *_mediaCardPlaceholderView;
    UILabel *_mediaCardPlaceholderLabel;
    SCStorySnapMessageThumbnailViewModel *_viewModel;
    UIViewController<SCChatCellGestureDelegate><SCPageNameLogging> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
}

@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (void).cxx_destruct;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)snapchatterNameCardView:(id)arg1 didTapForSnapchatter:(id)arg2;
- (void)snapchatterNameCardView:(id)arg1 didToggleButtonForUsername:(id)arg2;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)prepareVideoIfNecessary;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)resetPlayer;
- (void)resetContents;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (id)mediaId;
- (void)setMediaViewModel:(id)arg1;
- (id)mediaCardPlaceholderView;
- (id)contributionStoryPublisherMediaCard;
- (id)snapchatterMediaCard;
- (id)storyInfoLabel;
- (id)blurView;
- (id)unviewableLabel;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

@end

