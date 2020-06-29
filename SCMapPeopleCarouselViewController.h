//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCMapCarouselContainerViewDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SCMapCarouselContainerView, SCMapPerson;
@protocol SCMapPeopleCarouselViewControllerDelegate><SCMapCarouselPersonActionDelegate;

@interface SCMapPeopleCarouselViewController : UIViewController <SCMapCarouselContainerViewDelegate>
{
    id <SCMapPeopleCarouselViewControllerDelegate><SCMapCarouselPersonActionDelegate> _delegate;
    CDUnknownBlockType _pageCreationBlock;
    _Bool _showsDismissButton;
    NSArray *_pages;
    NSSet *_unorderedClusters;
    NSArray *_deferredClusterUpdate;
    SCMapPerson *_visiblePerson;
}

+ (long long)_indexOfPageContainingPerson:(id)arg1 inPages:(id)arg2;
@property(copy, nonatomic) SCMapPerson *visiblePerson; // @synthesize visiblePerson=_visiblePerson;
- (void).cxx_destruct;
- (id)peopleInVisibleCluster;
- (void)mapCarouselContainer:(id)arg1 didScrollToIndex:(long long)arg2 action:(unsigned long long)arg3;
- (void)mapCarouselContainerWantsDismissal:(id)arg1;
- (void)setVisiblePerson:(id)arg1 animated:(_Bool)arg2;
- (void)reloadPagesSections;
- (void)updateClusters:(id)arg1 forced:(_Bool)arg2;
@property(readonly, nonatomic) SCMapCarouselContainerView *carousel;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 pageCreationBlock:(CDUnknownBlockType)arg2 showsDismissButton:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

