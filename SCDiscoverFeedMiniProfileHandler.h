//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaSubscribeActionHandler-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"
#import "SCSearchStoryShareSessionDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCStoryMiniProfileViewControllerDelegate-Protocol.h"

@class NSDictionary, NSSet, NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCDiscoverFeedStoriesEverywhereService, SCEventListenerAnnouncer, SCMiniProfileActionHandler, SCMiniProfileViewController, SCPromotedStoryShareSession, SCSearchStoryShareSession, SCStoryMiniProfileViewController, SCUserSession, UIImage, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCPerforming, SCStartChatDelegate;

@interface SCDiscoverFeedMiniProfileHandler : NSObject <SCMiniProfileViewControllerDelegate, SCSearchStoryShareSessionDelegate, SCStoryMiniProfileViewControllerDelegate, SCReportPageViewControllerDelegate, SCEventListener, SCSnapchattersDataRequestListener, SCActionHandling, SCOperaSubscribeActionHandler, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    id <SCPerforming> _performer;
    NSSet *_pendingSubscribeRequestIds;
    NSSet *_pendingHideRequestIds;
    NSDictionary *_startingSubscribeStateForStoryIds;
    SCStoryMiniProfileViewController *_activeStoryMiniProfileController;
    SCMiniProfileViewController *_activeMiniProfileController;
    UIViewController *_publicProfileViewController;
    SCSearchStoryShareSession *_storyShareSession;
    SCPromotedStoryShareSession *_promotedStoryShareSession;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCMiniProfileActionHandler *_miniProfileActionHandler;
    UIImage *_screenshot;
    SCEventListenerAnnouncer *_searchEventAnnouncer;
    _Bool startingIsSubscribedState;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_navigateToChatWithFriendUsername:(id)arg1 userId:(id)arg2 deepLinkURL:(id)arg3;
- (_Bool)_isPresentingSCMiniProfileViewControllerForPublicUserStory:(id)arg1;
- (_Bool)_isPresentingSCStoryMiniProfileViewControllerForStory:(id)arg1;
- (void)_didBlockFriend:(id)arg1;
- (unsigned long long)_subscribeStateForStory:(id)arg1;
- (void)_hideNearbyPromotedStory:(id)arg1;
- (void)_removeStoryFromDataStore:(id)arg1;
- (void)_logCheetahEventForActionType:(long long)arg1 story:(id)arg2 interactionContext:(long long)arg3;
- (void)_logCheetahEventForActionType:(long long)arg1 story:(id)arg2;
- (void)_updateActiveMiniProfileControllerWithSnapchatter:(id)arg1 optInState:(unsigned long long)arg2;
- (void)_handleCheetahHideResponse:(id)arg1 success:(_Bool)arg2;
- (void)_didReceiveCheetahHideResponse:(id)arg1;
- (void)_didSendCheetahHideRequest:(id)arg1;
- (void)_didReceiveCheetahSubscribeResponse:(id)arg1;
- (void)_didSendCheetahSubscribeRequest:(id)arg1;
- (void)_sendCheetahHideRequest:(id)arg1;
- (void)_sendHideUserRequestWithViewerUserID:(id)arg1 blockedUserID:(id)arg2;
- (void)_handleSubscribeResponseShouldSubscribe:(_Bool)arg1 success:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_sendNextSubscribeStateForStory:(id)arg1 storyMiniProfileViewController:(id)arg2 viewModel:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_updateSubscribeStateForPublicUser:(id)arg1 shouldSubscribe:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_sendCheetahSubscribeRequestForPublisher:(long long)arg1 shouldSubscribe:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)unsubscribeToPublicUser:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToPublicUser:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)unsubscribeToPublisher:(long long)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToPublisher:(long long)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)unsubscribeToCheetahStory:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToCheetahStory:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)storyMiniProfileViewControllerDismissedViewController:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionInfoStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionOptOut:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionOptInNotifications:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionHideStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1;
- (id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1;
- (void)miniProfileViewControllerWasDismissed:(id)arg1;
- (void)miniProfileViewControllerDidSelectFriendRelatedSnapchatter:(id)arg1 friend:(id)arg2;
- (void)miniProfileViewControllerDidSelectOptionOptOut:(id)arg1;
- (void)miniProfileViewControllerDidSelectOptionOptInNotifications:(id)arg1;
- (void)miniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (void)miniProfileViewControllerDidSelectOptionHideStory:(id)arg1;
- (void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2 relatedFriend:(id)arg3 actionType:(long long)arg4;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (id)_debuggingSectionControllersForCheetahStory:(id)arg1;
- (void)_addDebugControllersForMiniProfileBaseViewController:(id)arg1 cheetahStory:(id)arg2;
- (void)_updateCheetahStoriesInDataStore:(id)arg1;
- (void)_setSubscribeStateForStory:(id)arg1 subscribeState:(_Bool)arg2;
- (_Bool)presentCheetahStoryMiniProfileForActionModel:(id)arg1 fromSender:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_appDidEnterBackground:(id)arg1;
- (void)dismissAnyMiniProfile;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

