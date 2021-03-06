//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCFriendUnifiedActionMenuActionHandlerDelegate-Protocol.h"
#import "SCFriendUnifiedActionMenuSettingsActionHandlerDelegate-Protocol.h"
#import "SCFriendUnifiedProfileActionMenuPresentingActionHandlerDelegate-Protocol.h"
#import "SCProfileChatMediaScreenCaptureMonitorDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"
#import "SCUnifiedProfileDisplayContentOverProfileDelegate-Protocol.h"
#import "SCUnifiedProfileNavigateToChatActionHandlerDelegate-Protocol.h"
#import "SCUnifiedProfileScreenCaptureMonitorDelegate-Protocol.h"
#import "SCUnifiedProfileShowCameraActionHandlerDelegate-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSMutableArray, NSString, SCAddFriendToNewGroupActionHandler, SCEventListenerAnnouncer, SCFeatureSettingsService, SCFriendUnifiedActionMenuActionHandler, SCFriendUnifiedActionMenuSettingsActionHandler, SCFriendUnifiedProfileActionMenuPresentingActionHandler, SCFriendUnifiedProfileDataSource, SCFriendUnifiedProfilePromptSectionActionHandler, SCLazy, SCOpenUnifiedProfileActionHandler, SCProfileCharmsActionHandler, SCProfileChatMediaActionHandler, SCProfileChatMediaScreenCaptureMonitor, SCUnifiedActionMenuPresenter, SCUnifiedProfileChatAttachmentActionHandler, SCUnifiedProfileFriendshipFlashbackActionHandler, SCUnifiedProfileLoggingService, SCUnifiedProfileNavigateToChatActionHandler, SCUnifiedProfilePlayStoryActionHandler, SCUnifiedProfileScreenCaptureMonitor, SCUnifiedProfileShowCameraActionHandler, SCUnifiedProfileViewController, SCUserSession;
@protocol NavigationDelegate, SCFriendProfilePageActionHandlerDelegate, SCStartChatDelegate;

@interface SCFriendProfilePageActionHandler : NSObject <SCFriendUnifiedProfileActionMenuPresentingActionHandlerDelegate, SCUpdateListener, SCUnifiedProfileNavigateToChatActionHandlerDelegate, SCUnifiedProfileShowCameraActionHandlerDelegate, SCFriendUnifiedActionMenuSettingsActionHandlerDelegate, SCProfileChatMediaScreenCaptureMonitorDelegate, SCUnifiedProfileScreenCaptureMonitorDelegate, SCTraceEnabled, SCFriendUnifiedActionMenuActionHandlerDelegate, SCUnifiedActionMenuPresenterDelegate, SCActionHandling, SCEventAnnouncing, SCEventListener, SCUnifiedProfileDisplayContentOverProfileDelegate>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCUserSession *_userSession;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_customStoriesDataFetcher;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCProfileChatMediaScreenCaptureMonitor *_profileChatMediaCaptureMonitor;
    SCUnifiedProfileScreenCaptureMonitor *_profileCaptureMonitor;
    SCFriendUnifiedProfileActionMenuPresentingActionHandler *_actionMenuPresentingActionHandler;
    SCFriendUnifiedActionMenuSettingsActionHandler *_settingsActionHandler;
    SCUnifiedProfileNavigateToChatActionHandler *_navigateToChatActionHandler;
    SCUnifiedProfileShowCameraActionHandler *_showCameraActionHandler;
    SCUnifiedProfilePlayStoryActionHandler *_playStoryActionHandler;
    SCProfileChatMediaActionHandler *_savedInChatActionHandler;
    SCUnifiedProfileChatAttachmentActionHandler *_chatAttachmentActionHandler;
    SCProfileCharmsActionHandler *_charmsActionHandler;
    SCAddFriendToNewGroupActionHandler *_addFriendToNewGroupActionHandler;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    SCFriendUnifiedProfilePromptSectionActionHandler *_promptSectionActionHandler;
    SCUnifiedProfileFriendshipFlashbackActionHandler *_sagaActionHandler;
    NSMutableArray *_subActionHandlers;
    SCUnifiedActionMenuPresenter *_nestedActionSheetPresenter;
    SCFriendUnifiedActionMenuActionHandler *_nestedActionSheetActionHandler;
    SCFeatureSettingsService *_featureSettingsService;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    id <SCFriendProfilePageActionHandlerDelegate> _delegate;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SCFriendProfilePageActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void).cxx_destruct;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)dismissUnifiedActionMenuWithFriendUnifiedActionMenuActionHandler:(id)arg1 showAnimation:(_Bool)arg2;
- (void)contentDidTearDown;
- (void)contentWillDisplay;
- (void)didScreenrecord;
- (void)didScreenshot;
- (_Bool)profileChatMediaCaptureMonitorIsPresentingChatMedia:(id)arg1;
- (_Bool)profileChatMediaCaptureMonitorIsSavedAttachmentCellVisible:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)willClearFriendConversation:(id)arg1 presentingViewController:(id)arg2;
- (void)showCameraActionHandler:(id)arg1 showCameraForSnapchatter:(id)arg2;
- (_Bool)showCameraActionHandler:(id)arg1 canHandleShowCameraForSnapchatter:(id)arg2;
- (void)showCameraActionHandler:(id)arg1 showCameraForGroupId:(id)arg2;
- (_Bool)showCameraActionHandler:(id)arg1 canHandleShowCameraForGroupId:(id)arg2;
- (void)navigateToChatActionHandler:(id)arg1 navigatesToChatForUsername:(id)arg2 userId:(id)arg3 deepLinkURL:(id)arg4;
- (_Bool)navigateToChatActionHandler:(id)arg1 canNavigateToChatForUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)navigateToChatActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (_Bool)navigateToChatActionHandler:(id)arg1 canNavigateToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)handleActionFromUnifiedProfileActionMenuPresentingActionHandler:(id)arg1 actionModel:(id)arg2;
- (void)willDismissViewControllerFromPresentActionMenuActionHandler:(id)arg1;
- (void)presentActionMenuActionHandler:(id)arg1 didPresentViewController:(id)arg2;
- (void)_presentFriendNestedActionSheet;
- (id)_presentingViewController;
- (void)_setUpPlayStoryActionHandlerIfNecessary;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_addSubActionHandlerOnMainThread:(id)arg1;
- (void)addSubActionHandler:(id)arg1;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 friendScoreCoordinator:(id)arg2 snapchattersDataProvider:(id)arg3 snapchattersDataMutator:(id)arg4 tempSnapchatterDataCoordinator:(id)arg5 blockedSnapchatterFetcher:(id)arg6 userInfoProvider:(id)arg7 storiesMediaCoordinator:(id)arg8 customStoriesDataFetcher:(id)arg9 friendsFeedDataAccess:(id)arg10 conversationManager:(id)arg11 nativeFeedManager:(id)arg12 arroyoConversationIdsManager:(id)arg13 startChatDelegate:(id)arg14 navigationDelegate:(id)arg15 userSession:(id)arg16 profileChatMediaDataSource:(id)arg17 charmsDataCoordinator:(id)arg18 charmsViewingDataCoordinator:(id)arg19 charmsBlizzardLogger:(id)arg20 promptSectionDataCoordinator:(id)arg21 pinnedConversationsDataCoordinator:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

