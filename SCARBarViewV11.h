//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCARBarView-Protocol.h"
#import "SCDecayingValueDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SCDecayingValue, UIStackView;
@protocol SCARBarDelegate;

@interface SCARBarViewV11 : UIView <SCDecayingValueDelegate, SCARBarView>
{
    UIStackView *_stackView;
    NSArray *_items;
    SCDecayingValue *_leftEdgeOfBarPosition;
    SCDecayingValue *_rightEdgeOfBarPosition;
    UIView *_bar;
    long long _selectedIndex;
    _Bool _animationPendingHapticRequest;
    NSSet *_animators;
    _Bool _visible;
    long long _selectedItemIndex;
    id <SCARBarDelegate> _delegate;
}

@property(nonatomic) __weak id <SCARBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void).cxx_destruct;
- (void)_setLineTargetRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_updateLine;
- (void)_tappedItemView:(id)arg1;
- (id)_configureAnimators:(_Bool)arg1 animationStyle:(long long)arg2;
- (void)_setup;
- (void)decayingValueDidUpdate:(id)arg1;
- (void)dealloc;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (struct CGSize)intrinsicContentSize;
- (long long)selectedIndex;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setExpansionPercentage:(double)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 animationStyle:(long long)arg3;
- (id)initWithItems:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

