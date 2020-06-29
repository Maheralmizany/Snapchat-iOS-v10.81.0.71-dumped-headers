//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableIndexDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDateFormatter, NSIndexPath, NSString, SCGalleryTabsCollectionView, SCTableIndex, SCTableIndexController;
@protocol SCGalleryTabController;

@interface SCGalleryTabsTableIndexController : NSObject <SCTableIndexDelegate, SCTraceEnabled>
{
    SCGalleryTabsCollectionView *_tabsCollectionView;
    SCTableIndexController *_tableIndexController;
    NSDateFormatter *_dateFormatter;
    NSIndexPath *_currentIndexPath;
    _Bool _dragging;
    long long _animationCount;
    id <SCGalleryTabController> _tabController;
    double _topOffset;
}

@property(readonly, nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(retain, nonatomic) id <SCGalleryTabController> tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (void)_updateTableIndexPositionWithParentScrollView:(id)arg1 animated:(_Bool)arg2;
- (double)tableIndexOffset;
- (void)didFinishLongPressingTableIndex;
- (void)getLabelTextWithCompletion:(CDUnknownBlockType)arg1;
- (id)_labelTextForTableIndex;
- (void)scrollToPercent:(double)arg1;
- (void)_playHapticFeedbackIfNecessary;
- (void)didEndScrolling;
- (void)updateForScrolling;
- (void)hideTableIndexWithDelay:(double)arg1 animated:(_Bool)arg2;
- (void)showTableIndexAnimated;
@property(readonly, nonatomic) SCTableIndex *tableIndex;
- (void)setTopOffset:(double)arg1 animated:(_Bool)arg2;
- (id)initWithTabsCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

