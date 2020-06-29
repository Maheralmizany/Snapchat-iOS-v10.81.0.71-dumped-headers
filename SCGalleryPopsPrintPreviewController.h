//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownSwipableViewController.h"

@class NSArray, NSString, SCDataObjectContext, SCFeatureSettingsService, SCGalleryOnDemandResources, SCGalleryPopsPrintHelper, SCPlayerView, SCQueuePerformer, SCUserSession, SIGButton, SIGLoadingIndicatorView, SOJUCommerceProductInfo, UILabel;
@protocol SCGalleryPopsPrintCommerceDelegate;

@interface SCGalleryPopsPrintPreviewController : SCDownSwipableViewController
{
    SCUserSession *_userSession;
    NSArray *_snaps;
    SCGalleryPopsPrintHelper *_popsPrintHelper;
    unsigned long long _status;
    SCPlayerView *_playerView;
    SIGLoadingIndicatorView *_loadingIndicatorView;
    SIGButton *_printOptionButton;
    SIGButton *_checkoutButton;
    SIGLoadingIndicatorView *_processingIndicatorView;
    UILabel *_processingLabel;
    UILabel *_processingSubLabel;
    NSArray *_printSnaps;
    NSArray *_failedPrintSnaps;
    SOJUCommerceProductInfo *_productInfo;
    NSString *_requestId;
    id <SCGalleryPopsPrintCommerceDelegate> _commerceDelegate;
    SCDataObjectContext *_dataObjectContext;
    SCQueuePerformer *_performer;
    SCGalleryOnDemandResources *_galleryOnDemandResources;
    CDUnknownBlockType _almostThereBlock;
    SCFeatureSettingsService *_featureSettingsService;
}

- (void).cxx_destruct;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)_loadPlayer:(id)arg1;
- (void)_loadVideo;
- (void)_proceedToCheckout;
- (void)_retry;
- (void)_removeFailedSnapsAndResume;
- (void)_fixIssues;
- (void)_checkout;
- (void)_checkEditsIneligibility:(CDUnknownBlockType)arg1;
- (void)_toggleAlmostThereTimerIfNeeded;
- (void)_updateStatus:(unsigned long long)arg1;
- (void)_didGetPrintProductData:(id)arg1 failedPrintSnaps:(id)arg2 productInfo:(id)arg3 requestId:(id)arg4 error:(id)arg5;
- (void)_didGetProductInfo:(id)arg1;
- (void)_getPrintProductData;
- (void)_productActionSheetCellTapped:(id)arg1;
- (void)_showPrintOptions;
- (void)_dismiss;
- (id)_loadLabels:(id)arg1 footerView:(id)arg2;
- (id)_loadFooterView:(id)arg1;
- (void)_loadHeaderView:(id)arg1;
- (void)viewDidLoad;
- (void)reviewOrderViewControllerDidCancel;
- (void)reviewOrderViewControllerWillPresent;
- (id)initWithUserSession:(id)arg1 dataObjectContext:(id)arg2 thumbnailProvider:(id)arg3 commerceDelegate:(id)arg4 snaps:(id)arg5 galleryOnDemandResources:(id)arg6;

@end
