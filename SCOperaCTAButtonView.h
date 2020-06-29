//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCAffordanceArrowView, SCOperaCTAButtonViewModel, SIGButton, UITapGestureRecognizer;
@protocol SCOperaCTAButtonViewDelegate;

@interface SCOperaCTAButtonView : UIView <UIGestureRecognizerDelegate>
{
    SCAffordanceArrowView *_arrowView;
    SCOperaCTAButtonViewModel *_viewModel;
    UITapGestureRecognizer *_tapGesture;
    id <SCOperaCTAButtonViewDelegate> _delegate;
    SIGButton *_ctaButton;
    double _tapDetectionHeight;
}

@property(nonatomic) double tapDetectionHeight; // @synthesize tapDetectionHeight=_tapDetectionHeight;
@property(retain, nonatomic) SIGButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(nonatomic) __weak id <SCOperaCTAButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didSingleTap:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

