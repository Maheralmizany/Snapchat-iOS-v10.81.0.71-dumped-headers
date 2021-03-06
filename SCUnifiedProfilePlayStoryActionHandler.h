//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCContextOperaPlaylistPlugin, SCLazy, SCOperaPlaylistFeaturePlugin, SCOperaPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCStartChatDelegate, SCUnifiedProfileDisplayContentOverProfileDelegate, SCUnifiedProfilePlayStoryActionHandlerDelegate;

@interface SCUnifiedProfilePlayStoryActionHandler : NSObject <SCOperaPresenterDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCLazy *_legacyStoriesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    id <SCUnifiedProfileDisplayContentOverProfileDelegate> _displayContentDelegate;
    SCLazy *_storiesDataProvider;
    SCOperaPlaylistFeaturePlugin *_storiesPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    SCOperaPresenter *_storiesOperaPresenter;
    NSString *_currentStorySectionIdentifier;
    _Bool _shouldUpdateDismissBaseView;
    id <SCUnifiedProfilePlayStoryActionHandlerDelegate> _delegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCUnifiedProfilePlayStoryActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)_cleanUpOperaPresenter;
- (void)_setupStoriesOperaPresenterIfNeeded;
- (void)_setupContextPluginIfNeeded;
- (void)_playStoryWithStoriesSummaryInfo:(id)arg1 playbackDataProvider:(id)arg2 baseView:(id)arg3;
- (void)_playMyStoryFromBaseView:(id)arg1 storyType:(long long)arg2 storyIdentifier:(id)arg3 startingStoryId:(id)arg4 shouldUpdateDismissBaseView:(_Bool)arg5 rectangularAnimation:(_Bool)arg6 showManagementOnOpen:(_Bool)arg7 isForSingleSnap:(_Bool)arg8;
- (void)_playStoryForSnapchatter:(id)arg1 baseView:(id)arg2;
- (_Bool)isPresentingStory;
- (void)updateOperaDismissBaseView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 legacyStoriesPlaybackDataProvider:(id)arg2 storiesDataProvider:(id)arg3 storiesMediaCoordinator:(id)arg4 startChatDelegate:(id)arg5 navigationDelegate:(id)arg6 displayContentDelegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

