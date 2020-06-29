//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSectionWithConfiguration, UICollectionView;
@protocol SCLensExplorerEventsController, SCLensExplorerVisibleItemsTracking;

@interface SCLensExplorerSection : NSObject
{
    UICollectionView *_collectionView;
    _Bool _isCarouselSection;
    id <SCLensExplorerVisibleItemsTracking> _visibleItemsTracker;
    NSString *_sectionIdentifier;
    unsigned long long _sectionIndex;
    SCSectionWithConfiguration *_sectionConfiguration;
    id <SCLensExplorerEventsController> _eventsController;
}

@property(readonly, nonatomic) id <SCLensExplorerEventsController> eventsController; // @synthesize eventsController=_eventsController;
@property(readonly, nonatomic) SCSectionWithConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(readonly, nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void).cxx_destruct;
- (id)_filterOutIgnoredSection:(id)arg1;
- (id)_targetCollectionView;
- (id)_sectionDataProvider;
- (id)visibleItemsTracker;
- (id)carouselCollectionViewFromCollectionView:(id)arg1;
- (void)trackImpressions;
- (void)didEndSectionScrollingAnimation;
- (_Bool)isDraggingOrDecelerating;
- (void)didScrollSection;
- (void)bindToCollectionView:(id)arg1;
- (long long)dataLoadingStatus;
- (id)sectionDataProvider;
- (id)initWithSectionIdentifier:(id)arg1 sectionIndex:(unsigned long long)arg2 sectionConfiguration:(id)arg3 eventsController:(id)arg4 isCarouselSection:(_Bool)arg5;

@end

