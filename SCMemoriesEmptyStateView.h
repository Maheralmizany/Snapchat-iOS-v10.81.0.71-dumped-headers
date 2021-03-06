//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGButton, SIGLabel, UIImageView, UIStackView;
@protocol SCMemoriesEmptyStateActionHandling, SCMemoriesEmptyStateDataProviding;

@interface SCMemoriesEmptyStateView : UIView
{
    id <SCMemoriesEmptyStateDataProviding> _dataProvider;
    id <SCMemoriesEmptyStateActionHandling> _actionHandler;
    UIStackView *_stackView;
    UIImageView *_avatarImageView;
    SIGLabel *_titleLabel;
    SIGLabel *_descLabel;
    SIGButton *_primaryButton;
    SIGButton *_urlButton;
}

- (void).cxx_destruct;
- (id)_getUrlButton;
- (id)_getPrimaryButton;
- (id)_getDescLabel;
- (id)_getTitleLabel;
- (id)_getAvatarImageView;
- (void)_setupViews;
- (id)initWithDataProvider:(id)arg1 actionHander:(id)arg2;

@end

