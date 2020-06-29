//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCMiniProfileStoryIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCArroyoGroupFilterer, SCLegacySendToUIContainer, SCMTPointOfInterest, SCMapLoggerSession, SCMapStoryViewModel, SCMapTapToPlayPOIMediaFetcher, SCOperaPresenter, SCScopedAccess, SCSendToTransitionProvider, SCUserFeatureLauncher, SCUserSession;
@protocol SCMapPOIMiniProfileViewControllerDelegate;

@interface SCMapPOIMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileStoryIdentitySectionControllerDelegate, SCOperaPresenterDelegate, SCSendToDelegate, SCSendToNavigationDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate, SCPageNameLogging, SCLegacySendToWorkflowDelegate>
{
    SCMapTapToPlayPOIMediaFetcher *_mediaFetcher;
    SCOperaPresenter *_operaPresenter;
    SCUserSession *_userSession;
    SCMTPointOfInterest *_poi;
    SCMapStoryViewModel *_storyViewModel;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCMapLoggerSession *_mapLoggerSession;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    SCScopedAccess *_scopedMapSender;
    SCUserFeatureLauncher *_legacySendToLauncher;
    SCLegacySendToUIContainer *_uiContainer;
    id <SCMapPOIMiniProfileViewControllerDelegate> _delegate;
}

+ (void)_logURLShareForStoryType:(long long)arg1 mapSessionId:(unsigned long long)arg2;
@property(nonatomic) __weak id <SCMapPOIMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendToArroyoConversations:(id)arg1 additionalText:(id)arg2 platformAnalytics:(id)arg3 additionalTextPlatformAnalytics:(id)arg4;
- (void)_presentLeadEditor;
- (void)dismissSendViewController:(id)arg1;
- (void)_dismissMatchaSendTo;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (id)_sendPreviewViewModel;
- (id)_selectRecipientsConfiguration;
- (void)_shareWebURL;
- (void)_sendStory;
- (void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)_logMiniProfileView;
- (void)_beginStoryPlaybackWithThumbnailView:(id)arg1;
- (void)storyIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)attributedPage;
- (id)pageViewName;
- (void)_setupWithPOI:(id)arg1 mapZoomLevel:(double)arg2 mapLoggerSession:(id)arg3;
- (id)initWithUserSession:(id)arg1 POI:(id)arg2 mapZoomLevel:(double)arg3 mapLoggerSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

