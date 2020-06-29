//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SIGLabel, SIGNavigationBarButtonBadgeView, SIGNavigationBarButtonItem, SIGTargetActionDispatcher, UIColor, UIImageView;
@protocol SIGNavigationBarButtonDelegate;

@interface SIGNavigationBarButton : UIControl
{
    SIGTargetActionDispatcher *_userPressActionDispatcher;
    SIGLabel *_titleLabel;
    UIImageView *_buttonImage;
    SIGNavigationBarButtonBadgeView *_badgeView;
    UIColor *_badgeViewBackgroundColor;
    SIGNavigationBarButtonItem *_item;
    id <SIGNavigationBarButtonDelegate> _delegate;
}

+ (id)navigationBarButtonWithItem:(id)arg1;
@property(nonatomic) __weak id <SIGNavigationBarButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SIGNavigationBarButtonItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_setupBadgeViewIfNeeded;
- (void)_didPressButton;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setButtonBadgeViewBackground:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

