//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSLayoutConstraint, SIGIndexViewLogic;
@protocol SIGIndexViewDelegate;

@interface SIGIndexView : UIView
{
    long long _selectedIndex;
    long long _selectedVisibleIndex;
    NSArray *_titleViews;
    NSDictionary *_specialTitleImages;
    SIGIndexViewLogic *_logic;
    NSLayoutConstraint *_topAnchorConstraint;
    NSLayoutConstraint *_bottomAnchorConstraint;
    _Bool _isInteracting;
    double _oldAvailableHeight;
    id <SIGIndexViewDelegate> _delegate;
    UIView *_relativeView;
    NSArray *_titles;
}

@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak UIView *relativeView; // @synthesize relativeView=_relativeView;
@property(nonatomic) __weak id <SIGIndexViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processTouchAtY:(double)arg1;
- (void)_setSelectedStateOfIndex:(unsigned long long)arg1 to:(_Bool)arg2;
- (void)_rebuildSubviews;
- (id)_optionWithText:(id)arg1;
- (id)_optionWithImage:(id)arg1;
- (double)_numberOfItemsToDisplay;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_finishInteracting;
- (void)_startInteracting;
- (void)layoutSubviews;
- (void)setSelectedIndex:(long long)arg1 fromUserInteraction:(_Bool)arg2;
- (void)setSelectedIndex:(long long)arg1;
- (void)_setTitles:(id)arg1 withMaximumVisibleCount:(double)arg2;
- (id)initWithGroupImages:(id)arg1;

@end

