//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseView.h"

#import "SCMiniProfileAddFriendButtonDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCMiniProfileAddFriendButton, SCSnapcodeView, UIButton, UIImageView, UILabel, UIView;
@protocol SCAddFriendMiniProfileViewDelegate;

@interface SCAddFriendMiniProfileView : SCMiniProfileBaseView <SCMiniProfileAddFriendButtonDelegate>
{
    UIView *_topContainer;
    SCSnapcodeView *_snapcodeView;
    UIImageView *_secretCardImageView;
    UIView *_centerContainer;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UILabel *_thirdLabel;
    UILabel *_secretCardMessageLabel;
    UIView *_bottomContainer;
    SCMiniProfileAddFriendButton *_addFriendButton;
    UIButton *_secretCardButton;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCAddFriendMiniProfileViewDelegate> _delegate;
}

+ (id)miniProfileView:(id)arg1;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)arg1 friend:(id)arg2;
- (void)doneButtonPressed:(id)arg1 friend:(id)arg2;
- (void)addFriendPressed:(id)arg1 friend:(id)arg2;
- (void)_updateMiniProfileAfterPresentingAnimation;
- (void)_miniProfileDismissAnimationDidFinish;
- (void)_prepareMiniProfileForPresentation;
- (void)_secretButtonPressed;
- (void)stopLoading;
- (void)startLoading;
- (void)updateButtonWithState:(long long)arg1 style:(long long)arg2 friend:(id)arg3;
- (void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3;
- (void)updateSnapcodeView:(id)arg1 contexts:(id)arg2 userSession:(id)arg3;
- (void)updateSecretCardWithImage:(id)arg1 messageText:(id)arg2 buttonText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

