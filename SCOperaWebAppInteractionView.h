//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCNetworkImageView, SCOperaWebAppChatInputView, UIButton, UILabel;
@protocol SCOperaWebAppInteractionViewDelegate;

@interface SCOperaWebAppInteractionView : UIView
{
    UIView *_containerView;
    UIView *_topBorder;
    UIButton *_closeButton;
    UIButton *_dismissButton;
    UIView *_separatorView;
    UIButton *_settingsButton;
    _Bool _actionsMenuIsPresented;
    id <SCOperaWebAppInteractionViewDelegate> _delegate;
    unsigned long long _playerState;
    UIView *_audioAccessoryView;
    SCOperaWebAppChatInputView *_chatAccessoryView;
    UIButton *_inviteButton;
    UIButton *_actionsButton;
    UIButton *_returnButton;
    SCNetworkImageView *_thumbnailView;
    UILabel *_descriptionLabel;
    double _actionsMenuBottomYOffset;
}

@property(nonatomic) double actionsMenuBottomYOffset; // @synthesize actionsMenuBottomYOffset=_actionsMenuBottomYOffset;
@property(nonatomic) _Bool actionsMenuIsPresented; // @synthesize actionsMenuIsPresented=_actionsMenuIsPresented;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) SCNetworkImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(readonly, nonatomic) UIButton *actionsButton; // @synthesize actionsButton=_actionsButton;
@property(readonly, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) SCOperaWebAppChatInputView *chatAccessoryView; // @synthesize chatAccessoryView=_chatAccessoryView;
@property(retain, nonatomic) UIView *audioAccessoryView; // @synthesize audioAccessoryView=_audioAccessoryView;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) __weak id <SCOperaWebAppInteractionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_layoutAccessoryViewsForFriendsWithIsV2:(_Bool)arg1;
- (void)_layoutAccessoryViewsForNonFriendsWithIsV2:(_Bool)arg1;
- (void)_layoutAccessories;
- (void)_didClickDismissButton;
- (void)_initDismissButtonWithIsV2:(_Bool)arg1;
- (void)_layoutSystemButtonsForFriendsWithIsV2:(_Bool)arg1;
- (void)_layoutSystemButtons;
- (void)layoutSubviews;
- (void)_initSeparatorView;
- (void)setInviteButtonEnabled:(_Bool)arg1;
- (void)setUpNonConversationViewsWithAppName:(id)arg1 isV2:(_Bool)arg2;
- (void)_initReturnButton;
- (void)_didClickActionsButton;
- (void)_initActionsButton;
- (void)_didClickSettingsButton;
- (void)_initSettingsButton;
- (void)_didClickInviteButton;
- (void)_initInviteButton;
- (void)_didClickCloseButton;
- (void)_initCloseButton;
- (void)_initContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
