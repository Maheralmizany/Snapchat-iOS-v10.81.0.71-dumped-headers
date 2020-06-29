//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryLeftSwipableViewController.h"

#import "SCGalleryImportCameraRollSectionHeaderDelegate-Protocol.h"
#import "SCProgressOverlayViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SIGDialogDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSNumberFormatter, NSString, PHCachingImageManager, SCGalleryImportCameraRollAssetItemsFetcher, SCGalleryImportCameraRollAssetItemsImporter, SCGalleryImportCameraRollViewControllerConfiguration, SCMemoriesRoundButton, SCProgressOverlayView, SCUserSession, UIActivityIndicatorView, UICollectionView, UILabel, UIView;
@protocol SCGalleryImportCameraRollViewControllerDelegate;

@interface SCGalleryImportCameraRollViewController : SCGalleryLeftSwipableViewController <UICollectionViewDataSource, UICollectionViewDelegate, SCGalleryImportCameraRollSectionHeaderDelegate, SCProgressOverlayViewDelegate, SCTraceEnabled, SIGDialogDelegate>
{
    SCUserSession *_userSession;
    SCGalleryImportCameraRollViewControllerConfiguration *_configuration;
    UIActivityIndicatorView *_loadingView;
    UIView *_headerView;
    UILabel *_titleLabel;
    UIView *_importStateContainerView;
    UICollectionView *_collectionView;
    UILabel *_infoLabel;
    SCMemoriesRoundButton *_importSnapsButton;
    NSNumberFormatter *_importSnapsButtonNumberFormatter;
    SCProgressOverlayView *_progressOverlayView;
    unsigned long long _toggleButtonState;
    PHCachingImageManager *_imageManager;
    SCGalleryImportCameraRollAssetItemsFetcher *_assetItemsFetcher;
    SCGalleryImportCameraRollAssetItemsImporter *_assetItemsImporter;
    NSArray *_assetItems;
    id <SCGalleryImportCameraRollViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryImportCameraRollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDidFinishWithDelay;
- (void)_cancelImportWithImportedAssetItems:(id)arg1 notImportedAssetItems:(id)arg2;
- (void)_completeImportWithImportedAssetItems:(id)arg1;
- (void)_importAssetItems:(id)arg1;
- (id)_allSelectedAssetItems;
- (void)_deselectAllSelectedAssetItems;
- (void)_selectAllEligibleAssetItems;
- (void)_completeFetchWithAssetItems:(id)arg1;
- (void)_fetch;
- (void)_didPressImportButton;
- (void)_didPressBackButton;
- (_Bool)_isProcessing;
- (void)_updateTitleLabelForImportState:(_Bool)arg1;
- (void)_loadHeaderViewForContainerView:(id)arg1;
- (void)_actionBlockForAlertDialog:(id)arg1;
- (void)_loadCompleteStateViewsIfNeeded;
- (void)_loadImportStateViewsIfNeeded;
- (void)_hideLoadingView;
- (void)_showLoadingView;
- (void)dialogDidDismiss:(id)arg1;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)galleryImportCameraRollSectionHeaderDidPressToggleAllButton:(id)arg1;
- (void)_updateImportSnapsButton;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)disableLeftSwipe;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (id)pageViewName;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

