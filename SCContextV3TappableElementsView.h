//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextV3PassthroughView.h"

@class NSArray, NSMutableArray, UIView;
@protocol SCContextV3TappableElementsViewDelegate;

@interface SCContextV3TappableElementsView : SCContextV3PassthroughView
{
    NSMutableArray *_buttons;
    NSArray *_constraints;
    UIView *_boundView;
    id <SCContextV3TappableElementsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCContextV3TappableElementsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bindToView:(id)arg1 commonAncestorView:(id)arg2;
- (void)layoutSubviews;
- (void)didTapElement:(id)arg1;
- (void)scheduleInitialShimmers;
- (void)configureWithTappableElements:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

