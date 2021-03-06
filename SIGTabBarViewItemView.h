//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SIGLabel, SIGTabBarViewItem, SIGTargetActionDispatcher;
@protocol SIGTabBarViewItemViewDelegate;

@interface SIGTabBarViewItemView : UIControl
{
    SIGLabel *_label;
    SIGLabel *_highlightedLabel;
    SIGTargetActionDispatcher *_userSelectionActionDispatcher;
    id <SIGTabBarViewItemViewDelegate> _delegate;
    SIGTabBarViewItem *_item;
    unsigned long long _theme;
}

@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SIGTabBarViewItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <SIGTabBarViewItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupKarma;
- (void)_touchUpOutside;
- (void)_touchDown;
- (void)_touchUpInside;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

