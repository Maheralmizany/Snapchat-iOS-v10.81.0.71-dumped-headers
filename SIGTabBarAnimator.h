//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewPropertyAnimator;

@interface SIGTabBarAnimator : NSObject
{
    UIViewPropertyAnimator *_animator;
}

+ (id)animatorForTransitionToItem:(id)arg1 fromItem:(id)arg2;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1;
- (void)cancel;
- (void)updateAnimationFractionComplete:(double)arg1;
- (void)dealloc;
- (id)initWithAnimator:(id)arg1;

@end

