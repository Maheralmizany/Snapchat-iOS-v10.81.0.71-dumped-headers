//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCEventAnnouncing-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCSectionBasedCollectionViewUpdater, SCUserSession, UICollectionView;
@protocol NavigationDelegate, SCActionHandling, SCSectionDataProviding;

@interface SCDiscoverFeedRelatedAccountsViewController : SIGSubscreenViewController <UICollectionViewDelegate, SCSectionBasedCollectionViewUpdaterDelegate, SCPageNameLogging, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    double _previousStatusBarYOffset;
    NSString *_compositeStoryIdentifier;
    NSString *_sessionId;
    UICollectionView *_contentCollectionView;
    id <NavigationDelegate> _navigationDelegate;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    id <SCSectionDataProviding> _dataProvider;
    id <SCActionHandling> _actionHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_logFeedPageOpenAndFeedPageView;
- (void)_updateImpressionItems;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (id)pageViewName;
- (id)loadScrollView;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_setupCollectionViewUpdater;
- (void)_resetStatusBar;
- (void)_statusBarLayoutIfNeeded;
- (void)_setHeaderUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 compositeStoryIdentifier:(id)arg2 navigationDelegate:(id)arg3 dataProvider:(id)arg4 actionHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

