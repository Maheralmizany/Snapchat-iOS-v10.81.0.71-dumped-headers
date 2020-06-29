//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCAuxiliaryContentToastControllerDelegate-Protocol.h"
#import "SCFeatureAuxiliaryContentInPreview-Protocol.h"

@class NSMutableArray, NSString, SCAuxiliaryContentToastController, SCCloudSync, SCFeatureReference, SCFeatureSettingsService, SCNewportFiltersTooltipController, SCPreferences, SCPreviewConfiguration, SCPreviewView, SCSpectaclesAuxiliaryContentStore;
@protocol SCMemoriesMergedDataSource, SCPreviewFeatureParentViewControllerAccessing;

@interface SCFeatureAuxiliaryContentInPreviewImpl : SCFeature <SCAuxiliaryContentToastControllerDelegate, SCFeatureAuxiliaryContentInPreview>
{
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    _Bool _isSelectivelySyncing;
    _Bool _isLoadingPrimaryContent;
    NSMutableArray *_completionHandlers;
    _Bool _isLoadingSecondaryContent;
    NSMutableArray *_secondaryDepthCompletionHandlers;
    NSMutableArray *_secondaryDepthProgressHandlers;
    SCCloudSync *_cloudSync;
    SCPreferences *_userPreferences;
    id <SCMemoriesMergedDataSource> _memoriesMergedDataSource;
    SCPreviewConfiguration *_configuration;
    SCFeatureReference *_swipeFilters;
    SCFeatureReference *_magicMomentInPreview;
    SCPreviewView *_previewView;
    SCFeatureSettingsService *_featureSettingsService;
    SCNewportFiltersTooltipController *_tooltipController;
    SCAuxiliaryContentToastController *_toastController;
    unsigned long long _availability;
    _Bool _userAuthorizedSyncing;
    id <SCPreviewFeatureParentViewControllerAccessing> _parentViewControllerDelegate;
}

@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> parentViewControllerDelegate; // @synthesize parentViewControllerDelegate=_parentViewControllerDelegate;
- (void).cxx_destruct;
- (_Bool)isValidMediaType;
- (id)snapWithMissingMetadata;
- (id)entry;
- (_Bool)isFailedEntry;
- (void)_cloudSync:(id)arg1 didUpdateProgressForEntryId:(id)arg2 progress:(float)arg3;
- (void)cloudSync:(id)arg1 didUpdateProgressForEntryId:(id)arg2 progress:(float)arg3;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (_Bool)showNotificationTappedAlertForPreviewIfNeeded:(id)arg1;
- (void)hideTooltip;
- (void)_showTooltipIfNeeded;
- (void)handleMagicMomentUpdate;
- (void)_showToastAlert;
- (void)auxiliaryContentToastControllerDidTapOnToast:(id)arg1;
- (void)showFinishedToastAndTooltipIfNeeded;
- (void)reloadFilters;
- (void)hideFilterOverlayView;
@property(readonly, nonatomic) long long promptFilterType;
- (void)prepareSecondaryDepthWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)awaitSecondaryDepthWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)areBothDepthsAvailable;
- (void)backUpNow;
- (void)loadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)deactivate;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 featureSettingsService:(id)arg3 swipeFilters:(id)arg4 magicMoment:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

