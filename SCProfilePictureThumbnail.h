//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class Friend, SCLazy, SCNetworkImageView, SCProfilePictureRenderStyle, UIImageView, UILabel;
@protocol SCProfilePictureThumbnailDelegate;

@interface SCProfilePictureThumbnail : UIView
{
    SCProfilePictureRenderStyle *_renderStyle;
    _Bool _thumbnailLoaded;
    _Bool _ghostFaceManualResizing;
    _Bool _ghostBorderManualResizing;
    Friend *_friend;
    id <SCProfilePictureThumbnailDelegate> _delegate;
    SCLazy *_emojiThumbnailView;
    UIImageView *_profileImageView;
    UIImageView *_ghostBorderView;
    UIImageView *_ghostFaceView;
    UILabel *_emojiLabelView;
    SCNetworkImageView *_networkThumbnailView;
}

+ (id)thumbnailWithFriend:(id)arg1 contexts:(id)arg2 renderStyle:(id)arg3 delegate:(id)arg4;
@property(retain, nonatomic) SCNetworkImageView *networkThumbnailView; // @synthesize networkThumbnailView=_networkThumbnailView;
@property(retain, nonatomic) UILabel *emojiLabelView; // @synthesize emojiLabelView=_emojiLabelView;
@property(retain, nonatomic) UIImageView *ghostFaceView; // @synthesize ghostFaceView=_ghostFaceView;
@property(retain, nonatomic) UIImageView *ghostBorderView; // @synthesize ghostBorderView=_ghostBorderView;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (void)_setGhostBorderImage:(long long)arg1;
- (double)_getThumbnailWidth;
- (struct CGSize)_getGhostSize;
- (_Bool)_hasThumbnail:(id)arg1;
- (_Bool)_needsUpdateWidth:(id)arg1;
- (void)_showEmptyStateImageForFriend:(id)arg1;
- (void)_showBitmojiProfilePic:(id)arg1;
- (void)setGhostBorderManualResizing:(_Bool)arg1;
- (void)setGhostFaceManualResizing:(_Bool)arg1;
- (void)_updateBitmojiProfilePictureWithFriend:(id)arg1 contexts:(id)arg2;
- (void)updateWithFriend:(id)arg1 contexts:(id)arg2 renderStyle:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1;

@end

