//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGBottomBar.h"

@class NSMutableArray, NSMutableDictionary, SIGSendToButton, UIScrollView;
@protocol SIGSelectBarDelegate;

@interface SIGSelectBar : SIGBottomBar
{
    SIGSendToButton *_sendToButton;
    UIScrollView *_scrollView;
    NSMutableArray *_orderedItemViews;
    NSMutableDictionary *_itemViews;
    NSMutableArray *_itemViewSpacingConstraints;
    id <SIGSelectBarDelegate> _delegate;
}

@property(nonatomic) __weak id <SIGSelectBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendToButtonPressed;
- (void)_constrainScrollViewContent;
- (void)_barTapped:(id)arg1;
- (void)_itemViewTapped:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;

@end
