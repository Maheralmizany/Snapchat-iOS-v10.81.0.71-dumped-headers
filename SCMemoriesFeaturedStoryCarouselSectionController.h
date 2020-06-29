//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListBindingSectionController.h"

#import "IGListBindingSectionControllerDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListScrollDelegate-Protocol.h"
#import "SCMemoriesFeaturedStoryCellGestureHandler-Protocol.h"

@class NSString, SCUserSession, UICollectionView;
@protocol SCGalleryEntryThumbnailGeneratorProviding, SCMemoriesFeaturedStoriesCarouselCellDataSource, SCMemoriesFeaturedStoryCellDelegate, SCMemoriesFeaturedStoryDataLogging, SCMemoriesFeaturedStoryDataSource;

@interface SCMemoriesFeaturedStoryCarouselSectionController : IGListBindingSectionController <SCMemoriesFeaturedStoryCellGestureHandler, IGListBindingSectionControllerDataSource, IGListDisplayDelegate, IGListScrollDelegate>
{
    UICollectionView *_collectionView;
    SCUserSession *_userSession;
    id <SCMemoriesFeaturedStoryCellDelegate> _featuredStoryCellDelegate;
    id <SCMemoriesFeaturedStoriesCarouselCellDataSource> _carouselDataSource;
    id <SCMemoriesFeaturedStoryDataSource> _featuredDataSource;
    id <SCMemoriesFeaturedStoryDataLogging> _featuredDataLogging;
    id <SCGalleryEntryThumbnailGeneratorProviding> _thumbnailGeneratorProvider;
    _Bool _userInitiated;
}

- (void).cxx_destruct;
- (void)_fireGalleryCellViewWithCellIndex:(long long)arg1;
- (void)_fireGalleryCellViewForVisibleCells;
- (void)listAdapter:(id)arg1 didEndDeceleratingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (_Bool)featuredStoryCell:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)featuredStoryCell:(id)arg1 scrollToItem:(id)arg2;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)_featuredStories;
- (struct UIEdgeInsets)inset;
- (id)initWithUserSession:(id)arg1 featuredStoryCellDelegate:(id)arg2 collectionView:(id)arg3 carouselDataSource:(id)arg4 featuredDataSource:(id)arg5 featuredDataLogging:(id)arg6 thumbnailGeneratorProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

