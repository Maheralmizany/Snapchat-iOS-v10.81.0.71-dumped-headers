//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGFooterItem, UIViewPropertyAnimator;

@interface SIGFooter : UIView
{
    SIGFooterItem *_currentItem;
    SIGFooterItem *_transitionFromItem;
    SIGFooterItem *_transitionToItem;
    UIViewPropertyAnimator *_itemConfigTransitionAnimator;
    _Bool _inTransition;
}

- (void).cxx_destruct;
- (void)_performTransitionAnimationToItemConfig:(id)arg1 fromItemConfig:(id)arg2 footerAnimationStyle:(long long)arg3;
- (void)_endTransitionToItemConfig:(id)arg1 fromItemConfig:(id)arg2 complete:(_Bool)arg3;
- (void)_beginTransitionToItemConfig:(id)arg1 fromItemConfig:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performAnimationsWithStyle:(long long)arg1;
- (void)endTransitionComplete:(_Bool)arg1;
- (void)beginTransitionToNewItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

