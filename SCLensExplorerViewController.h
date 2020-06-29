//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensExplorerCategoryViewController.h"

#import "SCLensExplorerTransitioningViewControllerProtocol-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSString, SCLensExplorerContentView, SCLensExplorerSearchHeaderView, UIView, UIViewController;
@protocol SCLensExplorerInteractiveTransitionProtocol, SCLensExplorerSearchViewControllerProtocol;

@interface SCLensExplorerViewController : SCLensExplorerCategoryViewController <SCLensExplorerTransitioningViewControllerProtocol, SCPageNameLogging>
{
    UIViewController<SCLensExplorerSearchViewControllerProtocol> *_searchViewController;
    SCLensExplorerContentView *_contentView;
    id <SCLensExplorerInteractiveTransitionProtocol> _interactiveTransition;
}

@property(nonatomic) __weak id <SCLensExplorerInteractiveTransitionProtocol> interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
- (_Bool)shouldPopToRootViewController;
- (id)pageViewName;
@property(readonly, nonatomic) struct CGRect transitioningViewVisibleAria;
@property(readonly, nonatomic) UIView *transitioningView;
@property(readonly, nonatomic) SCLensExplorerSearchHeaderView *headerView;
- (void)_prepareSearchViewController;
- (void)refreshSubscriptionSection;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (id)pageTypeSpecific;
- (id)contentView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSearchViewController:(id)arg1 lensEventsController:(id)arg2 lensExplorerFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

