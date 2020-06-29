//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensExplorerBaseViewController.h"

#import "SCEventListener-Protocol.h"
#import "SCLensExplorerCategoryPaging-Protocol.h"

@class NSString, SCLECategoriesLayout, SCLazy, SCLensExplorerCategoryModel, SCLensExplorerContentViewV2, SCLensExplorerResultController, UIScrollView;
@protocol SCLensExplorerFactoryProtocol;

@interface SCLensExplorerCategoryViewController : SCLensExplorerBaseViewController <SCEventListener, SCLensExplorerCategoryPaging>
{
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    SCLECategoriesLayout *_layout;
    SCLensExplorerContentViewV2 *_contentView;
    SCLazy *_resultController;
    SCLensExplorerCategoryModel *_categoryModel;
}

@property(readonly, nonatomic) SCLensExplorerCategoryModel *categoryModel; // @synthesize categoryModel=_categoryModel;
- (void).cxx_destruct;
- (void)_setupKarma;
- (id)pageTypeSpecific;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewWillReachEnd;
- (void)_handleCarouselSectionEvent:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)pageViewWillDisappear;
- (void)pageViewWillAppear;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)sections;
- (id)queryResultController;
- (id)contentView;
@property(readonly, nonatomic) SCLensExplorerResultController *resultController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCategoryModel:(id)arg1 lensExplorerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
