//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaProfilePresenting-Protocol.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCUnifiedProfilePresenterDelegate-Protocol.h"

@class NSString, SCImpalaShowProfilePresenter, SCOpenUnifiedProfileActionHandler, SCUnifiedProfilePresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging;

@interface SCImpalaProfilePresenter : NSObject <SCUnifiedProfilePresenterDelegate, SCOpenUnifiedProfileActionHandlerDelegate, SCImpalaProfilePresenting>
{
    long long _sourcePageType;
    SCImpalaShowProfilePresenter *_presenter;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    SCOpenUnifiedProfileActionHandler *_unifiedProfileActionHandler;
    SCUserSession *_userSession;
    UIViewController<SCPageNameLogging> *_viewController;
    id <NavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak UIViewController<SCPageNameLogging> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 userId:(id)arg3 deepLinkURL:(id)arg4;
- (void)didDismissUnifiedProfileWithUnifiedProfilePresenter:(id)arg1;
- (void)_presentUnifiedActionSheetForSnapchatter:(id)arg1;
- (void)_presentUnifiedProfileForSnapchatter:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)presentUserActionSheetWithUserId:(id)arg1;
- (void)presentUserProfileWithUserId:(id)arg1;
- (void)presentPublisherProfileWithProfileId:(id)arg1 showId:(id)arg2;
- (void)presentPublicProfileWithProfileId:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3 sourcePageType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

