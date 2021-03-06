//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeleteStorySnapScopeDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSDictionary, NSString, SCArroyoGroupFilterer, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCDiscoverFeedStoriesEverywhereService, SCLegacySendToUIContainer, SCModalUIContainer, SCOperaViewController, SCScopedAccess, SCSendToTransitionProvider, SCStoriesOperaPlaybackSequence, SCStoriesSnapPlaybackMetadata, SCStoryUsageLogger, SCUserSession, UIViewController;
@protocol SCOperaPlaylistItemController, SCSendToScreen, SCStoriesOperaPageProvider;

@interface SCStoriesSharingSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCEventListener, SCLegacySendToWorkflowDelegate, SCDeleteStorySnapScopeDelegate, SCOperaSession>
{
    SCStoriesSnapPlaybackMetadata *_storySnap;
    NSString *_storySnapUserId;
    NSDictionary *_currentStoryScoreUpdateProperty;
    NSDictionary *_currentStoryActionMenuDoorbellUpdateProperty;
    SCUserSession *_userSession;
    long long _viewLocation;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCStoryUsageLogger *_usageLogger;
    SCOperaViewController *_operaViewController;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    id <SCOperaPlaylistItemController> _operaPlaylistItemController;
    UIViewController<SCSendToScreen> *_sendViewController;
    long long _entryEvent;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCStoriesOperaPlaybackSequence *_storiesPlaybackSequence;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    SCScopedAccess *_deleteStorySnapLauncher;
    SCModalUIContainer *_deleteStorySnapUIContainer;
    SCScopedAccess *_legacySendToLauncher;
    SCLegacySendToUIContainer *_legacySendToUIContainer;
    NSString *_trackingId;
}

@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_showOptInPrompt:(_Bool)arg1;
- (void)_shareLinkForUsername:(id)arg1 inCell:(id)arg2;
- (void)_didSendOperaEvent:(id)arg1;
- (id)_legacyStoryInCurrentSharingSession;
- (void)didCancelDeleteStorySnapWithDetachRequired:(_Bool)arg1;
- (void)_handleDidSelectDeleteStoryOnUIDetachedWithClientId:(id)arg1;
- (void)didSelectDeleteStorySnapWithClientId:(id)arg1 storyId:(id)arg2;
- (void)_deletePressed;
- (void)showPhotoAccessDeniedAlertView;
- (void)_saveStory:(_Bool)arg1 additionalText:(id)arg2 shouldShowToast:(_Bool)arg3;
- (void)_savePressed;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (id)_selectRecipientConfiguration;
- (void)_sendStorySnapPlaybackInfo:(id)arg1 toConversationIds:(id)arg2 additionalText:(id)arg3 platformAnalytics:(id)arg4 additionalTextPlatformAnalytics:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_sendStoryShareToRecipients:(id)arg1 mischiefs:(id)arg2 additionalText:(id)arg3;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (void)_updateStoryScorePropertyWithSnapchatter:(id)arg1 friendScore:(id)arg2;
- (void)_fetchFriendScoreWithSnapchatter:(id)arg1;
- (void)_fetchFriendScore;
- (void)_launchLegacySendToScopeFromViewController:(id)arg1;
- (void)_presentSendViewControllerWithParentViewController:(id)arg1;
- (void)_logFriendStoryOptIn:(_Bool)arg1 interactionContext:(long long)arg2;
- (void)_handleNotificationOptInWithContext:(id)arg1 params:(id)arg2 targetUserId:(id)arg3;
- (void)_fetchCreatorSettingSuccess:(id)arg1 posterUserId:(id)arg2;
- (void)_fetchCreatorSettingWithSnapchatter:(id)arg1;
- (void)_fetchCreatorSetting;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (id)extraPropertiesForStorySnap:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 operaViewController:(id)arg3 operaPageProvider:(id)arg4 operaPlaylistItemController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

