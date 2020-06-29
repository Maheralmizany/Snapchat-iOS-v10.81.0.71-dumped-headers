//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCDiscoverFeedActionSheetActionHandler, SCEventListenerAnnouncer, SCQueuePerformer, SCUnifiedActionMenuPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCDiscoverFeedUnifiedProfileActionHandlerDelegate, SCPageNameLogging;

@interface SCDiscoverFeedUnifiedProfileActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCActionHandling, SCEventAnnouncing, SCEventListener>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCDiscoverFeedActionSheetActionHandler *_actionHandler;
    SCQueuePerformer *_performer;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    id <SCDiscoverFeedUnifiedProfileActionHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCDiscoverFeedUnifiedProfileActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_logRecommendedAccountsDedupeFp:(id)arg1 sectionKey:(id)arg2;
- (void)_logViewProfileForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2 baseView:(id)arg3 storyLoggingInfo:(id)arg4;
- (void)_logNotificationForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2 notificationStateNum:(id)arg3;
- (void)_logReportForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2 reasonId:(id)arg3;
- (void)_logHideForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2;
- (void)_logSendForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2;
- (void)_logSubscribeForStory:(id)arg1 sectionKey:(id)arg2 subscribeState:(unsigned long long)arg3 pageType:(long long)arg4;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)_handleSubscribeEventForStoryDedupeFp:(id)arg1 sectionKey:(id)arg2 subscribeStateNum:(id)arg3 story:(id)arg4 pageType:(long long)arg5;
- (unsigned long long)_notificationStateWithDiscoverFeedStory:(id)arg1;
- (unsigned long long)_subscribeStateWithDiscoverFeedStory:(id)arg1;
- (_Bool)_presentOurStoryActionSheetForStory:(id)arg1 sectionKey:(id)arg2 coverImage:(id)arg3;
- (_Bool)_presentPublicProfileActionSheetForBusinessProfileId:(id)arg1 discoverFeedStory:(id)arg2 sectionKey:(id)arg3;
- (_Bool)_presentPublicUserActionSheetForStory:(id)arg1 sectionKey:(id)arg2;
- (_Bool)_presentPublisherActionSheetForStory:(id)arg1 sectionKey:(id)arg2;
- (_Bool)_presentPromotedStoryActionSheetForStory:(id)arg1 sectionKey:(id)arg2 coverImage:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_dismissAnyUnifiedProfilePage;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

