//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfilePlayStoryActionHandlerDelegate-Protocol.h"
#import "SCUnifiedProfileStoriesPlaybackHandling-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCMyUnifiedProfileBitmojiActionHandler, SCMyUnifiedProfileBloopsIntroSectionActionHandler, SCMyUnifiedProfileEventsSectionActionHandler, SCMyUnifiedProfileFriendActionHandler, SCMyUnifiedProfileHeaderActionHandler, SCMyUnifiedProfileMapSectionActionHandler, SCMyUnifiedProfilePostRegistrationActionHandler, SCMyUnifiedProfilePresentActionMenuActionHandler, SCMyUnifiedProfileSnapProActionHandler, SCMyUnifiedProfileUsernameActionHandler, SCUnifiedProfileLoggingService, SCUnifiedProfileMyStoriesActionHandler, SCUnifiedProfilePlayStoryActionHandler, SCUnifiedProfileShowCameraActionHandler, SCUnifiedProfileStoryActionMenuActionHandler, SCUnifiedProfileViewController, SCUserSession;
@protocol SCStartChatDelegate;

@interface SCMyProfilePageActionHandler : NSObject <SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate, SCUnifiedProfilePlayStoryActionHandlerDelegate, SCTraceEnabled, SCActionHandling, SCUnifiedProfileStoriesPlaybackHandling, SCEventListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMyUnifiedProfileHeaderActionHandler *_headerActionHandler;
    SCMyUnifiedProfileBitmojiActionHandler *_bitmojiActionHandler;
    SCMyUnifiedProfileFriendActionHandler *_friendActionHandler;
    SCMyUnifiedProfileMapSectionActionHandler *_mapActionHandler;
    SCMyUnifiedProfilePostRegistrationActionHandler *_postRegistrationActionHandler;
    SCUnifiedProfileMyStoriesActionHandler *_storiesActionHandler;
    SCMyUnifiedProfileSnapProActionHandler *_snapProActionHandler;
    SCMyUnifiedProfileUsernameActionHandler *_usernameActionHandler;
    SCUnifiedProfilePlayStoryActionHandler *_playFriendStoryActionHandler;
    SCUnifiedProfileShowCameraActionHandler *_showCameraActionHandler;
    SCMyUnifiedProfileEventsSectionActionHandler *_eventsActionHandler;
    SCMyUnifiedProfileBloopsIntroSectionActionHandler *_bloopsIntroActionHandler;
    SCMyUnifiedProfilePresentActionMenuActionHandler *_presentActionMenuActionHandler;
    SCUnifiedProfileStoryActionMenuActionHandler *_storyActionMenuActionHandler;
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void).cxx_destruct;
- (void)updateOperaDismissBaseView:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_handleEditName;
- (void)unifiedProfilePlayStoryActionHandler:(id)arg1 willBeginDismissingStory:(id)arg2 storySectionIdentifier:(id)arg3;
- (void)willDismissViewControllerFromPresentActionMenuActionHandler:(id)arg1;
- (void)presentActionMenuActionHandler:(id)arg1 didPresentViewController:(id)arg2;
- (void)handleActionFromMyUnifiedProfilePresentActionMenuActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationDelegate:(id)arg1 startChatDelegate:(id)arg2 postRegistrationStateManager:(id)arg3 storiesDataSourceManager:(id)arg4 userSession:(id)arg5 bitmojiSectionloadingStateProvider:(id)arg6 onboardingControllerFactory:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
