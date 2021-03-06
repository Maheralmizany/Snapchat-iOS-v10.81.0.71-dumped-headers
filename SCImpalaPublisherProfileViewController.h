//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImpalaFullScreenCardBaseViewController.h"

#import "SCImpalaViewControllerAsyncPreparing-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCImpalaPublisherProfileV2Context, SCImpalaPublisherProfileV2View, SCImpalaShowProfilePresenter, SCImpalaStoryPlayer, SCUserSession;
@protocol NavigationDelegate;

@interface SCImpalaPublisherProfileViewController : SCImpalaFullScreenCardBaseViewController <SCShakeToReportDelegate, SCImpalaViewControllerAsyncPreparing, SCPageNameLogging>
{
    long long _sourcePageType;
    long long _pageEntryType;
    SCImpalaPublisherProfileV2View *_profileView;
    SCImpalaPublisherProfileV2Context *_context;
    SCImpalaStoryPlayer *_storyPlayer;
    SCImpalaShowProfilePresenter *_presenter;
    _Bool _autoSubscribe;
    NSString *_businessProfileId;
    NSString *_showId;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) _Bool autoSubscribe; // @synthesize autoSubscribe=_autoSubscribe;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (id)defaultProjectNameV2;
- (_Bool)shouldBeginInteractiveDismissal;
- (void)_loadProfileViewIfNeeded;
- (void)presentOverViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pageViewName;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 userSession:(id)arg3 navigationDelegate:(id)arg4 sourcePageType:(long long)arg5 pageEntryType:(long long)arg6 autoSubscribe:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

