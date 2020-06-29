//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class FriendStories, NSDictionary, NSString, SCArroyoGroupFilterer, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCDiscoverFeedStoriesEverywhereService, SCDiscoverFeedSubscribeRequestHandler, SCLegacySendToUIContainer, SCOperaViewController, SCScopedAccess, SCSendToTransitionProvider, SCStoryUsageLogger, SCUserSession, Story, UIViewController;
@protocol SCOperaPlaylistItemController, SCSendToScreen, SCStoriesOperaPageProvider;

@interface SCLegacyStoriesSharingSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCEventListener, SCLegacySendToWorkflowDelegate, SCOperaSession>
{
    Story *_story;
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
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    FriendStories *_friendStories;
    SCDiscoverFeedSubscribeRequestHandler *_subscribeRequestHandler;
    NSString *_operaPageID;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    NSString *_userDisplayName;
    SCScopedAccess *_scopedMapSender;
    SCScopedAccess *_legacySendToLauncher;
    SCLegacySendToUIContainer *_legacySendToUIContainer;
    NSString *_trackingId;
}

@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_logFriendStoryOptIn:(_Bool)arg1 interactionContext:(long long)arg2;
- (void)_shareLinkForUsername:(id)arg1 inCell:(id)arg2;
- (void)_didSendOperaEvent:(id)arg1;
- (void)_deletePressed;
- (void)showPhotoAccessDeniedAlertView;
- (void)_savePressed;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (id)_selectRecipientConfiguration;
- (void)_sendArroyoStoryShareToConversations:(id)arg1 additionalText:(id)arg2 platformAnalytics:(id)arg3 additionalTextPlatformAnalytics:(id)arg4;
- (void)_sendStoryShareToRecipients:(id)arg1 mischiefs:(id)arg2 additionalText:(id)arg3 destinationInfo:(id)arg4;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (_Bool)_shouldLogIdentifyingParametersForStory:(id)arg1;
- (void)_logContextMenuSendWithStory:(id)arg1 recipientCount:(unsigned long long)arg2;
- (void)_logContextMenuViewWithStory:(id)arg1;
- (void)_updateStoryScorePropertyWithSnapchatter:(id)arg1 friendScore:(id)arg2;
- (void)_fetchFriendScoreWithSnapchatter:(id)arg1;
- (void)_fetchFriendScore;
- (void)_fetchCreatorSettingSuccess:(id)arg1 posterUserId:(id)arg2;
- (void)_fetchCreatorSettingWithSnapchatter:(id)arg1;
- (void)_fetchCreatorSetting;
- (void)_launchLegacySendToScopeFromViewController:(id)arg1;
- (void)_presentSendViewControllerWithParentViewController:(id)arg1;
- (void)_logCheetahEventForActionType:(long long)arg1 story:(id)arg2 interactionContext:(long long)arg3;
- (void)_showOptInPrompt:(_Bool)arg1;
- (void)_handleNotificationForPublicUserWithCheetahStory:(id)arg1 optingIn:(_Bool)arg2 interactionContext:(long long)arg3;
- (void)_handleNotificationOptInWithContext:(id)arg1 params:(id)arg2 targetUserID:(id)arg3;
- (void)_subscribeFailure:(id)arg1 isSubscribed:(_Bool)arg2;
- (void)_subscribeSuccess:(id)arg1 isSubscribed:(_Bool)arg2;
- (void)_handleSubscribeButtonPressedWithContext:(id)arg1 params:(id)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (id)extraPropertiesForStory:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 operaViewController:(id)arg3 operaPageProvider:(id)arg4 operaPlaylistItemController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

