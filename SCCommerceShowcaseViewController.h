//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCActionHandling-Protocol.h"

@class NSString, NSURL, SCCommerceCatalogCollectionViewController, SCCommerceShowcaseDataCoordinator, SCCommerceShowcaseViewModelProvider, SIGButton;
@protocol SCCommerceShowcaseViewControllerDelegate;

@interface SCCommerceShowcaseViewController : SIGSubscreenViewController <SCActionHandling>
{
    NSString *_productSetId;
    NSURL *_shopNowUrl;
    SIGButton *_shopNowButton;
    SCCommerceCatalogCollectionViewController *_catalogViewController;
    SCCommerceShowcaseViewModelProvider *_viewModelProvider;
    SCCommerceShowcaseDataCoordinator *_dataCoordinator;
    id <SCCommerceShowcaseViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_showWebBroswerForURL:(id)arg1;
- (void)_didTapShopNowButton;
- (void)didSelectDismissalActionWithHeaderItem:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)loadScrollView;
- (id)initWithProductSetId:(id)arg1 displayName:(id)arg2 shopNowUrl:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

