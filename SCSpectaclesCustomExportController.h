//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesCustomExportViewControllerDelegate-Protocol.h"

@class NSArray, NSString, SCGalleryActivityController, SCGalleryUserContext, SCLagunaModule, SCPreviewConfiguration, SCSnapCommonLoggingParameters, SCUserSession, SnapVideoFilter, UIImage, UIViewController;
@protocol SCGalleryOperaMagicMomentCaching, SCSpectaclesCustomExportControllerDelegate;

@interface SCSpectaclesCustomExportController : NSObject <SCSpectaclesCustomExportViewControllerDelegate>
{
    SCLagunaModule *_lagunaModule;
    id <SCGalleryOperaMagicMomentCaching> _magicMomentCache;
    SCGalleryActivityController *_activityController;
    SCPreviewConfiguration *_configuration;
    SCSnapCommonLoggingParameters *_commonLoggingParams;
    SCUserSession *_userSession;
    SCGalleryUserContext *_userContext;
    UIImage *_editedImage;
    SnapVideoFilter *_editedVideoFilter;
    NSArray *_selectedItems;
    NSArray *_selectedSnaps;
    NSString *_contentId;
    UIViewController *_fromViewController;
    id <SCSpectaclesCustomExportControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSpectaclesCustomExportControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_providersFromExportViewController:(id)arg1 exportFormat:(long long)arg2 shouldMergeIntoSingleSnap:(_Bool)arg3 uploadToYouTube:(_Bool)arg4;
- (void)_activityControllerSucceeded:(_Bool)arg1 cancelled:(_Bool)arg2 uploadToYouTube:(_Bool)arg3 activityType:(id)arg4 viewController:(id)arg5;
- (void)_cleanupAndReportSuccessToDelegate:(_Bool)arg1 cancelled:(_Bool)arg2 alertDisplayed:(_Bool)arg3 activityType:(id)arg4;
- (void)customExportViewController:(id)arg1 didSaveWithExportFormat:(long long)arg2 shouldMergeSnapsToSingleSnap:(_Bool)arg3 uploadToYouTube:(_Bool)arg4;
- (void)customExportViewController:(id)arg1 didShareWithExportFormat:(long long)arg2 shouldMergeSnapsToSingleSnap:(_Bool)arg3 uploadToYouTube:(_Bool)arg4;
- (void)customExportViewControllerDidPressCancel:(id)arg1;
- (_Bool)_vr180ExportSupportedForSnaps:(id)arg1;
- (void)presentCustomExportFromViewController:(id)arg1 userSession:(id)arg2 userContext:(id)arg3 thumbnailLivePreview:(id)arg4 selectedItems:(id)arg5 selectedSnaps:(id)arg6 allSnaps:(id)arg7;
- (void)presentCustomExportFromViewController:(id)arg1 userSession:(id)arg2 userContext:(id)arg3 magicMomentCache:(id)arg4 thumbnailLivePreview:(id)arg5 entry:(id)arg6 latestAssociatedSnap:(id)arg7;
- (void)presentCustomExportFromViewController:(id)arg1 userSession:(id)arg2 thumbnailLivePreview:(id)arg3 snap:(id)arg4 editedImage:(id)arg5 configuration:(id)arg6 commonLoggingParams:(id)arg7;
- (void)presentCustomExportFromViewController:(id)arg1 userSession:(id)arg2 thumbnailLivePreview:(id)arg3 snap:(id)arg4 editedVideoFilter:(id)arg5 configuration:(id)arg6 commonLoggingParams:(id)arg7;
- (id)activityController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

