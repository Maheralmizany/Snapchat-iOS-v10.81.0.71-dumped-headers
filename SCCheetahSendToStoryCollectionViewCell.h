//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCAvatarViewDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCSendToScrollLabeling-Protocol.h"

@class NSString, SCAvatarView, SCEventListenerAnnouncer, SCNetworkImageView, SCSendToScrollLabelModel, UIImageView, UILabel, UIView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCCheetahSendToStoryCollectionViewCell : SCSearchCollectionViewCell <SCAvatarViewDelegate, SCEventAnnouncing, SCActionable, SCSendToScrollLabeling>
{
    UIView *_thumbnailView;
    UIView *_backgroundView;
    SCNetworkImageView *_previewThumbnailImageView;
    SCAvatarView *_avatarView;
    UIView *_ringView;
    UIImageView *_accessoryPinImageView;
    UIImageView *_checkmarkPinImageView;
    UILabel *_nameLabel;
    UILabel *_officialFriendmojiLabel;
    UILabel *_showMoreLabel;
    _Bool _isAnimating;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    SCSendToScrollLabelModel *_scrollLabelModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
- (id)viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_announceTapAction;
- (void)_updateAvatarViewWithViewModel:(id)arg1 forStoryId:(id)arg2;
- (void)_updateAvatarView;
- (void)_updateShowMoreLabelView:(id)arg1;
- (id)_accessoryImageForViewModel:(id)arg1;
- (_Bool)_shouldAnimateFromViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)configureAvatarWithUserSession:(id)arg1 contexts:(id)arg2 feature:(long long)arg3;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleLongPressAction;
- (_Bool)hasOverridedLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)_animateThumbnailViewToScale:(double)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_hideCheckmarkPin;
- (void)_hideAccessoryPin;
- (void)_setIsAnimatingToNo;
- (void)_animateSelectionState;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)installAutoLayoutConstraints;
- (id)_createLabel;
- (id)_createCheckmarkPinImageView;
- (id)_createAccessoryPinImageView;
- (id)_createThumbnailView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

