//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCAvatarView, SCComposerAvatarViewModelBuilder, SCStoriesThumbnailInfo, UITapGestureRecognizer;
@protocol SCComposerAction, SCComposerAvatarDataProviding, SCComposerAvatarNonFriendStoriesFetching, SCImageDownloading;

@interface SCComposerAvatarView : UIView
{
    id <SCImageDownloading> _imageDownloader;
    id <SCComposerAvatarDataProviding> _dataProvider;
    id <SCComposerAvatarNonFriendStoriesFetching> _nonFriendStoriesFetcher;
    SCComposerAvatarViewModelBuilder *_viewModelBuilder;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    _Bool _isBirthday;
    NSString *_userId;
    NSString *_username;
    id <SCComposerAction> _onAvatarTapped;
    NSString *_usernameOfLastStoriesFetch;
    SCStoriesThumbnailInfo *_thumbnailFromLastStoriesFetch;
    UITapGestureRecognizer *_avatarTapRecognizer;
    SCAvatarView *_avatarView;
    _Bool _isShowingUnviewedStory;
}

+ (id)_viewModelAttributeParts;
+ (void)bindAttributes:(id)arg1;
- (void).cxx_destruct;
- (void)_tappedAvatar;
- (_Bool)_setOnAvatarTapped:(id)arg1;
- (_Bool)_setBitmojiAvatarId:(id)arg1 bitmojiSelfieId:(id)arg2 userId:(id)arg3 username:(id)arg4 isBirthday:(_Bool)arg5;
- (void)_updateUI;
@property(readonly, nonatomic, getter=isShowingUnviewedStory) _Bool showingUnviewedStory;
- (void)updateThumbnail;
- (id)operaBaseView;
- (void)layoutSubviews;
- (id)initWithAttributionFeature:(id)arg1 networkingContexts:(id)arg2 imageDownloader:(id)arg3 avatarDataProvider:(id)arg4 nonFriendStoriesFetcher:(id)arg5;

@end

