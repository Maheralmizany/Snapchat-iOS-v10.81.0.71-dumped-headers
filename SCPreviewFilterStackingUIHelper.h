//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewToolbarButtonItemAccessoryButtonsDataSource-Protocol.h"

@class NSString, SCPreviewToolBar, SCPreviewToolbarFilterStackingButtonItem, SCSmartSwipeFilterView, SCSnapCommonLoggingParameters;
@protocol SCPreviewFilterStackingUIHelperDelegate, SCUserPreviewFilterStackingInfoProvider;

@interface SCPreviewFilterStackingUIHelper : NSObject <SCPreviewToolbarButtonItemAccessoryButtonsDataSource>
{
    SCPreviewToolbarFilterStackingButtonItem *_filterStackingAnimatingButtonItem;
    struct CGRect _filterStackingAnimatingButtonFinalPosition;
    SCSmartSwipeFilterView *_smartSwipeFilterView;
    SCPreviewToolBar *_toolbar;
    long long _showingButtonImageType;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    id <SCUserPreviewFilterStackingInfoProvider> _userPreviewFilterStackingInfoProvider;
    id <SCPreviewFilterStackingUIHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <SCPreviewFilterStackingUIHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)topButtonsToDisplay;
- (id)addButtonForFilterInfo:(id)arg1;
- (void)accessoryButtonTapped:(id)arg1;
- (void)animateStackingButtonForToolbar:(id)arg1 inView:(id)arg2 swipeOffset:(double)arg3;
- (void)positionAnimatingStackingButtonForSwipeOffset:(double)arg1 forView:(id)arg2;
- (void)stopAnimationAndShowStackingButtonInToolbar:(id)arg1 showButton:(_Bool)arg2;
- (void)updateFilterStackingButtonWithFiltersCount:(unsigned long long)arg1;
- (id)insertNewStackingButtonIntoToolbar:(id)arg1 stackedFiltersCount:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)buttonTapped:(id)arg1;
- (void)swipeViewUpdatedStackedFilters:(id)arg1;
- (void)showButtonImageType:(long long)arg1 stackedFiltersCount:(unsigned long long)arg2;
- (void)updateStackingUIOnLongPressEndWithSwipeView:(id)arg1;
- (void)longPressDidCancel:(id)arg1;
- (void)swipeViewWillStartDoubleSwiping:(id)arg1;
- (void)swipeViewDidEndDoubleSwiping:(id)arg1;
- (void)updateFilterStackingButtonForFilterCarousel:(id)arg1 toolbar:(id)arg2 animateInView:(id)arg3 promptIndexes:(id)arg4;
- (void)updateSmartSwipeFilterView:(id)arg1;
- (id)initWithSmartSwipeFilterView:(id)arg1 toolbar:(id)arg2 commonLoggingParameters:(id)arg3 previewFilterStackingUIUser:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

