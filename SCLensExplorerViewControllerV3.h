//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCSearchV2UISearchBoxOwner-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCDisposableObserverLifecycle, SCLazy, SCLensExplorerPrompter, SIGHeader, SIGHeaderItem, SIGLoadingIndicatorView, SIGTabBarScrollViewCoordinator, UIScrollView;
@protocol SCLensExplorerCategoriesProviding, SCLensExplorerCategoryPageProviding, SIGCardTransition, SIGHeaderItemDelegate;

@interface SCLensExplorerViewControllerV3 : UIViewController <SCShakeToReportDelegate, UITextFieldDelegate, SCSearchV2UISearchBoxOwner, SCPageNameLogging>
{
    SCLazy *_searchViewPresenter;
    id <SCLensExplorerCategoriesProviding> _categoriesProvider;
    id <SCLensExplorerCategoryPageProviding> _pageProvider;
    SCDisposableObserverLifecycle *_categoriesLifecycle;
    SCLensExplorerPrompter *_lensExplorerPrompter;
    UIScrollView *_scrollView;
    SIGHeader *_headerView;
    SIGLoadingIndicatorView *_loadingIndicator;
    SIGTabBarScrollViewCoordinator *_scrollViewCoordinator;
    id <SIGCardTransition> _cardTransition;
    SIGHeaderItem *_headerItem;
    NSArray *_viewControllers;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldPopToRootViewController;
- (id)pageViewName;
- (id)getSearchBoxForSearchTransition;
- (void)_setupKarma;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCategorySelectionChanged:(id)arg1;
- (void)_updateScrollViewCoordinator;
- (void)_updateViewControllersWithCategories:(id)arg1;
- (id)_selectedCategoryFromCategoryModels:(id)arg1;
- (void)_updateTabBarWithCategoryModels:(id)arg1;
- (void)_setupCategories;
- (void)_setupConstraints;
- (void)_setupLoadingIndicator;
- (void)_setupScrollView;
- (void)_setupHeaderView;
@property(readonly, nonatomic) SIGHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (void)viewDidLayoutSubviews;
@property(nonatomic) __weak id <SIGHeaderItemDelegate> headerItemDelegate;
- (void)refreshSubscriptionCategory;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSearchViewPresenter:(id)arg1 categoriesProvider:(id)arg2 pageProvider:(id)arg3 cardTransition:(id)arg4;
- (id)defaultSubProjectName;
- (id)defaultProjectNameV2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
