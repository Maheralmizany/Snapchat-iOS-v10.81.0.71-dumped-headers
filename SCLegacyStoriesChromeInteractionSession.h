//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCPublicContentMiniProfileControllerDelegate-Protocol.h"
#import "SCSearchStoryShareSessionDelegate-Protocol.h"
#import "SCStoryMiniProfileViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCDiscoverFeedMiniProfileHandler, SCDiscoverFeedSubscribeRequestHandler, SCDisposableObserverLifecycle, SCLazy, SCMiniProfileActionHandler, SCObservable, SCOpenUnifiedProfileActionHandler, SCOperaViewController, SCPublicContentMiniProfileController, SCSearchFriendProvider, SCSearchStoryShareSession, SCStoryMiniProfileViewController, SCUserSession, Story;
@protocol NavigationDelegate, SCStartChatDelegate;

@interface SCLegacyStoriesChromeInteractionSession : NSObject <SCPublicContentMiniProfileControllerDelegate, SCStoryMiniProfileViewControllerDelegate, SCSearchStoryShareSessionDelegate, SCEventListener, SCOpenUnifiedProfileActionHandlerDelegate, SCOperaSession>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCOperaViewController *_operaVC;
    id <SCStartChatDelegate> _startChatDelegate;
    SCPublicContentMiniProfileController *_publicContentMiniProfileController;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    Story *_currentStory;
    _Bool _interactingFromContextMenu;
    SCSearchFriendProvider *_friendProvider;
    SCMiniProfileActionHandler *_miniProfileActionHandler;
    SCStoryMiniProfileViewController *_storyMiniProfileViewController;
    SCSearchStoryShareSession *_storyShareSession;
    SCDiscoverFeedSubscribeRequestHandler *_subscribeRequestHandler;
    SCLazy *_usernameToSnapchatterFether;
    SCLazy *_snapchatterFetcher;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    SCDisposableObserverLifecycle *_contextCTADataObservableLifecycle;
    NSMutableDictionary *_clientIdToContextCTAData;
    SCObservable *_contextCTADataObservable;
}

@property(retain, nonatomic) SCObservable *contextCTADataObservable; // @synthesize contextCTADataObservable=_contextCTADataObservable;
- (void).cxx_destruct;
- (void)openUnifiedProfileActionHandlerDidDismissUnifiedProfile:(id)arg1;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 userId:(id)arg3 deepLinkURL:(id)arg4;
- (void)_miniProfileActionHandler:(id)arg1 didUpdateSubscribeState:(unsigned long long)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1;
- (void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1;
- (long long)_getAddSourceType;
- (void)didDismissMiniProfile;
- (void)didDismissPublicContentMiniProfile;
- (void)publicContentMiniProfile:(id)arg1 didTapButtonWithEntry:(id)arg2;
- (void)_createOpenUnifiedProfileActionHandlerIfNeeded;
- (void)_showUnifiedProfileForSnapchatter:(id)arg1;
- (void)_handleAddToAppStoryWithAppId:(id)arg1;
- (void)_presentPublicProfileForStory:(id)arg1;
- (void)_displayContentMiniProfile:(id)arg1;
- (void)_displayUserMiniProfileWithSnapchatter:(id)arg1 friendStories:(id)arg2;
- (void)_showMiniProfileWithFriendStories:(id)arg1;
- (void)_prepareForMiniProfilePresentation;
- (void)_showMiniProfileForDynamicStory:(id)arg1;
- (void)_handleSubscribingActionFailure:(_Bool)arg1 cheetahStory:(id)arg2;
- (void)_handleSubscribingActionSuccess:(_Bool)arg1 cheetahStory:(id)arg2;
- (void)_handleSubscribeButtonPressedWithContext:(id)arg1 params:(id)arg2;
- (void)_openCreatorMiniProfileForFriendStories:(id)arg1;
- (void)_openMiniProfileForFriendStories:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)_updateWithNewContextCTAData:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 operaViewController:(id)arg3 startChatDelegate:(id)arg4 miniProfileHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

